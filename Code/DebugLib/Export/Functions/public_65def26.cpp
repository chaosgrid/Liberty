#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65def26);
CLANG_FORWARD_PROC_SYMBOL(public_65df4ea);

#define public_65def33 _public_65def33
#define public_65def60 _public_65def60

PROC_DECLARE(0x65def26, internal_65def26, public_65def26);
extern "C" NAKED register_t __cdecl internal_65def26()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+0x10], 0
        jne public_65def33
        xor eax, eax
        pop ebp
        ret 
        public_65def33 : nop
        push dword ptr ds : [public_65e66cc]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+8]
        push 1
        push dword ptr ds : [public_65e68e4]
        call public_65df4ea
        add esp, 0x1C
        test eax, eax
        jne public_65def60
        mov eax, 0x7FFFFFFF
        pop ebp
        ret 
        public_65def60 : nop
        add eax, 0xFFFFFFFE
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65def26)
    }
}

#undef public_65def33
#undef public_65def60
