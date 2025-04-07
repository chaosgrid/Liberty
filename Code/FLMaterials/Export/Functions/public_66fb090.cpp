#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66fba30);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66fb0c9 _public_66fb0c9
#define public_66fb151 _public_66fb151
#define public_66fb19a _public_66fb19a
#define public_66fb1a8 _public_66fb1a8

PROC_DECLARE(0x66fb090, internal_66fb090, public_66fb090);
extern "C" NAKED register_t __cdecl internal_66fb090()
{
    __asm
    {
        mov al, byte ptr ds : [public_67049cc]
        test al, 1
        jne public_66fb0c9
/*FIXUP push offset _public_66f3cd0 @0x66fb099*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66fb09e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 1
        mov cl, al
        push 0x4C
        or cl, 1
/*FIXUP push offset public_67049e0 @0x66fb0ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67049e0
        mov byte ptr ds : [public_67049cc], cl
        call public_6700820
/*FIXUP push offset _public_66fba30 @0x66fb0bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66fba30
        call public_6700912
        add esp, 4
        public_66fb0c9 : nop
        mov eax, dword ptr ds : [public_67049f0]
        test eax, eax
        jne public_66fb19a
        mov ecx, offset public_67049f0
        mov dword ptr ds : [public_67049e0], 0
        mov dword ptr ds : [public_67049e4], offset public_67016bc
        mov dword ptr ds : [public_67049e8], offset public_6702808
        mov dword ptr ds : [public_67049ec], offset public_67016d4
        call public_66f1ac0
        mov eax, dword ptr ds : [public_67026d8]
        mov ecx, dword ptr ds : [public_67026d4]
        mov edx, dword ptr ds : [public_67026d0]
        mov dword ptr ds : [public_6704a00], eax
        mov eax, dword ptr ds : [public_67026cc]
        mov dword ptr ds : [public_67049f4], eax
        cmp dword ptr ds : [public_6704a04], 4
        mov dword ptr ds : [public_67049f0], 4
        mov dword ptr ds : [public_67049fc], ecx
        mov dword ptr ds : [public_67049f8], edx
        je public_66fb151
        mov ecx, offset public_6704a04
        call public_66f1ac0
        public_66fb151 : nop
        mov ecx, dword ptr ds : [public_67026c8]
        mov edx, dword ptr ds : [public_67026c4]
        mov eax, dword ptr ds : [public_67026c0]
        mov dword ptr ds : [public_6704a14], ecx
        mov ecx, dword ptr ds : [public_67026bc]
/*FIXUP push offset public_67026cc @0x66fb16e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67026cc
        mov dword ptr ds : [public_6704a08], ecx
        push 4
        mov ecx, offset public_6704a18
        mov dword ptr ds : [public_6704a04], 4
        mov dword ptr ds : [public_6704a10], edx
        mov dword ptr ds : [public_6704a0c], eax
        call public_66f3b30
        public_66fb19a : nop
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_66fb1a8
        mov dword ptr ds : [eax], offset public_67049e0
        public_66fb1a8 : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x66fb090)
    }
}

#undef public_66fb0c9
#undef public_66fb151
#undef public_66fb19a
#undef public_66fb1a8
