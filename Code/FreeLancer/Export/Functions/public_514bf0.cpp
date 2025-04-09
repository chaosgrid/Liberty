#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_45b340);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);
CLANG_FORWARD_PROC_SYMBOL(public_514bf0);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_514c4c _public_514c4c
#define public_514c4e _public_514c4e
#define public_514c69 _public_514c69
#define public_514c76 _public_514c76
#define public_514c7d _public_514c7d
#define public_514ccb _public_514ccb
#define public_514ce0 _public_514ce0
#define public_514d21 _public_514d21
#define public_514d35 _public_514d35
#define public_514d43 _public_514d43
#define public_514d59 _public_514d59
#define public_514d6a _public_514d6a
#define public_514d7b _public_514d7b
#define public_514d84 _public_514d84
#define public_514e7f _public_514e7f
#define public_514f15 _public_514f15

PROC_DECLARE(0x514bf0, internal_514bf0, public_514bf0);
extern "C" NAKED register_t __cdecl internal_514bf0()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x54]
        mov al, byte ptr ss : [ebp+0x185]
        test al, 4
        push esi
        push edi
        mov esi, ecx
        jne public_514f15
        or al, 5
        mov byte ptr ss : [ebp+0x185], al
        call public_54baf0
        cmp ebp, eax
        mov eax, dword ptr ds : [esi+0x14]
        sete bl
        xor edi, edi
        cmp eax, edi
        je public_514c4c
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_514c4c
        add eax, 0xC
        cmp eax, edi
        je public_514c4c
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_514c4c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_514c4e
        public_514c4c : nop
        xor eax, eax
        public_514c4e : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        cmp eax, edi
        jne public_514c69
        mov dword ptr ss : [esp+0x5C], edi
        jmp public_514c7d
        public_514c69 : nop
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, edi
        jne public_514c76
        mov dword ptr ss : [esp+0x5C], edi
        jmp public_514c7d
        public_514c76 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x5C], edx
        public_514c7d : nop
        test bl, bl
        je public_514d43
        mov al, byte ptr ss : [esp+0x60]
        test al, al
        je public_514ccb
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_514ccb
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_514ccb
        add eax, 0xC
        cmp eax, edi
        je public_514ccb
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, edi
        je public_514ccb
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        jne public_514ccb
        call dword ptr ds : [public_5c65a4]
        cmp eax, edi
        je public_514ccb
        push eax
        call public_45b340
        add esp, 4
        public_514ccb : nop
        mov ecx, dword ptr ss : [ebp+0x17C]
        cmp ecx, edi
        lea esi, ss:[ebp+0x174]
        je public_514ce0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_514ce0 : nop
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_514d21
        lea ecx, ss:[esp+0x28]
        call public_4215b0
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov eax, dword ptr ds : [edi]
        push 0xFFFFFFFF
        mov ecx, edi
        call dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_514d21 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_514d35
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_514d35 : nop
        mov ecx, esi
        call public_502d90
        and byte ptr ss : [ebp+0x184], 0xBF
        public_514d43 : nop
        mov eax, dword ptr ss : [ebp+0x16C]
        test eax, eax
        lea esi, ss:[ebp+0x164]
        je public_514d59
        test byte ptr ds : [eax+8], 2
        je public_514d7b
        public_514d59 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_514d6a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_514d7b
        public_514d6a : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_514d84
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        jne public_514d84
        public_514d7b : nop
        push esi
        lea ecx, ss:[ebp+0x28]
        call public_4fcef0
        public_514d84 : nop
        test bl, bl
        mov edi, dword ptr ds : [public_5c6040]
        je public_514e7f
        mov edx, dword ptr ss : [esp+0x5C]
        lea esi, ds:[edx+0x60]
        mov ecx, esi
        call edi
        test al, al
        jne public_514e7f
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        mov ecx, ebp
        call dword ptr ds : [eax+0x2C]
        fld dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x14], 0
        fchs 
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call edi
        test al, al
        jne public_514f15
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c5c
        call public_503f40
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 8
        public_514e7f : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        call dword ptr ds : [edx+0x1C]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x5C]
        lea esi, ds:[eax+0x74]
        mov ecx, esi
        call edi
        test al, al
        jne public_514f15
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        push ebx
        push ebp
        push esi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        public_514f15 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x514bf0)
    }
}

#undef public_514c4c
#undef public_514c4e
#undef public_514c69
#undef public_514c76
#undef public_514c7d
#undef public_514ccb
#undef public_514ce0
#undef public_514d21
#undef public_514d35
#undef public_514d43
#undef public_514d59
#undef public_514d6a
#undef public_514d7b
#undef public_514d84
#undef public_514e7f
#undef public_514f15
