#include "FreeLancer-PCH.h"


#define public_54a4b2 _public_54a4b2
#define public_54a4ba _public_54a4ba
#define public_54a528 _public_54a528

PROC_DECLARE(0x54a450, internal_54a450, public_54a450);
extern "C" NAKED register_t __cdecl internal_54a450()
{
    __asm
    {
        sub esp, 0x28
        xor eax, eax
        push esi
        mov esi, ecx
        push edi
        mov ecx, 0xA
        lea edi, ss:[esp+8]
        rep stosd
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+0x3C]
        movsx edx, ax
        mov dword ptr ss : [esp+0x14], eax
        shr eax, 0x10
        mov dword ptr ss : [esp+0x38], edx
        movsx eax, ax
        fild dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x38], eax
        xor eax, eax
        test cl, 4
        fstp dword ptr ss : [esp+0x20]
        fild dword ptr ss : [esp+0x38]
        mov byte ptr ss : [esp+0x2E], 1
        mov dword ptr ss : [esp+8], 4
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ss : [esp+0x24]
        je public_54a4b2
        mov eax, 1
        public_54a4b2 : nop
        test cl, 8
        je public_54a4ba
        or eax, 2
        public_54a4ba : nop
        mov ecx, dword ptr ds : [esi+0xBA0]
        test ecx, ecx
        mov byte ptr ss : [esp+0x2C], al
        mov byte ptr ss : [esp+0x2D], 0
        je public_54a528
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x70]
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_54a528
        mov ecx, dword ptr ds : [esi+0xBA0]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x74]
        test eax, eax
        jne public_54a528
        cmp dword ptr ss : [esp+8], 0xE
        jle public_54a528
        mov esi, dword ptr ds : [esi+0xBA0]
        test esi, esi
        je public_54a528
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        je public_54a528
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_54a528
        cmp dword ptr ds : [ecx+0x1C], 1
        jne public_54a528
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x1CC]
        public_54a528 : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x54a450)
    }
}

#undef public_54a4b2
#undef public_54a4ba
#undef public_54a528
