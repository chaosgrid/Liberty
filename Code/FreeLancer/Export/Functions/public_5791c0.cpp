#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_5791c0);

#define public_5791d0 _public_5791d0
#define public_5791f0 _public_5791f0
#define public_579203 _public_579203
#define public_579212 _public_579212

PROC_DECLARE(0x5791c0, internal_5791c0, public_5791c0);
extern "C" NAKED register_t __cdecl internal_5791c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67c3bc]
        test ecx, ecx
        je public_5791d0
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_5791d0 : nop
        mov eax, dword ptr ds : [public_67c3c0]
        test eax, eax
        push edi
        mov dword ptr ds : [public_67c3bc], 0
        mov edi, eax
        je public_579212
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_579203
        push esi
        mov edi, edi
        public_5791f0 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_5791f0
        pop esi
        public_579203 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        public_579212 : nop
        mov byte ptr ds : [public_67c3db], 1
        pop edi
        ret 
        UNREACHABLE_TRAP(0x5791c0)
    }
}

#undef public_5791d0
#undef public_5791f0
#undef public_579203
#undef public_579212
