#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6820);
CLANG_FORWARD_PROC_SYMBOL(public_6d005d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d000);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d0d01a _public_6d0d01a
#define public_6d0d01c _public_6d0d01c
#define public_6d0d030 _public_6d0d030
#define public_6d0d040 _public_6d0d040
#define public_6d0d047 _public_6d0d047
#define public_6d0d065 _public_6d0d065
#define public_6d0d06e _public_6d0d06e
#define public_6d0d070 _public_6d0d070
#define public_6d0d08c _public_6d0d08c
#define public_6d0d091 _public_6d0d091
#define public_6d0d0a7 _public_6d0d0a7
#define public_6d0d0ab _public_6d0d0ab
#define public_6d0d0b5 _public_6d0d0b5
#define public_6d0d0d8 _public_6d0d0d8
#define public_6d0d0e1 _public_6d0d0e1

PROC_DECLARE(0x6d0d000, internal_6d0d000, public_6d0d000);
extern "C" NAKED register_t __cdecl internal_6d0d000()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        push edi
        mov edi, ecx
        je public_6d0d01a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0d01c
        public_6d0d01a : nop
        xor eax, eax
        public_6d0d01c : nop
        push ebp
        mov ebp, dword ptr ds : [eax+0xB4]
        mov eax, dword ptr ds : [edi+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0d047
        lea ecx, ds:[ecx]
        public_6d0d030 : nop
        cmp dword ptr ds : [esi+0x40], ebp
        je public_6d0d040
        push 0
        push ebx
        lea ecx, ds:[esi+8]
        call public_6cf6820
        public_6d0d040 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d0d030
        public_6d0d047 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_6d005d0
        add esp, 4
        pop esi
        xor edx, edx
        xor eax, eax
        pop ebp
        public_6d0d065 : nop
        cmp eax, edx
        jne public_6d0d06e
        mov eax, dword ptr ds : [edi+0x38]
        jmp public_6d0d070
        public_6d0d06e : nop
        mov eax, dword ptr ds : [eax]
        public_6d0d070 : nop
        cmp eax, edx
        je public_6d0d0e1
        cmp dword ptr ds : [eax+8], ebx
        jne public_6d0d065
        cmp dword ptr ds : [edi+0x38], eax
        jne public_6d0d091
        mov ecx, dword ptr ds : [eax]
        cmp ecx, edx
        mov dword ptr ds : [edi+0x38], ecx
        jne public_6d0d08c
        mov dword ptr ds : [edi+0x3C], edx
        jmp public_6d0d0b5
        public_6d0d08c : nop
        mov dword ptr ds : [ecx+4], edx
        jmp public_6d0d0b5
        public_6d0d091 : nop
        mov ecx, dword ptr ds : [edi+0x3C]
        cmp ecx, eax
        jne public_6d0d0ab
        mov ecx, dword ptr ds : [ecx+4]
        cmp ecx, edx
        mov dword ptr ds : [edi+0x3C], ecx
        jne public_6d0d0a7
        mov dword ptr ds : [edi+0x38], edx
        jmp public_6d0d0b5
        public_6d0d0a7 : nop
        mov dword ptr ds : [ecx], edx
        jmp public_6d0d0b5
        public_6d0d0ab : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [edx+4], ecx
        public_6d0d0b5 : nop
        mov cl, byte ptr ds : [edi+0x40]
        test cl, cl
        je public_6d0d0d8
        mov ecx, dword ptr ds : [edi+0x44]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x44], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x174]
        pop edi
        pop ebx
        ret 8
        public_6d0d0d8 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d0d0e1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x174]
        pop edi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d0d000)
    }
}

#undef public_6d0d01a
#undef public_6d0d01c
#undef public_6d0d030
#undef public_6d0d040
#undef public_6d0d047
#undef public_6d0d065
#undef public_6d0d06e
#undef public_6d0d070
#undef public_6d0d08c
#undef public_6d0d091
#undef public_6d0d0a7
#undef public_6d0d0ab
#undef public_6d0d0b5
#undef public_6d0d0d8
#undef public_6d0d0e1
