#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b75420);

#define public_6b7542d _public_6b7542d
#define public_6b75434 _public_6b75434
#define public_6b7544c _public_6b7544c
#define public_6b7546b _public_6b7546b
#define public_6b75480 _public_6b75480
#define public_6b75494 _public_6b75494
#define public_6b754a8 _public_6b754a8
#define public_6b754ac _public_6b754ac
#define public_6b754c1 _public_6b754c1
#define public_6b754c4 _public_6b754c4
#define public_6b754c8 _public_6b754c8
#define public_6b754dd _public_6b754dd
#define public_6b754f4 _public_6b754f4
#define public_6b75505 _public_6b75505
#define public_6b7550a _public_6b7550a
#define public_6b75518 _public_6b75518
#define public_6b75529 _public_6b75529
#define public_6b7552d _public_6b7552d
#define public_6b75553 _public_6b75553

PROC_DECLARE(0x6b75420, internal_6b75420, public_6b75420);
extern "C" NAKED register_t __cdecl internal_6b75420()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        cmp ebp, 2
        push edi
        jg public_6b75434
        public_6b7542d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6b75434 : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [edi]
        test al, al
        je public_6b7546b
        cmp al, 0x5C
        je public_6b7544c
        cmp al, 0x2F
        je public_6b7544c
        cmp byte ptr ds : [edi+1], 0x3A
        jne public_6b7546b
        public_6b7544c : nop
        mov esi, dword ptr ss : [esp+0x1C]
        push ebp
        push edi
        push esi
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ds : [esi+ebp-1], 0
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6b7546b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x1C]
        xor esi, esi
        mov al, byte ptr ds : [ecx]
        test al, al
        je public_6b75494
        mov edx, ebx
        dec ebp
        sub edx, ecx
        public_6b75480 : nop
        cmp esi, ebp
        jge public_6b7542d
        mov byte ptr ds : [edx+ecx], al
        mov al, byte ptr ds : [ecx+1]
        inc esi
        inc ecx
        test al, al
        jne public_6b75480
        mov ebp, dword ptr ss : [esp+0x20]
        public_6b75494 : nop
        lea eax, ds:[esi+ebx]
        cmp eax, ebx
        je public_6b754a8
        mov cl, byte ptr ds : [eax-1]
        cmp cl, 0x5C
        je public_6b754ac
        cmp cl, 0x2F
        je public_6b754ac
        public_6b754a8 : nop
        mov byte ptr ds : [eax], 0x5C
        inc eax
        public_6b754ac : nop
        mov cl, byte ptr ds : [edi]
        mov dl, 0x2E
        cmp cl, dl
        jne public_6b75518
        mov cl, byte ptr ds : [edi+1]
        cmp cl, 0x5C
        je public_6b754c1
        cmp cl, 0x2F
        jne public_6b754c4
        public_6b754c1 : nop
        add edi, 2
        public_6b754c4 : nop
        cmp byte ptr ds : [edi], dl
        jne public_6b75518
        public_6b754c8 : nop
        cmp byte ptr ds : [edi+1], dl
        jne public_6b75518
        mov ecx, eax
        sub ecx, ebx
        cmp ecx, 2
        jle public_6b7542d
        sub eax, 2
        public_6b754dd : nop
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x5C
        je public_6b754f4
        cmp cl, 0x2F
        je public_6b754f4
        cmp eax, ebx
        je public_6b7542d
        dec eax
        jmp public_6b754dd
        public_6b754f4 : nop
        mov cl, byte ptr ds : [edi+2]
        cmp cl, 0x5C
        je public_6b75505
        cmp cl, 0x2F
        je public_6b75505
        xor ecx, ecx
        jmp public_6b7550a
        public_6b75505 : nop
        mov ecx, 1
        public_6b7550a : nop
        and ecx, 0xFF
        lea edi, ds:[edi+ecx+2]
        cmp byte ptr ds : [edi], dl
        je public_6b754c8
        public_6b75518 : nop
        cmp eax, ebx
        je public_6b75529
        mov cl, byte ptr ds : [eax-1]
        cmp cl, 0x5C
        je public_6b7552d
        cmp cl, 0x2F
        je public_6b7552d
        public_6b75529 : nop
        mov byte ptr ds : [eax], 0x5C
        inc eax
        public_6b7552d : nop
        mov ecx, ebx
        sub ecx, eax
        add ecx, ebp
        cmp ecx, 1
        jle public_6b75553
        push ecx
        push edi
        push eax
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ds : [ebx+ebp-1], 0
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6b75553 : nop
        pop edi
        pop esi
        mov byte ptr ds : [eax], 0
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b75420)
    }
}

#undef public_6b7542d
#undef public_6b75434
#undef public_6b7544c
#undef public_6b7546b
#undef public_6b75480
#undef public_6b75494
#undef public_6b754a8
#undef public_6b754ac
#undef public_6b754c1
#undef public_6b754c4
#undef public_6b754c8
#undef public_6b754dd
#undef public_6b754f4
#undef public_6b75505
#undef public_6b7550a
#undef public_6b75518
#undef public_6b75529
#undef public_6b7552d
#undef public_6b75553
