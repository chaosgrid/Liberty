#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62903b0);

#define public_62903c0 _public_62903c0
#define public_62903cb _public_62903cb

PROC_DECLARE(0x62903b0, internal_62903b0, public_62903b0);
extern "C" NAKED register_t __cdecl internal_62903b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_62903cb
        lea ecx, ds:[ecx]
        public_62903c0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        je public_62903c0
        public_62903cb : nop
        ret 
        UNREACHABLE_TRAP(0x62903b0)
    }
}

#undef public_62903c0
#undef public_62903cb
