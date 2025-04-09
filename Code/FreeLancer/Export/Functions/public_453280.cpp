#include "FreeLancer-PCH.h"


#define public_4532a6 _public_4532a6

PROC_DECLARE(0x453280, internal_453280, public_453280);
extern "C" NAKED register_t __cdecl internal_453280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_4532a6
        mov edx, dword ptr ss : [esp+8]
        add eax, 0x98
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        public_4532a6 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x453280)
    }
}

#undef public_4532a6
