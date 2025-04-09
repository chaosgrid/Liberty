#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414280);

#define public_414291 _public_414291

PROC_DECLARE(0x414280, internal_414280, public_414280);
extern "C" NAKED register_t __cdecl internal_414280()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_414291
        cmp word ptr ds : [eax], 0
        je public_414291
        mov word ptr ds : [eax], 0
        public_414291 : nop
        ret 
        UNREACHABLE_TRAP(0x414280)
    }
}

#undef public_414291
