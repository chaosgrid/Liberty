#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348c80);

#define public_6348c94 _public_6348c94
#define public_6348ca2 _public_6348ca2

PROC_DECLARE(0x6348c80, internal_6348c80, public_6348c80);
extern "C" NAKED register_t __cdecl internal_6348c80()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x1E]
        push esi
        dec eax
        js public_6348ca2
        mov ecx, dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ds:[ecx+eax*4]
        public_6348c94 : nop
        mov esi, dword ptr ds : [ecx]
        cmp dword ptr ds : [esi], edx
        je public_6348ca2
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_6348c94
        public_6348ca2 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6348c80)
    }
}

#undef public_6348c94
#undef public_6348ca2
