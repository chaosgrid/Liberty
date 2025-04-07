#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d250e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d29230);
CLANG_FORWARD_PROC_SYMBOL(public_6d292d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62bf0);

PROC_DECLARE(0x6d29230, internal_6d29230, public_6d29230);
extern "C" NAKED register_t __cdecl internal_6d29230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62bf0 @0x6d29232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62bf0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi], offset public_6d68d00
        mov eax, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x2C], eax
        call public_6d292d0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [public_6d68a50]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [public_6d68a54]
        mov dword ptr ds : [esi+0x20], ecx
        lea edi, ds:[esi+0x24]
        mov ecx, edi
        call public_6d250e0
        mov eax, dword ptr ss : [esp+0x24]
        mov dl, byte ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+8], esi
        mov dword ptr ds : [edi], offset public_6d68cd8
        mov dword ptr ds : [esi+0x34], eax
        mov byte ptr ds : [esi+0x30], dl
        mov dword ptr ds : [esi], offset public_6d68fec
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x6d29230)
    }
}
