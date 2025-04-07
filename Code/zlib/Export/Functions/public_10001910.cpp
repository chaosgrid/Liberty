#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001910);

#define public_10001920 _public_10001920
#define public_100019d8 _public_100019d8
#define public_100019e3 _public_100019e3
#define public_100019ed _public_100019ed
#define public_100019ef _public_100019ef
#define public_100019f9 _public_100019f9
#define public_100019fb _public_100019fb
#define public_10001a05 _public_10001a05
#define public_10001a07 _public_10001a07
#define public_10001a11 _public_10001a11
#define public_10001a13 _public_10001a13
#define public_10001a1d _public_10001a1d
#define public_10001a1f _public_10001a1f
#define public_10001a29 _public_10001a29
#define public_10001a2b _public_10001a2b
#define public_10001a35 _public_10001a35
#define public_10001a37 _public_10001a37

PROC_DECLARE(0x10001910, internal_10001910, public_10001910);
extern "C" NAKED register_t __cdecl internal_10001910()
{
    __asm
    {
        push esi
        push ebx
        xor esi, esi
        xor eax, eax
        push edi
        jmp public_10001920
        lea esp, ss:[esp]
        public_10001920 : nop
        xor edx, edx
        mov dl, byte ptr ds : [eax+public_1000b070]
        xor ebx, ebx
        mov bl, byte ptr ds : [eax+public_1000b071]
        mov ecx, 0x1F
        mov edi, 1
        add eax, 7
        sub ecx, edx
        mov edx, 1
        shl edx, cl
        mov ecx, 0x1F
        sub ecx, ebx
        shl edi, cl
        xor ebx, ebx
        mov bl, byte ptr ds : [eax+public_1000b06b]
        mov ecx, 0x1F
        or edx, edi
        mov edi, 1
        sub ecx, ebx
        shl edi, cl
        xor ebx, ebx
        mov bl, byte ptr ds : [eax+public_1000b06c]
        mov ecx, 0x1F
        or edx, edi
        mov edi, 1
        sub ecx, ebx
        shl edi, cl
        xor ebx, ebx
        mov bl, byte ptr ds : [eax+public_1000b06d]
        mov ecx, 0x1F
        or edx, edi
        mov edi, 1
        sub ecx, ebx
        shl edi, cl
        xor ebx, ebx
        mov bl, byte ptr ds : [eax+public_1000b06f]
        mov ecx, 0x1F
        or edx, edi
        mov edi, 1
        sub ecx, ebx
        shl edi, cl
        xor ebx, ebx
        mov bl, byte ptr ds : [eax+public_1000b06e]
        mov ecx, 0x1F
        or edx, edi
        mov edi, 1
        sub ecx, ebx
        shl edi, cl
        or edx, edi
        or esi, edx
        cmp eax, 0xE
        jb public_10001920
        pop edi
        xor ecx, ecx
        pop ebx
        public_100019d8 : nop
        mov eax, ecx
        shr eax, 1
        test cl, 1
        je public_100019e3
        xor eax, esi
        public_100019e3 : nop
        test al, 1
        je public_100019ed
        shr eax, 1
        xor eax, esi
        jmp public_100019ef
        public_100019ed : nop
        shr eax, 1
        public_100019ef : nop
        test al, 1
        je public_100019f9
        shr eax, 1
        xor eax, esi
        jmp public_100019fb
        public_100019f9 : nop
        shr eax, 1
        public_100019fb : nop
        test al, 1
        je public_10001a05
        shr eax, 1
        xor eax, esi
        jmp public_10001a07
        public_10001a05 : nop
        shr eax, 1
        public_10001a07 : nop
        test al, 1
        je public_10001a11
        shr eax, 1
        xor eax, esi
        jmp public_10001a13
        public_10001a11 : nop
        shr eax, 1
        public_10001a13 : nop
        test al, 1
        je public_10001a1d
        shr eax, 1
        xor eax, esi
        jmp public_10001a1f
        public_10001a1d : nop
        shr eax, 1
        public_10001a1f : nop
        test al, 1
        je public_10001a29
        shr eax, 1
        xor eax, esi
        jmp public_10001a2b
        public_10001a29 : nop
        shr eax, 1
        public_10001a2b : nop
        test al, 1
        je public_10001a35
        shr eax, 1
        xor eax, esi
        jmp public_10001a37
        public_10001a35 : nop
        shr eax, 1
        public_10001a37 : nop
        mov dword ptr ds : [ecx*4+public_1000e1d8], eax
        inc ecx
        cmp ecx, 0x100
        jl public_100019d8
        mov dword ptr ds : [public_1000d000], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10001910)
    }
}

#undef public_10001920
#undef public_100019d8
#undef public_100019e3
#undef public_100019ed
#undef public_100019ef
#undef public_100019f9
#undef public_100019fb
#undef public_10001a05
#undef public_10001a07
#undef public_10001a11
#undef public_10001a13
#undef public_10001a1d
#undef public_10001a1f
#undef public_10001a29
#undef public_10001a2b
#undef public_10001a35
#undef public_10001a37
