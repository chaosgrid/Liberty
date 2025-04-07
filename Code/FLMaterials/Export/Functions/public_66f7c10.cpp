#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3de0);
CLANG_FORWARD_PROC_SYMBOL(public_66f81a0);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66f7c4b _public_66f7c4b
#define public_66f7f51 _public_66f7f51
#define public_66f7f60 _public_66f7f60

PROC_DECLARE(0x66f7c10, internal_66f7c10, public_66f7c10);
extern "C" NAKED register_t __cdecl internal_66f7c10()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6704fec]
        mov al, 1
        test al, cl
        jne public_66f7c4b
/*FIXUP push offset _public_66f3cd0 @0x66f7c1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66f7c21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 0xA
        mov dl, cl
        push 0x4C
        or dl, al
/*FIXUP push offset public_6705000 @0x66f7c2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6705000
        mov byte ptr ds : [public_6704fec], dl
        call public_6700820
/*FIXUP push offset _public_66f81a0 @0x66f7c3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f81a0
        call public_6700912
        add esp, 4
        public_66f7c4b : nop
        mov eax, dword ptr ds : [public_6705010]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_66f7f51
        push esi
/*FIXUP push offset public_6701ec4 @0x66f7c5c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ec4
        mov esi, offset public_67016d4
        push 3
        mov ecx, offset public_6705010
        mov dword ptr ds : [public_6705000], edi
        mov dword ptr ds : [public_6705004], offset public_67016d0
        mov dword ptr ds : [public_6705008], offset public_67016c0
        mov dword ptr ds : [public_670500c], esi
        call public_66f3b30
/*FIXUP push offset public_6701eb4 @0x66f7c92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701eb4
        push 3
        mov ecx, offset public_6705024
        call public_66f3b30
/*FIXUP push offset public_6701ec4 @0x66f7ca3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ec4
        push 3
        mov ecx, offset public_6705038
        call public_66f3b30
/*FIXUP push offset public_6701ec4 @0x66f7cb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ec4
        push 3
        mov ecx, offset public_670505c
        mov dword ptr ds : [public_670504c], edi
        mov dword ptr ds : [public_6705050], offset public_67016bc
        mov dword ptr ds : [public_6705054], offset public_67016ac
        mov dword ptr ds : [public_6705058], esi
        call public_66f3b30
/*FIXUP push offset public_6701eb4 @0x66f7ce5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701eb4
        push 3
        mov ecx, offset public_6705070
        call public_66f3b30
/*FIXUP push offset public_6701ec4 @0x66f7cf6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ec4
        push 3
        mov ecx, offset public_6705084
        call public_66f3b30
/*FIXUP push offset public_6701eb4 @0x66f7d07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701eb4
        push 3
        mov ecx, offset public_67050a8
        mov dword ptr ds : [public_6705098], edi
        mov dword ptr ds : [public_670509c], offset public_67016a8
        mov dword ptr ds : [public_67050a0], offset public_6701698
        mov dword ptr ds : [public_67050a4], esi
        call public_66f3b30
/*FIXUP push offset public_6701eb4 @0x66f7d38*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701eb4
        push 3
        mov ecx, offset public_67050bc
        call public_66f3b30
/*FIXUP push offset public_6701ec4 @0x66f7d49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ec4
        push 3
        mov ecx, offset public_67050d0
        call public_66f3b30
/*FIXUP push offset public_6701eb4 @0x66f7d5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701eb4
        push 3
        mov ecx, offset public_67050f4
        mov dword ptr ds : [public_67050e4], edi
        mov dword ptr ds : [public_67050e8], offset public_6701694
        mov dword ptr ds : [public_67050ec], offset public_6701684
        mov dword ptr ds : [public_67050f0], esi
        call public_66f3b30
/*FIXUP push offset public_6701eb4 @0x66f7d8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701eb4
        push 3
        mov ecx, offset public_6705108
        call public_66f3b30
/*FIXUP push offset public_6701ec4 @0x66f7d9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ec4
        push 3
        mov ecx, offset public_670511c
        call public_66f3b30
/*FIXUP push offset public_6701eb4 @0x66f7dad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701eb4
        push 2
        mov ecx, offset public_6705140
        mov dword ptr ds : [public_6705130], edi
        mov dword ptr ds : [public_6705134], offset public_6701680
        mov dword ptr ds : [public_6705138], offset public_6701670
        mov dword ptr ds : [public_670513c], esi
        call public_66f3b30
/*FIXUP push offset public_6701eb4 @0x66f7dde*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701eb4
        push 2
        mov ecx, offset public_6705154
        call public_66f3b30
/*FIXUP push offset public_6701ec4 @0x66f7def*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ec4
        push 2
        mov ecx, offset public_6705168
        call public_66f3b30
/*FIXUP push offset public_6701ec4 @0x66f7e00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ec4
        push 2
        mov ecx, offset public_670518c
        mov dword ptr ds : [public_670517c], edi
        mov dword ptr ds : [public_6705180], offset public_670166c
        mov dword ptr ds : [public_6705184], offset public_6701660
        mov dword ptr ds : [public_6705188], esi
        call public_66f3b30
/*FIXUP push offset public_6701eb4 @0x66f7e31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701eb4
        push 2
        mov ecx, offset public_67051a0
        call public_66f3b30
/*FIXUP push offset public_6701ec4 @0x66f7e42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ec4
        push 2
        mov ecx, offset public_67051b4
        call public_66f3b30
/*FIXUP push offset public_67013d4 @0x66f7e53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013d4
        push 7
        mov ecx, offset public_67051d8
        mov dword ptr ds : [public_67051c8], edi
        mov dword ptr ds : [public_67051cc], offset public_6701658
        mov dword ptr ds : [public_67051d0], offset public_6701648
        mov dword ptr ds : [public_67051d4], esi
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_67051ec
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6705200
        call public_66f3b30
        push 4
        push 8
        mov ecx, offset public_6705224
        mov dword ptr ds : [public_6705214], edi
        mov dword ptr ds : [public_6705218], offset public_670163c
        mov dword ptr ds : [public_670521c], offset public_6701628
        mov dword ptr ds : [public_6705220], esi
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6705238
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_670524c
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705270
        mov dword ptr ds : [public_6705260], 0x20000
        mov dword ptr ds : [public_6705264], offset public_670163c
        mov dword ptr ds : [public_6705268], offset public_6701610
        mov dword ptr ds : [public_670526c], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705284
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705298
        call public_66f3b30
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_67015f8 @0x66f7f35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67015f8
/*FIXUP push offset public_670163c @0x66f7f3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670163c
        push 0x40000
        push 9
        mov ecx, offset public_67052ac
        call public_66f3de0
        pop esi
        public_66f7f51 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        pop edi
        je public_66f7f60
        mov dword ptr ds : [eax], offset public_6705000
        public_66f7f60 : nop
        mov eax, 0xA
        ret 4
        UNREACHABLE_TRAP(0x66f7c10)
    }
}

#undef public_66f7c4b
#undef public_66f7f51
#undef public_66f7f60
