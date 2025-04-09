#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428be0);
CLANG_FORWARD_PROC_SYMBOL(public_4569d0);

#define public_4569fe _public_4569fe
#define public_456a2b _public_456a2b

PROC_DECLARE(0x4569d0, internal_4569d0, public_4569d0);
extern "C" NAKED register_t __cdecl internal_4569d0()
{
    __asm
    {
        push ecx
        fld dword ptr ss : [esp+0xC]
        push esi
        fcomp qword ptr ds : [public_5c8ba8]
        mov esi, ecx
        fnstsw ax
        test ah, 5
        jp public_4569fe
        push 0
        lea eax, ss:[esp+8]
        push eax
        push 0
        call public_428be0
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], ecx
        public_4569fe : nop
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_5c8ba8]
        mov dword ptr ds : [esi+0x18], edx
        fnstsw ax
        test ah, 0x41
        jne public_456a2b
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [esi+0x10]
        fabs 
        fdiv dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0x1C]
        pop esi
        pop ecx
        ret 8
        public_456a2b : nop
        mov dword ptr ds : [esi+0x1C], 0x49742400
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4569d0)
    }
}

#undef public_4569fe
#undef public_456a2b
