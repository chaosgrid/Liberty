#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454700);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_454757 _public_454757
#define public_454759 _public_454759

PROC_DECLARE(0x454700, internal_454700, public_454700);
extern "C" NAKED register_t __cdecl internal_454700()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [public_66d2a8]
        test al, al
        je public_454759
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_454759
        push 0x27
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_454759
        mov ecx, dword ptr ds : [public_66d2bc]
        test ecx, ecx
        mov al, 1
        je public_454757
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp]
        push edx
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xD
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp]
        test eax, eax
        setne al
        public_454757 : nop
        pop ecx
        ret 
        public_454759 : nop
        xor al, al
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x454700)
    }
}

#undef public_454757
#undef public_454759
