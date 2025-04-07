#include "DebugLib-PCH.h"


#define public_65d1720 _public_65d1720

PROC_DECLARE(0x65d1710, internal_65d1710, public_65d1710);
extern "C" NAKED register_t __cdecl internal_65d1710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [eax+8], 0xFFFFFFFF
        jne public_65d1720
        or eax, 0xFFFFFFFF
        ret 8
        public_65d1720 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x65d1710)
    }
}

#undef public_65d1720
