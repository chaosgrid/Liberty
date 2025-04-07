#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_449c90);

#define public_449ca1 _public_449ca1
#define public_449caf _public_449caf
#define public_449cbe _public_449cbe
#define public_449cca _public_449cca

PROC_DECLARE(0x449c90, internal_449c90, public_449c90);
extern "C" NAKED register_t __cdecl internal_449c90()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        xor eax, eax
        xor edx, edx
        lea edi, ds:[ecx+0x518]
        public_449ca1 : nop
        mov esi, dword ptr ds : [edi]
        test esi, esi
        je public_449caf
        cmp dword ptr ds : [esi+0x154], ebx
        je public_449cbe
        public_449caf : nop
        inc edx
        add edi, 4
        cmp edx, 0x40
        jl public_449ca1
        pop edi
        pop esi
        pop ebx
        ret 4
        public_449cbe : nop
        cmp edx, 0xFFFFFFFF
        je public_449cca
        mov eax, dword ptr ds : [ecx+edx*4+0x518]
        public_449cca : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x449c90)
    }
}

#undef public_449ca1
#undef public_449caf
#undef public_449cbe
#undef public_449cca
