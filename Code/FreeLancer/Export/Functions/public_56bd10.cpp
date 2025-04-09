#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56bd10);

#define public_56bd34 _public_56bd34

PROC_DECLARE(0x56bd10, internal_56bd10, public_56bd10);
extern "C" NAKED register_t __cdecl internal_56bd10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xD8]
        mov edx, dword ptr ds : [eax+0x8A4]
        mov eax, dword ptr ds : [ecx+0xD4]
        mov cl, byte ptr ds : [eax+0x6C]
        sub edx, 0x14
        cmp edx, 1
        jge public_56bd34
        and cl, 0xFC
        mov byte ptr ds : [eax+0x6C], cl
        ret 
        public_56bd34 : nop
        or cl, 3
        mov byte ptr ds : [eax+0x6C], cl
        ret 
        UNREACHABLE_TRAP(0x56bd10)
    }
}

#undef public_56bd34
