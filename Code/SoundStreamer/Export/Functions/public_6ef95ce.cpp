#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef95ce);

#define public_6ef9600 _public_6ef9600
#define public_6ef960e _public_6ef960e
#define public_6ef9613 _public_6ef9613

PROC_DECLARE(0x6ef95ce, internal_6ef95ce, public_6ef95ce);
extern "C" NAKED register_t __cdecl internal_6ef95ce()
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
        jne public_6ef9613
        inc esi
        cmp esi, 3
        jge public_6ef960e
        lea eax, ds:[eax+esi*4]
        public_6ef9600 : nop
        cmp dword ptr ds : [eax], 0
        jne public_6ef9613
        inc esi
        add eax, 4
        cmp esi, 3
        jl public_6ef9600
        public_6ef960e : nop
        push 1
        pop eax
        pop esi
        ret 
        public_6ef9613 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef95ce)
    }
}

#undef public_6ef9600
#undef public_6ef960e
#undef public_6ef9613
