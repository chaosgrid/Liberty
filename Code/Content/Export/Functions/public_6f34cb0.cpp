#include "Content-PCH.h"


#define public_6f34cbd _public_6f34cbd
#define public_6f34cc5 _public_6f34cc5

PROC_DECLARE(0x6f34cb0, internal_6f34cb0, public_6f34cb0);
extern "C" NAKED register_t __cdecl internal_6f34cb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x40]
        test eax, eax
        jne public_6f34cbd
        mov eax, 2
        ret 
        public_6f34cbd : nop
        cmp eax, 2
        jne public_6f34cc5
        xor eax, eax
        ret 
        public_6f34cc5 : nop
        xor ecx, ecx
        cmp eax, 1
        setne cl
        lea ecx, ds:[ecx+ecx+1]
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6f34cb0)
    }
}

#undef public_6f34cbd
#undef public_6f34cc5
