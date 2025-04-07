#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6289789 _public_6289789

PROC_DECLARE(0x6289770, internal_6289770, public_6289770);
extern "C" NAKED register_t __cdecl internal_6289770()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_639c2a0
        je public_6289789
        push esi
        call public_6391d5a
        add esp, 4
        public_6289789 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6289770)
    }
}

#undef public_6289789
