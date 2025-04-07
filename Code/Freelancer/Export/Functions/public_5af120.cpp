#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5af120);
CLANG_FORWARD_PROC_SYMBOL(public_5afbf0);
CLANG_FORWARD_PROC_SYMBOL(public_5afcf0);
CLANG_FORWARD_PROC_SYMBOL(public_5afe40);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5803);

#define public_5af23e _public_5af23e

PROC_DECLARE(0x5af120, internal_5af120, public_5af120);
extern "C" NAKED register_t __cdecl internal_5af120()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5803 @0x5af122*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5803
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], edi
        xor esi, esi
        cmp edi, esi
        mov dword ptr ss : [esp+0x14], esi
        je public_5af23e
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [edi], eax
        mov dl, byte ptr ss : [ebp+4]
        lea eax, ss:[ebp+4]
        lea ecx, ds:[edi+4]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [ecx+0xC], esi
        mov edx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [edx]
        push edx
        push esi
        push eax
        call dword ptr ds : [public_5c6f9c]
        mov al, byte ptr ss : [ebp+0x14]
        lea ebx, ss:[ebp+0x14]
        lea esi, ds:[edi+0x14]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [ebx+0xC]
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+0xC], dl
        call public_5afcf0
        push ebx
        mov ecx, esi
        call public_5afbf0
        mov al, byte ptr ss : [ebp+0x28]
        lea ebx, ss:[ebp+0x28]
        lea esi, ds:[edi+0x28]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [ebx+0xC]
        push 1
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [esi+0xC], dl
        call public_5afe40
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push ecx
        mov ecx, esi
        call public_5afe40
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_5afbf0
        mov dl, byte ptr ss : [ebp+0x3C]
        add ebp, 0x3C
        lea esi, ds:[edi+0x3C]
        mov byte ptr ds : [esi], dl
        mov al, byte ptr ss : [ebp+1]
        mov byte ptr ds : [esi+1], al
        mov cl, byte ptr ss : [ebp+0xC]
        mov byte ptr ds : [esi+0xC], cl
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 3
        call public_5afcf0
        push ebp
        mov ecx, esi
        call public_5afbf0
        pop ebp
        pop ebx
        public_5af23e : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5af120)
    }
}

#undef public_5af23e
