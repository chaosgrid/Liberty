#include "DALib-PCH.h"


#define public_65c4e98 _public_65c4e98

PROC_DECLARE(0x65c4e70, internal_65c4e70, public_65c4e70);
extern "C" NAKED register_t __cdecl internal_65c4e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, ds:[esi+0x50]
        push ecx
        call dword ptr ds : [public_65c707c]
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        test eax, eax
        je public_65c4e98
        mov edx, dword ptr ds : [eax]
        push 0
        add esi, 8
        push esi
        push eax
        call dword ptr ds : [edx+0x30]
        public_65c4e98 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65c4e70)
    }
}

#undef public_65c4e98
