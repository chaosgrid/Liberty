#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef58bf);

#define public_6ef58dc _public_6ef58dc

PROC_DECLARE(0x6ef58bf, internal_6ef58bf, public_6ef58bf);
extern "C" NAKED register_t __cdecl internal_6ef58bf()
{
    __asm
    {
        push 0x140
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc080]
        test eax, eax
        mov dword ptr ds : [public_6f02668], eax
        jne public_6ef58dc
        ret 
        public_6ef58dc : nop
        mov ecx, dword ptr ss : [esp+4]
        and dword ptr ds : [public_6f02660], 0
        and dword ptr ds : [public_6f02664], 0
        push 1
        mov dword ptr ds : [public_6f0265c], eax
        mov dword ptr ds : [public_6f0266c], ecx
        mov dword ptr ds : [public_6f02654], 0x10
        pop eax
        ret 
        UNREACHABLE_TRAP(0x6ef58bf)
    }
}

#undef public_6ef58dc
