#include "ImeUi-PCH.h"


#define public_6712524 _public_6712524

PROC_DECLARE(0x6712510, internal_6712510, public_6712510);
extern "C" NAKED register_t __cdecl internal_6712510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0xC]
        neg eax
        cmp edx, eax
        je public_6712524
        mov dword ptr ds : [ecx+0xC], eax
        mov byte ptr ds : [ecx+0x48], 1
        public_6712524 : nop
        ret 4
        UNREACHABLE_TRAP(0x6712510)
    }
}

#undef public_6712524
