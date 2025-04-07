#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);
CLANG_FORWARD_PROC_SYMBOL(public_514bf0);
CLANG_FORWARD_PROC_SYMBOL(public_514f20);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_514f73 _public_514f73
#define public_514f75 _public_514f75
#define public_514f90 _public_514f90
#define public_514f9d _public_514f9d
#define public_514fa4 _public_514fa4
#define public_514fc9 _public_514fc9
#define public_51500a _public_51500a
#define public_51501e _public_51501e
#define public_515025 _public_515025
#define public_51503b _public_51503b
#define public_51504c _public_51504c
#define public_51505d _public_51505d
#define public_515066 _public_515066
#define public_51507a _public_51507a
#define public_51507c _public_51507c
#define public_515145 _public_515145
#define public_5151dc _public_5151dc
#define public_5151e6 _public_5151e6
#define public_5151f6 _public_5151f6

PROC_DECLARE(0x514f20, internal_514f20, public_514f20);
extern "C" NAKED register_t __cdecl internal_514f20()
{
    __asm
    {
        sub esp, 0x48
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        test byte ptr ds : [esi+0x185], 4
        mov ebp, ecx
        jne public_5151f6
        push ebx
        push edi
        call public_54baf0
        cmp esi, eax
        mov eax, dword ptr ss : [ebp+0x14]
        sete bl
        xor edi, edi
        cmp eax, edi
        je public_514f73
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_514f73
        add eax, 0xC
        cmp eax, edi
        je public_514f73
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_514f73
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_514f75
        public_514f73 : nop
        xor eax, eax
        public_514f75 : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        cmp eax, edi
        jne public_514f90
        mov dword ptr ss : [esp+0x5C], edi
        jmp public_514fa4
        public_514f90 : nop
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, edi
        jne public_514f9d
        mov dword ptr ss : [esp+0x5C], edi
        jmp public_514fa4
        public_514f9d : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x5C], edx
        public_514fa4 : nop
        test bl, bl
        je public_515025
        mov cl, byte ptr ds : [esi+0x184]
        and cl, 0xBF
        lea edi, ds:[esi+0x174]
        mov byte ptr ds : [esi+0x184], cl
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_514fc9
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_514fc9 : nop
        mov ebx, dword ptr ds : [edi+4]
        test ebx, ebx
        je public_51500a
        lea ecx, ss:[esp+0x28]
        call public_4215b0
        lea eax, ss:[esp+0x28]
        push eax
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov edx, dword ptr ds : [ebx]
        push 0xFFFFFFFF
        mov ecx, ebx
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_51500a : nop
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_51501e
        call public_5379b0
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_51501e : nop
        mov ecx, edi
        call public_502d90
        public_515025 : nop
        mov eax, dword ptr ds : [esi+0x16C]
        test eax, eax
        lea edi, ds:[esi+0x164]
        je public_51503b
        test byte ptr ds : [eax+8], 2
        je public_51505d
        public_51503b : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_51504c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_51505d
        public_51504c : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_515066
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        jne public_515066
        public_51505d : nop
        push edi
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        public_515066 : nop
        mov eax, dword ptr ds : [esi+0x160]
        add eax, 0x14
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_51507a
        add eax, 0xFFFFFFF8
        jmp public_51507c
        public_51507a : nop
        xor eax, eax
        public_51507c : nop
        mov cl, byte ptr ds : [eax+0x1F0]
        test cl, cl
        jne public_5151dc
        call public_54baf0
        cmp esi, eax
        mov ebx, dword ptr ds : [public_5c6040]
        jne public_515145
        mov edx, dword ptr ss : [esp+0x5C]
        lea edi, ds:[edx+0x64]
        mov ecx, edi
        call ebx
        test al, al
        jne public_515145
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x60]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x2C]
        fld dword ptr ss : [esp+0x5C]
        fchs 
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        call public_4215b0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call ebx
        test al, al
        jne public_5151e6
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c5c
        call public_503f40
        jmp public_5151e6
        public_515145 : nop
        mov edx, dword ptr ds : [esi]
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
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        call dword ptr ds : [edx+0x1C]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x5C]
        lea edi, ds:[eax+0x78]
        mov ecx, edi
        call ebx
        test al, al
        jne public_5151e6
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        push ebp
        push esi
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        jmp public_5151e6
        public_5151dc : nop
        push 0
        push esi
        mov ecx, ebp
        call public_514bf0
        public_5151e6 : nop
        mov al, byte ptr ds : [esi+0x185]
        or al, 5
        pop edi
        mov byte ptr ds : [esi+0x185], al
        pop ebx
        public_5151f6 : nop
        pop esi
        pop ebp
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x514f20)
    }
}

#undef public_514f73
#undef public_514f75
#undef public_514f90
#undef public_514f9d
#undef public_514fa4
#undef public_514fc9
#undef public_51500a
#undef public_51501e
#undef public_515025
#undef public_51503b
#undef public_51504c
#undef public_51505d
#undef public_515066
#undef public_51507a
#undef public_51507c
#undef public_515145
#undef public_5151dc
#undef public_5151e6
#undef public_5151f6
