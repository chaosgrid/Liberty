#include "Freelancer-PCH.h"


#define public_4a65db _public_4a65db
#define public_4a65e0 _public_4a65e0
#define public_4a65f8 _public_4a65f8

PROC_DECLARE(0x4a6590, internal_4a6590, public_4a6590);
extern "C" NAKED register_t __cdecl internal_4a6590()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x26
        jne public_4a65db
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [ecx+0x344]
        je public_4a65e0
        cmp eax, dword ptr ds : [ecx+0x354]
        je public_4a65e0
        cmp eax, dword ptr ds : [ecx+0x35C]
        je public_4a65e0
        cmp eax, dword ptr ds : [ecx+0x33C]
        jne public_4a65db
        mov eax, dword ptr ds : [ecx+0x330]
        test eax, eax
        je public_4a65f8
        mov ecx, dword ptr ds : [ecx+0x334]
        push 0
        push ecx
        call eax
        add esp, 8
        mov eax, 1
        ret 0xC
        public_4a65db : nop
        xor eax, eax
        ret 0xC
        public_4a65e0 : nop
        mov eax, dword ptr ds : [ecx+0x330]
        test eax, eax
        je public_4a65f8
        mov edx, dword ptr ds : [ecx+0x334]
        push 1
        push edx
        call eax
        add esp, 8
        public_4a65f8 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x4a6590)
    }
}

#undef public_4a65db
#undef public_4a65e0
#undef public_4a65f8
