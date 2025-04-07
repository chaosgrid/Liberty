#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6200);
CLANG_FORWARD_PROC_SYMBOL(public_62e9a60);

#define public_62cd85b _public_62cd85b
#define public_62cd85d _public_62cd85d

PROC_DECLARE(0x62cd830, internal_62cd830, public_62cd830);
extern "C" NAKED register_t __cdecl internal_62cd830()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62d20d0
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x170], eax
        mov eax, dword ptr ds : [esi+0x168]
        test eax, eax
        je public_62cd85b
        add eax, 0xFFFFFFF8
        jmp public_62cd85d
        public_62cd85b : nop
        xor eax, eax
        public_62cd85d : nop
        push eax
        call public_62e6200
        mov ecx, dword ptr ds : [esi+0x24]
        add esp, 4
        push 0
        add ecx, 0x12C
        mov dword ptr ds : [esi+0x174], eax
        call public_62e9a60
        push 3
        push 0
        mov ecx, esi
        mov dword ptr ds : [esi+0x164], 1
        mov byte ptr ds : [esi+0x17C], 0
        mov dword ptr ds : [esi+0x184], 0
        mov dword ptr ds : [esi+0x188], 0
        call public_62d21d0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62cd830)
    }
}

#undef public_62cd85b
#undef public_62cd85d
