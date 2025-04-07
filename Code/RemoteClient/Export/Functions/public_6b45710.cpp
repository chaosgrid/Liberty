#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);
CLANG_FORWARD_PROC_SYMBOL(public_6b45710);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b45730 _public_6b45730
#define public_6b45732 _public_6b45732
#define public_6b45735 _public_6b45735
#define public_6b45742 _public_6b45742

PROC_DECLARE(0x6b45710, internal_6b45710, public_6b45710);
extern "C" NAKED register_t __cdecl internal_6b45710()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6b45735
        push 4
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b45730
        mov dword ptr ds : [eax], 0
        jmp public_6b45732
        public_6b45730 : nop
        xor eax, eax
        public_6b45732 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6b45735 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6b45742
        jmp public_6b3a510
        public_6b45742 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b45710)
    }
}

#undef public_6b45730
#undef public_6b45732
#undef public_6b45735
#undef public_6b45742
