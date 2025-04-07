#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68023d0);
CLANG_FORWARD_PROC_SYMBOL(public_6802680);

#define public_68026a0 _public_68026a0
#define public_68026ad _public_68026ad
#define public_68026b2 _public_68026b2

PROC_DECLARE(0x6802680, internal_6802680, public_6802680);
extern "C" NAKED register_t __cdecl internal_6802680()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        jge public_68026ad
        mov edx, dword ptr ds : [ecx+8]
        mov esi, edi
        shl esi, 5
        add esi, edx
        mov ecx, 0xFFFFFFFA
        public_68026a0 : nop
        cmp dword ptr ds : [esi+0x10], ecx
        jne public_68026b2
        inc edi
        add esi, 0x20
        cmp edi, eax
        jl public_68026a0
        public_68026ad : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_68026b2 : nop
        push esi
        call public_68023d0
        add esi, 0x10
        push esi
        call public_68023d0
        add esp, 8
        lea eax, ds:[edi+1]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802680)
    }
}

#undef public_68026a0
#undef public_68026ad
#undef public_68026b2
