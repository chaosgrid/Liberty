#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa15f);
CLANG_FORWARD_PROC_SYMBOL(public_6efa2f8);
CLANG_FORWARD_PROC_SYMBOL(public_6efa342);
CLANG_FORWARD_PROC_SYMBOL(public_6efa375);
CLANG_FORWARD_PROC_SYMBOL(public_6efa39e);

#define public_6efa193 _public_6efa193
#define public_6efa1e6 _public_6efa1e6
#define public_6efa1f7 _public_6efa1f7
#define public_6efa209 _public_6efa209
#define public_6efa225 _public_6efa225
#define public_6efa22c _public_6efa22c
#define public_6efa246 _public_6efa246
#define public_6efa251 _public_6efa251
#define public_6efa258 _public_6efa258
#define public_6efa292 _public_6efa292
#define public_6efa29e _public_6efa29e
#define public_6efa2a1 _public_6efa2a1
#define public_6efa2c8 _public_6efa2c8
#define public_6efa2ce _public_6efa2ce
#define public_6efa2da _public_6efa2da
#define public_6efa2e2 _public_6efa2e2
#define public_6efa2e7 _public_6efa2e7
#define public_6efa2ec _public_6efa2ec
#define public_6efa2f0 _public_6efa2f0
#define public_6efa2f3 _public_6efa2f3

PROC_DECLARE(0x6efa15f, internal_6efa15f, public_6efa15f);
extern "C" NAKED register_t __cdecl internal_6efa15f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        push dword ptr ss : [ebp+8]
        call public_6efa2f8
        mov esi, eax
        pop ecx
        cmp esi, dword ptr ds : [public_6f012d8]
        mov dword ptr ss : [ebp+8], esi
        je public_6efa2ec
        xor ebx, ebx
        cmp esi, ebx
        je public_6efa2e2
        xor edx, edx
        mov eax, offset public_6f00ae8
        public_6efa193 : nop
        cmp dword ptr ds : [eax], esi
        je public_6efa209
        add eax, 0x30
        inc edx
        cmp eax, offset public_6f00bd8
        jl public_6efa193
        lea eax, ss:[ebp-0x18]
        push eax
        push esi
        call dword ptr ds : [public_6efc02c]
        cmp eax, 1
        jne public_6efa2da
        push 0x40
        xor eax, eax
        pop ecx
        mov edi, offset public_6f01400
        cmp dword ptr ss : [ebp-0x18], 1
        mov dword ptr ds : [public_6f012d8], esi
        rep stosd
        stosb 
        mov dword ptr ds : [public_6f01504], ebx
        jbe public_6efa2c8
        cmp byte ptr ss : [ebp-0x12], 0
        je public_6efa29e
        lea ecx, ss:[ebp-0x11]
        public_6efa1e6 : nop
        mov dl, byte ptr ds : [ecx]
        test dl, dl
        je public_6efa29e
        movzx eax, byte ptr ds : [ecx-1]
        movzx edx, dl
        public_6efa1f7 : nop
        cmp eax, edx
        ja public_6efa292
        or byte ptr ds : [eax+public_6f01401], 4
        inc eax
        jmp public_6efa1f7
        public_6efa209 : nop
        push 0x40
        xor eax, eax
        pop ecx
        mov edi, offset public_6f01400
        rep stosd
        lea esi, ds:[edx+edx*2]
        mov dword ptr ss : [ebp-4], ebx
        shl esi, 4
        stosb 
        lea ebx, ds : [esi+public_6f00af8]
        public_6efa225 : nop
        cmp byte ptr ds : [ebx], 0
        mov ecx, ebx
        je public_6efa258
        public_6efa22c : nop
        mov dl, byte ptr ds : [ecx+1]
        test dl, dl
        je public_6efa258
        movzx eax, byte ptr ds : [ecx]
        movzx edi, dl
        cmp eax, edi
        ja public_6efa251
        mov edx, dword ptr ss : [ebp-4]
        mov dl, byte ptr ds : [edx+public_6f00ae0]
        public_6efa246 : nop
        or byte ptr ds : [eax+public_6f01401], dl
        inc eax
        cmp eax, edi
        jbe public_6efa246
        public_6efa251 : nop
        inc ecx
        inc ecx
        cmp byte ptr ds : [ecx], 0
        jne public_6efa22c
        public_6efa258 : nop
        inc dword ptr ss : [ebp-4]
        add ebx, 8
        cmp dword ptr ss : [ebp-4], 4
        jb public_6efa225
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [public_6f012ec], 1
        push eax
        mov dword ptr ds : [public_6f012d8], eax
        call public_6efa342
        lea esi, ds : [esi+public_6f00aec]
        mov edi, offset public_6f012e0
        movsd 
        movsd 
        pop ecx
        mov dword ptr ds : [public_6f01504], eax
        movsd 
        jmp public_6efa2e7
        public_6efa292 : nop
        inc ecx
        inc ecx
        cmp byte ptr ds : [ecx-1], 0
        jne public_6efa1e6
        public_6efa29e : nop
        push 1
        pop eax
        public_6efa2a1 : nop
        or byte ptr ds : [eax+public_6f01401], 8
        inc eax
        cmp eax, 0xFF
        jb public_6efa2a1
        push esi
        call public_6efa342
        pop ecx
        mov dword ptr ds : [public_6f01504], eax
        mov dword ptr ds : [public_6f012ec], 1
        jmp public_6efa2ce
        public_6efa2c8 : nop
        mov dword ptr ds : [public_6f012ec], ebx
        public_6efa2ce : nop
        xor eax, eax
        mov edi, offset public_6f012e0
        stosd 
        stosd 
        stosd 
        jmp public_6efa2e7
        public_6efa2da : nop
        cmp dword ptr ds : [public_6f01284], ebx
        je public_6efa2f0
        public_6efa2e2 : nop
        call public_6efa375
        public_6efa2e7 : nop
        call public_6efa39e
        public_6efa2ec : nop
        xor eax, eax
        jmp public_6efa2f3
        public_6efa2f0 : nop
        or eax, 0xFFFFFFFF
        public_6efa2f3 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6efa15f)
    }
}

#undef public_6efa193
#undef public_6efa1e6
#undef public_6efa1f7
#undef public_6efa209
#undef public_6efa225
#undef public_6efa22c
#undef public_6efa246
#undef public_6efa251
#undef public_6efa258
#undef public_6efa292
#undef public_6efa29e
#undef public_6efa2a1
#undef public_6efa2c8
#undef public_6efa2ce
#undef public_6efa2da
#undef public_6efa2e2
#undef public_6efa2e7
#undef public_6efa2ec
#undef public_6efa2f0
#undef public_6efa2f3
