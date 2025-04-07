#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a620);

#define public_661a62d _public_661a62d
#define public_661a638 _public_661a638

PROC_DECLARE(0x661a620, internal_661a620, public_661a620);
extern "C" NAKED register_t __cdecl internal_661a620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_661a638
        public_661a62d : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        je public_661a62d
        public_661a638 : nop
        ret 
        UNREACHABLE_TRAP(0x661a620)
    }
}

#undef public_661a62d
#undef public_661a638
