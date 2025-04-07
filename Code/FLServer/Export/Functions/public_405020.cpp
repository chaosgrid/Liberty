#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405020);

#define public_405030 _public_405030
#define public_40503c _public_40503c

PROC_DECLARE(0x405020, internal_405020, public_405020);
extern "C" NAKED register_t __cdecl internal_405020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        jne public_40503c
        mov edi, edi
        public_405030 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        je public_405030
        public_40503c : nop
        ret 
        UNREACHABLE_TRAP(0x405020)
    }
}

#undef public_405030
#undef public_40503c
