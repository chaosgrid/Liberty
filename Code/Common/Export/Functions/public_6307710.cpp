#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6307750 _public_6307750
#define public_63077cd _public_63077cd

PROC_DECLARE(0x6307710, internal_6307710, public_6307710);
extern "C" NAKED register_t __cdecl internal_6307710()
{
    __asm
    {
        sub esp, 0x90
        mov eax, dword ptr ds : [public_63fceb8]
        test eax, eax
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xA0]
        fld dword ptr ds : [edi]
        mov esi, ecx
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x10]
        jne public_6307750
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_6307750 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        add esi, 0xC
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [public_63fceb8]
        test eax, eax
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x48], ecx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x4C], edx
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
        fstp dword ptr ss : [esp+0x40]
        jne public_63077cd
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_63077cd : nop
        mov ecx, dword ptr ds : [eax]
        add edi, 0xC
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x7C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x9C]
        mov ecx, 9
        lea esi, ss:[esp+0x74]
        lea edi, ss:[esp+0x50]
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[esp+0x44]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x90
        ret 8
        UNREACHABLE_TRAP(0x6307710)
    }
}

#undef public_6307750
#undef public_63077cd
