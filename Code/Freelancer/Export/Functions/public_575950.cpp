#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_575950);

#define public_575960 _public_575960
#define public_575967 _public_575967

PROC_DECLARE(0x575950, internal_575950, public_575950);
extern "C" NAKED register_t __cdecl internal_575950()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        xor eax, eax
        test ecx, ecx
        je public_575967
        lea esp, ss:[esp]
        public_575960 : nop
        mov ecx, dword ptr ds : [ecx]
        inc eax
        test ecx, ecx
        jne public_575960
        public_575967 : nop
        ret 
        UNREACHABLE_TRAP(0x575950)
    }
}

#undef public_575960
#undef public_575967
