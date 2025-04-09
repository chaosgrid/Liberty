#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_433f40);
CLANG_FORWARD_PROC_SYMBOL(public_434630);
CLANG_FORWARD_PROC_SYMBOL(public_4f4ca0);
CLANG_FORWARD_PROC_SYMBOL(public_4f4d20);
CLANG_FORWARD_PROC_SYMBOL(public_533780);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_548259 _public_548259
#define public_54825b _public_54825b
#define public_54829c _public_54829c
#define public_5482b8 _public_5482b8
#define public_5482e8 _public_5482e8
#define public_54830f _public_54830f
#define public_548311 _public_548311
#define public_5483d6 _public_5483d6
#define public_5483d8 _public_5483d8
#define public_54844f _public_54844f
#define public_548451 _public_548451
#define public_5484a9 _public_5484a9
#define public_5484ad _public_5484ad

PROC_DECLARE(0x548220, internal_548220, public_548220);
extern "C" NAKED register_t __cdecl internal_548220()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        or edi, 0xFFFFFFFF
        test esi, esi
        mov word ptr ss : [esp+0x10], 0
        mov word ptr ss : [esp+0x12], di
        je public_548259
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_548259
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_548259
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_54825b
        public_548259 : nop
        xor eax, eax
        public_54825b : nop
        mov ecx, dword ptr ds : [esi+0xE4]
        test ecx, ecx
        je public_54829c
        push 0x24
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5484a9
        mov ecx, dword ptr ds : [esi+0xE4]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        mov word ptr ds : [eax+2], di
        pop edi
        pop esi
        pop ebp
        mov word ptr ds : [eax], 4
        pop ebx
        pop ecx
        ret 0x14
        public_54829c : nop
        mov eax, dword ptr ds : [eax+0xE0]
        test al, 7
        je public_5482e8
        push 0x23
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5484a9
        public_5482b8 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, esi
        call public_533780
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 0x14
        public_5482e8 : nop
        test al, 8
        jne public_5484a9
        lea ebp, ds:[esi+0xC]
        test ebp, ebp
        je public_54830f
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_54830f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_548311
        public_54830f : nop
        xor eax, eax
        public_548311 : nop
        mov edx, dword ptr ds : [eax+0xE0]
        shr edx, 9
        test dl, 1
        je public_5482b8
        call public_41dd90
        test al, al
        je public_5484a9
        mov ecx, dword ptr ds : [public_674bc8]
        test ecx, ecx
        je public_5484a9
        call public_4f4d20
        mov ecx, dword ptr ds : [public_674bc8]
        mov bl, al
        call public_4f4ca0
        fstp dword ptr ss : [esp+0x20]
        test bl, bl
        je public_5484a9
        mov eax, dword ptr ds : [public_679b80]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x24], 0x3F800000
        call public_54baf0
        test eax, eax
        je public_5483d8
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_5db7d8]
        fnstsw ax
        test ah, 0x41
        jne public_5483d6
        fmul dword ptr ds : [public_5e04d8]
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_5e04d4]
        fnstsw ax
        test ah, 0x41
        jne public_5483d8
        mov dword ptr ss : [esp+0x24], 0x42C60000
        jmp public_5483d8
        public_5483d6 : nop
        fstp st(0)
        public_5483d8 : nop
        movzx ecx, byte ptr ss : [esp+0x2B]
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        call public_5b7ec0
        mov edi, dword ptr ss : [esp+0x24]
        push 0
        push 0
        push edi
        push 0
        lea edx, ss:[esp+0x38]
        push edx
        mov byte ptr ss : [esp+0x3F], al
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        mov ebx, dword ptr ss : [esp+0x34]
        push eax
        push ebx
        call public_433f40
        mov word ptr ss : [esp+0x3C], ax
        mov word ptr ss : [esp+0x3E], 0xFFFF
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 0x20
        cmp ax, 3
        mov dword ptr ss : [esp+0x10], ecx
        jb public_5484ad
        test ebp, ebp
        je public_54844f
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_54844f
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_548451
        public_54844f : nop
        xor eax, eax
        public_548451 : nop
        mov eax, dword ptr ds : [eax+0xE0]
        shr eax, 9
        test al, 1
        je public_5484ad
        fld dword ptr ss : [esp+0x20]
        mov al, 0xFF
        fmul dword ptr ds : [public_5c75d8]
        mov byte ptr ss : [esp+0x1C], al
        mov byte ptr ss : [esp+0x1E], al
        mov byte ptr ss : [esp+0x1F], al
        mov byte ptr ss : [esp+0x1D], 0x80
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], ecx
        call public_5b7ec0
        push 0
        push edi
        push 0
        lea edx, ss:[esp+0x34]
        push edx
        mov byte ptr ss : [esp+0x3B], al
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        push eax
        push ebx
        call public_434630
        add esp, 0x1C
        public_5484a9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_5484ad : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x548220)
    }
}

#undef public_548259
#undef public_54825b
#undef public_54829c
#undef public_5482b8
#undef public_5482e8
#undef public_54830f
#undef public_548311
#undef public_5483d6
#undef public_5483d8
#undef public_54844f
#undef public_548451
#undef public_5484a9
#undef public_5484ad
