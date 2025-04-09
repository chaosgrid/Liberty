#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cc970);

#define public_4cc992 _public_4cc992

PROC_DECLARE(0x4cc970, internal_4cc970, public_4cc970);
extern "C" NAKED register_t __cdecl internal_4cc970()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_673570]
        test ecx, ecx
        je public_4cc992
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [public_673570], 0
        public_4cc992 : nop
        ret 
        UNREACHABLE_TRAP(0x4cc970)
    }
}

#undef public_4cc992
