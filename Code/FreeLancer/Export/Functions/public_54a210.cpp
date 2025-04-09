#include "Freelancer-PCH.h"


#define public_54a2cf _public_54a2cf

PROC_DECLARE(0x54a210, internal_54a210, public_54a210);
extern "C" NAKED register_t __cdecl internal_54a210()
{
    __asm
    {
        sub esp, 0x28
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        mov ecx, 0xA
        lea edi, ss:[esp+8]
        rep stosd
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x3C]
        movsx ecx, ax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [esi+0xBA0]
        shr eax, 0x10
        test ecx, ecx
        fild dword ptr ss : [esp+0x38]
        movsx edx, ax
        fstp dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x38], edx
        mov byte ptr ss : [esp+0x2E], 1
        mov dword ptr ss : [esp+8], 5
        fild dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0xC], 0x200
        fstp dword ptr ss : [esp+0x24]
        je public_54a2cf
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x70]
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_54a2cf
        mov ecx, dword ptr ds : [esi+0xBA0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x74]
        test eax, eax
        jne public_54a2cf
        cmp dword ptr ss : [esp+8], 0xE
        jle public_54a2cf
        mov esi, dword ptr ds : [esi+0xBA0]
        test esi, esi
        je public_54a2cf
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        je public_54a2cf
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_54a2cf
        cmp dword ptr ds : [ecx+0x1C], 1
        jne public_54a2cf
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x1CC]
        public_54a2cf : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x54a210)
    }
}

#undef public_54a2cf
