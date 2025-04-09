#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5ca0);
CLANG_FORWARD_PROC_SYMBOL(public_4b62b0);

#define public_4b62c4 _public_4b62c4

PROC_DECLARE(0x4b62b0, internal_4b62b0, public_4b62b0);
extern "C" NAKED register_t __cdecl internal_4b62b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_672288]
        test ecx, ecx
        je public_4b62c4
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_4b5ca0
        public_4b62c4 : nop
        ret 
        UNREACHABLE_TRAP(0x4b62b0)
    }
}

#undef public_4b62c4
