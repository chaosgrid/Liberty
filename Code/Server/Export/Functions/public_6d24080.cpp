#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d24080);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6297e);

PROC_DECLARE(0x6d24080, internal_6d24080, public_6d24080);
extern "C" NAKED register_t __cdecl internal_6d24080()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6297e @0x6d24082*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6297e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6d68b9c
        xor ebx, ebx
        mov byte ptr ds : [esi+4], bl
        mov byte ptr ds : [esi+5], bl
        xor eax, eax
        lea edi, ds:[esi+8]
        mov ecx, 8
        rep stosd
        mov eax, dword ptr ss : [esp+0x20]
        mov word ptr ds : [esi+0x28], bx
        mov cl, byte ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [esi+0x2C], cl
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov edx, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [edx]
        push 0xC
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+0x3C], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dl, byte ptr ds : [ecx]
        push 0xC
        mov byte ptr ss : [esp+0x20], 2
        mov byte ptr ds : [esi+0x48], dl
        call public_6d60012
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 8
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_6d68f8c
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6d24080)
    }
}
