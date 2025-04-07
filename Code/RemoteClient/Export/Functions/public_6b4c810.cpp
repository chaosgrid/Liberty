#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b44ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4c810);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6aaea);

PROC_DECLARE(0x6b4c810, internal_6b4c810, public_6b4c810);
extern "C" NAKED register_t __cdecl internal_6b4c810()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6aaea @0x6b4c812*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6aaea
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6b6cb20
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x48], ebx
        lea ecx, ds:[esi+0x58]
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        call public_6b44ba0
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        lea eax, ss:[esp+0xB]
        push eax
        lea ecx, ds:[esi+0x74]
        mov byte ptr ss : [esp+0x1C], 2
        call dword ptr ds : [public_6b6b040]
        lea ecx, ds:[esi+0x80]
        mov byte ptr ss : [esp+0x18], 3
        call dword ptr ds : [public_6b6b01c]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov byte ptr ds : [esi+0x9C], bl
        mov byte ptr ds : [esi+0x9D], bl
        mov dword ptr ds : [esi], offset public_6b6dc04
        mov dword ptr ds : [esi+0xC], 0x20042
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6b4c810)
    }
}
