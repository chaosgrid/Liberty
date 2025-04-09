#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_4b5600);

#define public_4b5622 _public_4b5622
#define public_4b5665 _public_4b5665
#define public_4b566f _public_4b566f
#define public_4b56ab _public_4b56ab
#define public_4b56bc _public_4b56bc
#define public_4b56f2 _public_4b56f2
#define public_4b56f6 _public_4b56f6

PROC_DECLARE(0x4b5600, internal_4b5600, public_4b5600);
extern "C" NAKED register_t __cdecl internal_4b5600()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41dd90
        test al, al
        mov al, byte ptr ds : [esi+0x6C]
        jne public_4b5622
        and al, 0xFD
        mov dword ptr ds : [esi+0x164], 0
        mov byte ptr ds : [esi+0x6C], al
        pop esi
        ret 8
        public_4b5622 : nop
        xor edx, edx
        test al, 2
        jne public_4b5665
        fld dword ptr ds : [esi+0x17C]
        and al, 0xFE
        fcomp dword ptr ds : [public_5c7474]
        mov byte ptr ds : [esi+0x6C], al
        fnstsw ax
        test ah, 0x41
        jne public_4b566f
        fld dword ptr ds : [esi+0x17C]
        fsub qword ptr ss : [esp+8]
        fst dword ptr ds : [esi+0x17C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4b566f
        mov dword ptr ds : [esi+0x17C], edx
        jmp public_4b566f
        public_4b5665 : nop
        mov dword ptr ds : [esi+0x17C], 0x3F000000
        public_4b566f : nop
        mov al, byte ptr ds : [esi+0x6C]
        shr al, 1
        and al, 1
        mov byte ptr ds : [esi+0x178], al
        mov ecx, dword ptr ds : [public_67228c]
        mov eax, dword ptr ds : [public_616840]
        cmp ecx, eax
        mov ecx, dword ptr ds : [public_616844]
        jne public_4b56ab
        cmp dword ptr ds : [public_672290], ecx
        jne public_4b56ab
        fld dword ptr ds : [esi+0x180]
        fadd qword ptr ss : [esp+8]
        fstp dword ptr ds : [esi+0x180]
        jmp public_4b56bc
        public_4b56ab : nop
        mov dword ptr ds : [public_67228c], eax
        mov dword ptr ds : [public_672290], ecx
        mov dword ptr ds : [esi+0x180], edx
        public_4b56bc : nop
        fld dword ptr ds : [esi+0x164]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4b56f2
        fld dword ptr ds : [esi+0x164]
        fsub qword ptr ss : [esp+8]
        fst dword ptr ds : [esi+0x164]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4b56f6
        mov dword ptr ds : [esi+0x164], edx
        public_4b56f2 : nop
        and byte ptr ds : [esi+0x6C], 0xFD
        public_4b56f6 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4b5600)
    }
}

#undef public_4b5622
#undef public_4b5665
#undef public_4b566f
#undef public_4b56ab
#undef public_4b56bc
#undef public_4b56f2
#undef public_4b56f6
