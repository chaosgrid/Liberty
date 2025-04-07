#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e920);
CLANG_FORWARD_PROC_SYMBOL(public_636eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6373d10);

#define public_6373d1c _public_6373d1c
#define public_6373d38 _public_6373d38
#define public_6373d3d _public_6373d3d

PROC_DECLARE(0x6373d10, internal_6373d10, public_6373d10);
extern "C" NAKED register_t __cdecl internal_6373d10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        lea esi, ds:[eax+eax+2]
        or esi, 1
        public_6373d1c : nop
        mov eax, esi
        cdq 
        mov ecx, 3
        idiv ecx
        test edx, edx
        je public_6373d38
        mov eax, esi
        cdq 
        mov ecx, 5
        idiv ecx
        test edx, edx
        jne public_6373d3d
        public_6373d38 : nop
        add esi, 2
        jmp public_6373d1c
        public_6373d3d : nop
        push esi
        call public_636e920
        push esi
        push 0
        push eax
        mov dword ptr ds : [public_658b8f8], eax
        call public_636eed0
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6373d10)
    }
}

#undef public_6373d1c
#undef public_6373d38
#undef public_6373d3d
