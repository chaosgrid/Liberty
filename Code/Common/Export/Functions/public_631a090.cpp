#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6318450);
CLANG_FORWARD_PROC_SYMBOL(public_6318590);
CLANG_FORWARD_PROC_SYMBOL(public_6319070);
CLANG_FORWARD_PROC_SYMBOL(public_631a090);
CLANG_FORWARD_JUMP_SYMBOL(public_6396993);

#define public_631a1b0 _public_631a1b0

PROC_DECLARE(0x631a090, internal_631a090, public_631a090);
extern "C" NAKED register_t __cdecl internal_631a090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396993 @0x631a092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396993
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], ebp
        je public_631a1b0
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov dl, byte ptr ds : [esi+8]
        add edi, 4
        lea eax, ds:[esi+8]
        lea ecx, ds:[edi+4]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], ebp
        mov dword ptr ds : [ecx+0xC], ebp
        mov edx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [edx]
        push edx
        push ebp
        push eax
        mov dword ptr ss : [esp+0x34], edi
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [esi+0x18]
        lea ebx, ds:[esi+0x18]
        lea ebp, ds:[edi+0x14]
        mov byte ptr ss : [ebp], al
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ss : [ebp+1], cl
        mov dl, byte ptr ds : [ebx+0xC]
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ss : [ebp+0xC], dl
        call public_6318590
        push ebx
        mov ecx, ebp
        call public_6318450
        mov al, byte ptr ds : [esi+0x2C]
        lea ebx, ds:[esi+0x2C]
        lea ebp, ds:[edi+0x28]
        mov byte ptr ss : [ebp], al
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ss : [ebp+1], cl
        mov dl, byte ptr ds : [ebx+0xC]
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1C], 2
        mov byte ptr ss : [ebp+0xC], dl
        call public_6318590
        push ebx
        mov ecx, ebp
        call public_6318450
        mov al, byte ptr ds : [esi+0x40]
        lea ebx, ds:[esi+0x40]
        lea esi, ds:[edi+0x3C]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [ebx+0xC]
        push 1
        xor edi, edi
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 3
        mov byte ptr ds : [esi+0xC], dl
        call public_6319070
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edi
        mov edx, dword ptr ds : [esi+8]
        push edi
        push edx
        mov ecx, esi
        call public_6319070
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], edi
        call public_6318450
        pop esi
        pop ebx
        public_631a1b0 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x631a090)
    }
}

#undef public_631a1b0
