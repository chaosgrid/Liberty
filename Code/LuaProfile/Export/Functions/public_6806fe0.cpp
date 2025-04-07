#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6806fe0);

#define public_6806ffe _public_6806ffe
#define public_680701a _public_680701a

PROC_DECLARE(0x6806fe0, internal_6806fe0, public_6806fe0);
extern "C" NAKED register_t __cdecl internal_6806fe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jle public_6806ffe
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        neg ecx
        push ecx
        push eax
        push 5
        push edx
        call public_6806ed0
        add esp, 0x10
        ret 
        public_6806ffe : nop
        jge public_680701a
        mov ecx, eax
        neg ecx
        push ecx
        or edx, 0xFFFFFFFF
        sub edx, eax
        mov eax, dword ptr ss : [esp+8]
        push edx
        push 4
        push eax
        call public_6806ed0
        add esp, 0x10
        public_680701a : nop
        ret 
        UNREACHABLE_TRAP(0x6806fe0)
    }
}

#undef public_6806ffe
#undef public_680701a
