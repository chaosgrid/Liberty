#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282fd0);

#define public_6282fe0 _public_6282fe0
#define public_6282fec _public_6282fec

PROC_DECLARE(0x6282fd0, internal_6282fd0, public_6282fd0);
extern "C" NAKED register_t __cdecl internal_6282fd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6282fec
        mov edi, edi
        public_6282fe0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_6282fe0
        public_6282fec : nop
        ret 
        UNREACHABLE_TRAP(0x6282fd0)
    }
}

#undef public_6282fe0
#undef public_6282fec
