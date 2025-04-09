#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e8e0);

#define public_46e8f0 _public_46e8f0
#define public_46e8fb _public_46e8fb

PROC_DECLARE(0x46e8e0, internal_46e8e0, public_46e8e0);
extern "C" NAKED register_t __cdecl internal_46e8e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_46e8fb
        lea ecx, ds:[ecx]
        public_46e8f0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        je public_46e8f0
        public_46e8fb : nop
        ret 
        UNREACHABLE_TRAP(0x46e8e0)
    }
}

#undef public_46e8f0
#undef public_46e8fb
