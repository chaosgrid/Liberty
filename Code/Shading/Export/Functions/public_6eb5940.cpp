#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5940);

#define public_6eb5956 _public_6eb5956
#define public_6eb5966 _public_6eb5966
#define public_6eb5973 _public_6eb5973

PROC_DECLARE(0x6eb5940, internal_6eb5940, public_6eb5940);
extern "C" NAKED register_t __cdecl internal_6eb5940()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, ecx
        and edx, 0xC
        xor eax, eax
        cmp dl, 0xC
        jne public_6eb5956
        mov eax, 0x1C
        ret 
        public_6eb5956 : nop
        mov edx, ecx
        and edx, 4
        cmp dl, 4
        jne public_6eb5966
        mov eax, 0x10
        ret 
        public_6eb5966 : nop
        and ecx, 2
        cmp cl, 2
        jne public_6eb5973
        mov eax, 0xC
        public_6eb5973 : nop
        ret 
        UNREACHABLE_TRAP(0x6eb5940)
    }
}

#undef public_6eb5956
#undef public_6eb5966
#undef public_6eb5973
