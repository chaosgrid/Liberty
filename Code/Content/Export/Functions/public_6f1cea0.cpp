#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cea0);

#define public_6f1ceb0 _public_6f1ceb0
#define public_6f1cebd _public_6f1cebd
#define public_6f1ced1 _public_6f1ced1

PROC_DECLARE(0x6f1cea0, internal_6f1cea0, public_6f1cea0);
extern "C" NAKED register_t __cdecl internal_6f1cea0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x10]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        lea edi, ds:[ecx+8]
        je public_6f1ced1
        nop 
        public_6f1ceb0 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f1cebd
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f1cebd : nop
        mov edx, dword ptr ds : [edi]
        push esi
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [edi+8]
        jne public_6f1ceb0
        public_6f1ced1 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f1cea0)
    }
}

#undef public_6f1ceb0
#undef public_6f1cebd
#undef public_6f1ced1
