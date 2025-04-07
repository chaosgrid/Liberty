#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);

#define public_6fa6e65 _public_6fa6e65
#define public_6fa6e70 _public_6fa6e70
#define public_6fa6e72 _public_6fa6e72

PROC_DECLARE(0x6fa6e50, internal_6fa6e50, public_6fa6e50);
extern "C" NAKED register_t __cdecl internal_6fa6e50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd3d94]
        mov ecx, dword ptr ds : [public_6fd3d98]
        cmp eax, ecx
        je public_6fa6e70
        mov edx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx]
        public_6fa6e65 : nop
        cmp dword ptr ds : [eax], edx
        je public_6fa6e72
        add eax, 0x1C
        cmp eax, ecx
        jne public_6fa6e65
        public_6fa6e70 : nop
        xor eax, eax
        public_6fa6e72 : nop
        ret 
        UNREACHABLE_TRAP(0x6fa6e50)
    }
}

#undef public_6fa6e65
#undef public_6fa6e70
#undef public_6fa6e72
