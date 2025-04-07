#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66251e0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6625201 _public_6625201

PROC_DECLARE(0x66251e0, internal_66251e0, public_66251e0);
extern "C" NAKED register_t __cdecl internal_66251e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_662b18c]
        test eax, eax
        je public_6625201
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_662b18c], ecx
        mov ecx, dword ptr ds : [public_662b198]
        dec ecx
        mov dword ptr ds : [public_662b198], ecx
        ret 4
        public_6625201 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_66281dc
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x66251e0)
    }
}

#undef public_6625201
