export { default } from "next-auth/middleware";

const config = {
  matcher: ["/user"],
}; //next-auth

// export { default } from "@clerk/nextjs";

// export const config = {
//   matcher: ["/((?!.+\\.[\\w]+$|_next).*)", "/", "/(api|trpc)(.*)"],
// };
