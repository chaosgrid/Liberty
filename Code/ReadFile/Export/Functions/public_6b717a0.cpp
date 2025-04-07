#include "ReadFile-PCH.h"


#define public_6b717b3 _public_6b717b3
#define public_6b717c0 _public_6b717c0
#define public_6b717c6 _public_6b717c6

PROC_DECLARE(0x6b717a0, internal_6b717a0, public_6b717a0);
extern "C" NAKED register_t __cdecl internal_6b717a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        cmp edx, 0xFFFFFFFF
        je public_6b717c0
        mov ecx, dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6b717c0
        public_6b717b3 : nop
        lea esi, ds:[eax+8]
        cmp esi, edx
        je public_6b717c6
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6b717b3
        public_6b717c0 : nop
        xor al, al
        pop esi
        ret 4
        public_6b717c6 : nop
        add eax, 8
        test eax, eax
        je public_6b717c0
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b717a0)
    }
}

#undef public_6b717b3
#undef public_6b717c0
#undef public_6b717c6
