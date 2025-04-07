#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_448270);
CLANG_FORWARD_PROC_SYMBOL(public_558a30);

#define public_448288 _public_448288
#define public_448297 _public_448297

PROC_DECLARE(0x448270, internal_448270, public_448270);
extern "C" NAKED register_t __cdecl internal_448270()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xAC]
        test eax, eax
        je public_448297
        cmp eax, 1
        jne public_448288
        jmp public_558a30
        public_448288 : nop
        cmp eax, 2
        jne public_448297
        mov dword ptr ds : [ecx+0xAC], 0
        public_448297 : nop
        ret 
        UNREACHABLE_TRAP(0x448270)
    }
}

#undef public_448288
#undef public_448297
