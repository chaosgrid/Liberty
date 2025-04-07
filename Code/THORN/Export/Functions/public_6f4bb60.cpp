#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bb60);

#define public_6f4bb80 _public_6f4bb80
#define public_6f4bb8d _public_6f4bb8d
#define public_6f4bb92 _public_6f4bb92

PROC_DECLARE(0x6f4bb60, internal_6f4bb60, public_6f4bb60);
extern "C" NAKED register_t __cdecl internal_6f4bb60()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        jge public_6f4bb8d
        mov edx, dword ptr ds : [ecx+8]
        mov esi, edi
        shl esi, 5
        add esi, edx
        mov ecx, 0xFFFFFFFA
        public_6f4bb80 : nop
        cmp dword ptr ds : [esi+0x10], ecx
        jne public_6f4bb92
        inc edi
        add esi, 0x20
        cmp edi, eax
        jl public_6f4bb80
        public_6f4bb8d : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6f4bb92 : nop
        push esi
        call public_6f4b8b0
        add esi, 0x10
        push esi
        call public_6f4b8b0
        add esp, 8
        lea eax, ds:[edi+1]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4bb60)
    }
}

#undef public_6f4bb80
#undef public_6f4bb8d
#undef public_6f4bb92
