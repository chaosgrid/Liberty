#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6359170);

#define public_6359183 _public_6359183
#define public_635918f _public_635918f
#define public_6359194 _public_6359194

PROC_DECLARE(0x6359170, internal_6359170, public_6359170);
extern "C" NAKED register_t __cdecl internal_6359170()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x1A]
        dec eax
        js public_635918f
        mov ecx, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ds:[ecx+eax*4]
        public_6359183 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6359194
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_6359183
        public_635918f : nop
        xor eax, eax
        ret 4
        public_6359194 : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x6359170)
    }
}

#undef public_6359183
#undef public_635918f
#undef public_6359194
