#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec32e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faae3e);

PROC_DECLARE(0x6ec32e0, internal_6ec32e0, public_6ec32e0);
extern "C" NAKED register_t __cdecl internal_6ec32e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faae3e @0x6ec32e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faae3e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        mov dword ptr ds : [esi], offset public_6fb565c
        mov cl, byte ptr ss : [esp+0x1C]
        xor ebx, ebx
        push 0x40
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [esi+0xC], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], ebx
        mov dl, byte ptr ss : [esp+0x20]
        push 0x40
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+0x18], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], ebx
        mov al, byte ptr ss : [esp+0x24]
        push 0x40
        mov byte ptr ss : [esp+0x20], 2
        mov byte ptr ds : [esi+0x24], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], ebx
        add esp, 0xC
        mov dword ptr ds : [esi+0x30], ebx
        mov byte ptr ds : [esi+0x34], bl
        mov byte ptr ds : [esi+0x35], bl
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov byte ptr ds : [esi+0x44], bl
        mov dword ptr ds : [esi], offset public_6fb59e4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ec32e0)
    }
}
