#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f403e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41840);
CLANG_FORWARD_PROC_SYMBOL(public_6f41960);
CLANG_FORWARD_PROC_SYMBOL(public_6f41aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f41c50);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59094);

PROC_DECLARE(0x6f41960, internal_6f41960, public_6f41960);
extern "C" NAKED register_t __cdecl internal_6f41960()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59094 @0x6f41962*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59094
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_6f403e0
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [esi+0x158], eax
        mov dword ptr ds : [esi+0x15C], eax
        lea eax, ds:[esi+0x84]
        push eax
        mov byte ptr ss : [esp+0x18], 2
        mov dword ptr ds : [esi], offset public_6f5b0b8
        call public_6f41840
        add esp, 4
        push edi
        mov ecx, esi
        call public_6f41c50
        lea ecx, ds:[esi+0xC8]
        push ecx
        mov ecx, esi
        call public_6f41b00
        lea edx, ds:[esi+0x38]
        push edx
        mov ecx, esi
        call public_6f41aa0
        lea eax, ds:[esi+0x44]
        push eax
        mov ecx, esi
        call public_6f41ac0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f41960)
    }
}
