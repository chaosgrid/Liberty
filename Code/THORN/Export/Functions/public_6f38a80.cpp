#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d110);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f38b8e _public_6f38b8e
#define public_6f38baa _public_6f38baa
#define public_6f38bb6 _public_6f38bb6

PROC_DECLARE(0x6f38a80, internal_6f38a80, public_6f38a80);
extern "C" NAKED register_t __cdecl internal_6f38a80()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x4C]
        push esi
        mov esi, dword ptr ss : [esp+0x4C]
        cmp ebp, dword ptr ds : [esi+0xA0]
        jae public_6f38bb6
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x50]
        lea ebx, ds:[esi+0xA4]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x58], ebp
        call public_6f3cbb0
        mov edx, dword ptr ds : [esi+0xA8]
        cmp edx, dword ptr ss : [esp+0x4C]
        je public_6f38bb6
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], 0
        call public_6f3c5d0
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f3d110
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [ecx+0x10]
        mov edi, dword ptr ss : [esp+0x58]
        lea edx, ss:[esp+0x18]
        add esi, 0x44
        mov ecx, 9
        rep movsd
        push edx
        lea eax, ss:[esp+0x14]
        xor edi, edi
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], edi
        call public_6f3c5d0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6f3d110
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0x10]
        cmp dword ptr ds : [ecx+4], edi
        je public_6f38baa
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], edi
        call public_6f3c5d0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6f3d110
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [public_6f61e1c]
        cmp eax, edi
        mov esi, dword ptr ds : [ecx+4]
        jne public_6f38b8e
        call public_6f57de0
        mov dword ptr ds : [public_6f61e1c], eax
        public_6f38b8e : nop
        mov edi, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [eax]
        push edi
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x28]
        rep movsd
        public_6f38baa : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x3C
        ret 0xC
        public_6f38bb6 : nop
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x3C
        ret 0xC
        UNREACHABLE_TRAP(0x6f38a80)
    }
}

#undef public_6f38b8e
#undef public_6f38baa
#undef public_6f38bb6
