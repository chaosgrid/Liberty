#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e160);
CLANG_FORWARD_PROC_SYMBOL(public_5574a0);

#define public_5574ce _public_5574ce

PROC_DECLARE(0x5574a0, internal_5574a0, public_5574a0);
extern "C" NAKED register_t __cdecl internal_5574a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_5574ce
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], 0
        call public_42e160
        mov dword ptr ds : [esi+4], 0
        public_5574ce : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5574a0)
    }
}

#undef public_5574ce
