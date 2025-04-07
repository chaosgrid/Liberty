#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4285d);

#define public_6d4288d _public_6d4288d

PROC_DECLARE(0x6d4285d, internal_6d4285d, public_6d4285d);
extern "C" NAKED register_t __cdecl internal_6d4285d()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d4288d
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d4288d
        test byte ptr ds : [eax+8], 8
        je public_6d4288d
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_6d4288d
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx], edx
        movzx eax, word ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push 8
        mov dword ptr ds : [ecx], eax
        pop eax
        ret 
        public_6d4288d : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d4285d)
    }
}

#undef public_6d4288d
