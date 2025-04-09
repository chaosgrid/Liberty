#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aaca0);

#define public_5aacb5 _public_5aacb5
#define public_5aacb7 _public_5aacb7
#define public_5aacc0 _public_5aacc0
#define public_5aacc6 _public_5aacc6

PROC_DECLARE(0x5aaca0, internal_5aaca0, public_5aaca0);
extern "C" NAKED register_t __cdecl internal_5aaca0()
{
    __asm
    {
        xor eax, eax
        xor edx, edx
        test eax, eax
        push esi
        mov esi, dword ptr ss : [esp+8]
        jne public_5aacb5
        mov eax, dword ptr ds : [ecx+0x1B8]
        jmp public_5aacb7
        public_5aacb5 : nop
        mov eax, dword ptr ds : [eax]
        public_5aacb7 : nop
        cmp edx, esi
        je public_5aacc6
        inc edx
        test eax, eax
        jne public_5aacb5
        public_5aacc0 : nop
        xor eax, eax
        pop esi
        ret 4
        public_5aacc6 : nop
        test eax, eax
        je public_5aacc0
        mov eax, dword ptr ds : [eax+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5aaca0)
    }
}

#undef public_5aacb5
#undef public_5aacb7
#undef public_5aacc0
#undef public_5aacc6
