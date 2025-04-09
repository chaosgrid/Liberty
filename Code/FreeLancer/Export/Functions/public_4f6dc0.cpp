#include "FreeLancer-PCH.h"


#define public_4f6dcf _public_4f6dcf
#define public_4f6de6 _public_4f6de6

PROC_DECLARE(0x4f6dc0, internal_4f6dc0, public_4f6dc0);
extern "C" NAKED register_t __cdecl internal_4f6dc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_4f6dcf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_4f6dcf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_4f6de6
        mov dword ptr ds : [ecx+4], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x10]
        xor eax, eax
        public_4f6de6 : nop
        ret 4
        UNREACHABLE_TRAP(0x4f6dc0)
    }
}

#undef public_4f6dcf
#undef public_4f6de6
