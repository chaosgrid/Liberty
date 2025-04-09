#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_411350);
CLANG_FORWARD_PROC_SYMBOL(public_411f70);
CLANG_FORWARD_PROC_SYMBOL(public_41a390);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b90);
CLANG_FORWARD_PROC_SYMBOL(public_4cbf40);
CLANG_FORWARD_PROC_SYMBOL(public_516fe0);
CLANG_FORWARD_PROC_SYMBOL(public_518f20);
CLANG_FORWARD_PROC_SYMBOL(public_51a0c0);
CLANG_FORWARD_PROC_SYMBOL(public_51a100);
CLANG_FORWARD_PROC_SYMBOL(public_51a120);
CLANG_FORWARD_PROC_SYMBOL(public_51a140);
CLANG_FORWARD_PROC_SYMBOL(public_51dbd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b806a);

#define public_518f93 _public_518f93
#define public_518f95 _public_518f95
#define public_518fc0 _public_518fc0
#define public_518fc2 _public_518fc2
#define public_518fe9 _public_518fe9
#define public_518feb _public_518feb
#define public_519039 _public_519039
#define public_51903b _public_51903b
#define public_519083 _public_519083
#define public_519085 _public_519085
#define public_5190b0 _public_5190b0
#define public_5190bf _public_5190bf
#define public_5190c1 _public_5190c1
#define public_51911b _public_51911b
#define public_519196 _public_519196
#define public_5191c7 _public_5191c7
#define public_5191cd _public_5191cd
#define public_519201 _public_519201
#define public_51924d _public_51924d
#define public_51924f _public_51924f
#define public_519299 _public_519299
#define public_5193db _public_5193db
#define public_51943a _public_51943a
#define public_51946d _public_51946d
#define public_5194c0 _public_5194c0
#define public_519522 _public_519522
#define public_519556 _public_519556
#define public_519589 _public_519589
#define public_5195c6 _public_5195c6
#define public_51969d _public_51969d
#define public_5196c6 _public_5196c6
#define public_5196f2 _public_5196f2
#define public_519726 _public_519726
#define public_519776 _public_519776
#define public_5197d7 _public_5197d7
#define public_519832 _public_519832
#define public_519857 _public_519857
#define public_519889 _public_519889
#define public_5198ca _public_5198ca
#define public_5198dd _public_5198dd
#define public_519902 _public_519902
#define public_519904 _public_519904
#define public_519924 _public_519924
#define public_519a00 _public_519a00
#define public_519a50 _public_519a50
#define public_519a7e _public_519a7e
#define public_519a90 _public_519a90
#define public_519af1 _public_519af1
#define public_519b1a _public_519b1a
#define public_519b64 _public_519b64
#define public_519c79 _public_519c79
#define public_519c8e _public_519c8e
#define public_519ca1 _public_519ca1
#define public_519cca _public_519cca
#define public_519d59 _public_519d59
#define public_519d72 _public_519d72
#define public_519db7 _public_519db7
#define public_519de1 _public_519de1
#define public_519e0a _public_519e0a
#define public_519e23 _public_519e23
#define public_519e76 _public_519e76
#define public_519f10 _public_519f10
#define public_519f89 _public_519f89
#define public_519fbc _public_519fbc
#define public_51a00f _public_51a00f
#define public_51a037 _public_51a037
#define public_51a0a5 _public_51a0a5

