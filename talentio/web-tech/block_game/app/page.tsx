"use client";
import { useSession } from "next-auth/react";
import Image from "next/image";
import Link from "next/link";

export default function Home() {
  const { status, data: session } = useSession();
  // if (status === "loading") return null;

  return (
    <main>
      <Link
        href="/user"
        className="p-2 m-5 cursor-pointer font-bold bg-gray-300"
      >
        User
      </Link>
      <div className="m-10">
        {status === "loading" && <div>Loading User Details...</div>}
        {status === "authenticated" && (
          <div>
            <Link
              href="/api/auth/signout"
              className="border border-solid p-2  bg-green-300 border-r-4 "
            >
              Sign out
            </Link>

            <pre className="m-5">
              Name : {session.user!.name}
              <br></br>
              Email-id : {session.user!.email}
            </pre>
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
