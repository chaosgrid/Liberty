#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b73e10);

#define public_6b73e25 _public_6b73e25

PROC_DECLARE(0x6b73e10, internal_6b73e10, public_6b73e10);
extern "C" NAKED register_t __cdecl internal_6b73e10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6b73e25
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6b73e25 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b73e10)
    }
}

#undef public_6b73e25
