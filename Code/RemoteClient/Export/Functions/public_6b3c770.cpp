#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c770);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3c790 _public_6b3c790
#define public_6b3c792 _public_6b3c792
#define public_6b3c795 _public_6b3c795
#define public_6b3c7a2 _public_6b3c7a2

PROC_DECLARE(0x6b3c770, internal_6b3c770, public_6b3c770);
extern "C" NAKED register_t __cdecl internal_6b3c770()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6b3c795
        push 4
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b3c790
        mov dword ptr ds : [eax], 0
        jmp public_6b3c792
        public_6b3c790 : nop
        xor eax, eax
        public_6b3c792 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6b3c795 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6b3c7a2
        jmp public_6b3a510
        public_6b3c7a2 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b3c770)
    }
}

#undef public_6b3c790
#undef public_6b3c792
#undef public_6b3c795
#undef public_6b3c7a2
