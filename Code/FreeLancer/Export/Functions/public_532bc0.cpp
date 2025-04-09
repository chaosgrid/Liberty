#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532bc0);
CLANG_FORWARD_PROC_SYMBOL(public_547440);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c07e7);

PROC_DECLARE(0x532bc0, internal_532bc0, public_532bc0);
extern "C" NAKED register_t __cdecl internal_532bc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c07e7 @0x532bc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c07e7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_547440
        and byte ptr ds : [esi+0xB0], 0xFE
        mov cl, byte ptr ss : [esp+0x20]
        xor ebx, ebx
        push 0xC
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0xB4], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ds : [esi+0xBC], ebx
        mov dl, byte ptr ss : [esp+0x24]
        push 0x40
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+0xC0], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xC4], eax
        mov dword ptr ds : [esi+0xC8], ebx
        mov al, byte ptr ss : [esp+0x28]
        mov cl, byte ptr ss : [esp+0x28]
        push 0x1C
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [esi+0xCC], al
        mov byte ptr ds : [esi+0xCD], cl
        mov byte ptr ds : [esi+0xD8], bl
        call public_5b7e84
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [eax+0x19], bl
        mov dword ptr ds : [esi+0xD4], eax
        mov byte ptr ds : [eax+0x19], 1
        mov edx, dword ptr ds : [esi+0xD4]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+0xD4]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0xD4]
        push 0x1C
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x18], bl
        mov byte ptr ds : [eax+0x19], bl
        mov dword ptr ds : [esi+0xD0], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0xD0]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0xDC], ebx
        add esp, 0x10
        mov byte ptr ds : [esi+0xE0], bl
        pop edi
        mov dword ptr ds : [esi], offset public_5de23c
        mov dword ptr ds : [esi+4], offset public_5de1bc
        mov dword ptr ds : [esi+0xC], offset public_5de1b0
        mov dword ptr ds : [esi+0xAC], offset public_5de1a8
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x532bc0)
    }
}
