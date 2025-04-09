#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42c9e0);

#define public_42c9f0 _public_42c9f0
#define public_42c9fb _public_42c9fb

PROC_DECLARE(0x42c9e0, internal_42c9e0, public_42c9e0);
extern "C" NAKED register_t __cdecl internal_42c9e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x39]
        test dl, dl
        jne public_42c9fb
        lea ecx, ds:[ecx]
        public_42c9f0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x39]
        test dl, dl
        je public_42c9f0
        public_42c9fb : nop
        ret 
        UNREACHABLE_TRAP(0x42c9e0)
    }
}

#undef public_42c9f0
#undef public_42c9fb
