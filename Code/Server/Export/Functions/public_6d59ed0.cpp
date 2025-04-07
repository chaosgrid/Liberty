#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59ed0);

#define public_6d59ee0 _public_6d59ee0
#define public_6d59eec _public_6d59eec

PROC_DECLARE(0x6d59ed0, internal_6d59ed0, public_6d59ed0);
extern "C" NAKED register_t __cdecl internal_6d59ed0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6d59eec
        mov edi, edi
        public_6d59ee0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_6d59ee0
        public_6d59eec : nop
        ret 
        UNREACHABLE_TRAP(0x6d59ed0)
    }
}

#undef public_6d59ee0
#undef public_6d59eec
