import { NextRequest, NextResponse } from "next/server";

export function GET() {
  return NextResponse.json("Hello world!");
}

export async function POST(request: NextRequest) {
  const res = await request.json();

  return NextResponse.json({ id: 1, name: res.name });
}
