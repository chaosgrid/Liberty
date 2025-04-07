#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2db10);

#define public_6d2db19 _public_6d2db19
#define public_6d2db22 _public_6d2db22
#define public_6d2db2c _public_6d2db2c

PROC_DECLARE(0x6d2db10, internal_6d2db10, public_6d2db10);
extern "C" NAKED register_t __cdecl internal_6d2db10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d2db22
        public_6d2db19 : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 4
        mov dword ptr ss : [ebp+8], eax
        public_6d2db22 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ss : [ebp+0xC]
        je public_6d2db2c
        jmp public_6d2db19
        public_6d2db2c : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d2db10)
    }
}

#undef public_6d2db19
#undef public_6d2db22
#undef public_6d2db2c
