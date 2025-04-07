#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_63079ca _public_63079ca

PROC_DECLARE(0x63079b0, internal_63079b0, public_63079b0);
extern "C" NAKED register_t __cdecl internal_63079b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fceb8]
        sub esp, 0x6C
        test eax, eax
        push esi
        push edi
        mov edi, ecx
        jne public_63079ca
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_63079ca : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea esi, ds:[edi+0xC]
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x14]
        fchs 
        lea edi, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+8]
        fchs 
        mov dword ptr ss : [esp+0x44], eax
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0xC]
        fchs 
        mov eax, dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x48], ecx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x4C], edx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+4]
        mov ecx, 9
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x20]
        lea esi, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x40]
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[esp+0x44]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x63079b0)
    }
}

#undef public_63079ca
