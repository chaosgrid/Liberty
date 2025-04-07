#include "SoundManager-PCH.h"


#define public_6ee2667 _public_6ee2667
#define public_6ee26bb _public_6ee26bb

PROC_DECLARE(0x6ee25f0, internal_6ee25f0, public_6ee25f0);
extern "C" NAKED register_t __cdecl internal_6ee25f0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        push esi
        call dword ptr ds : [eax+0x50]
        test byte ptr ds : [esi+0x8C], 0x10
        je public_6ee2667
        fld dword ptr ds : [esi+0xBC]
        fmul dword ptr ds : [esi+0xAC]
        fld dword ptr ds : [esi+0xB0]
        fmul dword ptr ds : [esi+0xB8]
        fsubp 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0xB0]
        fmul dword ptr ds : [esi+0xB4]
        fld dword ptr ds : [esi+0xBC]
        fmul dword ptr ds : [esi+0xA8]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [esi+0xB8]
        fld dword ptr ds : [esi+0xB4]
        fmul dword ptr ds : [esi+0xAC]
        jmp public_6ee26bb
        public_6ee2667 : nop
        fld dword ptr ds : [esi+0xB8]
        fmul dword ptr ds : [esi+0xB0]
        fld dword ptr ds : [esi+0xAC]
        fmul dword ptr ds : [esi+0xBC]
        fsubp 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [esi+0xBC]
        fld dword ptr ds : [esi+0xB0]
        fmul dword ptr ds : [esi+0xB4]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0xAC]
        fmul dword ptr ds : [esi+0xB4]
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [esi+0xB8]
        public_6ee26bb : nop
        mov eax, dword ptr ss : [esp+0x10]
        fsubp 
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x18]
        fild dword ptr ds : [esi+0xA4]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+8], ecx
        fld dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [eax+0x18]
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+0x1C], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x20], ecx
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6ee25f0)
    }
}

#undef public_6ee2667
#undef public_6ee26bb
