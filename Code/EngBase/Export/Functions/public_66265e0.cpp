#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66265e0);

#define public_66265ff _public_66265ff

PROC_DECLARE(0x66265e0, internal_66265e0, public_66265e0);
extern "C" NAKED register_t __cdecl internal_66265e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        test eax, eax
        mov esi, ecx
        je public_66265ff
        push eax
        call dword ptr ds : [public_662906c]
        push eax
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6629070]
        add esp, 8
        public_66265ff : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66265e0)
    }
}

#undef public_66265ff
