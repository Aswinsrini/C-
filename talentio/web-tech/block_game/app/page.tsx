"use client";
import { useSession } from "next-auth/react";
import Image from "next/image";
import Link from "next/link";

export default function Home() {
  const { status, data: session } = useSession();
  // if (status === "loading") return null;

  return (
    <main>
      <div className="m-10">
        {status === "loading" && <div>Loading User Details...</div>}
        {status === "authenticated" && (
          <div>
            <pre>
              Name : {session.user!.name}
              <br></br>
              Email-id : {session.user!.email}
            </pre>
            {/* <Image
              src={session.user!.image as string}
              height={50}
              width={50}
              alt="User-Image"
            /> */}
          </div>
        )}
        {status === "unauthenticated" && (
          <Link
            href="/api/auth/signin"
            className="border border-solid bg-blue-400 p-5 border-r-2"
          >
            Sign with Google
          </Link>
        )}
      </div>
    </main>
  );
}
