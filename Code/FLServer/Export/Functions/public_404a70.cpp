#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404a70);

#define public_404a80 _public_404a80
#define public_404a8c _public_404a8c

PROC_DECLARE(0x404a70, internal_404a70, public_404a70);
extern "C" NAKED register_t __cdecl internal_404a70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_404a8c
        mov edi, edi
        public_404a80 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        je public_404a80
        public_404a8c : nop
        ret 
        UNREACHABLE_TRAP(0x404a70)
    }
}

#undef public_404a80
#undef public_404a8c
