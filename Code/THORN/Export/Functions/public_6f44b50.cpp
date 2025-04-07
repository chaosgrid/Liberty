#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43890);
CLANG_FORWARD_PROC_SYMBOL(public_6f43940);
CLANG_FORWARD_PROC_SYMBOL(public_6f44b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f44bf0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59308);

PROC_DECLARE(0x6f44b50, internal_6f44b50, public_6f44b50);
extern "C" NAKED register_t __cdecl internal_6f44b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59308 @0x6f44b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59308
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        call public_6f43940
        lea eax, ds:[esi+0x28]
        push eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ds : [esi], offset public_6f5b22c
        call public_6f43890
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        push ecx
        mov ecx, esi
        call public_6f44bf0
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x3C], edx
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f44b50)
    }
}
