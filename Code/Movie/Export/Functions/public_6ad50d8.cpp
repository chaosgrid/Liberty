#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad50d8);

#define public_6ad510c _public_6ad510c
#define public_6ad5115 _public_6ad5115
#define public_6ad511d _public_6ad511d
#define public_6ad5126 _public_6ad5126
#define public_6ad512d _public_6ad512d
#define public_6ad5139 _public_6ad5139
#define public_6ad5142 _public_6ad5142
#define public_6ad5150 _public_6ad5150
#define public_6ad515c _public_6ad515c
#define public_6ad5163 _public_6ad5163
#define public_6ad5168 _public_6ad5168
#define public_6ad5170 _public_6ad5170
#define public_6ad5173 _public_6ad5173
#define public_6ad518b _public_6ad518b
#define public_6ad5194 _public_6ad5194
#define public_6ad51a5 _public_6ad51a5
#define public_6ad51ae _public_6ad51ae
#define public_6ad51b5 _public_6ad51b5
#define public_6ad51c5 _public_6ad51c5
#define public_6ad51cc _public_6ad51cc
#define public_6ad51dd _public_6ad51dd
#define public_6ad51e6 _public_6ad51e6
#define public_6ad51eb _public_6ad51eb
#define public_6ad51f5 _public_6ad51f5
#define public_6ad51f7 _public_6ad51f7

PROC_DECLARE(0x6ad50d8, internal_6ad50d8, public_6ad50d8);
extern "C" NAKED register_t __cdecl internal_6ad50d8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+4]
        push edi
        mov edi, dword ptr ds : [ecx]
        lea ebx, ds:[ecx+0xF8]
        cmp esi, edx
        mov dword ptr ss : [ebp-4], edi
        mov eax, edi
        mov dword ptr ss : [ebp+8], ebx
        jb public_6ad511d
        lea eax, ds:[edi+edx]
        mov byte ptr ds : [edi], dl
        cmp eax, ebx
        jae public_6ad510c
        add dword ptr ds : [ecx], edx
        sub dword ptr ds : [ecx+4], edx
        jmp public_6ad5115
        public_6ad510c : nop
        and dword ptr ds : [ecx+4], 0
        lea eax, ds:[ecx+8]
        mov dword ptr ds : [ecx], eax
        public_6ad5115 : nop
        lea eax, ds:[edi+8]
        jmp public_6ad51eb
        public_6ad511d : nop
        add esi, edi
        cmp byte ptr ds : [esi], 0
        je public_6ad5126
        mov eax, esi
        public_6ad5126 : nop
        lea esi, ds:[eax+edx]
        cmp esi, ebx
        jae public_6ad5170
        public_6ad512d : nop
        mov bl, byte ptr ds : [eax]
        test bl, bl
        jne public_6ad5163
        push 1
        lea ebx, ds:[eax+1]
        pop esi
        public_6ad5139 : nop
        cmp byte ptr ds : [ebx], 0
        jne public_6ad5142
        inc ebx
        inc esi
        jmp public_6ad5139
        public_6ad5142 : nop
        cmp esi, edx
        jae public_6ad5194
        cmp eax, dword ptr ss : [ebp-4]
        jne public_6ad5150
        mov dword ptr ds : [ecx+4], esi
        jmp public_6ad515c
        public_6ad5150 : nop
        sub dword ptr ss : [ebp+0xC], esi
        cmp dword ptr ss : [ebp+0xC], edx
        jb public_6ad51f5
        public_6ad515c : nop
        mov edi, dword ptr ss : [ebp-4]
        mov eax, ebx
        jmp public_6ad5168
        public_6ad5163 : nop
        movzx esi, bl
        add eax, esi
        public_6ad5168 : nop
        lea esi, ds:[eax+edx]
        cmp esi, dword ptr ss : [ebp+8]
        jb public_6ad512d
        public_6ad5170 : nop
        lea esi, ds:[ecx+8]
        public_6ad5173 : nop
        cmp esi, edi
        jae public_6ad51f5
        lea eax, ds:[esi+edx]
        cmp eax, dword ptr ss : [ebp+8]
        jae public_6ad51f5
        mov al, byte ptr ds : [esi]
        test al, al
        jne public_6ad51c5
        push 1
        lea ebx, ds:[esi+1]
        pop eax
        public_6ad518b : nop
        cmp byte ptr ds : [ebx], 0
        jne public_6ad51b5
        inc ebx
        inc eax
        jmp public_6ad518b
        public_6ad5194 : nop
        lea ebx, ds:[eax+edx]
        cmp ebx, dword ptr ss : [ebp+8]
        jae public_6ad51a5
        sub esi, edx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], esi
        jmp public_6ad51ae
        public_6ad51a5 : nop
        and dword ptr ds : [ecx+4], 0
        lea esi, ds:[ecx+8]
        mov dword ptr ds : [ecx], esi
        public_6ad51ae : nop
        mov byte ptr ds : [eax], dl
        add eax, 8
        jmp public_6ad51eb
        public_6ad51b5 : nop
        cmp eax, edx
        jae public_6ad51cc
        sub dword ptr ss : [ebp+0xC], eax
        cmp dword ptr ss : [ebp+0xC], edx
        jb public_6ad51f5
        mov esi, ebx
        jmp public_6ad5173
        public_6ad51c5 : nop
        movzx eax, al
        add esi, eax
        jmp public_6ad5173
        public_6ad51cc : nop
        lea ebx, ds:[esi+edx]
        cmp ebx, dword ptr ss : [ebp+8]
        jae public_6ad51dd
        sub eax, edx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ad51e6
        public_6ad51dd : nop
        and dword ptr ds : [ecx+4], 0
        lea eax, ds:[ecx+8]
        mov dword ptr ds : [ecx], eax
        public_6ad51e6 : nop
        mov byte ptr ds : [esi], dl
        lea eax, ds:[esi+8]
        public_6ad51eb : nop
        imul ecx, 0xF
        shl eax, 4
        sub eax, ecx
        jmp public_6ad51f7
        public_6ad51f5 : nop
        xor eax, eax
        public_6ad51f7 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad50d8)
    }
}

#undef public_6ad510c
#undef public_6ad5115
#undef public_6ad511d
#undef public_6ad5126
#undef public_6ad512d
#undef public_6ad5139
#undef public_6ad5142
#undef public_6ad5150
#undef public_6ad515c
#undef public_6ad5163
#undef public_6ad5168
#undef public_6ad5170
#undef public_6ad5173
#undef public_6ad518b
#undef public_6ad5194
#undef public_6ad51a5
#undef public_6ad51ae
#undef public_6ad51b5
#undef public_6ad51c5
#undef public_6ad51cc
#undef public_6ad51dd
#undef public_6ad51e6
#undef public_6ad51eb
#undef public_6ad51f5
#undef public_6ad51f7
