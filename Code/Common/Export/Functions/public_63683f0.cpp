#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63683f0);

#define public_63683f6 _public_63683f6
#define public_6368407 _public_6368407

PROC_DECLARE(0x63683f0, internal_63683f0, public_63683f0);
extern "C" NAKED register_t __cdecl internal_63683f0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        dec edx
        js public_6368407
        public_63683f6 : nop
        mov eax, dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [eax+edx*4]
        lea eax, ds:[eax+edx*4]
        dec edx
        fstp dword ptr ds : [eax]
        jns public_63683f6
        public_6368407 : nop
        ret 
        UNREACHABLE_TRAP(0x63683f0)
    }
}

#undef public_63683f6
#undef public_6368407
