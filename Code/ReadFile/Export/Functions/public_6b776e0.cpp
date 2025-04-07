#include "ReadFile-PCH.h"


#define public_6b776fd _public_6b776fd
#define public_6b7770c _public_6b7770c
#define public_6b7772d _public_6b7772d
#define public_6b77757 _public_6b77757
#define public_6b7775a _public_6b7775a
#define public_6b77760 _public_6b77760
#define public_6b77785 _public_6b77785
#define public_6b7778d _public_6b7778d
#define public_6b7778f _public_6b7778f
#define public_6b777a0 _public_6b777a0
#define public_6b777a8 _public_6b777a8
#define public_6b777b6 _public_6b777b6
#define public_6b777b7 _public_6b777b7
#define public_6b777bd _public_6b777bd
#define public_6b777e0 _public_6b777e0

PROC_DECLARE(0x6b776e0, internal_6b776e0, public_6b776e0);
extern "C" NAKED register_t __cdecl internal_6b776e0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        test ebx, ebx
        mov dword ptr ss : [esp+0xC], 1
        jg public_6b776fd
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x10
        public_6b776fd : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ss : [ebp]
        cmp al, 0x5C
        je public_6b7770c
        cmp al, 0x2F
        jne public_6b7772d
        public_6b7770c : nop
        mov esi, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ds : [esi+ebx-1], 0
        mov eax, 1
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
        public_6b7772d : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        add eax, 0x20
        push ebx
        push eax
        push esi
        call dword ptr ds : [public_6b79074]
        mov al, byte ptr ss : [ebp]
        add esp, 0xC
        cmp al, 0x2E
        jne public_6b777bd
        mov al, byte ptr ss : [ebp+1]
        cmp al, 0x5C
        je public_6b77757
        cmp al, 0x2F
        jne public_6b7775a
        public_6b77757 : nop
        add ebp, 2
        public_6b7775a : nop
        cmp byte ptr ss : [ebp], 0x2E
        jne public_6b777bd
        public_6b77760 : nop
        cmp byte ptr ss : [ebp+1], 0x2E
        jne public_6b777bd
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 2
        jle public_6b777a0
        mov byte ptr ds : [ecx+esi-1], al
        mov al, byte ptr ds : [esi]
        xor edx, edx
        mov ecx, esi
        test al, al
        je public_6b777a0
        public_6b77785 : nop
        cmp al, 0x5C
        je public_6b7778d
        cmp al, 0x2F
        jne public_6b7778f
        public_6b7778d : nop
        mov edx, ecx
        public_6b7778f : nop
        mov al, byte ptr ds : [ecx+1]
        inc ecx
        test al, al
        jne public_6b77785
        test edx, edx
        je public_6b777a0
        mov byte ptr ds : [edx+1], al
        jmp public_6b777a8
        public_6b777a0 : nop
        mov dword ptr ss : [esp+0x10], 0
        public_6b777a8 : nop
        mov al, byte ptr ss : [ebp+2]
        add ebp, 2
        cmp al, 0x5C
        je public_6b777b6
        cmp al, 0x2F
        jne public_6b777b7
        public_6b777b6 : nop
        inc ebp
        public_6b777b7 : nop
        cmp byte ptr ss : [ebp], 0x2E
        je public_6b77760
        public_6b777bd : nop
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov eax, ebx
        sub eax, ecx
        pop edi
        test eax, eax
        jle public_6b777e0
        push eax
        add ecx, esi
        push ebp
        push ecx
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        public_6b777e0 : nop
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6b776e0)
    }
}

#undef public_6b776fd
#undef public_6b7770c
#undef public_6b7772d
#undef public_6b77757
#undef public_6b7775a
#undef public_6b77760
#undef public_6b77785
#undef public_6b7778d
#undef public_6b7778f
#undef public_6b777a0
#undef public_6b777a8
#undef public_6b777b6
#undef public_6b777b7
#undef public_6b777bd
#undef public_6b777e0
