#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3480);
CLANG_FORWARD_PROC_SYMBOL(public_6f209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f21550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f20a5a _public_6f20a5a
#define public_6f20a78 _public_6f20a78
#define public_6f20aa0 _public_6f20aa0
#define public_6f20aab _public_6f20aab
#define public_6f20ac0 _public_6f20ac0
#define public_6f20acc _public_6f20acc
#define public_6f20ad8 _public_6f20ad8

PROC_DECLARE(0x6f209f0, internal_6f209f0, public_6f209f0);
extern "C" NAKED register_t __cdecl internal_6f209f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ss : [ebp+0x51]
        test al, al
        jne public_6f20a78
        mov al, byte ptr ss : [ebp+0x50]
        push edi
        push 0x54
        mov byte ptr ss : [esp+0x14], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x50], dl
        mov byte ptr ds : [edi+0x51], 0
        call public_6ef3480
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_6f20a5a
        mov ebx, edi
        public_6f20a5a : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_6f21550
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_6f21550
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_6f20a78 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6f20ad8
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        jne public_6f20aab
        mov edi, edi
        public_6f20aa0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        je public_6f20aa0
        public_6f20aab : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x51]
        test dl, dl
        jne public_6f20acc
        lea ecx, ds:[ecx]
        public_6f20ac0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x51]
        test dl, dl
        je public_6f20ac0
        public_6f20acc : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6f20ad8 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f209f0)
    }
}

#undef public_6f20a5a
#undef public_6f20a78
#undef public_6f20aa0
#undef public_6f20aab
#undef public_6f20ac0
#undef public_6f20acc
#undef public_6f20ad8
