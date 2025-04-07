#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76f50);

#define public_6b76f5d _public_6b76f5d
#define public_6b76f68 _public_6b76f68

PROC_DECLARE(0x6b76f50, internal_6b76f50, public_6b76f50);
extern "C" NAKED register_t __cdecl internal_6b76f50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x25]
        test dl, dl
        jne public_6b76f68
        public_6b76f5d : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x25]
        test dl, dl
        je public_6b76f5d
        public_6b76f68 : nop
        ret 
        UNREACHABLE_TRAP(0x6b76f50)
    }
}

#undef public_6b76f5d
#undef public_6b76f68
