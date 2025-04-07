#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad39c6);

#define public_6ad39f8 _public_6ad39f8
#define public_6ad3a06 _public_6ad3a06
#define public_6ad3a0b _public_6ad3a0b

PROC_DECLARE(0x6ad39c6, internal_6ad39c6, public_6ad39c6);
extern "C" NAKED register_t __cdecl internal_6ad39c6()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push 0x20
        cdq 
        pop ecx
        idiv ecx
        push 0x1F
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        cdq 
        idiv ecx
        pop ecx
        mov eax, dword ptr ss : [esp+8]
        sub ecx, edx
        or edx, 0xFFFFFFFF
        shl edx, cl
        not edx
        test dword ptr ds : [eax+esi*4], edx
        jne public_6ad3a0b
        inc esi
        cmp esi, 3
        jge public_6ad3a06
        lea eax, ds:[eax+esi*4]
        public_6ad39f8 : nop
        cmp dword ptr ds : [eax], 0
        jne public_6ad3a0b
        inc esi
        add eax, 4
        cmp esi, 3
        jl public_6ad39f8
        public_6ad3a06 : nop
        push 1
        pop eax
        pop esi
        ret 
        public_6ad3a0b : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad39c6)
    }
}

#undef public_6ad39f8
#undef public_6ad3a06
#undef public_6ad3a0b
