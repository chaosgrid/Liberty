#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2dff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c308c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c30980);

#define public_6c308f6 _public_6c308f6

PROC_DECLARE(0x6c308c0, internal_6c308c0, public_6c308c0);
extern "C" NAKED register_t __cdecl internal_6c308c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6c366b0
        mov dword ptr ds : [esi+4], offset public_6c36638
        mov dword ptr ds : [esi+8], offset public_6c36628
        mov dword ptr ds : [esi+0xC], offset public_6c3660c
        call public_6c30980
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_6c308f6
        call public_6c2dff0
        mov dword ptr ds : [esi+0x18], 0
        public_6c308f6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c308c0)
    }
}

#undef public_6c308f6
