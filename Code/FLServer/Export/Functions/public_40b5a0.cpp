#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40b5a0);

#define public_40b5d1 _public_40b5d1
#define public_40b5e2 _public_40b5e2
#define public_40b5e6 _public_40b5e6

PROC_DECLARE(0x40b5a0, internal_40b5a0, public_40b5a0);
extern "C" NAKED register_t __cdecl internal_40b5a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xBA4]
        test eax, eax
        je public_40b5e2
        mov eax, dword ptr ds : [eax+0x2C]
        push 0
        push eax
        call dword ptr ds : [public_41b1b4]
        cmp eax, 0x102
        je public_40b5e6
        mov ecx, dword ptr ds : [esi+0xBA4]
        test ecx, ecx
        je public_40b5d1
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        public_40b5d1 : nop
        mov dword ptr ds : [esi+0xBA4], 0
        mov byte ptr ds : [esi+0xBA9], 0
        public_40b5e2 : nop
        mov al, 1
        pop esi
        ret 
        public_40b5e6 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40b5a0)
    }
}

#undef public_40b5d1
#undef public_40b5e2
#undef public_40b5e6
