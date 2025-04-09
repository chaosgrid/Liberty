#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5afe60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5afe74 _public_5afe74

PROC_DECLARE(0x5afe60, internal_5afe60, public_5afe60);
extern "C" NAKED register_t __cdecl internal_5afe60()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC]
        test al, al
        je public_5afe74
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_5afe74
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x10], edx
        ret 
        public_5afe74 : nop
        push 0xC
        call public_5b7e84
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x5afe60)
    }
}

#undef public_5afe74
