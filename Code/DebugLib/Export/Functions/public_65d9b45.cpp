#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9b45);

#define public_65d9b4a _public_65d9b4a
#define public_65d9b58 _public_65d9b58
#define public_65d9b5d _public_65d9b5d

PROC_DECLARE(0x65d9b45, internal_65d9b45, public_65d9b45);
extern "C" NAKED register_t __cdecl internal_65d9b45()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        public_65d9b4a : nop
        cmp esi, dword ptr ss : [esp+0xC]
        jae public_65d9b5d
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65d9b58
        call eax
        public_65d9b58 : nop
        add esi, 4
        jmp public_65d9b4a
        public_65d9b5d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d9b45)
    }
}

#undef public_65d9b4a
#undef public_65d9b58
#undef public_65d9b5d
