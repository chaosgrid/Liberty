#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43890);
CLANG_FORWARD_PROC_SYMBOL(public_6f43940);
CLANG_FORWARD_PROC_SYMBOL(public_6f49440);
CLANG_FORWARD_PROC_SYMBOL(public_6f49570);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59624);

PROC_DECLARE(0x6f49440, internal_6f49440, public_6f49440);
extern "C" NAKED register_t __cdecl internal_6f49440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59624 @0x6f49442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59624
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
        mov cl, byte ptr ss : [esp+0x18]
        xor eax, eax
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ds : [esi+0x60], cl
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [esi+0x6C], eax
        lea edx, ds:[esi+0x28]
        push edx
        mov byte ptr ss : [esp+0x14], 1
        mov dword ptr ds : [esi], offset public_6f5b3ec
        call public_6f43890
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        push eax
        mov ecx, esi
        call public_6f49570
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x3C], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f49440)
    }
}
