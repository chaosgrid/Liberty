#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f21ca0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f5838c);

PROC_DECLARE(0x6f21b60, internal_6f21b60, public_6f21b60);
extern "C" NAKED register_t __cdecl internal_6f21b60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f5838c @0x6f21b62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f5838c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov al, byte ptr ss : [esp+0x18]
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi+0x14], al
        xor eax, eax
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        mov cl, byte ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ds : [esi+0x24], cl
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x34], dl
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x40], eax
        mov cl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x44], cl
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], eax
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        mov byte ptr ds : [esi+0x5D], al
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 3
        mov dword ptr ds : [esi], offset public_6f5a1c8
        call public_6f21ca0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f21b60)
    }
}
