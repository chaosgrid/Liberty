#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4699d0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb6d4);

#define public_469a80 _public_469a80
#define public_469ab9 _public_469ab9
#define public_469abb _public_469abb
#define public_469afe _public_469afe

PROC_DECLARE(0x4699d0, internal_4699d0, public_4699d0);
extern "C" NAKED register_t __cdecl internal_4699d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb6d4 @0x4699d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb6d4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov al, byte ptr ss : [esp+0x1C]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        push 0xC
        mov dword ptr ss : [esp+0x18], ebp
        mov byte ptr ss : [ebp], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov cl, byte ptr ss : [esp+0x30]
        lea edi, ss:[ebp+0xC]
        push 0xC
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ds : [edi], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 8
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0x2C]
        lea esi, ss:[ebp+0x1C]
        push ebx
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 1
        mov byte ptr ds : [esi], dl
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov al, byte ptr ss : [esp+0x2C]
        lea esi, ss:[ebp+0x2C]
        push ebx
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 2
        mov byte ptr ds : [esi], al
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 3
        jle public_469afe
        mov dword ptr ss : [esp+0x2C], eax
        mov edi, edi
        public_469a80 : nop
        push 0x10
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x24], 4
        je public_469ab9
        mov cl, byte ptr ss : [esp+0x2C]
        push 0xC
        mov byte ptr ds : [esi], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        jmp public_469abb
        public_469ab9 : nop
        xor esi, esi
        public_469abb : nop
        mov dword ptr ss : [esp+0x10], esi
        mov esi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 3
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 8
        inc ecx
        dec eax
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ss : [esp+0x2C], eax
        jne public_469a80
        public_469afe : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        mov dword ptr ss : [ebp+0x40], eax
        mov dword ptr ss : [ebp+0x18], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x38], ebx
        mov dword ptr ss : [ebp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x4699d0)
    }
}

#undef public_469a80
#undef public_469ab9
#undef public_469abb
#undef public_469afe
