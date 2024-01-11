import { NextRequest, NextResponse } from "next/server";
import schema from "../schema";
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

export function GET(
  request: NextRequest,
  { params }: { params: { id: number } }
) {
  if (params.id > 10)
    return NextResponse.json({ error: "User Not Found!" }, { status: 404 });
  //   console.log(request);
  return NextResponse.json(dict.filter((d) => d.id == params.id));
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
