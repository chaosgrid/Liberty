#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);

#define public_6f28e24 _public_6f28e24

PROC_DECLARE(0x6f28e10, internal_6f28e10, public_6f28e10);
extern "C" NAKED register_t __cdecl internal_6f28e10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6f28e24
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], 0
        public_6f28e24 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f28e10)
    }
}

#undef public_6f28e24
