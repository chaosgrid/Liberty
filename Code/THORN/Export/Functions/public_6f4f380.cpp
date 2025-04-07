#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f380);

#define public_6f4f388 _public_6f4f388
#define public_6f4f38e _public_6f4f38e
#define public_6f4f39d _public_6f4f39d
#define public_6f4f3a3 _public_6f4f3a3

PROC_DECLARE(0x6f4f380, internal_6f4f380, public_6f4f380);
extern "C" NAKED register_t __cdecl internal_6f4f380()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6f4f3a3
        public_6f4f388 : nop
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6f4f39d
        public_6f4f38e : nop
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        jne public_6f4f39d
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ds : [ecx], eax
        jne public_6f4f38e
        public_6f4f39d : nop
        test eax, eax
        mov ecx, eax
        jne public_6f4f388
        public_6f4f3a3 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4f380)
    }
}

#undef public_6f4f388
#undef public_6f4f38e
#undef public_6f4f39d
#undef public_6f4f3a3
