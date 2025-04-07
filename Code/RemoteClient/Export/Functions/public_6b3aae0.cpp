#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3ab00 _public_6b3ab00
#define public_6b3ab02 _public_6b3ab02
#define public_6b3ab05 _public_6b3ab05
#define public_6b3ab12 _public_6b3ab12

PROC_DECLARE(0x6b3aae0, internal_6b3aae0, public_6b3aae0);
extern "C" NAKED register_t __cdecl internal_6b3aae0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6b3ab05
        push 4
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b3ab00
        mov dword ptr ds : [eax], 0
        jmp public_6b3ab02
        public_6b3ab00 : nop
        xor eax, eax
        public_6b3ab02 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6b3ab05 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6b3ab12
        jmp public_6b3a510
        public_6b3ab12 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b3aae0)
    }
}

#undef public_6b3ab00
#undef public_6b3ab02
#undef public_6b3ab05
#undef public_6b3ab12
