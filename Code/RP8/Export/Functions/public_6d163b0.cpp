#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d163b0);

#define public_6d163ce _public_6d163ce
#define public_6d163e4 _public_6d163e4

PROC_DECLARE(0x6d163b0, internal_6d163b0, public_6d163b0);
extern "C" NAKED register_t __cdecl internal_6d163b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0x40
        test eax, eax
        je public_6d163ce
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 4
        mov dword ptr ss : [ebp-4], ecx
        public_6d163ce : nop
        mov edx, dword ptr ss : [ebp+8]
        and edx, 0x80
        test edx, edx
        je public_6d163e4
        mov eax, dword ptr ss : [ebp-4]
        add eax, 4
        mov dword ptr ss : [ebp-4], eax
        public_6d163e4 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d163b0)
    }
}

#undef public_6d163ce
#undef public_6d163e4
