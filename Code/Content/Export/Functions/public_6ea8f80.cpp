#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8f80);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1320);
CLANG_FORWARD_PROC_SYMBOL(public_6eb13d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9a04);

PROC_DECLARE(0x6ea8f80, internal_6ea8f80, public_6ea8f80);
extern "C" NAKED register_t __cdecl internal_6ea8f80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9a04 @0x6ea8f82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9a04
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+8], bl
        mov eax, dword ptr ds : [public_6fb3064]
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ecx]
        mov al, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x48], edx
        mov dword ptr ds : [esi+0x4C], 0xA
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], 0xFFFFFFFF
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ds : [esi+0x58], al
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov cl, byte ptr ss : [esp+0x20]
        mov dl, byte ptr ss : [esp+0x20]
        lea edi, ds:[esi+0x70]
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        push 1
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [edi+1], dl
        mov byte ptr ds : [edi+0xC], bl
        call public_6eb1320
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x35], 1
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        push ebx
        push ecx
        mov ecx, edi
        call public_6eb1320
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov dl, byte ptr ss : [esp+0x20]
        mov al, byte ptr ss : [esp+0x20]
        lea edi, ds:[esi+0x84]
        push 1
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [edi], dl
        mov byte ptr ds : [edi+1], al
        mov byte ptr ds : [edi+0xC], bl
        call public_6eb13d0
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0xA5], 1
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [edi+8]
        push ebx
        push edx
        mov ecx, edi
        call public_6eb13d0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ss : [esp+0x18], 2
        mov al, byte ptr ss : [esp+0x20]
        push 0x38
        mov byte ptr ds : [esi+0x98], al
        call public_6fa912a
        mov cl, byte ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x9C], eax
        mov dword ptr ds : [esi+0xA0], ebx
        add esp, 4
        mov byte ptr ds : [esi+0xA4], cl
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_6fb4484
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ea8f80)
    }
}
