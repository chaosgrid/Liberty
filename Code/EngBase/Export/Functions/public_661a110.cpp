#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a110);

#define public_661a11d _public_661a11d
#define public_661a128 _public_661a128

PROC_DECLARE(0x661a110, internal_661a110, public_661a110);
extern "C" NAKED register_t __cdecl internal_661a110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x2D]
        test dl, dl
        jne public_661a128
        public_661a11d : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x2D]
        test dl, dl
        je public_661a11d
        public_661a128 : nop
        ret 
        UNREACHABLE_TRAP(0x661a110)
    }
}

#undef public_661a11d
#undef public_661a128
