#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284220);

#define public_62ada71 _public_62ada71

PROC_DECLARE(0x62ada60, internal_62ada60, public_62ada60);
extern "C" NAKED register_t __cdecl internal_62ada60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        test eax, eax
        je public_62ada71
        push ecx
        call public_6284220
        add esp, 4
        ret 
        public_62ada71 : nop
        mov eax, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [eax+0x20]
        ret 
        UNREACHABLE_TRAP(0x62ada60)
    }
}

#undef public_62ada71
