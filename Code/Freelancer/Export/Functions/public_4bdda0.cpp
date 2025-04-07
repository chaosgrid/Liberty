#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_4bdda0);

#define public_4bddba _public_4bddba
#define public_4bdddc _public_4bdddc
#define public_4bde1d _public_4bde1d
#define public_4bde29 _public_4bde29
#define public_4bde6d _public_4bde6d
#define public_4bde7e _public_4bde7e
#define public_4bde8e _public_4bde8e

PROC_DECLARE(0x4bdda0, internal_4bdda0, public_4bdda0);
extern "C" NAKED register_t __cdecl internal_4bdda0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x164]
        xor ebx, ebx
        cmp al, bl
        jne public_4bddba
        and byte ptr ds : [esi+0x6C], 0xFD
        mov byte ptr ds : [esi+0x159], bl
        public_4bddba : nop
        mov byte ptr ds : [esi+0x164], bl
        call public_41dd90
        test al, al
        mov al, byte ptr ds : [esi+0x6C]
        jne public_4bdddc
        and al, 0xFD
        mov byte ptr ds : [esi+0x159], bl
        mov byte ptr ds : [esi+0x6C], al
        pop esi
        pop ebx
        ret 8
        public_4bdddc : nop
        test al, 2
        jne public_4bde1d
        fld dword ptr ds : [esi+0x15C]
        and al, 0xFE
        fcomp dword ptr ds : [public_5c7474]
        mov byte ptr ds : [esi+0x6C], al
        fnstsw ax
        test ah, 0x41
        jne public_4bde29
        fld dword ptr ds : [esi+0x15C]
        fsub qword ptr ss : [esp+0xC]
        fst dword ptr ds : [esi+0x15C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4bde29
        mov dword ptr ds : [esi+0x15C], ebx
        jmp public_4bde29
        public_4bde1d : nop
        mov eax, dword ptr ds : [esi+0x168]
        mov dword ptr ds : [esi+0x15C], eax
        public_4bde29 : nop
        mov al, byte ptr ds : [esi+0x6C]
        mov cl, al
        shr cl, 1
        and cl, 1
        and al, 0xFD
        mov byte ptr ds : [esi+0x158], cl
        mov byte ptr ds : [esi+0x6C], al
        mov ecx, dword ptr ds : [public_672450]
        mov eax, dword ptr ds : [public_616840]
        cmp ecx, eax
        mov ecx, dword ptr ds : [public_616844]
        jne public_4bde6d
        cmp dword ptr ds : [public_672454], ecx
        jne public_4bde6d
        fld dword ptr ds : [esi+0x160]
        fadd qword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+0x160]
        jmp public_4bde7e
        public_4bde6d : nop
        mov dword ptr ds : [public_672450], eax
        mov dword ptr ds : [public_672454], ecx
        mov dword ptr ds : [esi+0x160], ebx
        public_4bde7e : nop
        test byte ptr ds : [public_616850], 3
        je public_4bde8e
        mov byte ptr ds : [esi+0x159], 1
        public_4bde8e : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4bdda0)
    }
}

#undef public_4bddba
#undef public_4bdddc
#undef public_4bde1d
#undef public_4bde29
#undef public_4bde6d
#undef public_4bde7e
#undef public_4bde8e
