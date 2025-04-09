#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57d980);

#define public_57d9b5 _public_57d9b5

PROC_DECLARE(0x57d980, internal_57d980, public_57d980);
extern "C" NAKED register_t __cdecl internal_57d980()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        movzx ecx, word ptr ds : [esi+2]
        test ecx, ecx
        jl public_57d9b5
        mov edx, dword ptr ds : [public_67c400]
        test edx, edx
        je public_57d9b5
        mov eax, dword ptr ds : [public_67c404]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        jae public_57d9b5
        mov word ptr ds : [esi+2], 0
        mov eax, dword ptr ds : [public_67c400]
        mov eax, dword ptr ds : [eax+ecx*4]
        pop esi
        ret 
        public_57d9b5 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x57d980)
    }
}

#undef public_57d9b5
