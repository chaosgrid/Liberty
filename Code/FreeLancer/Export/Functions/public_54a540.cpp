#include "FreeLancer-PCH.h"


#define public_54a573 _public_54a573

PROC_DECLARE(0x54a540, internal_54a540, public_54a540);
extern "C" NAKED register_t __cdecl internal_54a540()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xBA0]
        xor eax, eax
        sub esp, 0x10
        cmp ecx, eax
        je public_54a573
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp], eax
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+0x14]
        dec eax
        dec edx
        mov dword ptr ss : [esp+0xC], edx
        lea edx, ss:[esp]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x5C]
        public_54a573 : nop
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x54a540)
    }
}

#undef public_54a573
