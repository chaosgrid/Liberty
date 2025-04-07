#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47880);

#define public_6f4789b _public_6f4789b

PROC_DECLARE(0x6f47880, internal_6f47880, public_6f47880);
extern "C" NAKED register_t __cdecl internal_6f47880()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6f4789b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        ret 4
        public_6f4789b : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x10], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f47880)
    }
}

#undef public_6f4789b
