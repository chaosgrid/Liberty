#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f8c330);

#define public_6f8c346 _public_6f8c346
#define public_6f8c354 _public_6f8c354
#define public_6f8c356 _public_6f8c356
#define public_6f8c360 _public_6f8c360
#define public_6f8c36f _public_6f8c36f
#define public_6f8c371 _public_6f8c371
#define public_6f8c380 _public_6f8c380
#define public_6f8c38e _public_6f8c38e
#define public_6f8c390 _public_6f8c390
#define public_6f8c3a0 _public_6f8c3a0
#define public_6f8c3ae _public_6f8c3ae
#define public_6f8c3b0 _public_6f8c3b0
#define public_6f8c3b9 _public_6f8c3b9

PROC_DECLARE(0x6f8c330, internal_6f8c330, public_6f8c330);
extern "C" NAKED register_t __cdecl internal_6f8c330()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x80]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0x7C]
        mov edx, esi
        cmp edx, eax
        je public_6f8c354
        mov ecx, 7
        public_6f8c346 : nop
        mov ebx, dword ptr ds : [edx]
        cmp dword ptr ds : [ebx+0x34], ecx
        je public_6f8c356
        add edx, 4
        cmp edx, eax
        jne public_6f8c346
        public_6f8c354 : nop
        mov edx, eax
        public_6f8c356 : nop
        cmp edx, eax
        jne public_6f8c3b9
        mov ecx, esi
        cmp ecx, eax
        je public_6f8c36f
        public_6f8c360 : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+0x34], 4
        je public_6f8c371
        add ecx, 4
        cmp ecx, eax
        jne public_6f8c360
        public_6f8c36f : nop
        mov ecx, eax
        public_6f8c371 : nop
        cmp ecx, eax
        jne public_6f8c3b9
        mov ecx, esi
        cmp ecx, eax
        je public_6f8c38e
        mov edx, 6
        public_6f8c380 : nop
        mov ebx, dword ptr ds : [ecx]
        cmp dword ptr ds : [ebx+0x34], edx
        je public_6f8c390
        add ecx, 4
        cmp ecx, eax
        jne public_6f8c380
        public_6f8c38e : nop
        mov ecx, eax
        public_6f8c390 : nop
        cmp ecx, eax
        jne public_6f8c3b9
        mov ecx, esi
        cmp ecx, eax
        je public_6f8c3ae
        mov edx, 5
        nop 
        public_6f8c3a0 : nop
        mov esi, dword ptr ds : [ecx]
        cmp dword ptr ds : [esi+0x34], edx
        je public_6f8c3b0
        add ecx, 4
        cmp ecx, eax
        jne public_6f8c3a0
        public_6f8c3ae : nop
        mov ecx, eax
        public_6f8c3b0 : nop
        cmp ecx, eax
        jne public_6f8c3b9
        pop esi
        xor al, al
        pop ebx
        ret 
        public_6f8c3b9 : nop
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f8c330)
    }
}

#undef public_6f8c346
#undef public_6f8c354
#undef public_6f8c356
#undef public_6f8c360
#undef public_6f8c36f
#undef public_6f8c371
#undef public_6f8c380
#undef public_6f8c38e
#undef public_6f8c390
#undef public_6f8c3a0
#undef public_6f8c3ae
#undef public_6f8c3b0
#undef public_6f8c3b9
