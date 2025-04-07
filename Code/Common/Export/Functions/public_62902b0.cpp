#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62902b0);

#define public_62902c1 _public_62902c1
#define public_62902cd _public_62902cd

PROC_DECLARE(0x62902b0, internal_62902b0, public_62902b0);
extern "C" NAKED register_t __cdecl internal_62902b0()
{
    __asm
    {
        movzx eax, word ptr ds : [ecx+2]
        dec eax
        js public_62902cd
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ds:[ecx+eax*4]
        public_62902c1 : nop
        cmp dword ptr ds : [ecx], edx
        je public_62902cd
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_62902c1
        public_62902cd : nop
        ret 4
        UNREACHABLE_TRAP(0x62902b0)
    }
}

#undef public_62902c1
#undef public_62902cd
