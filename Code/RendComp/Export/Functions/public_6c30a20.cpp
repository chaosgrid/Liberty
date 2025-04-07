#include "RendComp-PCH.h"


#define public_6c30a31 _public_6c30a31
#define public_6c30a46 _public_6c30a46

PROC_DECLARE(0x6c30a20, internal_6c30a20, public_6c30a20);
extern "C" NAKED register_t __cdecl internal_6c30a20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jl public_6c30a31
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6c30a31 : nop
        mov ecx, dword ptr ds : [eax+0x18]
        movzx edx, word ptr ds : [ecx+0x12]
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, edx
        jb public_6c30a46
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6c30a46 : nop
        mov dword ptr ds : [eax+0xC], ecx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c30a20)
    }
}

#undef public_6c30a31
#undef public_6c30a46
