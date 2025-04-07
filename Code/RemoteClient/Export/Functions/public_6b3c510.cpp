#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c510);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3c530 _public_6b3c530
#define public_6b3c532 _public_6b3c532
#define public_6b3c535 _public_6b3c535
#define public_6b3c542 _public_6b3c542

PROC_DECLARE(0x6b3c510, internal_6b3c510, public_6b3c510);
extern "C" NAKED register_t __cdecl internal_6b3c510()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6b3c535
        push 4
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b3c530
        mov dword ptr ds : [eax], 0
        jmp public_6b3c532
        public_6b3c530 : nop
        xor eax, eax
        public_6b3c532 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6b3c535 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6b3c542
        jmp public_6b3a510
        public_6b3c542 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b3c510)
    }
}

#undef public_6b3c530
#undef public_6b3c532
#undef public_6b3c535
#undef public_6b3c542
