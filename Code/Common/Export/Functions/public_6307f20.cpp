#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6307ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6307f58 _public_6307f58

PROC_DECLARE(0x6307f20, internal_6307f20, public_6307f20);
extern "C" NAKED register_t __cdecl internal_6307f20()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_63ed210]
        test eax, eax
        jge public_6307f58
        call public_6307ff0
        fdiv qword ptr ds : [public_63a30f0]
        fmul qword ptr ds : [public_639c478]
        call public_6391dae
        mov dword ptr ss : [esp], eax
        fild dword ptr ss : [esp]
        fmul qword ptr ds : [public_63a0460]
        call public_6391dae
        mov dword ptr ds : [public_63ed210], eax
        public_6307f58 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6307f20)
    }
}

#undef public_6307f58
