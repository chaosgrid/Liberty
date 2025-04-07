#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62de220);

#define public_62de23e _public_62de23e
#define public_62de283 _public_62de283

PROC_DECLARE(0x62de220, internal_62de220, public_62de220);
extern "C" NAKED register_t __cdecl internal_62de220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x18
        push esi
        mov esi, ecx
        xor ecx, ecx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x10], ecx
        mov eax, dword ptr ds : [eax+0xF0]
        cmp eax, ecx
        je public_62de23e
        lea ecx, ds:[eax-8]
        public_62de23e : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x28]
        fld dword ptr ss : [esp+0xC]
        fchs 
        fstp dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+4]
        fabs 
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+8]
        fabs 
        fstp dword ptr ss : [esp+0x20]
        fcom dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_62de283
        fstp dword ptr ds : [esi+0xC]
        pop esi
        add esp, 0x18
        ret 4
        public_62de283 : nop
        mov eax, dword ptr ss : [esp+0x20]
        fstp st(0)
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62de220)
    }
}

#undef public_62de23e
#undef public_62de283
