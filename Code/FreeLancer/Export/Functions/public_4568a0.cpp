#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4568a0);

#define public_4568b0 _public_4568b0
#define public_4568c1 _public_4568c1
#define public_4568ca _public_4568ca
#define public_4568cc _public_4568cc

PROC_DECLARE(0x4568a0, internal_4568a0, public_4568a0);
extern "C" NAKED register_t __cdecl internal_4568a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, esi
        mov al, 1
        je public_4568cc
        lea ecx, ds:[ecx]
        public_4568b0 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [edx+6]
        test bl, bl
        je public_4568c1
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        je public_4568ca
        public_4568c1 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, esi
        jne public_4568b0
        pop esi
        pop ebx
        ret 
        public_4568ca : nop
        xor al, al
        public_4568cc : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4568a0)
    }
}

#undef public_4568b0
#undef public_4568c1
#undef public_4568ca
#undef public_4568cc
