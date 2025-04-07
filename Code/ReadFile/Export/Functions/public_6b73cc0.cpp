#include "ReadFile-PCH.h"


#define public_6b73ce0 _public_6b73ce0

PROC_DECLARE(0x6b73cc0, internal_6b73cc0, public_6b73cc0);
extern "C" NAKED register_t __cdecl internal_6b73cc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0x234]
        test eax, eax
        mov dword ptr ds : [edx], eax
        je public_6b73ce0
        mov eax, dword ptr ds : [ecx+0x234]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        public_6b73ce0 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6b73cc0)
    }
}

#undef public_6b73ce0
