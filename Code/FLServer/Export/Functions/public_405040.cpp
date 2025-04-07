#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405040);

#define public_405050 _public_405050
#define public_40505b _public_40505b

PROC_DECLARE(0x405040, internal_405040, public_405040);
extern "C" NAKED register_t __cdecl internal_405040()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        jne public_40505b
        lea ecx, ds:[ecx]
        public_405050 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        je public_405050
        public_40505b : nop
        ret 
        UNREACHABLE_TRAP(0x405040)
    }
}

#undef public_405050
#undef public_40505b
