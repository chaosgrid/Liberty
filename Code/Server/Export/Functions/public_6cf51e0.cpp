#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf51e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d609fb);

PROC_DECLARE(0x6cf51e0, internal_6cf51e0, public_6cf51e0);
extern "C" NAKED register_t __cdecl internal_6cf51e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d609fb @0x6cf51e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d609fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov al, byte ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0xC
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+8], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov cl, byte ptr ss : [esp+0x24]
        mov dl, byte ptr ss : [esp+0x24]
        push 0x14
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [esi+0x14], cl
        mov byte ptr ds : [esi+0x15], dl
        mov byte ptr ds : [esi+0x20], bl
        call public_6d60012
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x11], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ds : [eax+0x11], cl
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+0x1C]
        push 0x14
        call public_6d60012
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x10], bl
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x24], ebx
        mov byte ptr ds : [esi+0x28], bl
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], edx
        add esp, 0xC
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_6d66988
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6cf51e0)
    }
}
