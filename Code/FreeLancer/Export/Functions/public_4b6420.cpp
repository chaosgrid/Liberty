#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b6130);
CLANG_FORWARD_PROC_SYMBOL(public_4b6420);

#define public_4b643e _public_4b643e

PROC_DECLARE(0x4b6420, internal_4b6420, public_4b6420);
extern "C" NAKED register_t __cdecl internal_4b6420()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_672288]
        test ecx, ecx
        je public_4b643e
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push edx
        push eax
        call public_4b6130
        public_4b643e : nop
        ret 
        UNREACHABLE_TRAP(0x4b6420)
    }
}

#undef public_4b643e
