#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714550);
CLANG_FORWARD_PROC_SYMBOL(public_67154c0);
CLANG_FORWARD_PROC_SYMBOL(public_6716994);

#define public_6714571 _public_6714571
#define public_6714575 _public_6714575
#define public_6714592 _public_6714592
#define public_67145a2 _public_67145a2

PROC_DECLARE(0x6714550, internal_6714550, public_6714550);
extern "C" NAKED register_t __cdecl internal_6714550()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfba]
        test al, al
        je public_67145a2
        mov eax, dword ptr ds : [public_671cf98]
        test eax, eax
        je public_67145a2
        mov ecx, dword ptr ds : [public_671cfa8]
        push ebx
        test ecx, ecx
        je public_6714571
        xor bl, bl
        jmp public_6714575
        public_6714571 : nop
        mov bl, byte ptr ss : [esp+8]
        public_6714575 : nop
        cmp eax, dword ptr ds : [public_671b54c]
        jne public_6714592
        mov edx, dword ptr ds : [public_671b3f8]
        mov cl, bl
        neg cl
        sbb ecx, ecx
        and ecx, edx
        push ecx
        push eax
        call public_6716994
        public_6714592 : nop
        mov byte ptr ds : [public_671cf9c], bl
        test bl, bl
        pop ebx
        je public_67145a2
        jmp public_67154c0
        public_67145a2 : nop
        ret 
        UNREACHABLE_TRAP(0x6714550)
    }
}

#undef public_6714571
#undef public_6714575
#undef public_6714592
#undef public_67145a2
