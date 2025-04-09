#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_594b90);
CLANG_FORWARD_PROC_SYMBOL(public_594ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5951a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7b80);
CLANG_FORWARD_PROC_SYMBOL(public_5a7c20);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_594ba8 _public_594ba8
#define public_594bc1 _public_594bc1
#define public_594bc4 _public_594bc4
#define public_594bcd _public_594bcd
#define public_594c37 _public_594c37
#define public_594c4f _public_594c4f
#define public_594c59 _public_594c59
#define public_594c5d _public_594c5d
#define public_594c70 _public_594c70
#define public_594cab _public_594cab
#define public_594cba _public_594cba
#define public_594cdb _public_594cdb
#define public_594cfc _public_594cfc
#define public_594d0a _public_594d0a
#define public_594d29 _public_594d29
#define public_594d35 _public_594d35
#define public_594d51 _public_594d51
#define public_594d83 _public_594d83
#define public_594d8c _public_594d8c
#define public_594dc9 _public_594dc9

PROC_DECLARE(0x594b90, internal_594b90, public_594b90);
extern "C" NAKED register_t __cdecl internal_594b90()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov al, 1
        je public_594bcd
        public_594ba8 : nop
        lea eax, ss:[ebp+0xC]
        push eax
        push ebx
        mov esi, ebp
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        je public_594bc1
        mov ebp, dword ptr ss : [ebp]
        jmp public_594bc4
        public_594bc1 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_594bc4 : nop
        cmp ebp, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        jne public_594ba8
        public_594bcd : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_594d51
        push 0
        push esi
        mov ecx, edi
        call public_5a7b80
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_5951a0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_594c37
        cmp ebp, dword ptr ds : [edi+8]
        jne public_594c37
        lea eax, ds:[esi+0xC]
        push eax
        push ebx
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        jne public_594c37
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_594c5d
        mov dword ptr ds : [eax+8], ebx
        jmp public_594c5d
        public_594c37 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_594c4f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_594c59
        public_594c4f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_594c59
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_594c59 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_594c5d : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_594d35
        nop 
        lea esp, ss:[esp]
        public_594c70 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_594d35
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_594cdb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_594cab
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_594d29
        public_594cab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_594cba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_594cba : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_594d29
        public_594cdb : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_594cfc
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_594d29
        public_594cfc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_594d0a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_594d0a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_594d29 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_594c70
        public_594d35 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_594d51 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_594d8c
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx]
        jne public_594d83
        push ebx
        push esi
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        call public_594ef0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_594d83 : nop
        lea ecx, ss:[esp+0x10]
        call public_5a7c20
        public_594d8c : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0xC]
        push ebx
        push eax
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        je public_594dc9
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_594ef0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_594dc9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x594b90)
    }
}

#undef public_594ba8
#undef public_594bc1
#undef public_594bc4
#undef public_594bcd
#undef public_594c37
#undef public_594c4f
#undef public_594c59
#undef public_594c5d
#undef public_594c70
#undef public_594cab
#undef public_594cba
#undef public_594cdb
#undef public_594cfc
#undef public_594d0a
#undef public_594d29
#undef public_594d35
#undef public_594d51
#undef public_594d83
#undef public_594d8c
#undef public_594dc9
