#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34c80);

#define public_6f34c8f _public_6f34c8f

PROC_DECLARE(0x6f34c80, internal_6f34c80, public_6f34c80);
extern "C" NAKED register_t __cdecl internal_6f34c80()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x178]
        test ecx, ecx
        je public_6f34c8f
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x28]
        public_6f34c8f : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f34c80)
    }
}

#undef public_6f34c8f