PROC_DECLARE(0x518f20, internal_518f20, public_518f20);
extern "C" NAKED register_t __cdecl internal_518f20()
{
    __asm
    {
        sub esp, 0x164
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        je public_51a0a5
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51a0a5
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        je public_51a0a5
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51a0a5
        add eax, 0xC
        test eax, eax
        je public_51a0a5
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_51a0a5
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_51a0a5
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        je public_518f93
        lea ecx, ds:[eax-8]
        jmp public_518f95
        public_518f93 : nop
        xor ecx, ecx
        public_518f95 : nop
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        push edi
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x84]
        rep movsd
        je public_518fc0
        lea ecx, ds:[eax-8]
        jmp public_518fc2
        public_518fc0 : nop
        xor ecx, ecx
        public_518fc2 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x5C], edx
        je public_518fe9
        lea ecx, ds:[eax-8]
        jmp public_518feb
        public_518fe9 : nop
        xor ecx, ecx
        public_518feb : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x48]
        push eax
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x38]
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_5190b0
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        je public_519039
        lea ecx, ds:[eax-8]
        jmp public_51903b
        public_519039 : nop
        xor ecx, ecx
        public_51903b : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x14]
        call public_410190
        fdivr dword ptr ds : [public_5c75dc]
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        je public_519083
        lea ecx, ds:[eax-8]
        jmp public_519085
        public_519083 : nop
        xor ecx, ecx
        public_519085 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x54]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        public_5190b0 : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        je public_5190bf
        add eax, 0xFFFFFFF8
        jmp public_5190c1
        public_5190bf : nop
        xor eax, eax
        public_5190c1 : nop
        push eax
        call dword ptr ds : [public_5c6470]
        mov dword ptr ss : [esp+0x24], eax
        mov al, byte ptr ss : [esp+0x184]
        add esp, 4
        test al, al
        je public_519196
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, eax
        mov dword ptr ss : [ebp+0x1F8], ecx
        xor ecx, ecx
        mov dword ptr ss : [ebp+0x1EC], eax
        mov dword ptr ss : [ebp+0x1FC], ecx
        mov dword ptr ss : [ebp+0x1A0], ecx
        mov dword ptr ss : [ebp+0x1A4], ecx
        mov dword ptr ss : [ebp+0x1A8], 0xBF800000
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp eax, ecx
        je public_51911b
        lea ecx, ds:[eax-8]
        public_51911b : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        lea ebx, ss:[ebp+0x158]
        mov esi, eax
        mov ecx, 9
        mov edi, ebx
        rep movsd
        fld dword ptr ds : [ebx+4]
        lea eax, ss:[ebp+0x204]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x10]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_519196
        mov esi, eax
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6624]
        fld dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ebx+0x10]
        lea edx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx+0x1C]
        push edx
        fstp dword ptr ss : [esp+0x30]
        mov ecx, esi
        call dword ptr ds : [public_5c6638]
        public_519196 : nop
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [ebp+0x1F0]
        fld dword ptr ss : [esp+0x17C]
        fcomp dword ptr ds : [public_5d7e84]
        fnstsw ax
        test ah, 0x41
        jne public_5191c7
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [ebp+0x1EC]
        fdiv dword ptr ss : [esp+0x17C]
        jmp public_5191cd
        public_5191c7 : nop
        fld qword ptr ds : [public_5c8ba8]
        public_5191cd : nop
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [ebp+0x1F8]
        fmul dword ptr ss : [esp+0x17C]
        fadd dword ptr ss : [ebp+0x1FC]
        fst dword ptr ss : [ebp+0x1FC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_519201
        mov dword ptr ss : [ebp+0x1FC], 0
        public_519201 : nop
        fld dword ptr ss : [ebp+0x1FC]
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ds : [public_5d1fe4]
        fadd dword ptr ds : [public_5c75dc]
        fmul dword ptr ss : [ebp+0x1F4]
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [ebp+0x1FC]
        fcomp qword ptr ds : [public_5d5138]
        fnstsw ax
        test ah, 0x41
        je public_51924d
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_51924f
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [ebp+0x1F8], eax
        jmp public_519299
        public_51924d : nop
        fstp st(0)
        public_51924f : nop
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x17C]
        fadd dword ptr ss : [ebp+0x1F8]
        fst dword ptr ss : [ebp+0x1F8]
        fld dword ptr ss : [ebp+0x1FC]
        fmul dword ptr ds : [public_5d845c]
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_519299
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x1F8], ecx
        public_519299 : nop
        fadd dword ptr ss : [ebp+0x1FC]
        lea edx, ss:[ebp+0x100]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x78], eax
        lea eax, ss:[ebp+0x14C]
        mov dword ptr ss : [esp+0x7C], ecx
        push eax
        lea ecx, ss:[ebp+0x140]
        mov dword ptr ss : [esp+0x84], edx
        push ecx
        lea edx, ss:[esp+0xE4]
        fstp dword ptr ss : [esp+0x34]
        push edx
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        call public_423b30
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0xEC]
        push ecx
        lea edx, ss:[esp+0xBC]
        push edx
        call public_423b30
        fld dword ptr ss : [esp+0xC0]
        fadd dword ptr ss : [esp+0x90]
        mov al, byte ptr ss : [ebp+0x13C]
        add esp, 0x18
        test al, al
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x7C]
        fadd dword ptr ss : [esp+0xAC]
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x80]
        fadd dword ptr ss : [esp+0xB0]
        fstp dword ptr ss : [esp+0x80]
        je public_519857
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_519857
        mov ecx, eax
        call dword ptr ds : [public_5c6634]
        test al, al
        je public_519857
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, esi
        call dword ptr ds : [public_5c6630]
        test al, al
        mov ecx, esi
        je public_519522
        fld dword ptr ss : [ebp+0x15C]
        lea eax, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [ebp+0x168]
        push eax
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [ebp+0x174]
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [public_5c6638]
        lea ebx, ss:[ebp+0x204]
        push ebx
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x118]
        push edx
        call public_516fe0
        mov esi, eax
        mov eax, dword ptr ds : [public_675220]
        add esp, 0xC
        test eax, eax
        jne public_5193db
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_5193db : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0xAC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        fld dword ptr ss : [ebp+0x15C]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [ebp+0x168]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x88]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [ebp+0x174]
        push ecx
        lea edx, ss:[esp+0x118]
        fstp dword ptr ss : [esp+0x34]
        push edx
        call public_516fe0
        mov esi, eax
        mov eax, dword ptr ds : [public_675220]
        add esp, 0xC
        test eax, eax
        jne public_51943a
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_51943a : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0xE0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        fld dword ptr ss : [esp+0x17C]
        fmul dword ptr ss : [ebp+0x200]
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        fstp dword ptr ss : [esp+0x34]
        jne public_51946d
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_51946d : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0xE0]
        push edx
        lea edx, ss:[esp+0xB0]
        push edx
        lea edx, ss:[esp+0x70]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        jne public_5194c0
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_5194c0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0xF0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        fld dword ptr ss : [esp+0xF0]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xFC]
        mov eax, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x108]
        mov ecx, 9
        lea esi, ss:[esp+0xEC]
        lea edi, ss:[esp+0x84]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx], eax
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        jmp public_519857
        public_519522 : nop
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_5c662c]
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        je public_5195c6
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_5195c6
        mov eax, dword ptr ds : [eax+0x158]
        cmp eax, 2
        je public_519556
        cmp eax, 3
        jne public_5195c6
        public_519556 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_519589
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_519589
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5195c6
        public_519589 : nop
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        call dword ptr ds : [public_5c6628]
        public_5195c6 : nop
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        call public_516fe0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [ebp+0x20C]
        mov eax, dword ptr ss : [esp+0x80]
        fld dword ptr ss : [esp+0x24]
        lea ebx, ss:[ebp+0x204]
        fmul dword ptr ds : [ebx+4]
        add esp, 0xC
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ebx]
        faddp 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x1C]
        fld dword ptr ss : [esp+0xBC]
        fld dword ptr ss : [esp+0xC8]
        fld dword ptr ss : [esp+0xD4]
        fmul st, st(3)
        fxch 
        fmul st, st(4)
        faddp 
        fxch 
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5dbcb0]
        fnstsw ax
        test ah, 0x41
        jne public_519832
        fld dword ptr ss : [esp+0x10]
        fabs 
        fcomp qword ptr ds : [public_5dbca8]
        fnstsw ax
        test ah, 5
        jp public_5197d7
        push ebx
        lea edx, ss:[esp+0x88]
        push edx
        lea eax, ss:[esp+0x118]
        push eax
        call public_516fe0
        mov eax, dword ptr ds : [public_675220]
        add esp, 0xC
        test eax, eax
        jne public_51969d
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_51969d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xB8]
        push edx
        lea edx, ss:[esp+0xE0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_5196c6
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_5196c6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x110]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_5196f2
        mov dword ptr ss : [esp+0x10], 0
        public_5196f2 : nop
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        fadd dword ptr ds : [public_5c75dc]
        fmul dword ptr ss : [ebp+0x200]
        fmul dword ptr ss : [esp+0x17C]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x34]
        jne public_519726
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519726 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0xE0]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x70]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        jne public_519776
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519776 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0xF0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        fld dword ptr ss : [esp+0xF0]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0xFC]
        mov eax, dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x108]
        mov ecx, 9
        lea esi, ss:[esp+0xEC]
        lea edi, ss:[esp+0xB8]
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x44]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        public_5197d7 : nop
        fld dword ptr ss : [esp+0xBC]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0xC8]
        mov ecx, 9
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0xD4]
        lea esi, ss:[esp+0xB8]
        lea edi, ss:[esp+0x84]
        lea eax, ss:[esp+0x24]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        fstp dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx+8], edx
        call dword ptr ds : [public_5c6638]
        jmp public_519857
        public_519832 : nop
        fld dword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_5dbca0]
        fnstsw ax
        test ah, 0x41
        jne public_519857
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], eax
        public_519857 : nop
        mov al, byte ptr ss : [esp+0x180]
        test al, al
        je public_5198ca
        lea edi, ss:[ebp+0x158]
        mov ecx, 9
        lea esi, ss:[esp+0x84]
        rep movsd
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_519889
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519889 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x88]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x60]
        jmp public_51a037
        public_5198ca : nop
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_5198dd
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_5198dd : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x84]
        push edx
        lea edx, ss:[esp+0x158]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        je public_519902
        lea ecx, ds:[eax-8]
        jmp public_519904
        public_519902 : nop
        xor ecx, ecx
        public_519904 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xA8]
        push edx
        call dword ptr ds : [eax+0x50]
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_519924
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519924 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA8]
        push edx
        lea edx, ss:[esp+0x88]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xA8], eax
        fnstsw ax
        mov dword ptr ss : [esp+0xAC], ecx
        mov dword ptr ss : [esp+0xB0], edx
        test ah, 0x41
        mov dword ptr ss : [esp+0xD8], 0x3F800000
        mov dword ptr ss : [esp+0xC8], 0x3F800000
        mov dword ptr ss : [esp+0xB8], 0x3F800000
        mov dword ptr ss : [esp+0xD4], 0
        mov dword ptr ss : [esp+0xD0], 0
        mov dword ptr ss : [esp+0xCC], 0
        mov dword ptr ss : [esp+0xC4], 0
        mov dword ptr ss : [esp+0xC0], 0
        mov dword ptr ss : [esp+0xBC], 0
        mov ecx, 3
        lea eax, ss:[esp+0xC0]
        jne public_519a7e
        fmul dword ptr ss : [ebp+0x1E0]
        fchs 
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        lea ebx, ds:[ebx]
        public_519a00 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-0xC]
        fld st(1)
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_519a00
        fstp st(0)
        lea eax, ss:[esp+0xC0]
        fld dword ptr ss : [esp+0x18]
        mov ecx, 3
        fmul dword ptr ss : [ebp+0x1DC]
        fchs 
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        lea ecx, ds:[ecx]
        public_519a50 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_519a50
        jmp public_519b1a
        public_519a7e : nop
        fmul dword ptr ss : [ebp+0x1E4]
        fchs 
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        public_519a90 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-0xC]
        fld st(1)
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_519a90
        fstp st(0)
        lea eax, ss:[esp+0xC0]
        fld dword ptr ss : [esp+0x14]
        mov ecx, 3
        fabs 
        fmul dword ptr ds : [public_6135c4]
        fadd qword ptr ds : [public_5c89b8]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [ebp+0x1DC]
        fchs 
        fmulp 
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        public_519af1 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_519af1
        public_519b1a : nop
        lea eax, ss:[esp+0xB8]
        fstp st(0)
        push eax
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x118]
        push edx
        call public_51a140
        mov eax, dword ptr ds : [public_675220]
        add esp, 0xC
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x110]
        lea edi, ss:[esp+0x84]
        rep movsd
        jne public_519b64
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519b64 : nop
        mov edx, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0x1A0]
        push ebx
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x88]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0xA0]
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x30]
        push ecx
        mov dword ptr ss : [esp+0x24], edx
        call public_4cbf40
        fabs 
        fcomp qword ptr ds : [public_5dafa8]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_519c79
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        call public_51a0c0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x48], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x4C], ecx
        mov edx, dword ptr ds : [eax+8]
        add esp, 0xC
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x44], edx
        call public_41a390
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0xE4]
        push edx
        call public_51a0c0
        add esp, 0xC
        lea ecx, ss:[esp+0xDC]
        call public_41a390
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0xF0]
        call public_51a100
        lea ecx, ss:[esp+0xDC]
        push ecx
        lea ecx, ss:[esp+0xF0]
        call public_51a120
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_411350
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0xF0]
        call public_411f70
        jmp public_519c8e
        public_519c79 : nop
        mov ecx, 9
        lea esi, ss:[esp+0x84]
        lea edi, ss:[esp+0xEC]
        rep movsd
        public_519c8e : nop
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_519ca1
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519ca1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xEC]
        push edx
        lea edx, ss:[esp+0x168]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_519cca
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519cca : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x84]
        push edx
        lea edx, ss:[esp+0x138]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+0xA4]
        mov ecx, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0x8C]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x48]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x10C]
        mov ecx, dword ptr ss : [esp+0x100]
        mov edx, dword ptr ss : [esp+0xF4]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x30]
        call public_422b80
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fst dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_519d59
        mov dword ptr ss : [esp+0x10], 0
        jmp public_519d72
        public_519d59 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_519d72
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_519d72 : nop
        fld dword ptr ss : [esp+0x10]
        call public_5b806a
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x17C]
        fst dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x20]
        fld st(0)
        fsub dword ptr ss : [ebp+0x1AC]
        fcomp dword ptr ss : [ebp+0x1D4]
        fnstsw ax
        test ah, 0x41
        jne public_519db7
        fstp st(0)
        fld dword ptr ss : [ebp+0x1D4]
        fadd dword ptr ss : [ebp+0x1AC]
        public_519db7 : nop
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], 0x3F800000
        fcomp qword ptr ds : [public_5dbc98]
        fnstsw ax
        test ah, 0x41
        jne public_519de1
        fld dword ptr ss : [esp+0x17C]
        fdiv dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        public_519de1 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [ebp+0x1D8]
        fnstsw ax
        test ah, 0x41
        jne public_519e0a
        mov eax, dword ptr ss : [ebp+0x1D8]
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x10], eax
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        public_519e0a : nop
        fstp dword ptr ss : [ebp+0x1AC]
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_519e23
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519e23 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x138]
        push edx
        lea edx, ss:[esp+0x16C]
        push edx
        lea edx, ss:[esp+0x70]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        jne public_519e76
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519e76 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x114]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0x110]
        lea edi, ss:[esp+0x84]
        lea eax, ss:[esp+0x78]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call public_423b90
        mov eax, dword ptr ds : [public_675220]
        fld dword ptr ss : [esp+0x30]
        add esp, 0xC
        test eax, eax
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0xA4]
        fstp dword ptr ss : [esp+0x2C]
        jne public_519f10
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519f10 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x78]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x44]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x4C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        lea edi, ss:[ebp+0x158]
        mov ecx, 9
        lea esi, ss:[esp+0x84]
        mov dword ptr ds : [ebx+8], edx
        rep movsd
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_519f89
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519f89 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x84]
        push edx
        lea edx, ss:[esp+0x148]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [ebp+0x1E8]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_519fbc
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_519fbc : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x158]
        push edx
        lea edx, ss:[esp+0x14C]
        push edx
        lea edx, ss:[esp+0x70]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        jne public_51a00f
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_51a00f : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x114]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0x110]
        lea edi, ss:[esp+0x84]
        rep movsd
        public_51a037 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x5C]
        lea ebx, ss:[ebp+0x130]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+8], ecx
        lea eax, ss:[esp+0x84]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x1EC], edx
        call public_51dbd0
        mov eax, dword ptr ss : [esp+0x178]
        mov edi, eax
        mov ecx, 9
        lea esi, ss:[esp+0x84]
        rep movsd
        mov ecx, dword ptr ds : [ebx]
        add eax, 0x24
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+4]
        pop edi
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+8]
        pop esi
        pop ebx
        mov dword ptr ds : [eax+8], ecx
        mov al, 1
        pop ebp
        add esp, 0x164
        ret 0xC
        public_51a0a5 : nop
        xor al, al
        pop ebp
        add esp, 0x164
        ret 0xC
        UNREACHABLE_TRAP(0x518f20)
    }
}

