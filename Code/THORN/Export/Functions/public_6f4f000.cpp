#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f000);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f8a0);

#define public_6f4f012 _public_6f4f012
#define public_6f4f020 _public_6f4f020
#define public_6f4f026 _public_6f4f026

PROC_DECLARE(0x6f4f000, internal_6f4f000, public_6f4f000);
extern "C" NAKED register_t __cdecl internal_6f4f000()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        xor esi, esi
        test eax, eax
        jle public_6f4f026
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, eax
        public_6f4f012 : nop
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6f4f020
        cmp eax, offset public_6f608b0
        je public_6f4f020
        inc esi
        public_6f4f020 : nop
        add ecx, 4
        dec edx
        jne public_6f4f012
        public_6f4f026 : nop
        lea eax, ds:[esi+esi+2]
        push eax
        call public_6f4f8a0
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f000)
    }
}

#undef public_6f4f012
#undef public_6f4f020
#undef public_6f4f026
