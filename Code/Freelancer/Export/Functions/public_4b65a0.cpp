#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b65a0);

#define public_4b65bc _public_4b65bc

PROC_DECLARE(0x4b65a0, internal_4b65a0, public_4b65a0);
extern "C" NAKED register_t __cdecl internal_4b65a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_672288]
        test eax, eax
        je public_4b65bc
        mov dword ptr ds : [eax+0x164], 0
        mov eax, dword ptr ds : [public_672288]
        and byte ptr ds : [eax+0x6C], 0xFD
        public_4b65bc : nop
        ret 
        UNREACHABLE_TRAP(0x4b65a0)
    }
}

#undef public_4b65bc
