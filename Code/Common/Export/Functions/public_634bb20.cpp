#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bb20);

#define public_634bb3b _public_634bb3b
#define public_634bb4c _public_634bb4c
#define public_634bb5e _public_634bb5e
#define public_634bb7a _public_634bb7a
#define public_634bb84 _public_634bb84

PROC_DECLARE(0x634bb20, internal_634bb20, public_634bb20);
extern "C" NAKED register_t __cdecl internal_634bb20()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx+0xDA]
        push esi
        push edi
        dec eax
        js public_634bb84
        mov edx, dword ptr ds : [ecx+0xDC]
        mov esi, dword ptr ss : [esp+0xC]
        lea edx, ds:[edx+eax*4]
        public_634bb3b : nop
        cmp dword ptr ds : [edx], esi
        je public_634bb4c
        dec eax
        sub edx, 4
        test eax, eax
        jge public_634bb3b
        pop edi
        pop esi
        ret 4
        public_634bb4c : nop
        test eax, eax
        jl public_634bb84
        xor edx, edx
        mov dx, word ptr ds : [ecx+0xDA]
        dec edx
        cmp eax, edx
        jge public_634bb7a
        public_634bb5e : nop
        mov edx, dword ptr ds : [ecx+0xDC]
        mov edi, dword ptr ds : [edx+eax*4+4]
        mov dword ptr ds : [edx+eax*4], edi
        xor edx, edx
        mov dx, word ptr ds : [ecx+0xDA]
        inc eax
        dec edx
        cmp eax, edx
        jl public_634bb5e
        public_634bb7a : nop
        dec word ptr ds : [ecx+0xDA]
        and dword ptr ds : [esi], 0xFFFFFFCF
        public_634bb84 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634bb20)
    }
}

#undef public_634bb3b
#undef public_634bb4c
#undef public_634bb5e
#undef public_634bb7a
#undef public_634bb84
