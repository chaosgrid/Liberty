#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_5392d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0ab3);

PROC_DECLARE(0x5392d0, internal_5392d0, public_5392d0);
extern "C" NAKED register_t __cdecl internal_5392d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0ab3 @0x5392d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0ab3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi], offset public_5dea2c
        mov dword ptr ds : [esi+4], offset public_5de9ac
        mov dword ptr ds : [esi+0x10], ebx
        mov eax, dword ptr ds : [public_5c69fc]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [public_5c69f8]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [public_5c69f4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [public_5c69f0]
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dl, byte ptr ss : [esp+0x1C]
        push 0x18
        mov byte ptr ss : [esp+0x18], 1
        mov byte ptr ds : [esi+0x28], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], ebx
        mov al, byte ptr ds : [esi+0x44]
        and al, 0xF0
        lea ecx, ds:[esi+0x48]
        mov byte ptr ss : [esp+0x14], 2
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov byte ptr ds : [esi+0x44], al
        call public_4144b0
        mov al, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x7C], ebx
        mov byte ptr ds : [esi+0x80], al
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov byte ptr ds : [esi+0xA4], bl
        mov dword ptr ds : [esi+0xA0], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5de7ec
        mov dword ptr ds : [esi+4], offset public_5de76c
        mov dword ptr ds : [esi+0xC], offset public_5de764
        xor ecx, ecx
        lea edx, ds:[esi+0x90]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x5392d0)
    }
}
