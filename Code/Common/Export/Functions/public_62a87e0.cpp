#include "Common-PCH.h"


#define public_62a87f8 _public_62a87f8
#define public_62a8803 _public_62a8803

PROC_DECLARE(0x62a87e0, internal_62a87e0, public_62a87e0);
extern "C" NAKED register_t __cdecl internal_62a87e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2A0]
        fld dword ptr ds : [public_639e0c8]
        cmp eax, 1
        jne public_62a87f8
        fmul qword ptr ds : [public_639e0f0]
        ret 
        public_62a87f8 : nop
        cmp eax, 2
        jne public_62a8803
        fmul qword ptr ds : [public_639e0e8]
        public_62a8803 : nop
        ret 
        UNREACHABLE_TRAP(0x62a87e0)
    }
}

#undef public_62a87f8
#undef public_62a8803
