import { NextRequest, NextResponse } from "next/server";
import prisma from "@/prisma/client";

export async function GET() {
  const users = await prisma.user.findMany();
  return NextResponse.json(users);
}

export async function POST(request: NextRequest) {
  const res = await request.json();

  return NextResponse.json({ id: 1, name: res.name });
}
