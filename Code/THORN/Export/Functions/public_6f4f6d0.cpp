#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6d0);

#define public_6f4f6f9 _public_6f4f6f9

PROC_DECLARE(0x6f4f6d0, internal_6f4f6d0, public_6f4f6d0);
extern "C" NAKED register_t __cdecl internal_6f4f6d0()
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
        call public_6f4b440
        add esp, 8
        test eax, eax
        jne public_6f4f6f9
/*FIXUP push offset public_6f60958 @0x6f4f6eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60958
        push edi
        call public_6f4f570
        add esp, 8
        public_6f4f6f9 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f6d0)
    }
}

#undef public_6f4f6f9
