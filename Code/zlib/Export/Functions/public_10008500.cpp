#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10008500);

#define public_10008503 _public_10008503
#define public_10008516 _public_10008516
#define public_10008520 _public_10008520
#define public_1000852e _public_1000852e
#define public_10008535 _public_10008535
#define public_1000853b _public_1000853b

PROC_DECLARE(0x10008500, internal_10008500, public_10008500);
extern "C" NAKED register_t __cdecl internal_10008500()
{
    __asm
    {
        push esi
        mov esi, eax
        public_10008503 : nop
        mov cl, byte ptr ds : [edx]
        mov al, byte ptr ds : [esi]
        inc edx
        inc esi
        cmp cl, 0x61
        jl public_10008516
        cmp cl, 0x7A
        jg public_10008516
        add cl, 0xE0
        public_10008516 : nop
        cmp al, 0x61
        jl public_10008520
        cmp al, 0x7A
        jg public_10008520
        add al, 0xE0
        public_10008520 : nop
        test cl, cl
        je public_10008535
        test al, al
        je public_1000852e
        cmp cl, al
        jl public_1000853b
        jle public_10008503
        public_1000852e : nop
        mov eax, 1
        pop esi
        ret 
        public_10008535 : nop
        neg al
        pop esi
        sbb eax, eax
        ret 
        public_1000853b : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10008500)
    }
}

#undef public_10008503
#undef public_10008516
#undef public_10008520
#undef public_1000852e
#undef public_10008535
#undef public_1000853b
