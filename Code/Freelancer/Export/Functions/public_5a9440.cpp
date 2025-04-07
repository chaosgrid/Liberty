#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5684a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a9440);
CLANG_FORWARD_PROC_SYMBOL(public_5a96b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a9800);
CLANG_FORWARD_PROC_SYMBOL(public_5ad350);
CLANG_FORWARD_PROC_SYMBOL(public_5b67e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b6bd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b6c40);
CLANG_FORWARD_JUMP_SYMBOL(public_5c559a);

PROC_DECLARE(0x5a9440, internal_5a9440, public_5a9440);
extern "C" NAKED register_t __cdecl internal_5a9440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c559a @0x5a9442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c559a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x168
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0xD8]
        push eax
        mov esi, ecx
        call public_5684a0
        mov edi, eax
        mov cl, byte ptr ds : [edi]
        mov byte ptr ss : [esp+0xC], cl
        push 0
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x180], 0
        call dword ptr ds : [public_5c6fb8]
        mov edx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push edi
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c7060]
        push 1
        lea ecx, ss:[esp+0x150]
        mov byte ptr ss : [esp+0x180], 2
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x140]
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x130]
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0xF0]
        call public_4de730
        push 1
        lea ecx, ss:[esp+0xDC]
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_5a96b0
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x180], 3
        call public_5a9800
        lea eax, ss:[esp+0x3C]
        mov bl, 4
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x180], bl
        call public_5684a0
        mov ecx, dword ptr ds : [eax+0x90]
        lea edi, ds:[esi+0x244]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x180], 5
        call public_5b6bd0
        push 1
        lea ecx, ss:[esp+0xB4]
        mov byte ptr ss : [esp+0x180], bl
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0xA4]
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x94]
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x84]
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0x54]
        call public_4de730
        push 1
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6fb8]
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, esi
        call public_5684a0
        mov eax, dword ptr ds : [eax+0x90]
        push 1
        lea ecx, ss:[esp+0xB4]
        mov dword ptr ds : [edi], eax
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0xA4]
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x94]
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x84]
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0x54]
        call public_4de730
        push 1
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6fb8]
        push edi
        lea ecx, ds:[edi+4]
        call public_5ad350
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c7060]
        push 0
        call dword ptr ds : [public_5c716c]
        add esp, 4
        push eax
        mov ecx, edi
        call public_5b6c40
        mov ecx, edi
        call public_5b67e0
        push 1
        lea ecx, ss:[esp+0x30]
        mov bl, al
        mov byte ptr ss : [esp+0x180], 3
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x180], 2
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x180], 0xFFFFFFFF
        call dword ptr ds : [public_5c6fb8]
        mov ecx, dword ptr ss : [esp+0x174]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x174
        ret 
        UNREACHABLE_TRAP(0x5a9440)
    }
}
