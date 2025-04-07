#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9068);
CLANG_FORWARD_PROC_SYMBOL(public_65dd184);
CLANG_FORWARD_PROC_SYMBOL(public_65dd23b);

#define public_65dd1a7 _public_65dd1a7
#define public_65dd1c4 _public_65dd1c4
#define public_65dd1c6 _public_65dd1c6

PROC_DECLARE(0x65dd184, internal_65dd184, public_65dd184);
extern "C" NAKED register_t __cdecl internal_65dd184()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        cmp dword ptr ds : [eax], 0xE06D7363
        jne public_65dd1a7
        cmp dword ptr ds : [eax+0x10], 3
        jne public_65dd1a7
        cmp dword ptr ds : [eax+0x14], 0x19930520
        jne public_65dd1a7
        jmp public_65d9068
        public_65dd1a7 : nop
        mov eax, dword ptr ds : [public_65e63d0]
        test eax, eax
        je public_65dd1c4
        push eax
        call public_65dd23b
        test eax, eax
        pop ecx
        je public_65dd1c4
        push esi
        call dword ptr ds : [public_65e63d0]
        jmp public_65dd1c6
        public_65dd1c4 : nop
        xor eax, eax
        public_65dd1c6 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65dd184)
    }
}

#undef public_65dd1a7
#undef public_65dd1c4
#undef public_65dd1c6
