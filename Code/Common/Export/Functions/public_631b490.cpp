#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_63128e0);
CLANG_FORWARD_PROC_SYMBOL(public_6312970);
CLANG_FORWARD_PROC_SYMBOL(public_6312b70);
CLANG_FORWARD_PROC_SYMBOL(public_6312dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6313560);
CLANG_FORWARD_JUMP_SYMBOL(public_6396b38);

PROC_DECLARE(0x631b490, internal_631b490, public_631b490);
extern "C" NAKED register_t __cdecl internal_631b490()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396b38 @0x631b492*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396b38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        push 4
        lea eax, ss:[esp+0x4C]
        mov esi, ecx
        push eax
        mov ecx, edi
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x48]
        push 4
        lea edx, ss:[esp+0x4C]
        mov dword ptr ds : [esi], ecx
        push edx
        mov ecx, edi
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        call public_6312970
        mov ecx, edi
        mov byte ptr ds : [esi+8], al
        call public_6312970
        push 4
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, edi
        mov byte ptr ds : [esi+9], al
        call public_63128e0
        mov edx, dword ptr ss : [esp+0x48]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], edx
        call public_6312dd0
        push eax
        lea ecx, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x44], 0
        call public_630dda0
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call public_630e210
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, edi
        call public_6312dd0
        push eax
        lea ecx, ds:[esi+0x28]
        mov dword ptr ss : [esp+0x44], 1
        call public_630dda0
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call public_630e210
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6312dd0
        push eax
        lea ecx, ds:[esi+0x40]
        mov dword ptr ss : [esp+0x44], 2
        call public_630dda0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call public_630e210
        mov ecx, edi
        call public_6312b70
        mov ecx, edi
        mov dword ptr ds : [esi+0x58], eax
        call public_6313560
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi+0x5C], eax
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x631b490)
    }
}
