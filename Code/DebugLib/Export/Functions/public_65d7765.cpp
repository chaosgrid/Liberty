#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);

#define public_65d7786 _public_65d7786

PROC_DECLARE(0x65d7765, internal_65d7765, public_65d7765);
extern "C" NAKED register_t __cdecl internal_65d7765()
{
    __asm
    {
        push 0x80
        call public_65d8535
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_65e7a50], eax
        jne public_65d7786
        push 0x18
        call public_65d7ef0
        mov eax, dword ptr ds : [public_65e7a50]
        pop ecx
        public_65d7786 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_65e7a50]
        mov dword ptr ds : [public_65e7a4c], eax
        ret 
        UNREACHABLE_TRAP(0x65d7765)
    }
}

#undef public_65d7786
