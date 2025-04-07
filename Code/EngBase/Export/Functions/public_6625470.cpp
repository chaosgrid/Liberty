#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f750);

#define public_6625480 _public_6625480
#define public_66254a1 _public_66254a1

PROC_DECLARE(0x6625470, internal_6625470, public_6625470);
extern "C" NAKED register_t __cdecl internal_6625470()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        jbe public_6625480
        dec eax
        mov dword ptr ds : [esi+0x60], eax
        public_6625480 : nop
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        jne public_66254a1
        mov ecx, esi
        mov dword ptr ds : [esi+0x60], 1
        call public_661f750
        push esi
        call dword ptr ds : [public_662902c]
        add esp, 4
        xor eax, eax
        public_66254a1 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6625470)
    }
}

#undef public_6625480
#undef public_66254a1
