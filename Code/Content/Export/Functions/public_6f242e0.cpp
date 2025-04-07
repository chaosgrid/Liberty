#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f242e0);

#define public_6f2430f _public_6f2430f
#define public_6f24334 _public_6f24334

PROC_DECLARE(0x6f242e0, internal_6f242e0, public_6f242e0);
extern "C" NAKED register_t __cdecl internal_6f242e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0x3C
        push esi
        mov esi, dword ptr ds : [public_6fb3664]
        lea eax, ss:[esp+0x1C]
        push eax
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+8]
        push ecx
        push eax
        call esi
        add esp, 0xC
        test eax, eax
        je public_6f2430f
        fld dword ptr ds : [public_6fb5e84]
        pop esi
        add esp, 0x3C
        ret 
        public_6f2430f : nop
        mov eax, dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push ecx
        call esi
        add esp, 0xC
        test eax, eax
        je public_6f24334
        fld dword ptr ds : [public_6fb5e84]
        pop esi
        add esp, 0x3C
        ret 
        public_6f24334 : nop
        fld dword ptr ss : [esp+4]
        pop esi
        fsub dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x6f242e0)
    }
}

#undef public_6f2430f
#undef public_6f24334
