#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22600);

#define public_6f22610 _public_6f22610
#define public_6f22624 _public_6f22624

PROC_DECLARE(0x6f22600, internal_6f22600, public_6f22600);
extern "C" NAKED register_t __cdecl internal_6f22600()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x10]
        xor eax, eax
        test edx, edx
        jbe public_6f22624
        lea esp, ss:[esp]
        public_6f22610 : nop
        mov edx, dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [edx+eax*4]
        lea edx, ds:[edx+eax*4]
        fdiv dword ptr ds : [ecx+4]
        inc eax
        fstp dword ptr ds : [edx]
        cmp eax, dword ptr ds : [ecx+0x10]
        jb public_6f22610
        public_6f22624 : nop
        ret 
        UNREACHABLE_TRAP(0x6f22600)
    }
}

#undef public_6f22610
#undef public_6f22624
