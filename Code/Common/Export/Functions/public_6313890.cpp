#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313890);
CLANG_FORWARD_PROC_SYMBOL(public_6319370);
CLANG_FORWARD_PROC_SYMBOL(public_63195e0);
CLANG_FORWARD_PROC_SYMBOL(public_6319850);
CLANG_FORWARD_PROC_SYMBOL(public_6342880);
CLANG_FORWARD_JUMP_SYMBOL(public_6396511);

PROC_DECLARE(0x6313890, internal_6313890, public_6313890);
extern "C" NAKED register_t __cdecl internal_6313890()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396511 @0x6313892*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396511
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov cl, byte ptr ss : [esp+0xF]
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_63a3804
        xor ebx, ebx
        push 1
        mov byte ptr ds : [esi+1], cl
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [esi], al
        mov byte ptr ds : [esi+0xC], bl
        call public_6319370
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x61], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ebx
        mov eax, dword ptr ds : [esi+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6319370
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov dl, byte ptr ss : [esp+0xF]
        lea esi, ds:[edi+0x18]
        push 1
        mov byte ptr ds : [esi], cl
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [esi+1], dl
        mov byte ptr ds : [esi+0xC], bl
        call public_63195e0
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x41], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push ecx
        mov ecx, esi
        call public_63195e0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov dl, byte ptr ss : [esp+0xF]
        mov al, byte ptr ss : [esp+0xF]
        lea esi, ds:[edi+0x2C]
        push 1
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [esi], dl
        mov byte ptr ds : [esi+1], al
        mov byte ptr ds : [esi+0xC], bl
        call public_6319850
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x75], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [esi+8]
        push ebx
        push edx
        mov ecx, esi
        call public_6319850
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov al, byte ptr ss : [esp+0xF]
        lea esi, ds:[edi+0x40]
        push 1
        mov byte ptr ds : [esi+1], cl
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [esi], al
        mov byte ptr ds : [esi+0xC], bl
        call public_6342880
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x25], 1
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push ecx
        mov ecx, esi
        call public_6342880
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [edi], offset public_63a37bc
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6313890)
    }
}
