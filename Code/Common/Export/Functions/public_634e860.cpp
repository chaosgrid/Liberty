#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e860);

#define public_634e890 _public_634e890

PROC_DECLARE(0x634e860, internal_634e860, public_634e860);
extern "C" NAKED register_t __cdecl internal_634e860()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        sub esp, 8
        lea edx, ss:[esp]
        push edx
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_634e890
        mov edx, dword ptr ss : [esp+4]
        cmp edx, dword ptr ds : [eax+0xC]
        jne public_634e890
        mov eax, 1
        add esp, 8
        ret 
        public_634e890 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x634e860)
    }
}

#undef public_634e890
