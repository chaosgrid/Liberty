#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11220);

#define public_6d11230 _public_6d11230
#define public_6d1123e _public_6d1123e

PROC_DECLARE(0x6d11220, internal_6d11220, public_6d11220);
extern "C" NAKED register_t __cdecl internal_6d11220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x111]
        test dl, dl
        jne public_6d1123e
        public_6d11230 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x111]
        test dl, dl
        je public_6d11230
        public_6d1123e : nop
        ret 
        UNREACHABLE_TRAP(0x6d11220)
    }
}

#undef public_6d11230
#undef public_6d1123e
