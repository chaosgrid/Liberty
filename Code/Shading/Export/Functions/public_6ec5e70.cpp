#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5e70);

#define public_6ec5e83 _public_6ec5e83
#define public_6ec5e8b _public_6ec5e8b
#define public_6ec5e92 _public_6ec5e92

PROC_DECLARE(0x6ec5e70, internal_6ec5e70, public_6ec5e70);
extern "C" NAKED register_t __cdecl internal_6ec5e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6ec5e92
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6ec5e83 : nop
        test eax, eax
        je public_6ec5e8b
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_6ec5e8b : nop
        add eax, 4
        dec ecx
        jne public_6ec5e83
        pop esi
        public_6ec5e92 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ec5e70)
    }
}

#undef public_6ec5e83
#undef public_6ec5e8b
#undef public_6ec5e92
