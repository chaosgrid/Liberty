#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3de0);
CLANG_FORWARD_PROC_SYMBOL(public_66f4380);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66f380b _public_66f380b
#define public_66f3b11 _public_66f3b11
#define public_66f3b20 _public_66f3b20

PROC_DECLARE(0x66f37d0, internal_66f37d0, public_66f37d0);
extern "C" NAKED register_t __cdecl internal_66f37d0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6705f64]
        mov al, 1
        test al, cl
        jne public_66f380b
/*FIXUP push offset _public_66f3cd0 @0x66f37dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66f37e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 0xA
        mov dl, cl
        push 0x4C
        or dl, al
/*FIXUP push offset public_6705f80 @0x66f37ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6705f80
        mov byte ptr ds : [public_6705f64], dl
        call public_6700820
/*FIXUP push offset _public_66f4380 @0x66f37fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f4380
        call public_6700912
        add esp, 4
        public_66f380b : nop
        mov eax, dword ptr ds : [public_6705f90]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_66f3b11
        push esi
/*FIXUP push offset public_67014c0 @0x66f381c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014c0
        mov esi, offset public_67016d4
        push 4
        mov ecx, offset public_6705f90
        mov dword ptr ds : [public_6705f80], edi
        mov dword ptr ds : [public_6705f84], offset public_67016d0
        mov dword ptr ds : [public_6705f88], offset public_67016c0
        mov dword ptr ds : [public_6705f8c], esi
        call public_66f3b30
/*FIXUP push offset public_67014b0 @0x66f3852*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014b0
        push 4
        mov ecx, offset public_6705fa4
        call public_66f3b30
/*FIXUP push offset public_67014c0 @0x66f3863*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014c0
        push 4
        mov ecx, offset public_6705fb8
        call public_66f3b30
/*FIXUP push offset public_67014c0 @0x66f3874*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014c0
        push 3
        mov ecx, offset public_6705fdc
        mov dword ptr ds : [public_6705fcc], edi
        mov dword ptr ds : [public_6705fd0], offset public_67016bc
        mov dword ptr ds : [public_6705fd4], offset public_67016ac
        mov dword ptr ds : [public_6705fd8], esi
        call public_66f3b30
/*FIXUP push offset public_67014b0 @0x66f38a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014b0
        push 3
        mov ecx, offset public_6705ff0
        call public_66f3b30
/*FIXUP push offset public_67014c0 @0x66f38b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014c0
        push 3
        mov ecx, offset public_6706004
        call public_66f3b30
/*FIXUP push offset public_67014b0 @0x66f38c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014b0
        push 3
        mov ecx, offset public_6706028
        mov dword ptr ds : [public_6706018], edi
        mov dword ptr ds : [public_670601c], offset public_67016a8
        mov dword ptr ds : [public_6706020], offset public_6701698
        mov dword ptr ds : [public_6706024], esi
        call public_66f3b30
/*FIXUP push offset public_67014b0 @0x66f38f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014b0
        push 3
        mov ecx, offset public_670603c
        call public_66f3b30
/*FIXUP push offset public_67014c0 @0x66f3909*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014c0
        push 3
        mov ecx, offset public_6706050
        call public_66f3b30
/*FIXUP push offset public_67014b0 @0x66f391a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014b0
        push 3
        mov ecx, offset public_6706074
        mov dword ptr ds : [public_6706064], edi
        mov dword ptr ds : [public_6706068], offset public_6701694
        mov dword ptr ds : [public_670606c], offset public_6701684
        mov dword ptr ds : [public_6706070], esi
        call public_66f3b30
/*FIXUP push offset public_67014b0 @0x66f394b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014b0
        push 3
        mov ecx, offset public_6706088
        call public_66f3b30
/*FIXUP push offset public_67014c0 @0x66f395c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014c0
        push 3
        mov ecx, offset public_670609c
        call public_66f3b30
/*FIXUP push offset public_67014b0 @0x66f396d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014b0
        push 2
        mov ecx, offset public_67060c0
        mov dword ptr ds : [public_67060b0], edi
        mov dword ptr ds : [public_67060b4], offset public_6701680
        mov dword ptr ds : [public_67060b8], offset public_6701670
        mov dword ptr ds : [public_67060bc], esi
        call public_66f3b30
/*FIXUP push offset public_67014b0 @0x66f399e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014b0
        push 2
        mov ecx, offset public_67060d4
        call public_66f3b30
/*FIXUP push offset public_67014c0 @0x66f39af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014c0
        push 2
        mov ecx, offset public_67060e8
        call public_66f3b30
/*FIXUP push offset public_67014c0 @0x66f39c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014c0
        push 2
        mov ecx, offset public_670610c
        mov dword ptr ds : [public_67060fc], edi
        mov dword ptr ds : [public_6706100], offset public_670166c
        mov dword ptr ds : [public_6706104], offset public_6701660
        mov dword ptr ds : [public_6706108], esi
        call public_66f3b30
/*FIXUP push offset public_67014b0 @0x66f39f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014b0
        push 2
        mov ecx, offset public_6706120
        call public_66f3b30
/*FIXUP push offset public_67014c0 @0x66f3a02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67014c0
        push 2
        mov ecx, offset public_6706134
        call public_66f3b30
/*FIXUP push offset public_67013d4 @0x66f3a13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013d4
        push 7
        mov ecx, offset public_6706158
        mov dword ptr ds : [public_6706148], edi
        mov dword ptr ds : [public_670614c], offset public_6701658
        mov dword ptr ds : [public_6706150], offset public_6701648
        mov dword ptr ds : [public_6706154], esi
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_670616c
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6706180
        call public_66f3b30
        push 4
        push 8
        mov ecx, offset public_67061a4
        mov dword ptr ds : [public_6706194], edi
        mov dword ptr ds : [public_6706198], offset public_670163c
        mov dword ptr ds : [public_670619c], offset public_6701628
        mov dword ptr ds : [public_67061a0], esi
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_67061b8
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_67061cc
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_67061f0
        mov dword ptr ds : [public_67061e0], 0x20000
        mov dword ptr ds : [public_67061e4], offset public_670163c
        mov dword ptr ds : [public_67061e8], offset public_6701610
        mov dword ptr ds : [public_67061ec], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6706204
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6706218
        call public_66f3b30
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_67015f8 @0x66f3af5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67015f8
/*FIXUP push offset public_670163c @0x66f3afa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670163c
        push 0x40000
        push 9
        mov ecx, offset public_670622c
        call public_66f3de0
        pop esi
        public_66f3b11 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        pop edi
        je public_66f3b20
        mov dword ptr ds : [eax], offset public_6705f80
        public_66f3b20 : nop
        mov eax, 0xA
        ret 4
        UNREACHABLE_TRAP(0x66f37d0)
    }
}

#undef public_66f380b
#undef public_66f3b11
#undef public_66f3b20
