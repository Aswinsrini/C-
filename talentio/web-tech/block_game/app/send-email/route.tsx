import Template from "@/emails";
import { Resend } from "resend";

const resend = new Resend(process.env.RESEND_API_KEY);
export async function POST() {
  await resend.emails.send({
    from: "testing.com",
    to: "aswins.21cse@kongu.edu",
    subject: "Testing Next app",
    react: <Template name="aswin" />,
  });
}
