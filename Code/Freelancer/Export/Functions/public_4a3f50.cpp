#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3f50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4a3f70 _public_4a3f70
#define public_4a3f80 _public_4a3f80

PROC_DECLARE(0x4a3f50, internal_4a3f50, public_4a3f50);
extern "C" NAKED register_t __cdecl internal_4a3f50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4a3f70
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        public_4a3f70 : nop
        test byte ptr ss : [esp+8], 1
        je public_4a3f80
        push esi
        call public_5b7e1d
        add esp, 4
        public_4a3f80 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4a3f50)
    }
}

#undef public_4a3f70
#undef public_4a3f80
