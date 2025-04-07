#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34850);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3789f _public_6f3789f
#define public_6f378c5 _public_6f378c5
#define public_6f378c8 _public_6f378c8

PROC_DECLARE(0x6f37890, internal_6f37890, public_6f37890);
extern "C" NAKED register_t __cdecl internal_6f37890()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6f3789f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6f3789f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f378c8
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6f378c5
        mov ecx, esi
        call public_6f34850
        push esi
        call public_6f57e26
        add esp, 4
        public_6f378c5 : nop
        xor eax, eax
        pop esi
        public_6f378c8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f37890)
    }
}

#undef public_6f3789f
#undef public_6f378c5
#undef public_6f378c8
