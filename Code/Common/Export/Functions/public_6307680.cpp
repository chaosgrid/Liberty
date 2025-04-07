#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_63076d5 _public_63076d5

PROC_DECLARE(0x6307680, internal_6307680, public_6307680);
extern "C" NAKED register_t __cdecl internal_6307680()
{
    __asm
    {
        sub esp, 0x48
        fld dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [public_63fceb8]
        test eax, eax
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x18]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x10]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x1C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0x28]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+0x14]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx+0x20]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx+0x2C]
        fstp dword ptr ss : [esp+0x20]
        jne public_63076d5
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_63076d5 : nop
        mov edx, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0x2C]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x6307680)
    }
}

#undef public_63076d5
