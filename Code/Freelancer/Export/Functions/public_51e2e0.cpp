#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_51e304 _public_51e304
#define public_51e306 _public_51e306
#define public_51e317 _public_51e317
#define public_51e380 _public_51e380

PROC_DECLARE(0x51e2e0, internal_51e2e0, public_51e2e0);
extern "C" NAKED register_t __cdecl internal_51e2e0()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        push esi
        push edi
        je public_51e317
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51e317
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_51e304
        lea ecx, ds:[eax-8]
        jmp public_51e306
        public_51e304 : nop
        xor ecx, ecx
        public_51e306 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        lea edi, ds:[ebx+0x40]
        mov ecx, 9
        mov esi, eax
        rep movsd
        public_51e317 : nop
        lea esi, ds:[ebx+0x10]
        mov ecx, 9
        lea edi, ss:[esp+0xC]
        rep movsd
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_6752c8]
        test eax, eax
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x50]
        jne public_51e380
        call public_5b73e0
        mov dword ptr ds : [public_6752c8], eax
        public_51e380 : nop
        mov ecx, dword ptr ds : [eax]
        add ebx, 0x40
        push ebx
        lea edx, ss:[esp+0x34]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edi, dword ptr ss : [esp+0x5C]
        mov ecx, 9
        lea esi, ss:[esp+0xC]
        rep movsd
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x51e2e0)
    }
}

#undef public_51e304
#undef public_51e306
#undef public_51e317
#undef public_51e380
