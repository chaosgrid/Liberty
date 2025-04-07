#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);

#define public_6f4af79 _public_6f4af79

PROC_DECLARE(0x6f4af60, internal_6f4af60, public_6f4af60);
extern "C" NAKED register_t __cdecl internal_6f4af60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f4af79
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        lea eax, ds:[edx+eax-0x10]
        ret 
        public_6f4af79 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4af60)
    }
}

#undef public_6f4af79
