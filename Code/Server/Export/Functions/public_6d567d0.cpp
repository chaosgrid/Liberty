#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63aa7);

PROC_DECLARE(0x6d567d0, internal_6d567d0, public_6d567d0);
extern "C" NAKED register_t __cdecl internal_6d567d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63aa7 @0x6d567d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63aa7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ds : [esi+4], al
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [esi+0x14], cl
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dl, byte ptr ss : [esp+0xB]
        push 0x18
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+0x24], dl
        call public_6d60012
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], ebx
        add esp, 4
        mov byte ptr ds : [esi+0x32], bl
        mov byte ptr ds : [esi+0x30], bl
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi], offset public_6d64ef8
        mov byte ptr ds : [esi+0x31], 1
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d567d0)
    }
}
