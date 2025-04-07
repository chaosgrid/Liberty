#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3de0);
CLANG_FORWARD_PROC_SYMBOL(public_66fa040);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66f98cb _public_66f98cb
#define public_66f9bd1 _public_66f9bd1
#define public_66f9be0 _public_66f9be0

PROC_DECLARE(0x66f9890, internal_66f9890, public_66f9890);
extern "C" NAKED register_t __cdecl internal_66f9890()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6704a2c]
        mov al, 1
        test al, cl
        jne public_66f98cb
/*FIXUP push offset _public_66f3cd0 @0x66f989c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66f98a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 0xA
        mov dl, cl
        push 0x4C
        or dl, al
/*FIXUP push offset public_6704a40 @0x66f98ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704a40
        mov byte ptr ds : [public_6704a2c], dl
        call public_6700820
/*FIXUP push offset _public_66fa040 @0x66f98be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66fa040
        call public_6700912
        add esp, 4
        public_66f98cb : nop
        mov eax, dword ptr ds : [public_6704a50]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_66f9bd1
        push esi
/*FIXUP push offset public_67022e4 @0x66f98dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022e4
        mov esi, offset public_67016d4
        push 3
        mov ecx, offset public_6704a50
        mov dword ptr ds : [public_6704a40], edi
        mov dword ptr ds : [public_6704a44], offset public_67016d0
        mov dword ptr ds : [public_6704a48], offset public_67016c0
        mov dword ptr ds : [public_6704a4c], esi
        call public_66f3b30
/*FIXUP push offset public_67022d4 @0x66f9912*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022d4
        push 3
        mov ecx, offset public_6704a64
        call public_66f3b30
/*FIXUP push offset public_67022e4 @0x66f9923*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022e4
        push 3
        mov ecx, offset public_6704a78
        call public_66f3b30
/*FIXUP push offset public_67022e4 @0x66f9934*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022e4
        push 3
        mov ecx, offset public_6704a9c
        mov dword ptr ds : [public_6704a8c], edi
        mov dword ptr ds : [public_6704a90], offset public_67016bc
        mov dword ptr ds : [public_6704a94], offset public_67016ac
        mov dword ptr ds : [public_6704a98], esi
        call public_66f3b30
/*FIXUP push offset public_67022d4 @0x66f9965*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022d4
        push 3
        mov ecx, offset public_6704ab0
        call public_66f3b30
/*FIXUP push offset public_67022e4 @0x66f9976*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022e4
        push 3
        mov ecx, offset public_6704ac4
        call public_66f3b30
/*FIXUP push offset public_67022d4 @0x66f9987*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022d4
        push 3
        mov ecx, offset public_6704ae8
        mov dword ptr ds : [public_6704ad8], edi
        mov dword ptr ds : [public_6704adc], offset public_67016a8
        mov dword ptr ds : [public_6704ae0], offset public_6701698
        mov dword ptr ds : [public_6704ae4], esi
        call public_66f3b30
/*FIXUP push offset public_67022d4 @0x66f99b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022d4
        push 3
        mov ecx, offset public_6704afc
        call public_66f3b30
/*FIXUP push offset public_67022e4 @0x66f99c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022e4
        push 3
        mov ecx, offset public_6704b10
        call public_66f3b30
/*FIXUP push offset public_67022d4 @0x66f99da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022d4
        push 3
        mov ecx, offset public_6704b34
        mov dword ptr ds : [public_6704b24], edi
        mov dword ptr ds : [public_6704b28], offset public_6701694
        mov dword ptr ds : [public_6704b2c], offset public_6701684
        mov dword ptr ds : [public_6704b30], esi
        call public_66f3b30
/*FIXUP push offset public_67022d4 @0x66f9a0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022d4
        push 3
        mov ecx, offset public_6704b48
        call public_66f3b30
/*FIXUP push offset public_67022e4 @0x66f9a1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022e4
        push 3
        mov ecx, offset public_6704b5c
        call public_66f3b30
/*FIXUP push offset public_67022d4 @0x66f9a2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022d4
        push 2
        mov ecx, offset public_6704b80
        mov dword ptr ds : [public_6704b70], edi
        mov dword ptr ds : [public_6704b74], offset public_6701680
        mov dword ptr ds : [public_6704b78], offset public_6701670
        mov dword ptr ds : [public_6704b7c], esi
        call public_66f3b30
/*FIXUP push offset public_67022d4 @0x66f9a5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022d4
        push 2
        mov ecx, offset public_6704b94
        call public_66f3b30
/*FIXUP push offset public_67022e4 @0x66f9a6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022e4
        push 2
        mov ecx, offset public_6704ba8
        call public_66f3b30
/*FIXUP push offset public_67022e4 @0x66f9a80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022e4
        push 2
        mov ecx, offset public_6704bcc
        mov dword ptr ds : [public_6704bbc], edi
        mov dword ptr ds : [public_6704bc0], offset public_670166c
        mov dword ptr ds : [public_6704bc4], offset public_6701660
        mov dword ptr ds : [public_6704bc8], esi
        call public_66f3b30
/*FIXUP push offset public_67022d4 @0x66f9ab1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022d4
        push 2
        mov ecx, offset public_6704be0
        call public_66f3b30
/*FIXUP push offset public_67022e4 @0x66f9ac2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67022e4
        push 2
        mov ecx, offset public_6704bf4
        call public_66f3b30
/*FIXUP push offset public_67013d4 @0x66f9ad3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013d4
        push 7
        mov ecx, offset public_6704c18
        mov dword ptr ds : [public_6704c08], edi
        mov dword ptr ds : [public_6704c0c], offset public_6701658
        mov dword ptr ds : [public_6704c10], offset public_6701648
        mov dword ptr ds : [public_6704c14], esi
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6704c2c
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6704c40
        call public_66f3b30
        push 4
        push 8
        mov ecx, offset public_6704c64
        mov dword ptr ds : [public_6704c54], edi
        mov dword ptr ds : [public_6704c58], offset public_670163c
        mov dword ptr ds : [public_6704c5c], offset public_6701628
        mov dword ptr ds : [public_6704c60], esi
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6704c78
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6704c8c
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704cb0
        mov dword ptr ds : [public_6704ca0], 0x20000
        mov dword ptr ds : [public_6704ca4], offset public_670163c
        mov dword ptr ds : [public_6704ca8], offset public_6701610
        mov dword ptr ds : [public_6704cac], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704cc4
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704cd8
        call public_66f3b30
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_67015f8 @0x66f9bb5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67015f8
/*FIXUP push offset public_670163c @0x66f9bba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670163c
        push 0x40000
        push 9
        mov ecx, offset public_6704cec
        call public_66f3de0
        pop esi
        public_66f9bd1 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        pop edi
        je public_66f9be0
        mov dword ptr ds : [eax], offset public_6704a40
        public_66f9be0 : nop
        mov eax, 0xA
        ret 4
        UNREACHABLE_TRAP(0x66f9890)
    }
}

#undef public_66f98cb
#undef public_66f9bd1
#undef public_66f9be0
