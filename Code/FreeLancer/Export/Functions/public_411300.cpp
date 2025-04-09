#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411300);

#define public_41134d _public_41134d

PROC_DECLARE(0x411300, internal_411300, public_411300);
extern "C" NAKED register_t __cdecl internal_411300()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x58], eax
        mov dword ptr ds : [ecx+0x60], 0x3F800000
        mov dword ptr ds : [ecx+0x64], 0
        fdivr dword ptr ds : [public_5c8a60]
        fstp dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        jne public_41134d
        test byte ptr ds : [ecx+0xB4], 4
        je public_41134d
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        add ecx, 0xC
        push ecx
        push eax
        call dword ptr ds : [edx+0x12C]
        public_41134d : nop
        ret 4
        UNREACHABLE_TRAP(0x411300)
    }
}

#undef public_41134d
