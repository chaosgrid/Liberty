#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634a830);
CLANG_FORWARD_PROC_SYMBOL(public_634a990);

#define public_634a9a8 _public_634a9a8

PROC_DECLARE(0x634a990, internal_634a990, public_634a990);
extern "C" NAKED register_t __cdecl internal_634a990()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        je public_634a9a8
        mov edx, dword ptr ds : [eax+0x178]
        push eax
        push edx
        call public_634a830
        public_634a9a8 : nop
        ret 4
        UNREACHABLE_TRAP(0x634a990)
    }
}

#undef public_634a9a8
