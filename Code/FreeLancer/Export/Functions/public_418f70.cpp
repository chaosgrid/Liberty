#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_418f7e _public_418f7e
#define public_418f8e _public_418f8e

PROC_DECLARE(0x418f70, internal_418f70, public_418f70);
extern "C" NAKED register_t __cdecl internal_418f70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_418f7e
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_418f7e : nop
        test byte ptr ss : [esp+8], 1
        je public_418f8e
        push esi
        call public_5b7e1d
        add esp, 4
        public_418f8e : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x418f70)
    }
}

#undef public_418f7e
#undef public_418f8e
