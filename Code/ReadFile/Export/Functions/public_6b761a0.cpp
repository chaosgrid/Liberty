#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b761a0);

#define public_6b761ac _public_6b761ac
#define public_6b761b5 _public_6b761b5
#define public_6b761cb _public_6b761cb
#define public_6b761d4 _public_6b761d4
#define public_6b761e7 _public_6b761e7
#define public_6b761fd _public_6b761fd
#define public_6b76206 _public_6b76206
#define public_6b76208 _public_6b76208
#define public_6b7620b _public_6b7620b

PROC_DECLARE(0x6b761a0, internal_6b761a0, public_6b761a0);
extern "C" NAKED register_t __cdecl internal_6b761a0()
{
    __asm
    {
        push esi
        push edi
        mov edi, edx
        mov esi, ecx
        mov al, byte ptr ds : [edi]
        cmp al, 0x2A
        je public_6b761d4
        public_6b761ac : nop
        test al, al
        jne public_6b761fd
        cmp byte ptr ds : [esi], 0
        je public_6b7620b
        public_6b761b5 : nop
        movsx ecx, byte ptr ds : [esi]
        movsx edx, al
        mov al, byte ptr ds : [edx+public_6b7a0d8]
        mov dl, byte ptr ds : [ecx+public_6b7a0d8]
        cmp al, dl
        jne public_6b76206
        public_6b761cb : nop
        mov al, byte ptr ds : [edi+1]
        inc edi
        inc esi
        cmp al, 0x2A
        jne public_6b761ac
        public_6b761d4 : nop
        inc edi
        mov ecx, esi
        mov edx, edi
        call public_6b761a0
        test eax, eax
        jne public_6b76208
        cmp byte ptr ds : [esi], 0
        je public_6b76208
        public_6b761e7 : nop
        inc esi
        mov edx, edi
        mov ecx, esi
        call public_6b761a0
        test eax, eax
        jne public_6b76208
        cmp byte ptr ds : [esi], 0
        jne public_6b761e7
        pop edi
        pop esi
        ret 
        public_6b761fd : nop
        cmp al, 0x3F
        jne public_6b761b5
        cmp byte ptr ds : [esi], 0
        jne public_6b761cb
        public_6b76206 : nop
        xor eax, eax
        public_6b76208 : nop
        pop edi
        pop esi
        ret 
        public_6b7620b : nop
        pop edi
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b761a0)
    }
}

#undef public_6b761ac
#undef public_6b761b5
#undef public_6b761cb
#undef public_6b761d4
#undef public_6b761e7
#undef public_6b761fd
#undef public_6b76206
#undef public_6b76208
#undef public_6b7620b
