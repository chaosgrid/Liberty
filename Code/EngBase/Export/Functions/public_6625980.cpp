#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_66259c4 _public_66259c4
#define public_66259e7 _public_66259e7
#define public_6625a1d _public_6625a1d

PROC_DECLARE(0x6625980, internal_6625980, public_6625980);
extern "C" NAKED register_t __cdecl internal_6625980()
{
    __asm
    {
        sub esp, 0x64
        mov eax, dword ptr ss : [esp+0x6C]
        push ebx
        push ebp
        push esi
        fld dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+0x14]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [public_662b1b0]
        push edi
        mov edi, dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp+0x28]
        test eax, eax
        lea ebp, ds:[edi+0x24]
        jne public_66259c4
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_66259c4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_662b1b0]
        test eax, eax
        jne public_66259e7
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_66259e7 : nop
        mov ebx, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x1C]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x58]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x50]
        rep movsd
        mov eax, dword ptr ds : [public_662b1b0]
        test eax, eax
        jne public_6625a1d
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_6625a1d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x84]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ebx+0xC]
        fsub dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x6625980)
    }
}

#undef public_66259c4
#undef public_66259e7
#undef public_6625a1d
