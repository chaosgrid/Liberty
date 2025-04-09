#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_514750);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_514799 _public_514799
#define public_51479b _public_51479b
#define public_5147b4 _public_5147b4
#define public_5147bf _public_5147bf
#define public_5147c2 _public_5147c2
#define public_5147f3 _public_5147f3
#define public_5147f5 _public_5147f5
#define public_514851 _public_514851
#define public_5148bb _public_5148bb
#define public_514956 _public_514956

PROC_DECLARE(0x514750, internal_514750, public_514750);
extern "C" NAKED register_t __cdecl internal_514750()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x78]
        push esi
        push edi
        mov esi, ecx
        call public_54baf0
        cmp ebp, eax
        mov eax, dword ptr ds : [esi+0x14]
        sete byte ptr ss : [esp+0x80]
        test eax, eax
        je public_514799
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_514799
        add eax, 0xC
        test eax, eax
        je public_514799
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_514799
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_51479b
        public_514799 : nop
        xor eax, eax
        public_51479b : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        test eax, eax
        jne public_5147b4
        xor ebx, ebx
        jmp public_5147c2
        public_5147b4 : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_5147bf
        xor ebx, ebx
        jmp public_5147c2
        public_5147bf : nop
        mov ebx, dword ptr ds : [eax+4]
        public_5147c2 : nop
        mov al, byte ptr ss : [ebp+0x184]
        test al, 0x20
        jne public_514956
        or al, 0x20
        mov byte ptr ss : [ebp+0x184], al
        mov al, byte ptr ss : [esp+0x80]
        test al, al
        je public_5148bb
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_5147f3
        lea ecx, ds:[eax-8]
        jmp public_5147f5
        public_5147f3 : nop
        xor ecx, ecx
        public_5147f5 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        test byte ptr ss : [ebp+0x184], 1
        mov ecx, 9
        lea edi, ss:[esp+0x1C]
        rep movsd
        jne public_514851
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x1C]
        fld dword ptr ss : [esp+0x48]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x3C], edx
        public_514851 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x70], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x74], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x78], eax
        mov ecx, 9
        lea esi, ss:[esp+0x1C]
        lea edi, ss:[esp+0x4C]
        rep movsd
        lea esi, ds:[ebx+0x58]
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_514956
        lea ecx, ss:[ebp+0x174]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        push 0xFFFFFFFF
        push ebp
        push esi
        call public_40f080
        add esp, 4
        mov ecx, offset public_6751cc
        push eax
        call public_503070
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x6C
        ret 4
        public_5148bb : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        call dword ptr ds : [eax+0x1C]
        lea esi, ds:[ebx+0x6C]
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_514956
        lea ecx, ss:[ebp+0x164]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        push ebp
        push esi
        call public_40f080
        add esp, 4
        mov ecx, offset public_674c60
        push eax
        call public_503070
        public_514956 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x514750)
    }
}

#undef public_514799
#undef public_51479b
#undef public_5147b4
#undef public_5147bf
#undef public_5147c2
#undef public_5147f3
#undef public_5147f5
#undef public_514851
#undef public_5148bb
#undef public_514956
