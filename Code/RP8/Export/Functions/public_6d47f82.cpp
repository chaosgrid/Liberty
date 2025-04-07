#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47f82);
CLANG_FORWARD_PROC_SYMBOL(public_6d584cd);

#define public_6d47fa8 _public_6d47fa8
#define public_6d47fbb _public_6d47fbb

PROC_DECLARE(0x6d47f82, internal_6d47f82, public_6d47f82);
extern "C" NAKED register_t __cdecl internal_6d47f82()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_6d47fbb
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6d47fbb
        cmp dword ptr ds : [esi+0x24], 0
        je public_6d47fbb
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6d47fa8
        push esi
        push eax
        call public_6d584cd
        pop ecx
        pop ecx
        public_6d47fa8 : nop
        push dword ptr ds : [esi+0x1C]
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        and dword ptr ds : [esi+0x1C], 0
        pop ecx
        pop ecx
        xor eax, eax
        pop esi
        ret 
        public_6d47fbb : nop
        push 0xFFFFFFFE
        pop eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d47f82)
    }
}

#undef public_6d47fa8
#undef public_6d47fbb
