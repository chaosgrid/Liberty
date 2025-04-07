#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611f60);
CLANG_FORWARD_PROC_SYMBOL(public_6611f90);
CLANG_FORWARD_PROC_SYMBOL(public_66124e0);
CLANG_FORWARD_PROC_SYMBOL(public_66134d0);
CLANG_FORWARD_PROC_SYMBOL(public_66173e0);
CLANG_FORWARD_PROC_SYMBOL(public_6617450);
CLANG_FORWARD_PROC_SYMBOL(public_6617a80);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66149b7 _public_66149b7
#define public_66149cd _public_66149cd
#define public_6614a43 _public_6614a43

PROC_DECLARE(0x6614920, internal_6614920, public_6614920);
extern "C" NAKED register_t __cdecl internal_6614920()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x60]
        or ebx, 0xFFFFFFFF
        cmp edi, 0xFFFFFFFF
        je public_6614a43
        test edi, edi
        je public_6614a43
        mov eax, dword ptr ss : [esp+0x68]
        push eax
        call dword ptr ds : [public_662900c]
        add esp, 4
        lea ecx, ss:[esp+0x60]
        lea edx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x60], eax
        push ecx
        push edx
        lea ecx, ds:[edi+4]
        call public_66134d0
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x68]
        cmp esi, eax
        je public_6614a43
        push ebp
        lea ecx, ss:[esp+0x18]
        call public_6611f60
        add esi, 0x10
        lea ecx, ss:[esp+0x18]
        push esi
        mov dword ptr ss : [esp+0x38], edi
        call public_6611f90
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x68]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x24]
        call public_66124e0
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x60]
        cmp esi, eax
        je public_66149cd
        lea ebx, ss:[ebp+0x28]
        public_66149b7 : nop
        lea eax, ss:[esp+0x10]
        push esi
        push eax
        mov ecx, ebx
        call public_6617a80
        add esi, 4
        cmp esi, dword ptr ss : [esp+0x28]
        jne public_66149b7
        public_66149cd : nop
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+4]
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ds:[esi+1]
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [ebp+0x10], edx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], eax
        call public_66173e0
        lea edx, ss:[esp+0x38]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x54], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x58], ecx
        push edx
        push eax
        lea ecx, ss:[ebp+0x14]
        call public_6617450
        mov ecx, dword ptr ss : [esp+0x48]
        push ecx
        call public_66281d0
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_66281d0
        add esp, 8
        mov eax, esi
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x4C
        ret 0x18
        public_6614a43 : nop
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        add esp, 0x4C
        ret 0x18
        UNREACHABLE_TRAP(0x6614920)
    }
}

#undef public_66149b7
#undef public_66149cd
#undef public_6614a43
