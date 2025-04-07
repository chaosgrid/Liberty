#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62930d0);
CLANG_FORWARD_PROC_SYMBOL(public_6295880);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393738);

PROC_DECLARE(0x6295880, internal_6295880, public_6295880);
extern "C" NAKED register_t __cdecl internal_6295880()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393738 @0x6295882*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393738
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push eax
        push 0x800
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        call public_62930d0
        xor eax, eax
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi], offset public_639ccb4
        call public_629aed0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x6295880)
    }
}
