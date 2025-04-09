#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_443e90);

#define public_443eab _public_443eab
#define public_443eb6 _public_443eb6

PROC_DECLARE(0x443e90, internal_443e90, public_443e90);
extern "C" NAKED register_t __cdecl internal_443e90()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_668948]
        push esi
        xor esi, esi
        cmp ecx, esi
        je public_443eab
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        public_443eab : nop
        mov dword ptr ds : [public_668948], esi
        mov eax, 0x114
        public_443eb6 : nop
        mov dword ptr ds : [eax+public_668838], esi
        mov dword ptr ds : [eax+public_668948], esi
        add eax, 4
        cmp eax, 0x124
        jl public_443eb6
        pop esi
        ret 
        UNREACHABLE_TRAP(0x443e90)
    }
}

#undef public_443eab
#undef public_443eb6
