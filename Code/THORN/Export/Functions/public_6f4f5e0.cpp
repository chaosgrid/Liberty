#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b500);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);

#define public_6f4f609 _public_6f4f609
#define public_6f4f61c _public_6f4f61c

PROC_DECLARE(0x6f4f5e0, internal_6f4f5e0, public_6f4f5e0);
extern "C" NAKED register_t __cdecl internal_6f4f5e0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6f4b090
        mov esi, eax
        push esi
        call public_6f4b500
        add esp, 8
        test eax, eax
        jne public_6f4f609
/*FIXUP push offset public_6f60938 @0x6f4f5fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60938
        push edi
        call public_6f4f570
        add esp, 8
        public_6f4f609 : nop
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_6f4f61c
        push esi
        call public_6f4b5e0
        add esp, 4
        mov dword ptr ds : [edi], eax
        public_6f4f61c : nop
        push esi
        call public_6f4b590
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f5e0)
    }
}

#undef public_6f4f609
#undef public_6f4f61c
