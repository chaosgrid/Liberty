#include "Content-PCH.h"


#define public_6ef00fa _public_6ef00fa

PROC_DECLARE(0x6ef00e0, internal_6ef00e0, public_6ef00e0);
extern "C" NAKED register_t __cdecl internal_6ef00e0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fb7730
        je public_6ef00fa
        push esi
        call dword ptr ds : [public_6fb312c]
        add esp, 4
        public_6ef00fa : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef00e0)
    }
}

#undef public_6ef00fa
