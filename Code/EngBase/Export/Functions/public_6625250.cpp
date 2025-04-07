#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625250);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6625270 _public_6625270
#define public_662527a _public_662527a

PROC_DECLARE(0x6625250, internal_6625250, public_6625250);
extern "C" NAKED register_t __cdecl internal_6625250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_662b19c]
        test eax, eax
        je public_6625270
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_662b19c], ecx
        mov ecx, dword ptr ds : [public_662b1a8]
        dec ecx
        mov dword ptr ds : [public_662b1a8], ecx
        jmp public_662527a
        public_6625270 : nop
        push 0x18
        call public_66281dc
        add esp, 4
        public_662527a : nop
        mov edx, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+0x14], cl
        mov byte ptr ds : [eax+0x15], 0
        ret 8
        UNREACHABLE_TRAP(0x6625250)
    }
}

#undef public_6625270
#undef public_662527a
