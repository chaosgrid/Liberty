#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdaa60 _public_6bdaa60
#define public_6bdaa62 _public_6bdaa62
#define public_6bdaa65 _public_6bdaa65
#define public_6bdaa72 _public_6bdaa72

PROC_DECLARE(0x6bdaa40, internal_6bdaa40, public_6bdaa40);
extern "C" NAKED register_t __cdecl internal_6bdaa40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6bdaa65
        push 4
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bdaa60
        mov dword ptr ds : [eax], 0
        jmp public_6bdaa62
        public_6bdaa60 : nop
        xor eax, eax
        public_6bdaa62 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6bdaa65 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6bdaa72
        jmp public_6bdc850
        public_6bdaa72 : nop
        ret 4
        UNREACHABLE_TRAP(0x6bdaa40)
    }
}

#undef public_6bdaa60
#undef public_6bdaa62
#undef public_6bdaa65
#undef public_6bdaa72
