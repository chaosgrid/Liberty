#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_426de0);

#define public_426dfd _public_426dfd

PROC_DECLARE(0x426de0, internal_426de0, public_426de0);
extern "C" NAKED register_t __cdecl internal_426de0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_426dfd
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi], 0
        public_426dfd : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x426de0)
    }
}

#undef public_426dfd
