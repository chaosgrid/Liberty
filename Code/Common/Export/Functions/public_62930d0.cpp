#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62930d0);
CLANG_FORWARD_PROC_SYMBOL(public_629af70);
CLANG_FORWARD_PROC_SYMBOL(public_629eca0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393628);

PROC_DECLARE(0x62930d0, internal_62930d0, public_62930d0);
extern "C" NAKED register_t __cdecl internal_62930d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393628 @0x62930d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393628
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        call public_629eca0
        xor eax, eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], 1
        mov byte ptr ds : [esi+0x38], al
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], eax
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi], offset public_639c61c
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [edx+0xC]
        mov ecx, esi
        call public_629af70
        fstp dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x62930d0)
    }
}
