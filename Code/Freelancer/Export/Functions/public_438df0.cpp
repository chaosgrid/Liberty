#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f110);
CLANG_FORWARD_PROC_SYMBOL(public_438df0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b92c3);

PROC_DECLARE(0x438df0, internal_438df0, public_438df0);
extern "C" NAKED register_t __cdecl internal_438df0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b92c3 @0x438df2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b92c3
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
        push edi
        push 0x20
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        mov dl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0xC]
        push 0x18
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [edi], cl
        mov byte ptr ds : [edi+1], dl
        mov byte ptr ds : [edi+0xC], bl
        call public_5b7e84
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        push ebx
        push ecx
        mov ecx, edi
        call public_40f110
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov dl, byte ptr ss : [esp+0xF]
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x20]
        push 1
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [edi], dl
        mov byte ptr ds : [edi+1], al
        mov byte ptr ds : [edi+0xC], bl
        call public_40f110
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x15], 1
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], ebx
        mov eax, dword ptr ds : [edi+8]
        push ebx
        push eax
        mov ecx, edi
        call public_40f110
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [esi+0x5A], bl
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov byte ptr ds : [esi+0x48], bl
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+0x59], bl
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x438df0)
    }
}
