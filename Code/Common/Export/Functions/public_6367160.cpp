#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367160);

#define public_636716a _public_636716a
#define public_636719a _public_636719a
#define public_63671a2 _public_63671a2
#define public_63671c4 _public_63671c4
#define public_63671cc _public_63671cc
#define public_63671d5 _public_63671d5
#define public_63671f7 _public_63671f7
#define public_63671ff _public_63671ff

PROC_DECLARE(0x6367160, internal_6367160, public_6367160);
extern "C" NAKED register_t __cdecl internal_6367160()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x3C]
        xor eax, eax
        test edx, edx
        push esi
        jle public_636719a
        public_636716a : nop
        mov esi, dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+eax*4]
        mov edx, dword ptr ds : [ecx+0x24]
        lea edx, ds:[edx+eax*4]
        fadd dword ptr ds : [edx]
        fstp dword ptr ds : [edx]
        mov esi, dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [esi+eax*4]
        lea edx, ds:[edx+eax*4]
        inc eax
        fadd dword ptr ds : [edx]
        fstp dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx+0x3C]
        cmp eax, edx
        jl public_636716a
        public_636719a : nop
        mov edx, dword ptr ds : [ecx+0x44]
        cmp edx, dword ptr ds : [ecx+0x4C]
        jge public_63671cc
        public_63671a2 : nop
        mov eax, dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ds : [eax+edx*4]
        mov esi, dword ptr ds : [ecx+0x24]
        fld dword ptr ds : [esi+eax*4]
        lea esi, ds:[esi+eax*4]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63671c4
        mov dword ptr ds : [esi], 0
        public_63671c4 : nop
        mov eax, dword ptr ds : [ecx+0x4C]
        inc edx
        cmp edx, eax
        jl public_63671a2
        public_63671cc : nop
        mov eax, dword ptr ds : [ecx+0x44]
        xor esi, esi
        test eax, eax
        jle public_63671ff
        public_63671d5 : nop
        mov edx, dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ds : [edx+esi*4]
        mov edx, dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [edx+eax*4]
        lea edx, ds:[edx+eax*4]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63671f7
        mov dword ptr ds : [edx], 0
        public_63671f7 : nop
        mov eax, dword ptr ds : [ecx+0x44]
        inc esi
        cmp esi, eax
        jl public_63671d5
        public_63671ff : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6367160)
    }
}

#undef public_636716a
#undef public_636719a
#undef public_63671a2
#undef public_63671c4
#undef public_63671cc
#undef public_63671d5
#undef public_63671f7
#undef public_63671ff
