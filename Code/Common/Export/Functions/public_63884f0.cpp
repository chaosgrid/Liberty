#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63884f0);
CLANG_FORWARD_PROC_SYMBOL(public_638c680);

#define public_638852b _public_638852b
#define public_638854d _public_638854d
#define public_638856e _public_638856e
#define public_6388599 _public_6388599
#define public_63885b1 _public_63885b1
#define public_63885f8 _public_63885f8
#define public_6388650 _public_6388650
#define public_638866d _public_638866d
#define public_6388698 _public_6388698
#define public_63886a2 _public_63886a2
#define public_63886ff _public_63886ff
#define public_6388710 _public_6388710
#define public_6388719 _public_6388719

PROC_DECLARE(0x63884f0, internal_63884f0, public_63884f0);
extern "C" NAKED register_t __cdecl internal_63884f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        push ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6388719
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        mov edi, dword ptr ss : [ebp+0xC]
        jne public_638852b
        push edi
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_6388719
        public_638852b : nop
        mov eax, dword ptr ds : [public_658b108]
        test eax, eax
        jne public_6388719
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 4
        je public_638854d
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        jne public_6388719
        public_638854d : nop
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        je public_6388719
        mov edx, eax
        lea eax, ss:[esp+0x18]
        lea ecx, ss:[esp+0x18]
        sub edx, eax
        mov ebx, 3
        mov esi, 0x3FF00000
        public_638856e : nop
        fld qword ptr ds : [edx+ecx]
        fadd qword ptr ds : [public_63a5940]
        fmul qword ptr ds : [public_63a5980]
        fst qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_63a59b8]
        fnstsw ax
        test ah, 1
        je public_6388599
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0xBFF00000
        public_6388599 : nop
        fld qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_63a5940]
        fnstsw ax
        test ah, 0x41
        jne public_63885b1
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], esi
        public_63885b1 : nop
        add ecx, 8
        dec ebx
        jne public_638856e
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 0x10
        mov ecx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [edi+0x48], ecx
        je public_638866d
        mov ecx, dword ptr ds : [edi+0x3C]
        test ecx, ecx
        je public_6388710
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        add ecx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_6388710
        mov esi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x2C]
        lea esi, ds:[esi+esi*2+1]
        public_63885f8 : nop
        mov edx, dword ptr ds : [eax+0x48]
        cmp edx, dword ptr ds : [public_658b8e0]
        je public_6388650
        mov eax, dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[esi+1]
        push ecx
        push esi
        lea edx, ds:[esi-1]
        push edx
/*FIXUP push offset public_63f81e4 @0x6388631*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f81e4
        push eax
        call dword ptr ds : [public_63991e8]
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 0x34
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        add esi, 3
        public_6388650 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_63885f8
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638866d : nop
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        je public_6388710
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_6388710
        mov esi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x2C]
        lea esi, ds:[esi+esi*2+1]
        public_6388698 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, edi
        jne public_63886a2
        mov ecx, dword ptr ds : [eax+8]
        public_63886a2 : nop
        mov edx, dword ptr ds : [ecx+0x48]
        cmp edx, dword ptr ds : [public_658b8e0]
        je public_63886ff
        mov ecx, dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [edi+0x4C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        and eax, 0xFFFFFF
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        push ecx
        push edx
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ds:[esi+1]
        push eax
        push esi
        lea ecx, ds:[esi-1]
        push ecx
/*FIXUP push offset public_63f81b4 @0x63886e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f81b4
        push edx
        call dword ptr ds : [public_63991e8]
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 0x38
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        add esi, 3
        public_63886ff : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6388698
        public_6388710 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx], eax
        public_6388719 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63884f0)
    }
}

#undef public_638852b
#undef public_638854d
#undef public_638856e
#undef public_6388599
#undef public_63885b1
#undef public_63885f8
#undef public_6388650
#undef public_638866d
#undef public_6388698
#undef public_63886a2
#undef public_63886ff
#undef public_6388710
#undef public_6388719
