import {
  Html,
  Body,
  Container,
  Text,
  Link,
  Tailwind,
  Preview,
} from "@react-email/components";

const Template = ({ name }: { name: string }) => {
  return (
    <Html>
      <Preview>Welcom aborad</Preview>
      <Tailwind>
        <Body className="bg-white">
          <Container>
            <Text className="text-3xl font-bold">hello {name}</Text>
            <Link href="aswins.dev">aswins.dev</Link>
          </Container>
        </Body>
      </Tailwind>
    </Html>
  );
};

export default Template;
