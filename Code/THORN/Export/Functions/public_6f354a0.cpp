#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f354fc _public_6f354fc
#define public_6f35522 _public_6f35522

PROC_DECLARE(0x6f354a0, internal_6f354a0, public_6f354a0);
extern "C" NAKED register_t __cdecl internal_6f354a0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        mov ebx, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        je public_6f35522
        mov eax, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        push edi
        lea edx, ss:[esp+0xC]
        push edx
        push esi
        call dword ptr ds : [eax+4]
        mov edi, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+0x24]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [public_6f61e18]
        test eax, eax
        jne public_6f354fc
        call public_6f57de0
        mov dword ptr ds : [public_6f61e18], eax
        public_6f354fc : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0x28]
        rep movsd
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x40
        ret 0xC
        public_6f35522 : nop
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x6f354a0)
    }
}

#undef public_6f354fc
#undef public_6f35522
