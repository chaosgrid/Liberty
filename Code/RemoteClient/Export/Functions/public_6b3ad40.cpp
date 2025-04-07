#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3ad60 _public_6b3ad60
#define public_6b3ad62 _public_6b3ad62
#define public_6b3ad65 _public_6b3ad65
#define public_6b3ad72 _public_6b3ad72

PROC_DECLARE(0x6b3ad40, internal_6b3ad40, public_6b3ad40);
extern "C" NAKED register_t __cdecl internal_6b3ad40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6b3ad65
        push 4
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b3ad60
        mov dword ptr ds : [eax], 0
        jmp public_6b3ad62
        public_6b3ad60 : nop
        xor eax, eax
        public_6b3ad62 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6b3ad65 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6b3ad72
        jmp public_6b3a510
        public_6b3ad72 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b3ad40)
    }
}

#undef public_6b3ad60
#undef public_6b3ad62
#undef public_6b3ad65
#undef public_6b3ad72
