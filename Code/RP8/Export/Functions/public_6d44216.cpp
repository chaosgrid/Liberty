#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44216);

#define public_6d44225 _public_6d44225
#define public_6d4422a _public_6d4422a
#define public_6d44233 _public_6d44233
#define public_6d44236 _public_6d44236
#define public_6d44243 _public_6d44243
#define public_6d4425d _public_6d4425d

PROC_DECLARE(0x6d44216, internal_6d44216, public_6d44216);
extern "C" NAKED register_t __cdecl internal_6d44216()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        push 8
        pop edx
        cmp ecx, edx
        jbe public_6d44225
        mov ecx, edx
        jmp public_6d4422a
        public_6d44225 : nop
        cmp ecx, 1
        jb public_6d44233
        public_6d4422a : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 7
        jbe public_6d44236
        public_6d44233 : nop
        xor eax, eax
        ret 
        public_6d44236 : nop
        push esi
        lea esi, ds:[eax+ecx]
        cmp esi, edx
        push edi
        jbe public_6d44243
        mov ecx, edx
        sub ecx, eax
        public_6d44243 : nop
        mov edx, dword ptr ss : [esp+0xC]
        lea edi, ds : [eax+public_6d61014]
        lea esi, ds:[edx+eax]
        xor eax, eax
        repe cmpsb
        pop edi
        pop esi
        je public_6d4425d
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6d4425d : nop
        ret 
        UNREACHABLE_TRAP(0x6d44216)
    }
}

#undef public_6d44225
#undef public_6d4422a
#undef public_6d44233
#undef public_6d44236
#undef public_6d44243
#undef public_6d4425d
