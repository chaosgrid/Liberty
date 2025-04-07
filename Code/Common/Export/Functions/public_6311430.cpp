#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6311430);

#define public_631143e _public_631143e

PROC_DECLARE(0x6311430, internal_6311430, public_6311430);
extern "C" NAKED register_t __cdecl internal_6311430()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_63fd2a4]
        test ecx, ecx
        je public_631143e
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax]
        public_631143e : nop
        ret 
        UNREACHABLE_TRAP(0x6311430)
    }
}

#undef public_631143e
