#include "Shading-PCH.h"


#define public_6ec914f _public_6ec914f

PROC_DECLARE(0x6ec9140, internal_6ec9140, public_6ec9140);
extern "C" NAKED register_t __cdecl internal_6ec9140()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 2
        jb public_6ec914f
        or eax, 0xFFFFFFFF
        ret 8
        public_6ec914f : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+ecx*4+0x68]
        mov dword ptr ds : [eax+0x70], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ec9140)
    }
}

#undef public_6ec914f