#undef public_518f93
#undef public_518f95
#undef public_518fc0
#undef public_518fc2
#undef public_518fe9
#undef public_518feb
#undef public_519039
#undef public_51903b
#undef public_519083
#undef public_519085
#undef public_5190b0
#undef public_5190bf
#undef public_5190c1
#undef public_51911b
#undef public_519196
#undef public_5191c7
#undef public_5191cd
#undef public_519201
#undef public_51924d
#undef public_51924f
#undef public_519299
#undef public_5193db
#undef public_51943a
#undef public_51946d
#undef public_5194c0
#undef public_519522
#undef public_519556
#undef public_519589
#undef public_5195c6
#undef public_51969d
#undef public_5196c6
#undef public_5196f2
#undef public_519726
#undef public_519776
#undef public_5197d7
#undef public_519832
#undef public_519857
#undef public_519889
#undef public_5198ca
#undef public_5198dd
#undef public_519902
#undef public_519904
#undef public_519924
#undef public_519a00
#undef public_519a50
#undef public_519a7e
#undef public_519a90
#undef public_519af1
#undef public_519b1a
#undef public_519b64
#undef public_519c79
#undef public_519c8e
#undef public_519ca1
#undef public_519cca
#undef public_519d59
#undef public_519d72
#undef public_519db7
#undef public_519de1
#undef public_519e0a
#undef public_519e23
#undef public_519e76
#undef public_519f10
#undef public_519f89
#undef public_519fbc
#undef public_51a00f
#undef public_51a037
#undef public_51a0a5
