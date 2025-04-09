#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_529db0);

#define public_529dc4 _public_529dc4
#define public_529dd5 _public_529dd5

PROC_DECLARE(0x529db0, internal_529db0, public_529db0);
extern "C" NAKED register_t __cdecl internal_529db0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_529dc4
        call public_4f7a90
        mov dword ptr ds : [esi], 0
        public_529dc4 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        mov dword ptr ds : [esi], ecx
        je public_529dd5
        call public_4f7a80
        public_529dd5 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x529db0)
    }
}

#undef public_529dc4
#undef public_529dd5
