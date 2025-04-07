#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11130);

#define public_6f119af _public_6f119af
#define public_6f119d6 _public_6f119d6
#define public_6f119d9 _public_6f119d9

PROC_DECLARE(0x6f119a0, internal_6f119a0, public_6f119a0);
extern "C" NAKED register_t __cdecl internal_6f119a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6f119af
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6f119af : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f119d9
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6f119d6
        mov ecx, esi
        call public_6f11130
        push esi
        call dword ptr ds : [public_6f12024]
        add esp, 4
        public_6f119d6 : nop
        xor eax, eax
        pop esi
        public_6f119d9 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f119a0)
    }
}

#undef public_6f119af
#undef public_6f119d6
#undef public_6f119d9
