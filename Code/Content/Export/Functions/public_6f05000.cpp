#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f05000);

#define public_6f05015 _public_6f05015
#define public_6f05020 _public_6f05020
#define public_6f05022 _public_6f05022

PROC_DECLARE(0x6f05000, internal_6f05000, public_6f05000);
extern "C" NAKED register_t __cdecl internal_6f05000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd05f0]
        mov ecx, dword ptr ds : [public_6fd05f4]
        cmp eax, ecx
        je public_6f05020
        mov edx, dword ptr ds : [public_6fd05e8]
        public_6f05015 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f05022
        add eax, 0x1C
        cmp eax, ecx
        jne public_6f05015
        public_6f05020 : nop
        xor eax, eax
        public_6f05022 : nop
        ret 
        UNREACHABLE_TRAP(0x6f05000)
    }
}

#undef public_6f05015
#undef public_6f05020
#undef public_6f05022
