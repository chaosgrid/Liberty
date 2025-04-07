#include "Common-PCH.h"


#define public_62fdab0 _public_62fdab0
#define public_62fdad5 _public_62fdad5
#define public_62fdb17 _public_62fdb17
#define public_62fdb23 _public_62fdb23
#define public_62fdb6b _public_62fdb6b
#define public_62fdb70 _public_62fdb70

PROC_DECLARE(0x62fda60, internal_62fda60, public_62fda60);
extern "C" NAKED register_t __cdecl internal_62fda60()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x74]
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_62fdb6b
        mov ecx, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+7]
        mov byte ptr ss : [esp+7], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x134]
        mov al, byte ptr ss : [esp+7]
        test al, al
        je public_62fdab0
        mov eax, 2
        pop esi
        add esp, 0x18
        ret 4
        public_62fdab0 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+7]
        push edx
        call dword ptr ds : [eax+0x134]
        mov al, byte ptr ss : [esp+7]
        test al, al
        je public_62fdad5
        mov eax, 2
        pop esi
        add esp, 0x18
        ret 4
        public_62fdad5 : nop
        mov ecx, dword ptr ss : [esp+8]
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x88]
        test eax, eax
        jne public_62fdb23
        test dword ptr ss : [esp+0xC], 0x7F0000
        je public_62fdb23
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x148]
        cmp eax, 0xE
        je public_62fdb17
        cmp eax, 0x11
        je public_62fdb17
        cmp eax, 8
        jne public_62fdb23
        public_62fdb17 : nop
        mov eax, 2
        pop esi
        add esp, 0x18
        ret 4
        public_62fdb23 : nop
        test dword ptr ss : [esp+0xC], 0x10000000
        jne public_62fdb6b
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_63a227c]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        mov eax, 2
        je public_62fdb70
        public_62fdb6b : nop
        mov eax, 1
        public_62fdb70 : nop
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62fda60)
    }
}

#undef public_62fdab0
#undef public_62fdad5
#undef public_62fdb17
#undef public_62fdb23
#undef public_62fdb6b
#undef public_62fdb70
