#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f110);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_527770);
CLANG_FORWARD_PROC_SYMBOL(public_527850);
CLANG_FORWARD_PROC_SYMBOL(public_527a00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c01e1);

#define public_52796a _public_52796a
#define public_527986 _public_527986
#define public_5279b0 _public_5279b0
#define public_5279bb _public_5279bb
#define public_5279e0 _public_5279e0
#define public_5279e8 _public_5279e8

PROC_DECLARE(0x527850, internal_527850, public_527850);
extern "C" NAKED register_t __cdecl internal_527850()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c01e1 @0x527852*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c01e1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov dword ptr ss : [esp+8], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], ebx
        je public_5279e8
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+8], ecx
        push edi
        lea edi, ds:[eax+0xC]
        lea esi, ss:[ebp+0xC]
        mov ecx, 9
        rep movsd
        lea edx, ss:[ebp+0x30]
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x30]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [eax+0x3C], ecx
        mov dl, byte ptr ss : [ebp+0x40]
        lea esi, ds:[eax+0x40]
        mov byte ptr ds : [esi], dl
        mov al, byte ptr ss : [ebp+0x41]
        mov byte ptr ds : [esi+1], al
        mov cl, byte ptr ss : [ebp+0x4C]
        push 0x18
        mov byte ptr ds : [esi+0xC], cl
        call public_5b7e84
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x15], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x18
        call public_5b7e84
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov ecx, dword ptr ss : [ebp+0x44]
        mov edi, dword ptr ds : [ecx+4]
        mov cl, byte ptr ds : [edi+0x15]
        add esp, 8
        test cl, cl
        mov dword ptr ss : [esp+0x28], edx
        jne public_527986
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x14]
        push ecx
        push eax
        mov ecx, esi
        call public_40f110
        mov ebx, eax
        lea edx, ds:[edi+0xC]
        push edx
        lea eax, ds:[ebx+0xC]
        push eax
        call public_4e5fc0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], edx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ecx
        jne public_52796a
        mov dword ptr ss : [esp+0x28], ebx
        public_52796a : nop
        mov ecx, dword ptr ds : [edi]
        push ebx
        push ecx
        mov ecx, esi
        call public_527770
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [edi+8]
        push ebx
        push edx
        mov ecx, esi
        call public_527770
        mov dword ptr ds : [ebx+8], eax
        public_527986 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp+0x50]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, eax
        pop edi
        pop ebp
        je public_5279e0
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_5279bb
        mov edi, edi
        public_5279b0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_5279b0
        public_5279bb : nop
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_527a00
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_5279e0 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_5279e8 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x527850)
    }
}

#undef public_52796a
#undef public_527986
#undef public_5279b0
#undef public_5279bb
#undef public_5279e0
#undef public_5279e8
