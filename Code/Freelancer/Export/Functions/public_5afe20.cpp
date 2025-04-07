#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5afe20);

#define public_5afe30 _public_5afe30
#define public_5afe3c _public_5afe3c

PROC_DECLARE(0x5afe20, internal_5afe20, public_5afe20);
extern "C" NAKED register_t __cdecl internal_5afe20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_5afe3c
        mov edi, edi
        public_5afe30 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        je public_5afe30
        public_5afe3c : nop
        ret 
        UNREACHABLE_TRAP(0x5afe20)
    }
}

#undef public_5afe30
#undef public_5afe3c
