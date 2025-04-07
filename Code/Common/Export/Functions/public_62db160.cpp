#include "Common-PCH.h"


#define public_62db16a _public_62db16a
#define public_62db173 _public_62db173

PROC_DECLARE(0x62db160, internal_62db160, public_62db160);
extern "C" NAKED register_t __cdecl internal_62db160()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_62db16a
        xor al, al
        ret 
        public_62db16a : nop
        cmp dword ptr ds : [ecx+0x10], 0xFFFFFFFF
        jne public_62db173
        xor al, al
        ret 
        public_62db173 : nop
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        setne al
        ret 
        UNREACHABLE_TRAP(0x62db160)
    }
}

#undef public_62db16a
#undef public_62db173
