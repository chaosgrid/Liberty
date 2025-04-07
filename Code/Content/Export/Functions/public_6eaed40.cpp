#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaed40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eaed54 _public_6eaed54
#define public_6eaed64 _public_6eaed64

PROC_DECLARE(0x6eaed40, internal_6eaed40, public_6eaed40);
extern "C" NAKED register_t __cdecl internal_6eaed40()
{
    __asm
    {
        push 0x14
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6eaed54
        mov ecx, eax
        public_6eaed54 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6eaed64
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6eaed64 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6eaed40)
    }
}

#undef public_6eaed54
#undef public_6eaed64
