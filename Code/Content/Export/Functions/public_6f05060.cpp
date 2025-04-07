#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f05060);

#define public_6f05075 _public_6f05075
#define public_6f05080 _public_6f05080
#define public_6f05082 _public_6f05082

PROC_DECLARE(0x6f05060, internal_6f05060, public_6f05060);
extern "C" NAKED register_t __cdecl internal_6f05060()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd05f0]
        mov ecx, dword ptr ds : [public_6fd05f4]
        cmp eax, ecx
        je public_6f05080
        mov edx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx]
        public_6f05075 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f05082
        add eax, 0x1C
        cmp eax, ecx
        jne public_6f05075
        public_6f05080 : nop
        xor eax, eax
        public_6f05082 : nop
        ret 
        UNREACHABLE_TRAP(0x6f05060)
    }
}

#undef public_6f05075
#undef public_6f05080
#undef public_6f05082
