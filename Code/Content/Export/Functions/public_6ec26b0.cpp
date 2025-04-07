#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec26ec _public_6ec26ec
#define public_6ec26f5 _public_6ec26f5
#define public_6ec26f7 _public_6ec26f7

PROC_DECLARE(0x6ec26b0, internal_6ec26b0, public_6ec26b0);
extern "C" NAKED register_t __cdecl internal_6ec26b0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        xor bl, bl
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec26f5
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f487c0
        test eax, 0x3FFFFFFF
        jne public_6ec26ec
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, 1
        cmp ecx, eax
        jne public_6ec26f5
        pop esi
        pop ebx
        ret 8
        public_6ec26ec : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        mov al, 1
        je public_6ec26f7
        public_6ec26f5 : nop
        mov al, bl
        public_6ec26f7 : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec26b0)
    }
}

#undef public_6ec26ec
#undef public_6ec26f5
#undef public_6ec26f7
