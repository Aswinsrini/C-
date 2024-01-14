"use client";
import { SessionProvider } from "next-auth/react";
interface Render {
  children: React.ReactNode;
}
const AuthProvider = ({ children }: Render) => {
  return <SessionProvider>{children}</SessionProvider>;
};

export default AuthProvider;
