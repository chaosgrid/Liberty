#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f000);

#define public_6d2f003 _public_6d2f003
#define public_6d2f01a _public_6d2f01a

PROC_DECLARE(0x6d2f000, internal_6d2f000, public_6d2f000);
extern "C" NAKED register_t __cdecl internal_6d2f000()
{
    __asm
    {
        push ebp
        mov ebp, esp
        public_6d2f003 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x21]
        test edx, edx
        jne public_6d2f01a
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6d2f003
        public_6d2f01a : nop
        mov eax, dword ptr ss : [ebp+8]
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2f000)
    }
}

#undef public_6d2f003
#undef public_6d2f01a
