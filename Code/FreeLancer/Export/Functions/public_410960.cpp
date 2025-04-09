#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410850);
CLANG_FORWARD_PROC_SYMBOL(public_410960);
CLANG_FORWARD_PROC_SYMBOL(public_411370);

#define public_4109ca _public_4109ca
#define public_4109ed _public_4109ed
#define public_410a1f _public_410a1f
#define public_410a29 _public_410a29

PROC_DECLARE(0x410960, internal_410960, public_410960);
extern "C" NAKED register_t __cdecl internal_410960()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0xB4], 8
        je public_410a29
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_411370
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [esp+0x18]
        push edi
        push ecx
        mov ecx, esi
        call public_410850
        cmp dword ptr ds : [esi+0xB0], 0xFFFFFFFE
        jne public_410a1f
        mov ecx, dword ptr ds : [esi+0xB8]
        test ecx, ecx
        jne public_4109ca
        fld dword ptr ds : [public_5c75dc]
        jmp public_4109ed
        public_4109ca : nop
        fld dword ptr ds : [esi+0x58]
        lea eax, ss:[esp+8]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0xC], 1
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x18]
        public_4109ed : nop
        mov eax, dword ptr ss : [esp+0x20]
        fld st(0)
        fmul dword ptr ds : [edi]
        fld st(1)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        public_410a1f : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 0x10
        public_410a29 : nop
        xor al, al
        pop esi
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x410960)
    }
}

#undef public_4109ca
#undef public_4109ed
#undef public_410a1f
#undef public_410a29
