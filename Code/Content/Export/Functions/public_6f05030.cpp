#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f05030);

#define public_6f05045 _public_6f05045
#define public_6f05050 _public_6f05050
#define public_6f05052 _public_6f05052

PROC_DECLARE(0x6f05030, internal_6f05030, public_6f05030);
extern "C" NAKED register_t __cdecl internal_6f05030()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd05f0]
        mov ecx, dword ptr ds : [public_6fd05f4]
        cmp eax, ecx
        je public_6f05050
        mov edx, dword ptr ds : [public_6fd05e4]
        public_6f05045 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f05052
        add eax, 0x1C
        cmp eax, ecx
        jne public_6f05045
        public_6f05050 : nop
        xor eax, eax
        public_6f05052 : nop
        ret 
        UNREACHABLE_TRAP(0x6f05030)
    }
}

#undef public_6f05045
#undef public_6f05050
#undef public_6f05052
