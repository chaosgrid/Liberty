#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d6e0);
CLANG_FORWARD_PROC_SYMBOL(public_55dec0);
CLANG_FORWARD_PROC_SYMBOL(public_55e340);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5a7b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b952d);

PROC_DECLARE(0x43d6e0, internal_43d6e0, public_43d6e0);
extern "C" NAKED register_t __cdecl internal_43d6e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b952d @0x43d6e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b952d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call public_59f860
        lea ebp, ds:[esi+0x32C]
        xor ebx, ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], ebx
        call public_55dec0
        lea ecx, ds:[esi+0x34C]
        mov byte ptr ss : [esp+0x20], 1
        call public_55e340
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x36C], al
        mov dword ptr ds : [esi+0x370], ebx
        mov dword ptr ds : [esi+0x374], ebx
        mov dword ptr ds : [esi+0x378], ebx
        mov cl, byte ptr ss : [esp+0x13]
        push 0x3C
        mov byte ptr ss : [esp+0x24], 3
        mov byte ptr ds : [esi+0x37C], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x380], eax
        mov dword ptr ds : [esi+0x384], ebx
        mov dl, byte ptr ss : [esp+0x13]
        mov al, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x388]
        push 1
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 4
        mov byte ptr ds : [edi], dl
        mov byte ptr ds : [edi+1], al
        mov byte ptr ds : [edi+0xC], bl
        call public_5a7b80
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x21], 1
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [edi+8]
        push ebx
        push edx
        mov ecx, edi
        call public_5a7b80
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov al, byte ptr ss : [esp+0x13]
        push 0x18
        mov byte ptr ss : [esp+0x24], 5
        mov byte ptr ds : [esi+0x3A0], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x3A4], eax
        mov dword ptr ds : [esi+0x3A8], ebx
        mov cl, byte ptr ss : [esp+0x17]
        push 0x18
        mov byte ptr ss : [esp+0x28], 6
        mov byte ptr ds : [esi+0x3AC], cl
        call public_5b7e84
        add esp, 8
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x3B0], eax
        mov dword ptr ds : [esi+0x3B4], ebx
        pop edi
        mov dword ptr ds : [esi+0x3B8], ebx
        mov byte ptr ds : [esi+0x3CC], bl
        mov byte ptr ds : [esi+0x3BC], bl
        mov byte ptr ds : [esi+0x3C4], bl
        mov byte ptr ds : [esi+0x3C5], bl
        mov dword ptr ds : [esi+0x3C0], ebx
        mov dword ptr ds : [esi+0x3D0], ebx
        mov byte ptr ds : [esi+0x3D4], bl
        mov byte ptr ds : [esi+0x3D5], bl
        mov dword ptr ds : [esi+0x3E0], ebx
        mov byte ptr ds : [esi+0x3E4], bl
        mov dword ptr ds : [esi+0x3E8], ebx
        mov dword ptr ds : [esi+0x3EC], ebx
        mov dword ptr ds : [esi+0x3F0], ebx
        mov dword ptr ds : [esi+0x3F4], ebx
        mov dword ptr ds : [esi], offset public_5cb584
        mov dword ptr ds : [esi+0x7C], offset public_5cb574
        mov dword ptr ds : [esi+0x34C], offset public_5cb568
        mov eax, esi
        pop esi
        mov dword ptr ss : [ebp], offset public_5cb55c
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x43d6e0)
    }
}
