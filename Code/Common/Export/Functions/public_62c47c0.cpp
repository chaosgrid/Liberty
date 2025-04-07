#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c47c0);

#define public_62c47e2 _public_62c47e2

PROC_DECLARE(0x62c47c0, internal_62c47c0, public_62c47c0);
extern "C" NAKED register_t __cdecl internal_62c47c0()
{
    __asm
    {
        mov eax, ecx
        mov cl, byte ptr ds : [eax+0x7E]
        test cl, cl
        jne public_62c47e2
        mov ecx, dword ptr ds : [eax+0x84]
        push esi
        lea esi, ds:[eax+0xC]
        mov byte ptr ds : [eax+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push esi
        add eax, 0x18
        push eax
        call dword ptr ds : [edx+0x2C]
        pop esi
        public_62c47e2 : nop
        ret 
        UNREACHABLE_TRAP(0x62c47c0)
    }
}

#undef public_62c47e2
