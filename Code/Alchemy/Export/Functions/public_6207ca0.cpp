#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a630);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6207cc8 _public_6207cc8
#define public_6207cd6 _public_6207cd6

PROC_DECLARE(0x6207ca0, internal_6207ca0, public_6207ca0);
extern "C" NAKED register_t __cdecl internal_6207ca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        lea esi, ds:[eax+8]
        mov ecx, esi
        call public_620a630
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6207cd6
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6207cc8
        push eax
        call public_62460e0
        add esp, 4
        public_6207cc8 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+0x10], 0
        public_6207cd6 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6207ca0)
    }
}

#undef public_6207cc8
#undef public_6207cd6
