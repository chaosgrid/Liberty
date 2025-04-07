#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f22cf _public_65f22cf
#define public_65f22e8 _public_65f22e8

PROC_DECLARE(0x65f22c0, internal_65f22c0, public_65f22c0);
extern "C" NAKED register_t __cdecl internal_65f22c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_65f22cf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_65f22cf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_65f22e8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6600bb0
        add esp, 4
        xor eax, eax
        public_65f22e8 : nop
        ret 4
        UNREACHABLE_TRAP(0x65f22c0)
    }
}

#undef public_65f22cf
#undef public_65f22e8
