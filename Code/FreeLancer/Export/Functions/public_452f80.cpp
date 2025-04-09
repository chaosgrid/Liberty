#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_452f80);

#define public_452f98 _public_452f98

PROC_DECLARE(0x452f80, internal_452f80, public_452f80);
extern "C" NAKED register_t __cdecl internal_452f80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx+public_66d230]
        xor eax, eax
        cmp dl, 1
        jne public_452f98
        mov eax, dword ptr ds : [ecx*4+public_66d130]
        public_452f98 : nop
        ret 
        UNREACHABLE_TRAP(0x452f80)
    }
}

#undef public_452f98
