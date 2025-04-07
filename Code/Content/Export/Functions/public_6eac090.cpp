#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac090);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0f80);

#define public_6eac0a0 _public_6eac0a0
#define public_6eac0b7 _public_6eac0b7

PROC_DECLARE(0x6eac090, internal_6eac090, public_6eac090);
extern "C" NAKED register_t __cdecl internal_6eac090()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6fcee74]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp], ecx
        lea esp, ss:[esp]
        public_6eac0a0 : nop
        mov edx, dword ptr ds : [public_6fcee74]
        cmp dword ptr ss : [esp], edx
        je public_6eac0b7
        lea ecx, ss:[esp]
        call public_6eb0f80
        jmp public_6eac0a0
        public_6eac0b7 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6eac090)
    }
}

#undef public_6eac0a0
#undef public_6eac0b7
