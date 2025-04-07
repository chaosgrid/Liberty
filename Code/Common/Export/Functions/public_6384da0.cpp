#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_63829d0);
CLANG_FORWARD_PROC_SYMBOL(public_6384da0);

#define public_6384dd5 _public_6384dd5
#define public_6384ded _public_6384ded
#define public_6384e1e _public_6384e1e
#define public_6384e2e _public_6384e2e
#define public_6384e30 _public_6384e30
#define public_6384e66 _public_6384e66
#define public_6384e8a _public_6384e8a
#define public_6384e97 _public_6384e97
#define public_6384ea3 _public_6384ea3
#define public_6384eb5 _public_6384eb5
#define public_6384f0c _public_6384f0c
#define public_6384f0e _public_6384f0e
#define public_6384f36 _public_6384f36
#define public_6384f59 _public_6384f59
#define public_6384f74 _public_6384f74
#define public_6384f97 _public_6384f97

PROC_DECLARE(0x6384da0, internal_6384da0, public_6384da0);
extern "C" NAKED register_t __cdecl internal_6384da0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        mov edx, dword ptr ss : [ebp+0x18]
        fld qword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+0xC]
        push ebx
        fst qword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        lea edx, ds:[edi-1]
        mov eax, ebx
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], edx
        je public_6384ded
        mov ecx, dword ptr ss : [ebp+0x1C]
        sub ecx, ebx
        lea edi, ds:[edx+1]
        public_6384dd5 : nop
        fld qword ptr ds : [ecx+eax]
        add eax, 8
        dec edi
        fmul qword ptr ds : [eax-8]
        faddp 
        jne public_6384dd5
        mov ecx, dword ptr ss : [ebp+0xC]
        fst qword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [ebp+8]
        public_6384ded : nop
        fcom qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x41
        je public_6384f0c
        fld qword ptr ds : [public_658b6d0]
        fchs 
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6384ea3
        test edi, edi
        je public_6384e2e
        mov eax, ebx
        sub eax, ecx
        inc edx
        public_6384e1e : nop
        fld qword ptr ds : [eax+esi]
        add esi, 8
        dec edx
        fdiv st, st(1)
        fchs 
        fstp qword ptr ds : [esi-8]
        jne public_6384e1e
        public_6384e2e : nop
        fstp st(0)
        public_6384e30 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edx], esi
        cmp dword ptr ds : [public_658b078], 4
        jl public_6384e97
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
/*FIXUP push offset public_63f7710 @0x6384e48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7710
        call public_6356960
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+0xC]
        add esp, 0xC
        test eax, eax
        je public_6384e8a
        mov eax, dword ptr ss : [esp+0xC]
        lea edi, ds:[eax+1]
        public_6384e66 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov eax, edx
        push eax
        push ecx
/*FIXUP push offset public_63f7708 @0x6384e6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7708
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        add esi, 8
        call public_6356960
        add esp, 0xC
        dec edi
        jne public_6384e66
/*FIXUP public_6384e8a : nop
        push offset public_63edccc @0x6384e8a*/
  FIXUP public_6384e8a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        call public_6356960
        add esp, 4
        public_6384e97 : nop
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6384ea3 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x10], edx
        je public_6384e2e
        fchs 
        mov edi, ebx
        fstp qword ptr ss : [esp+0x20]
        sub edi, ecx
        public_6384eb5 : nop
        mov ecx, dword ptr ds : [public_658b6cc]
        fld qword ptr ds : [edi+esi]
        mov edx, dword ptr ds : [public_658b6c8]
        fstp qword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        push edx
        push eax
        call public_63829d0
        fstp qword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x1C
        add esi, 8
        test eax, eax
        jne public_6384f0e
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, eax
        dec eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6384eb5
        jmp public_6384e30
        public_6384f0c : nop
        fstp st(0)
        public_6384f0e : nop
        mov edx, dword ptr ds : [public_658b7fc]
        mov esi, dword ptr ss : [ebp+0x1C]
/*FIXUP push offset public_63f76b4 @0x6384f17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f76b4
        push edx
        mov edi, ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [ebp+8]
        add esp, 8
        test eax, eax
        je public_6384f59
        mov eax, dword ptr ss : [esp+0xC]
        lea ebx, ds:[eax+1]
        public_6384f36 : nop
        fld qword ptr ds : [esi]
        add esi, 8
        fstp qword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
/*FIXUP push offset public_63f637c @0x6384f49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        call public_6356960
        add esp, 0xC
        dec ebx
        jne public_6384f36
/*FIXUP public_6384f59 : nop
        push offset public_63f76a0 @0x6384f59*/
  FIXUP public_6384f59 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f76a0
        call public_6356960
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        test eax, eax
        je public_6384f97
        mov eax, dword ptr ss : [esp+0xC]
        lea esi, ds:[eax+1]
        public_6384f74 : nop
        fld qword ptr ds : [edi]
        add edi, 8
        fstp qword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
/*FIXUP push offset public_63f637c @0x6384f87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        call public_6356960
        add esp, 0xC
        dec esi
        jne public_6384f74
/*FIXUP public_6384f97 : nop
        push offset public_63f768c @0x6384f97*/
  FIXUP public_6384f97 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f768c
        call public_6356960
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
/*FIXUP push offset public_63f637c @0x6384fae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        call public_6356960
        add esp, 0xC
/*FIXUP push offset public_63f767c @0x6384fbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f767c
        call public_6356960
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        push eax
        push ecx
/*FIXUP push offset public_63f637c @0x6384fd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        call public_6356960
        add esp, 0xC
/*FIXUP push offset public_63edccc @0x6384fdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        call public_6356960
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6384da0)
    }
}

#undef public_6384dd5
#undef public_6384ded
#undef public_6384e1e
#undef public_6384e2e
#undef public_6384e30
#undef public_6384e66
#undef public_6384e8a
#undef public_6384e97
#undef public_6384ea3
#undef public_6384eb5
#undef public_6384f0c
#undef public_6384f0e
#undef public_6384f36
#undef public_6384f59
#undef public_6384f74
#undef public_6384f97
