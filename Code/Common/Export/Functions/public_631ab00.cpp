#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_63128e0);
CLANG_FORWARD_PROC_SYMBOL(public_6312dd0);
CLANG_FORWARD_JUMP_SYMBOL(public_6396a98);

PROC_DECLARE(0x631ab00, internal_631ab00, public_631ab00);
extern "C" NAKED register_t __cdecl internal_631ab00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396a98 @0x631ab02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396a98
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        push 4
        lea eax, ss:[esp+0x38]
        mov esi, ecx
        push eax
        mov ecx, edi
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x34]
        push 4
        lea edx, ss:[esp+0x38]
        mov dword ptr ds : [esi], ecx
        push edx
        mov ecx, edi
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x34]
        push 4
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        call public_63128e0
        mov edx, dword ptr ss : [esp+0x34]
        push 4
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, edi
        mov dword ptr ds : [esi+8], edx
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x34]
        push 4
        lea edx, ss:[esp+0x38]
        mov dword ptr ds : [esi+0xC], ecx
        push edx
        mov ecx, edi
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov dword ptr ds : [esi+0x10], eax
        call public_6312dd0
        push eax
        lea ecx, ds:[esi+0x14]
        mov dword ptr ss : [esp+0x30], 0
        call public_630dda0
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_630e210
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, edi
        call public_6312dd0
        push eax
        lea ecx, ds:[esi+0x2C]
        mov dword ptr ss : [esp+0x30], 1
        call public_630dda0
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_630e210
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        call public_6312dd0
        push eax
        lea ecx, ds:[esi+0x44]
        mov dword ptr ss : [esp+0x30], 2
        call public_630dda0
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_630e210
        push 4
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        call public_63128e0
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x5C], edx
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x631ab00)
    }
}
