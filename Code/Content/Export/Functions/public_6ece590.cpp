#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ece5c6 _public_6ece5c6
#define public_6ece5ce _public_6ece5ce
#define public_6ece5d9 _public_6ece5d9
#define public_6ece5e1 _public_6ece5e1
#define public_6ece5f0 _public_6ece5f0
#define public_6ece5fe _public_6ece5fe
#define public_6ece617 _public_6ece617
#define public_6ece62f _public_6ece62f
#define public_6ece637 _public_6ece637
#define public_6ece63f _public_6ece63f
#define public_6ece647 _public_6ece647
#define public_6ece64f _public_6ece64f
#define public_6ece65f _public_6ece65f
#define public_6ece667 _public_6ece667
#define public_6ece670 _public_6ece670
#define public_6ece67e _public_6ece67e
#define public_6ece690 _public_6ece690
#define public_6ece6a8 _public_6ece6a8
#define public_6ece6c2 _public_6ece6c2
#define public_6ece6da _public_6ece6da
#define public_6ece6ff _public_6ece6ff
#define public_6ece724 _public_6ece724

PROC_DECLARE(0x6ece590, internal_6ece590, public_6ece590);
extern "C" NAKED register_t __cdecl internal_6ece590()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+4]
        mov dl, byte ptr ds : [ecx+0xC]
        add eax, 0x2CC
        push ebx
        mov byte ptr ds : [eax], dl
        mov dl, byte ptr ds : [ecx+0xD]
        push esi
        mov byte ptr ds : [eax+1], dl
        mov edx, dword ptr ds : [ecx+0x10]
        lea ebx, ds:[ecx+0x14]
        lea esi, ds:[eax+8]
        cmp esi, ebx
        push edi
        mov dword ptr ds : [eax+4], edx
        je public_6ece724
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ece5c6
        xor edi, edi
        jmp public_6ece5ce
        public_6ece5c6 : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, eax
        sar edi, 2
        public_6ece5ce : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6ece5d9
        xor ecx, ecx
        jmp public_6ece5e1
        public_6ece5d9 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_6ece5e1 : nop
        cmp edi, ecx
        ja public_6ece62f
        mov ecx, dword ptr ds : [ebx+8]
        cmp eax, ecx
        je public_6ece5fe
        lea esp, ss:[esp]
        public_6ece5f0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6ece5f0
        public_6ece5fe : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ece617
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        lea ecx, ds:[eax+ebx*4]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6ece617 : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        mov eax, dword ptr ds : [esi+4]
        sar ebx, 2
        lea ecx, ds:[eax+ebx*4]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6ece62f : nop
        test eax, eax
        jne public_6ece637
        xor edi, edi
        jmp public_6ece63f
        public_6ece637 : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, eax
        sar edi, 2
        public_6ece63f : nop
        test edx, edx
        jne public_6ece647
        xor ecx, ecx
        jmp public_6ece64f
        public_6ece647 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6ece64f : nop
        cmp edi, ecx
        ja public_6ece6da
        test edx, edx
        jne public_6ece65f
        xor ecx, ecx
        jmp public_6ece667
        public_6ece65f : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_6ece667 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6ece67e
        mov edi, edi
        public_6ece670 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6ece670
        public_6ece67e : nop
        mov eax, dword ptr ds : [ebx+8]
        cmp ecx, eax
        push ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov edi, ecx
        je public_6ece6a8
        nop 
        public_6ece690 : nop
        push edi
        push ebp
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 4
        add esp, 8
        add ebp, 4
        cmp edi, eax
        jne public_6ece690
        public_6ece6a8 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        pop ebp
        jne public_6ece6c2
        mov edx, dword ptr ds : [esi+4]
        xor ebx, ebx
        lea eax, ds:[edx+ebx*4]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6ece6c2 : nop
        mov ebx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [esi+4]
        sub ebx, eax
        sar ebx, 2
        lea eax, ds:[edx+ebx*4]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6ece6da : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebx
        call public_6fa3db0
        test eax, eax
        jge public_6ece6ff
        xor eax, eax
        public_6ece6ff : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+8], eax
        public_6ece724 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ece590)
    }
}

#undef public_6ece5c6
#undef public_6ece5ce
#undef public_6ece5d9
#undef public_6ece5e1
#undef public_6ece5f0
#undef public_6ece5fe
#undef public_6ece617
#undef public_6ece62f
#undef public_6ece637
#undef public_6ece63f
#undef public_6ece647
#undef public_6ece64f
#undef public_6ece65f
#undef public_6ece667
#undef public_6ece670
#undef public_6ece67e
#undef public_6ece690
#undef public_6ece6a8
#undef public_6ece6c2
#undef public_6ece6da
#undef public_6ece6ff
#undef public_6ece724
