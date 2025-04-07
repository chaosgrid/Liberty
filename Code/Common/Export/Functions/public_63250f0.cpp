#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c3a0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632c420);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639714b);

PROC_DECLARE(0x63250f0, internal_63250f0, public_63250f0);
extern "C" NAKED register_t __cdecl internal_63250f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639714b @0x63250f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639714b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi+4]
        mov esi, ecx
        lea ebx, ds:[esi+4]
        push 0x28
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [ebx], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        add esp, 4
        xor ebp, ebp
        mov dword ptr ds : [ebx+8], ebp
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_632c3a0
        mov cl, byte ptr ds : [edi+0x10]
        lea ebx, ds:[esi+0x10]
        push 0x10
        mov dword ptr ss : [esp+0x24], ebp
        mov byte ptr ds : [ebx], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ebp
        mov ebp, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x2C], edx
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax]
        push ebp
        push ecx
        push edx
        mov ecx, ebx
        call public_632c420
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], ecx
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x2C], edx
        mov eax, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], eax
        mov ecx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], ecx
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi], offset public_63a3de8
        mov dword ptr ds : [esi+0x38], edx
        mov eax, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x3C], eax
        add edi, 0x40
        mov edx, dword ptr ds : [edi]
        lea ecx, ds:[esi+0x40]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        pop edi
        mov dword ptr ds : [esi], offset public_63a3e1c
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x63250f0)
    }
}
