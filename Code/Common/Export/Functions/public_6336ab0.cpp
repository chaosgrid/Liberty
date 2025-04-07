#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6336ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6340c10);
CLANG_FORWARD_PROC_SYMBOL(public_6340cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6340d80);
CLANG_FORWARD_JUMP_SYMBOL(public_63976be);

PROC_DECLARE(0x6336ab0, internal_6336ab0, public_6336ab0);
extern "C" NAKED register_t __cdecl internal_6336ab0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63976be @0x6336ab2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63976be
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0xB]
        push edi
        xor ebx, ebx
        push 1
        mov byte ptr ds : [esi+1], cl
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [esi], al
        mov byte ptr ds : [esi+0xC], bl
        call public_6340c10
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0xA9], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ebx
        mov eax, dword ptr ds : [esi+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6340c10
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov dl, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x14]
        push 1
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [edi+1], dl
        mov byte ptr ds : [edi+0xC], bl
        call public_6340cf0
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x81], 1
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        push ebx
        push ecx
        mov ecx, edi
        call public_6340cf0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov dl, byte ptr ss : [esp+0xF]
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x28]
        push 1
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [edi], dl
        mov byte ptr ds : [edi+1], al
        mov byte ptr ds : [edi+0xC], bl
        call public_6340d80
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0xB9], 1
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [edi+8]
        push ebx
        push edx
        mov ecx, edi
        call public_6340d80
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x3C]
        push 1
        mov byte ptr ds : [edi+1], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [edi], al
        mov byte ptr ds : [edi+0xC], bl
        call public_626b3a0
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x15], 1
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        push ebx
        push ecx
        mov ecx, edi
        call public_626b3a0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6336ab0)
    }
}
