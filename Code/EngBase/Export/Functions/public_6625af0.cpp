#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_6625b3b _public_6625b3b
#define public_6625b5e _public_6625b5e

PROC_DECLARE(0x6625af0, internal_6625af0, public_6625af0);
extern "C" NAKED register_t __cdecl internal_6625af0()
{
    __asm
    {
        sub esp, 0x64
        push ebx
        mov ebx, dword ptr ss : [esp+0x70]
        push ebp
        push esi
        fld dword ptr ds : [ebx+0xC]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ebx+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ebx+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ebx+0x18]
        lea eax, ds:[edi+0x24]
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ds : [public_662b1b0]
        fstp dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_6625b3b
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_6625b3b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_662b1b0]
        test eax, eax
        jne public_6625b5e
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_6625b5e : nop
        mov ebp, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x1C]
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
        fld dword ptr ds : [ebx]
        fld dword ptr ds : [ebx+4]
        fld dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fadd dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [esp+0x80]
        pop edi
        pop esi
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fadd dword ptr ss : [ebp+0x14]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        pop ebp
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr ds : [eax+8], ecx
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x6625af0)
    }
}

#undef public_6625b3b
#undef public_6625b5e
