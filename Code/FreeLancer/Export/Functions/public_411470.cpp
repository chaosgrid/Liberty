#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411470);

#define public_411495 _public_411495
#define public_4114e3 _public_4114e3

PROC_DECLARE(0x411470, internal_411470, public_411470);
extern "C" NAKED register_t __cdecl internal_411470()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xB0]
        sub esp, 0xC
        cmp eax, 1
        mov eax, dword ptr ss : [esp+0x10]
        je public_411495
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x4C], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x50], edx
        fld dword ptr ds : [eax+8]
        fchs 
        fstp dword ptr ds : [ecx+0x54]
        public_411495 : nop
        fld dword ptr ds : [eax]
        fchs 
        fld dword ptr ds : [eax+4]
        fchs 
        fld dword ptr ds : [eax+8]
        fchs 
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        fxch 
        fstp dword ptr ds : [ecx+0x7C]
        mov dword ptr ds : [ecx+0x94], eax
        fstp dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        jne public_4114e3
        test byte ptr ds : [ecx+0xB4], 4
        je public_4114e3
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        add ecx, 0xC
        push ecx
        push eax
        call dword ptr ds : [edx+0x12C]
        public_4114e3 : nop
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x411470)
    }
}

#undef public_411495
#undef public_4114e3
