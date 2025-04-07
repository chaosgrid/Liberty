#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);

#define public_6f4b431 _public_6f4b431

PROC_DECLARE(0x6f4b410, internal_6f4b410, public_6f4b410);
extern "C" NAKED register_t __cdecl internal_6f4b410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f4b431
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        cmp dword ptr ds : [edx+eax-0x10], 0xFFFFFFFA
        jne public_6f4b431
        mov eax, 1
        ret 
        public_6f4b431 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4b410)
    }
}

#undef public_6f4b431
