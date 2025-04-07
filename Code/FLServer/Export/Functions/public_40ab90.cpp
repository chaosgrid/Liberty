#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ab90);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40abac _public_40abac
#define public_40abb8 _public_40abb8

PROC_DECLARE(0x40ab90, internal_40ab90, public_40ab90);
extern "C" NAKED register_t __cdecl internal_40ab90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_4277f0]
        test eax, eax
        je public_40abb8
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_40abac
        cmp cl, 0xFF
        je public_40abac
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_40abb8
        public_40abac : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_40abb8 : nop
        mov dword ptr ds : [public_4277f0], 0
        mov dword ptr ds : [public_4277f4], 0
        mov dword ptr ds : [public_4277f8], 0
        ret 
        UNREACHABLE_TRAP(0x40ab90)
    }
}

#undef public_40abac
#undef public_40abb8
