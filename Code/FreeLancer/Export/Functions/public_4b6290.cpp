#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5600);
CLANG_FORWARD_PROC_SYMBOL(public_4b6290);

#define public_4b62a9 _public_4b62a9

PROC_DECLARE(0x4b6290, internal_4b6290, public_4b6290);
extern "C" NAKED register_t __cdecl internal_4b6290()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_672288]
        test ecx, ecx
        je public_4b62a9
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push edx
        call public_4b5600
        public_4b62a9 : nop
        ret 
        UNREACHABLE_TRAP(0x4b6290)
    }
}

#undef public_4b62a9
