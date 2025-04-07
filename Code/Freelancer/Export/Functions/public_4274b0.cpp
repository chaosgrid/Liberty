#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4274b0);
CLANG_FORWARD_PROC_SYMBOL(public_4277c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_427526 _public_427526
#define public_42753a _public_42753a
#define public_427540 _public_427540
#define public_427550 _public_427550
#define public_427591 _public_427591
#define public_4275aa _public_4275aa
#define public_4275bd _public_4275bd
#define public_4275c8 _public_4275c8
#define public_4275cb _public_4275cb
#define public_4275d0 _public_4275d0
#define public_4275f9 _public_4275f9
#define public_427612 _public_427612
#define public_427625 _public_427625
#define public_42762f _public_42762f
#define public_427652 _public_427652
#define public_42766a _public_42766a
#define public_42767d _public_42767d
#define public_42768a _public_42768a
#define public_42768c _public_42768c
#define public_427692 _public_427692
#define public_4276bb _public_4276bb
#define public_4276ce _public_4276ce
#define public_4276d9 _public_4276d9
#define public_4276dc _public_4276dc
#define public_4276de _public_4276de
#define public_4276e1 _public_4276e1
#define public_4276ed _public_4276ed

PROC_DECLARE(0x4274b0, internal_4274b0, public_4274b0);
extern "C" NAKED register_t __cdecl internal_4274b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x5C
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x58], 0
        mov byte ptr ds : [ebx+0x59], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_4277c0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_427526
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_427526
        lea ecx, ds:[edi+0x10]
        push ecx
        add ebp, 4
        push ebp
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        jl public_427526
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_427540
        mov dword ptr ds : [eax+8], ebx
        jmp public_427540
        public_427526 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_42753a
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_427540
        public_42753a : nop
        cmp edi, dword ptr ds : [eax]
        jne public_427540
        mov dword ptr ds : [eax], ebx
        public_427540 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_4276ed
        mov edi, edi
        public_427550 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x58]
        test dl, dl
        jne public_4276ed
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_42762f
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x58], 0
        jne public_427591
        mov byte ptr ds : [ecx+0x58], 1
        mov byte ptr ds : [edx+0x58], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x58], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_4276e1
        public_427591 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_4275d0
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_4275aa
        mov dword ptr ds : [edx+4], eax
        public_4275aa : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4275bd
        mov dword ptr ds : [edx+4], ecx
        jmp public_4275cb
        public_4275bd : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4275c8
        mov dword ptr ds : [edx], ecx
        jmp public_4275cb
        public_4275c8 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4275cb : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_4275d0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x58], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x58], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_4275f9
        mov dword ptr ds : [edi+4], ecx
        public_4275f9 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_427612
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4276de
        public_427612 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_427625
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4276de
        public_427625 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4276de
        public_42762f : nop
        cmp byte ptr ds : [edx+0x58], 0
        jne public_427652
        mov byte ptr ds : [ecx+0x58], 1
        mov byte ptr ds : [edx+0x58], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x58], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_4276e1
        public_427652 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_427692
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_42766a
        mov dword ptr ds : [edx+4], eax
        public_42766a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_42767d
        mov dword ptr ds : [edx+4], ecx
        jmp public_42768c
        public_42767d : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_42768a
        mov dword ptr ds : [edx+8], ecx
        jmp public_42768c
        public_42768a : nop
        mov dword ptr ds : [edx], ecx
        public_42768c : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_427692 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x58], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x58], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_4276bb
        mov dword ptr ds : [edi+4], ecx
        public_4276bb : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4276ce
        mov dword ptr ds : [edi+4], edx
        jmp public_4276dc
        public_4276ce : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_4276d9
        mov dword ptr ds : [edi], edx
        jmp public_4276dc
        public_4276d9 : nop
        mov dword ptr ds : [edi+8], edx
        public_4276dc : nop
        mov dword ptr ds : [edx], ecx
        public_4276de : nop
        mov dword ptr ds : [ecx+4], edx
        public_4276e1 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_427550
        public_4276ed : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x58], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x4274b0)
    }
}

#undef public_427526
#undef public_42753a
#undef public_427540
#undef public_427550
#undef public_427591
#undef public_4275aa
#undef public_4275bd
#undef public_4275c8
#undef public_4275cb
#undef public_4275d0
#undef public_4275f9
#undef public_427612
#undef public_427625
#undef public_42762f
#undef public_427652
#undef public_42766a
#undef public_42767d
#undef public_42768a
#undef public_42768c
#undef public_427692
#undef public_4276bb
#undef public_4276ce
#undef public_4276d9
#undef public_4276dc
#undef public_4276de
#undef public_4276e1
#undef public_4276ed
