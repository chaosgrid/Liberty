#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a490);

#define public_45a4c6 _public_45a4c6
#define public_45a4dd _public_45a4dd

PROC_DECLARE(0x45a490, internal_45a490, public_45a490);
extern "C" NAKED register_t __cdecl internal_45a490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_45a4dd
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_45a4dd
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x68]
        test eax, eax
        jne public_45a4dd
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ce7ec]
        fnstsw ax
        test ah, 0x41
        jp public_45a4c6
        mov eax, 0xFFFFFFFF
        ret 
        public_45a4c6 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ce7f8]
        fnstsw ax
        test ah, 1
        jne public_45a4dd
        mov eax, 1
        ret 
        public_45a4dd : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x45a490)
    }
}

#undef public_45a4c6
#undef public_45a4dd
