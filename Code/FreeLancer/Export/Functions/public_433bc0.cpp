#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4322b0);
CLANG_FORWARD_PROC_SYMBOL(public_432450);
CLANG_FORWARD_PROC_SYMBOL(public_432b20);
CLANG_FORWARD_PROC_SYMBOL(public_432c60);
CLANG_FORWARD_PROC_SYMBOL(public_433bc0);
CLANG_FORWARD_PROC_SYMBOL(public_433cf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9063);

#define public_433cd3 _public_433cd3

PROC_DECLARE(0x433bc0, internal_433bc0, public_433bc0);
extern "C" NAKED register_t __cdecl internal_433bc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9063 @0x433bc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9063
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_433cd3
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], offset public_5cad10
        mov ecx, dword ptr ds : [edi+8]
        add esi, 4
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+8], edx
        mov al, byte ptr ds : [edi+0x10]
        lea ebp, ds:[edi+0x10]
        lea ebx, ds:[esi+0xC]
        mov byte ptr ds : [ebx], al
        mov cl, byte ptr ss : [ebp+1]
        mov byte ptr ds : [ebx+1], cl
        mov dl, byte ptr ss : [ebp+0xC]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [ebx+0xC], dl
        call public_433cf0
        push ebp
        mov ecx, ebx
        call public_4322b0
        mov al, byte ptr ds : [edi+0x24]
        lea ebx, ds:[esi+0x20]
        push 0x18
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [ebx], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ecx, dword ptr ds : [edi+0x28]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_432450
        mov cl, byte ptr ds : [edi+0x30]
        lea ebp, ds:[edi+0x30]
        lea ebx, ds:[esi+0x2C]
        mov byte ptr ds : [ebx], cl
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 2
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c6f9c]
        mov cl, byte ptr ds : [edi+0x40]
        lea ebx, ds:[edi+0x40]
        lea edi, ds:[esi+0x3C]
        mov byte ptr ds : [edi], cl
        mov dl, byte ptr ds : [ebx+1]
        mov byte ptr ds : [edi+1], dl
        mov al, byte ptr ds : [ebx+0xC]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 3
        mov byte ptr ds : [edi+0xC], al
        call public_432c60
        push ebx
        mov ecx, edi
        call public_432b20
        pop edi
        pop ebp
        mov dword ptr ds : [esi], offset public_5cacec
        pop ebx
        public_433cd3 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x433bc0)
    }
}

#undef public_433cd3
