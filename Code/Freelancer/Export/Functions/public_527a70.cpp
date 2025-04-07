#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429040);
CLANG_FORWARD_PROC_SYMBOL(public_527a70);
CLANG_FORWARD_JUMP_SYMBOL(public_5c01f8);

PROC_DECLARE(0x527a70, internal_527a70, public_527a70);
extern "C" NAKED register_t __cdecl internal_527a70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c01f8 @0x527a72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c01f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push 1
        mov dword ptr ss : [esp+8], esi
        call public_429040
        xor eax, eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], 0x3F800000
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x58], 0x43B40000
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x60], 0xFFFFFFFF
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [esi+0x64], ecx
        mov dword ptr ds : [esi], offset public_5dd084
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x527a70)
    }
}
