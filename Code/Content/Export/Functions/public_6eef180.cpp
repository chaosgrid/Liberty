#include "Content-PCH.h"


#define public_6eef18f _public_6eef18f

PROC_DECLARE(0x6eef180, internal_6eef180, public_6eef180);
extern "C" NAKED register_t __cdecl internal_6eef180()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6eef18f
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_6eef18f : nop
        ret 
        UNREACHABLE_TRAP(0x6eef180)
    }
}

#undef public_6eef18f
