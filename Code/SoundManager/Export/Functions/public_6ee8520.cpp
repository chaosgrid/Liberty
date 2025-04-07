#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1de0);

#define public_6ee852f _public_6ee852f
#define public_6ee8556 _public_6ee8556
#define public_6ee8559 _public_6ee8559

PROC_DECLARE(0x6ee8520, internal_6ee8520, public_6ee8520);
extern "C" NAKED register_t __cdecl internal_6ee8520()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6ee852f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6ee852f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ee8559
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6ee8556
        mov ecx, esi
        call public_6ee1de0
        push esi
        call dword ptr ds : [public_6ee90b0]
        add esp, 4
        public_6ee8556 : nop
        xor eax, eax
        pop esi
        public_6ee8559 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ee8520)
    }
}

#undef public_6ee852f
#undef public_6ee8556
#undef public_6ee8559
