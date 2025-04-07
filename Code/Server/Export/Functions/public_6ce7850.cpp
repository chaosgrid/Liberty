#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7850);

#define public_6ce7868 _public_6ce7868
#define public_6ce786a _public_6ce786a

PROC_DECLARE(0x6ce7850, internal_6ce7850, public_6ce7850);
extern "C" NAKED register_t __cdecl internal_6ce7850()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ce7868
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce786a
        public_6ce7868 : nop
        xor eax, eax
        public_6ce786a : nop
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, eax
        jmp dword ptr ds : [edx+0xB4]
        UNREACHABLE_TRAP(0x6ce7850)
    }
}

#undef public_6ce7868
#undef public_6ce786a
