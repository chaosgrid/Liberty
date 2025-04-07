#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8060);

#define public_6ee8070 _public_6ee8070
#define public_6ee807b _public_6ee807b

PROC_DECLARE(0x6ee8060, internal_6ee8060, public_6ee8060);
extern "C" NAKED register_t __cdecl internal_6ee8060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6ee807b
        lea ecx, ds:[ecx]
        public_6ee8070 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_6ee8070
        public_6ee807b : nop
        ret 
        UNREACHABLE_TRAP(0x6ee8060)
    }
}

#undef public_6ee8070
#undef public_6ee807b
