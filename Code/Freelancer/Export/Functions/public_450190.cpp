#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450190);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_45019f _public_45019f
#define public_4501b8 _public_4501b8

PROC_DECLARE(0x450190, internal_450190, public_450190);
extern "C" NAKED register_t __cdecl internal_450190()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jbe public_45019f
        dec eax
        mov dword ptr ds : [ecx+0x28], eax
        public_45019f : nop
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_4501b8
        push ecx
        mov dword ptr ds : [ecx+0x28], 1
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        public_4501b8 : nop
        ret 4
        UNREACHABLE_TRAP(0x450190)
    }
}

#undef public_45019f
#undef public_4501b8
