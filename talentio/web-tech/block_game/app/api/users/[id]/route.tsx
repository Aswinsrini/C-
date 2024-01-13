import { NextRequest, NextResponse } from "next/server";
import schema from "../schema";
import prisma from "@/prisma/client";

const dict = [
  {
    id: 1,
    name: "aswin",
  },
  {
    id: 2,
    name: "sanjey",
  },
  {
    id: 3,
    name: "mosh",
  },
];

export async function GET(
  request: NextRequest,
  { params }: { params: { id: string } }
) {
  const user = await prisma.user.findUnique({
    where: {
      id: parseInt(params.id),
    },
  });
  if (!user) return NextResponse.json("The User not found!");
  return NextResponse.json(user);
}

//PUT - to update the user
//PATCH - to update the two or more objects
export async function PUT(
  request: NextRequest,
  { params }: { params: { id: number } }
) {
  const res = await request.json();
  const validation = schema.safeParse(res);
  if (!validation.success) {
    return NextResponse.json(validation.error.errors);
  }
  return NextResponse.json(dict);
}
