#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b450);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);

#define public_46b4b3 _public_46b4b3
#define public_46b4f2 _public_46b4f2

PROC_DECLARE(0x46b450, internal_46b450, public_46b450);
extern "C" NAKED register_t __cdecl internal_46b450()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66da80]
        sub esp, 0x18
        test ecx, ecx
        je public_46b4f2
        mov eax, dword ptr ss : [esp+0x1C]
        sub eax, 0
        je public_46b4b3
        dec eax
        jne public_46b4f2
        fld dword ptr ds : [public_5ceed4]
        lea edx, ss:[esp]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [public_5ceed8]
        mov dword ptr ss : [esp+8], 0xBF800000
        fstp dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [public_5ceed0]
        mov ecx, dword ptr ds : [public_5ceecc]
        push eax
        push ecx
        mov ecx, dword ptr ds : [public_66da80]
        call public_579cc0
        add esp, 0x18
        ret 
        public_46b4b3 : nop
        fld dword ptr ds : [public_5ceec4]
        lea eax, ss:[esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [public_5ceec8]
        mov dword ptr ss : [esp+0x14], 0xBF800000
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [public_5ceec0]
        mov edx, dword ptr ds : [public_5ceebc]
        push ecx
        mov ecx, dword ptr ds : [public_66da80]
        push edx
        call public_579cc0
        public_46b4f2 : nop
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x46b450)
    }
}

#undef public_46b4b3
#undef public_46b4f2
