#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_527750);

#define public_527760 _public_527760
#define public_52776b _public_52776b

PROC_DECLARE(0x527750, internal_527750, public_527750);
extern "C" NAKED register_t __cdecl internal_527750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x61]
        test dl, dl
        jne public_52776b
        lea ecx, ds:[ecx]
        public_527760 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x61]
        test dl, dl
        je public_527760
        public_52776b : nop
        ret 
        UNREACHABLE_TRAP(0x527750)
    }
}

#undef public_527760
#undef public_52776b
