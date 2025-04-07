#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_6315b30);
CLANG_FORWARD_PROC_SYMBOL(public_6316110);
CLANG_FORWARD_PROC_SYMBOL(public_6316dd0);
CLANG_FORWARD_PROC_SYMBOL(public_63182a0);
CLANG_FORWARD_PROC_SYMBOL(public_6318b50);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63968b0);

PROC_DECLARE(0x6316110, internal_6316110, public_6316110);
extern "C" NAKED register_t __cdecl internal_6316110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63968b0 @0x6316112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63968b0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xDC
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x18]
        call public_6333e40
        mov al, byte ptr ss : [esp+9]
        xor esi, esi
        push esi
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x20], al
        call dword ptr ds : [public_63991b8]
        mov cl, byte ptr ss : [esp+9]
        mov dword ptr ss : [esp+0xEC], esi
        mov byte ptr ss : [esp+0x2C], cl
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        lea edx, ss:[esp+9]
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0xF0], 1
        call dword ptr ds : [public_6399180]
        lea eax, ss:[esp+0xA]
        push eax
        lea ecx, ss:[esp+0x50]
        call public_6315b10
        lea ecx, ss:[esp+0xA]
        push ecx
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0xF0], 3
        call dword ptr ds : [public_6399180]
        lea edx, ss:[esp+0xB]
        push edx
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0xF0], 4
        call dword ptr ds : [public_6399180]
        mov eax, dword ptr ss : [esp+0xF4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x7C], ecx
        push edx
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0xF0], 5
        call public_63182a0
        lea eax, ss:[esp+0x7C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0xF4], 6
        call public_6318b50
        lea edx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0xC], edx
        push 1
        lea ecx, ss:[esp+0xD8]
        mov byte ptr ss : [esp+0xF0], 0xB
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0xC8]
        mov byte ptr ss : [esp+0xF0], 0xA
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0xB4]
        call public_6315b30
        push 1
        lea ecx, ss:[esp+0xA8]
        mov byte ptr ss : [esp+0xF0], 8
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x94]
        call public_6315b30
        push 1
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0xF0], 5
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0xF0], 0x10
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0xF0], 0xF
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x50]
        push eax
        push ecx
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0xF4], 0xE
        call public_6316dd0
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        call public_6391d5a
        add esp, 4
        push 1
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x54], esi
        mov dword ptr ss : [esp+0x58], esi
        mov dword ptr ss : [esp+0x5C], esi
        mov byte ptr ss : [esp+0xF0], 0xD
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x2C]
        call public_6315b30
        push 1
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0xF0], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xE4]
        pop edi
        add eax, 0x10
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0xE8
        ret 4
        UNREACHABLE_TRAP(0x6316110)
    }
}
