#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62dae20);

#define public_62c55ba _public_62c55ba
#define public_62c55c2 _public_62c55c2
#define public_62c5604 _public_62c5604
#define public_62c561b _public_62c561b
#define public_62c561d _public_62c561d
#define public_62c5626 _public_62c5626
#define public_62c563d _public_62c563d
#define public_62c5643 _public_62c5643

PROC_DECLARE(0x62c5540, internal_62c5540, public_62c5540);
extern "C" NAKED register_t __cdecl internal_62c5540()
{
    __asm
    {
        sub esp, 0x70
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x2F0]
        test ecx, ecx
        je public_62c5643
        mov edx, dword ptr ss : [esp+0x78]
        fld dword ptr ds : [edx+8]
        fld dword ptr ds : [edx+4]
        fld dword ptr ds : [edx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x44
        fstp st(0)
        jp public_62c563d
        lea ecx, ss:[esp+4]
        call public_62dae20
        mov eax, dword ptr ds : [public_63ebdb4]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [esi+0x450]
        test eax, eax
        mov byte ptr ss : [esp+0x5C], 1
        je public_62c55ba
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62c55ba
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x60], eax
        jmp public_62c55c2
        public_62c55ba : nop
        mov dword ptr ss : [esp+0x60], 0
        public_62c55c2 : nop
        fld dword ptr ds : [esi+0x458]
        mov al, byte ptr ds : [esi+0x32C]
        test al, 0xC0
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ds : [esi+0x45C]
        fstp dword ptr ss : [esp+0x68]
        je public_62c5604
        lea eax, ds:[esi+0x3CC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], 1
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_62c5626
        public_62c5604 : nop
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_62c561b
        lea ecx, ds:[eax-8]
        jmp public_62c561d
        public_62c561b : nop
        xor ecx, ecx
        public_62c561d : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x20], eax
        public_62c5626 : nop
        mov ecx, dword ptr ds : [esi+0x2F0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+0x28]
        pop esi
        add esp, 0x70
        ret 4
        public_62c563d : nop
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x30]
        public_62c5643 : nop
        pop esi
        add esp, 0x70
        ret 4
        UNREACHABLE_TRAP(0x62c5540)
    }
}

#undef public_62c55ba
#undef public_62c55c2
#undef public_62c5604
#undef public_62c561b
#undef public_62c561d
#undef public_62c5626
#undef public_62c563d
#undef public_62c5643
