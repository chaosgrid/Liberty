#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_4d4b50);
CLANG_FORWARD_PROC_SYMBOL(public_4d5410);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bd40);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_58a580);
CLANG_FORWARD_PROC_SYMBOL(public_5a06a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4d5796 _public_4d5796
#define public_4d57a6 _public_4d57a6
#define public_4d5803 _public_4d5803
#define public_4d583d _public_4d583d
#define public_4d58b1 _public_4d58b1
#define public_4d58dc _public_4d58dc
#define public_4d5944 _public_4d5944
#define public_4d5966 _public_4d5966
#define public_4d599f _public_4d599f
#define public_4d59bf _public_4d59bf
#define public_4d59da _public_4d59da
#define public_4d59e6 _public_4d59e6
#define public_4d5a1f _public_4d5a1f
#define public_4d5a2e _public_4d5a2e
#define public_4d5a4e _public_4d5a4e
#define public_4d5a6e _public_4d5a6e

PROC_DECLARE(0x4d56d0, internal_4d56d0, public_4d56d0);
extern "C" NAKED register_t __cdecl internal_4d56d0()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_54bd40
        test al, al
        jne public_4d5a6e
        push 6
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4d5a6e
        push 0xA
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4d5a6e
        call public_41dd90
        test al, al
        je public_4d5a6e
        call public_54baf0
        test eax, eax
        je public_4d5a6e
        call public_41a3e0
        test al, al
        jne public_4d5a6e
        mov ecx, dword ptr ds : [esi+0x34C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x34]
        mov ecx, esi
        call public_5a06a0
        call public_54baf0
        mov edi, eax
        test edi, edi
        je public_4d5a6e
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        mov ebx, eax
        test ebx, ebx
        je public_4d5a6e
        mov eax, dword ptr ds : [ebx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4d5a6e
        fld dword ptr ds : [ebx+0x19C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4d5796
        mov dword ptr ss : [esp+0x14], 0
        jmp public_4d57a6
        public_4d5796 : nop
        fld dword ptr ds : [ebx+0x198]
        fdiv dword ptr ds : [ebx+0x19C]
        fstp dword ptr ss : [esp+0x14]
        public_4d57a6 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push 0xFFA7A15E
        lea ebp, ds:[esi-0x38]
        push 0x4437C000
        mov ecx, ebp
        call public_4d5410
        add edi, 0xC
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x18], 0
        je public_4d5803
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_4d5803
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_4d5803
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call public_4d4b50
        add esp, 0x10
        public_4d5803 : nop
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d583d
        fld dword ptr ss : [esp+0x18]
        fdiv dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_4d583d
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_4d583d : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push 0xFF3E3DB5
        push 0x443A4000
        mov ecx, ebp
        call public_4d5410
        test edi, edi
        je public_4d5a6e
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        je public_4d5a6e
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4d5a6e
        mov ecx, edi
        call dword ptr ds : [public_5c6504]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push 0xFF782A33
        push 0x443CC000
        mov ecx, ebp
        call public_4d5410
        mov ecx, ebx
        call dword ptr ds : [public_5c64a0]
        test al, al
        je public_4d58dc
        mov ecx, ebx
        call dword ptr ds : [public_5c6500]
        public_4d58b1 : nop
        fcom dword ptr ds : [public_5d7e84]
        fnstsw ax
        test ah, 0x41
        jne public_4d5944
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_4d5944
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        jmp public_4d5966
        public_4d58dc : nop
        fld dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ebx+0x1C]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ebx+0x28]
        push ecx
        fstp dword ptr ss : [esp+0x28]
        mov ecx, ebx
        call dword ptr ds : [eax+0x54]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [eax+8]
        mov ecx, ebx
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax]
        faddp 
        fchs 
        fstp dword ptr ss : [esp+0x18]
        call dword ptr ds : [public_5c64fc]
        test al, al
        fld dword ptr ss : [esp+0x18]
        je public_4d58b1
        fcom dword ptr ds : [public_5d7e80]
        fnstsw ax
        test ah, 0x41
        jne public_4d58b1
        fstp st(0)
        fld dword ptr ds : [public_5d7e80]
        public_4d5944 : nop
        fcom qword ptr ds : [public_5d7e78]
        fnstsw ax
        test ah, 5
        jp public_4d5966
        fcom dword ptr ds : [public_5c7500]
        fnstsw ax
        test ah, 0x41
        jne public_4d5966
        fstp st(0)
        fld dword ptr ds : [public_5c7500]
        public_4d5966 : nop
        call public_5b7ec0
        cmp dword ptr ds : [esi+0x344], eax
        mov ebp, dword ptr ds : [public_5c71ec]
        je public_4d59bf
        cmp eax, 0x3E7
        mov dword ptr ds : [esi+0x344], eax
        jle public_4d599f
        mov ecx, dword ptr ds : [esi+0x33C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x526
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        jmp public_4d59bf
        public_4d599f : nop
        push eax
        lea eax, ss:[esp+0x38]
/*FIXUP push offset public_5d7c04 @0x4d59a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7c04
        push eax
        call ebp
        add esp, 0xC
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ds : [esi+0x33C]
        call public_58a580
        public_4d59bf : nop
        fld dword ptr ds : [ebx+0x2A4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4d59da
        fld dword ptr ds : [public_5c7474]
        jmp public_4d59e6
        public_4d59da : nop
        fld dword ptr ds : [ebx+0x2A0]
        fdiv dword ptr ds : [ebx+0x2A4]
        public_4d59e6 : nop
        fmul dword ptr ds : [public_5ca230]
        call public_5b7ec0
        mov edi, eax
        cmp dword ptr ds : [esi+0x348], edi
        je public_4d5a4e
        cmp edi, 0x19
        mov ecx, dword ptr ds : [esi+0x340]
        mov dword ptr ds : [esi+0x348], edi
        push 1
        jge public_4d5a1f
        mov edx, dword ptr ds : [ecx]
/*FIXUP push offset public_679ba8 @0x4d5a10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
        push 0x33
        call dword ptr ds : [edx+0xA8]
        jmp public_4d5a2e
        public_4d5a1f : nop
        mov eax, dword ptr ds : [ecx]
/*FIXUP push offset public_679bb0 @0x4d5a21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb0
        push 0x33
        call dword ptr ds : [eax+0xA8]
        public_4d5a2e : nop
        push edi
        lea ecx, ss:[esp+0x38]
/*FIXUP push offset public_5d7e70 @0x4d5a33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7e70
        push ecx
        call ebp
        mov ecx, dword ptr ds : [esi+0x340]
        add esp, 0xC
        lea edx, ss:[esp+0x34]
        push edx
        call public_58a580
        public_4d5a4e : nop
        mov ecx, dword ptr ds : [esi+0x33C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [esi+0x340]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x9C]
        public_4d5a6e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x4d56d0)
    }
}

#undef public_4d5796
#undef public_4d57a6
#undef public_4d5803
#undef public_4d583d
#undef public_4d58b1
#undef public_4d58dc
#undef public_4d5944
#undef public_4d5966
#undef public_4d599f
#undef public_4d59bf
#undef public_4d59da
#undef public_4d59e6
#undef public_4d5a1f
#undef public_4d5a2e
#undef public_4d5a4e
#undef public_4d5a6e
