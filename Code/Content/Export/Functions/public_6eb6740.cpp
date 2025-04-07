#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);

#define public_6eb6750 _public_6eb6750

PROC_DECLARE(0x6eb6740, internal_6eb6740, public_6eb6740);
extern "C" NAKED register_t __cdecl internal_6eb6740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6eb6750
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6eb6750 : nop
        ret 
        UNREACHABLE_TRAP(0x6eb6740)
    }
}

#undef public_6eb6750
