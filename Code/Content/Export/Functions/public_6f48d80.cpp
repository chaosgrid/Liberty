#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48d80);

#define public_6f48d94 _public_6f48d94
#define public_6f48d9f _public_6f48d9f
#define public_6f48da4 _public_6f48da4

PROC_DECLARE(0x6f48d80, internal_6f48d80, public_6f48d80);
extern "C" NAKED register_t __cdecl internal_6f48d80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x100]
        mov ecx, dword ptr ds : [ecx+0x104]
        cmp eax, ecx
        je public_6f48d9f
        mov edx, dword ptr ss : [esp+4]
        public_6f48d94 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f48da4
        add eax, 8
        cmp eax, ecx
        jne public_6f48d94
        public_6f48d9f : nop
        xor eax, eax
        ret 4
        public_6f48da4 : nop
        mov eax, dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6f48d80)
    }
}

#undef public_6f48d94
#undef public_6f48d9f
#undef public_6f48da4
