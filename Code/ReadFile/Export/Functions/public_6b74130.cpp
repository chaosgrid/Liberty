#include "ReadFile-PCH.h"


#define public_6b74145 _public_6b74145
#define public_6b74165 _public_6b74165

PROC_DECLARE(0x6b74130, internal_6b74130, public_6b74130);
extern "C" NAKED register_t __cdecl internal_6b74130()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x24C]
        test eax, eax
        jbe public_6b74145
        dec eax
        mov dword ptr ds : [ecx+0x24C], eax
        public_6b74145 : nop
        mov eax, dword ptr ds : [ecx+0x24C]
        test eax, eax
        jne public_6b74165
        mov dword ptr ds : [ecx+0x24C], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0xA8]
        xor eax, eax
        public_6b74165 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b74130)
    }
}

#undef public_6b74145
#undef public_6b74165
