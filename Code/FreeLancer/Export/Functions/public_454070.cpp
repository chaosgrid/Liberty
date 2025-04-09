#include "FreeLancer-PCH.h"


#define public_454090 _public_454090

PROC_DECLARE(0x454070, internal_454070, public_454070);
extern "C" NAKED register_t __cdecl internal_454070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+0x90]
        mov eax, dword ptr ds : [eax+0x54]
        test eax, eax
        je public_454090
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        public_454090 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x454070)
    }
}

#undef public_454090
