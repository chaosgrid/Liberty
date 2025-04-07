#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fa70);
CLANG_FORWARD_PROC_SYMBOL(public_6272990);
CLANG_FORWARD_PROC_SYMBOL(public_6272ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392756);

PROC_DECLARE(0x626fa70, internal_626fa70, public_626fa70);
extern "C" NAKED register_t __cdecl internal_626fa70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392756 @0x626fa72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392756
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov cx, word ptr ds : [esi+4]
        mov word ptr ds : [edi+4], cx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov dl, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [edi+0x14], dl
        mov al, byte ptr ds : [esi+0x15]
        mov byte ptr ds : [edi+0x15], al
        mov cl, byte ptr ds : [esi+0x16]
        mov byte ptr ds : [edi+0x16], cl
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x18], edx
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x20], ecx
        mov dl, byte ptr ds : [esi+0x24]
        mov byte ptr ds : [edi+0x24], dl
        lea eax, ds:[esi+0x28]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0x28]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x34], ecx
        mov edx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [edi+0x38], edx
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edi+0x3C], eax
        mov cl, byte ptr ds : [esi+0x40]
        lea ebx, ds:[edi+0x40]
        push 0x10
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ds : [ebx], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        add esp, 4
        xor ebp, ebp
        mov dword ptr ds : [ebx+8], ebp
        mov ecx, dword ptr ds : [esi+0x44]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_6272ae0
        mov dl, byte ptr ds : [esi+0x4C]
        lea ebx, ds:[edi+0x4C]
        push 0x10
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ds : [ebx], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ebp
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_6272ae0
        mov al, byte ptr ds : [esi+0x58]
        lea ebx, ds:[edi+0x58]
        push 0x14
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [ebx], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ebp
        mov ecx, dword ptr ds : [esi+0x5C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_6272990
        mov ecx, dword ptr ds : [esi+0x64]
        mov dword ptr ds : [edi+0x64], ecx
        mov edx, dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x68], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x626fa70)
    }
}
