#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab068);

PROC_DECLARE(0x6ecf3a0, internal_6ecf3a0, public_6ecf3a0);
extern "C" NAKED register_t __cdecl internal_6ecf3a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab068 @0x6ecf3a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab068
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        xor eax, eax
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+7]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ds : [esi+0x20], al
        push edi
        lea edi, ds:[esi+0x24]
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [edi], cl
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], 0x44FA0000
        mov dword ptr ds : [esi+0x40], 1
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x58], eax
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ds : [esi+0x60], al
        mov byte ptr ds : [esi+0x61], al
        mov byte ptr ds : [esi+0x62], 1
        mov byte ptr ds : [esi+0x63], al
        mov dword ptr ds : [esi+0x64], eax
        mov byte ptr ds : [esi+0x68], al
        mov dword ptr ds : [esi+0x6C], 4
        mov dword ptr ds : [esi], offset public_6fb6098
        mov eax, dword ptr ds : [edi+8]
        push 1
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0x20
        call public_6f937c0
        mov edx, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0xC]
        push ecx
        push 1
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0xB
        call public_6f937c0
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0xC]
        push eax
        push 1
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0x3E
        call public_6f937c0
        mov eax, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0xC]
        push edx
        push 1
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0x16
        call public_6f937c0
        mov edx, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0xC]
        push ecx
        push 1
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0x11
        call public_6f937c0
        lea eax, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], 0x27
        push eax
        mov ecx, dword ptr ds : [edi+8]
        push 1
        push ecx
        mov ecx, edi
        call public_6f937c0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6ecf3a0)
    }
}
