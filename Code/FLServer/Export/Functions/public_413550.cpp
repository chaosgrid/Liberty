#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409840);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_418996);

#define public_413584 _public_413584

PROC_DECLARE(0x413550, internal_413550, public_413550);
extern "C" NAKED register_t __cdecl internal_413550()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_418996
        call public_40cdc0
        mov eax, dword ptr ds : [esi+0x80]
        push 0x1400
        push 0
        push 0x435
        push eax
        call dword ptr ds : [public_41bbe8]
        mov eax, dword ptr ds : [public_4277f0]
        test eax, eax
        jne public_413584
        mov eax, dword ptr ds : [public_41b8c8]
        public_413584 : nop
        mov ecx, dword ptr ds : [esi+0x80]
        push eax
        push ecx
        call public_409840
        add esp, 8
        call public_40ce70
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x413550)
    }
}

#undef public_413584
