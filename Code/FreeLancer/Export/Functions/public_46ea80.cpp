#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ea80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46ea95 _public_46ea95
#define public_46eaa5 _public_46eaa5

PROC_DECLARE(0x46ea80, internal_46ea80, public_46ea80);
extern "C" NAKED register_t __cdecl internal_46ea80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_46ea95
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi], 0
        public_46ea95 : nop
        test byte ptr ss : [esp+8], 1
        je public_46eaa5
        push esi
        call public_5b7e1d
        add esp, 4
        public_46eaa5 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x46ea80)
    }
}

#undef public_46ea95
#undef public_46eaa5
