#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);

#define public_627f7f3 _public_627f7f3
#define public_627f7fb _public_627f7fb
#define public_627f802 _public_627f802

PROC_DECLARE(0x627f7e0, internal_627f7e0, public_627f7e0);
extern "C" NAKED register_t __cdecl internal_627f7e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_627f802
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_627f7f3 : nop
        test eax, eax
        je public_627f7fb
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_627f7fb : nop
        add eax, 4
        dec ecx
        jne public_627f7f3
        pop esi
        public_627f802 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x627f7e0)
    }
}

#undef public_627f7f3
#undef public_627f7fb
#undef public_627f802
