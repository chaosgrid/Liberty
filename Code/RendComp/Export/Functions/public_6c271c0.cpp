#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c271c0);

#define public_6c271d3 _public_6c271d3
#define public_6c271db _public_6c271db
#define public_6c271e2 _public_6c271e2

PROC_DECLARE(0x6c271c0, internal_6c271c0, public_6c271c0);
extern "C" NAKED register_t __cdecl internal_6c271c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6c271e2
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6c271d3 : nop
        test eax, eax
        je public_6c271db
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_6c271db : nop
        add eax, 4
        dec ecx
        jne public_6c271d3
        pop esi
        public_6c271e2 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6c271c0)
    }
}

#undef public_6c271d3
#undef public_6c271db
#undef public_6c271e2
