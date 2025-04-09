#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ef0);

#define public_453147 _public_453147

PROC_DECLARE(0x453130, internal_453130, public_453130);
extern "C" NAKED register_t __cdecl internal_453130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_453147
        mov edx, dword ptr ss : [esp+8]
        push edx
        call public_410ef0
        public_453147 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x453130)
    }
}

#undef public_453147
