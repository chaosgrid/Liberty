#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272a00);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626c7ba _public_626c7ba
#define public_626c7c2 _public_626c7c2
#define public_626c7cd _public_626c7cd
#define public_626c7d5 _public_626c7d5
#define public_626c7e0 _public_626c7e0
#define public_626c7ee _public_626c7ee
#define public_626c80a _public_626c80a
#define public_626c825 _public_626c825
#define public_626c82d _public_626c82d
#define public_626c835 _public_626c835
#define public_626c83d _public_626c83d
#define public_626c845 _public_626c845
#define public_626c855 _public_626c855
#define public_626c85d _public_626c85d
#define public_626c864 _public_626c864
#define public_626c872 _public_626c872
#define public_626c882 _public_626c882
#define public_626c89a _public_626c89a
#define public_626c8b8 _public_626c8b8
#define public_626c8d5 _public_626c8d5
#define public_626c8e9 _public_626c8e9
#define public_626c8f1 _public_626c8f1
#define public_626c8f7 _public_626c8f7
#define public_626c920 _public_626c920

PROC_DECLARE(0x626c780, internal_626c780, public_626c780);
extern "C" NAKED register_t __cdecl internal_626c780()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [ebx], eax
        mov cx, word ptr ds : [edi+4]
        mov word ptr ds : [ebx+4], cx
        mov edx, dword ptr ds : [edi+8]
        add edi, 0xC
        lea ebp, ds:[ebx+0xC]
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx+8], edx
        je public_626c920
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_626c7ba
        xor esi, esi
        jmp public_626c7c2
        public_626c7ba : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_626c7c2 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_626c7cd
        xor ecx, ecx
        jmp public_626c7d5
        public_626c7cd : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_626c7d5 : nop
        cmp esi, ecx
        ja public_626c825
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_626c7ee
        public_626c7e0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_626c7e0
        public_626c7ee : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_626c80a
        mov eax, dword ptr ss : [ebp+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_626c80a : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ss : [ebp+4]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_626c825 : nop
        test eax, eax
        jne public_626c82d
        xor esi, esi
        jmp public_626c835
        public_626c82d : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_626c835 : nop
        test edx, edx
        jne public_626c83d
        xor ecx, ecx
        jmp public_626c845
        public_626c83d : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        sar ecx, 2
        public_626c845 : nop
        cmp esi, ecx
        ja public_626c8d5
        test edx, edx
        jne public_626c855
        xor ecx, ecx
        jmp public_626c85d
        public_626c855 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_626c85d : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_626c872
        public_626c864 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_626c864
        public_626c872 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x18], eax
        mov esi, ecx
        je public_626c89a
        public_626c882 : nop
        push esi
        push ebx
        call public_630cd00
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, eax
        jne public_626c882
        public_626c89a : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_626c8b8
        mov edx, dword ptr ss : [ebp+4]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_626c8b8 : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [ebp+4]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_626c8d5 : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_626c8e9
        xor eax, eax
        jmp public_626c8f1
        public_626c8e9 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_626c8f1 : nop
        test eax, eax
        jge public_626c8f7
        xor eax, eax
        public_626c8f7 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call public_6272a00
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        public_626c920 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x626c780)
    }
}

#undef public_626c7ba
#undef public_626c7c2
#undef public_626c7cd
#undef public_626c7d5
#undef public_626c7e0
#undef public_626c7ee
#undef public_626c80a
#undef public_626c825
#undef public_626c82d
#undef public_626c835
#undef public_626c83d
#undef public_626c845
#undef public_626c855
#undef public_626c85d
#undef public_626c864
#undef public_626c872
#undef public_626c882
#undef public_626c89a
#undef public_626c8b8
#undef public_626c8d5
#undef public_626c8e9
#undef public_626c8f1
#undef public_626c8f7
#undef public_626c920
