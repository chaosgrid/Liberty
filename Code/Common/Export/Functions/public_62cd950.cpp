#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62cdfa0);
CLANG_FORWARD_PROC_SYMBOL(public_62d5840);
CLANG_FORWARD_PROC_SYMBOL(public_62d5980);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a20);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a80);
CLANG_FORWARD_PROC_SYMBOL(public_62d75c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d93c0);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9a60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62cd9a9 _public_62cd9a9
#define public_62cd9ef _public_62cd9ef
#define public_62cda0c _public_62cda0c
#define public_62cda2f _public_62cda2f
#define public_62cda3e _public_62cda3e
#define public_62cda40 _public_62cda40
#define public_62cdb4a _public_62cdb4a
#define public_62cdbb1 _public_62cdbb1
#define public_62cdbdd _public_62cdbdd
#define public_62cdbe3 _public_62cdbe3
#define public_62cdc12 _public_62cdc12
#define public_62cdc35 _public_62cdc35
#define public_62cdc51 _public_62cdc51
#define public_62cdc73 _public_62cdc73
#define public_62cdc79 _public_62cdc79
#define public_62cdc8d _public_62cdc8d
#define public_62cdd0a _public_62cdd0a
#define public_62cdda0 _public_62cdda0
#define public_62cdde5 _public_62cdde5
#define public_62cddeb _public_62cddeb
#define public_62cde1f _public_62cde1f
#define public_62cde44 _public_62cde44
#define public_62cde8b _public_62cde8b
#define public_62cdea8 _public_62cdea8
#define public_62cdefa _public_62cdefa

PROC_DECLARE(0x62cd950, internal_62cd950, public_62cd950);
extern "C" NAKED register_t __cdecl internal_62cd950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xD0
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x14]
        test eax, eax
        push esi
        push edi
        je public_62cdefa
        mov eax, dword ptr ds : [ebx+0x168]
        test eax, eax
        je public_62cdefa
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62cdefa
        mov ecx, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        cmp dword ptr ds : [ebx+0x170], eax
        je public_62cd9a9
        pop edi
        pop esi
        mov eax, 2
        pop ebp
        mov dword ptr ds : [ebx+0x10], eax
        pop ebx
        add esp, 0xD0
        ret 
        public_62cd9a9 : nop
        fld dword ptr ds : [ebx+0x188]
        fcomp dword ptr ds : [ebx+0x18C]
        fnstsw ax
        test ah, 0x41
        je public_62cdefa
        fld dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [ebx+0x164]
        fadd dword ptr ds : [ebx+0x188]
        dec eax
        mov edi, 5
        cmp eax, edi
        fstp dword ptr ds : [ebx+0x188]
        ja public_62cdc79
        mov ebp, 3
/*FIXUP jmp dword ptr ds : [eax*4+public_62cdf10] @0x62cd9e8*/
  JMPTB cmp eax, 0
  JMPTB je public_62cd9ef
  JMPTB cmp eax, 1
  JMPTB je public_62cda2f
  JMPTB cmp eax, 2
  JMPTB je public_62cdbe3
  JMPTB cmp eax, 3
  JMPTB je public_62cdc51
  JMPTB cmp eax, 4
  JMPTB je public_62cdd0a
  JMPTB cmp eax, 5
  JMPTB je public_62cdea8
  JMPTB int 3
        public_62cd9ef : nop
        fld dword ptr ds : [ebx+0x184]
        fcomp dword ptr ds : [ebx+0x180]
        fnstsw ax
        test ah, 0x41
        jne public_62cda0c
        mov dword ptr ds : [ebx+0x164], 2
        public_62cda0c : nop
        fld dword ptr ds : [ebx+0x1C]
        pop edi
        fadd dword ptr ds : [ebx+0x184]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], 0
        fstp dword ptr ds : [ebx+0x184]
        xor eax, eax
        pop ebx
        add esp, 0xD0
        ret 
        public_62cda2f : nop
        mov eax, dword ptr ds : [ebx+0x168]
        test eax, eax
        je public_62cda3e
        lea ecx, ds:[eax-8]
        jmp public_62cda40
        public_62cda3e : nop
        xor ecx, ecx
        public_62cda40 : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0x60]
        push edx
        lea edx, ss:[esp+0x94]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ds : [ebx+0x178]
        push 0
        push edx
        call dword ptr ds : [eax+0xC8]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        lea eax, ds:[ebx+0x1FC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0xB0]
        lea edi, ds:[ebx+0x208]
        mov ecx, 9
        lea esi, ss:[esp+0x2C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0xB4]
        lea edx, ds:[ebx+0x1CC]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0xB8]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ss : [esp+0x84]
        lea edi, ds:[ebx+0x1D8]
        mov ecx, 9
        lea esi, ss:[esp+0x8C]
        rep movsd
        lea ecx, ds:[ebx+0x19C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x88]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        lea edx, ss:[esp+0xBC]
        push edx
        lea edi, ds:[ebx+0x1A8]
        mov ecx, 9
        lea esi, ss:[esp+0x60]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x24]
        push edx
/*FIXUP push offset public_639e5b8 @0x62cdb0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e5b8
        call dword ptr ds : [eax+0xC0]
        test eax, eax
        jne public_62cdbdd
        mov esi, dword ptr ds : [ebx+0x24]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62cdb4a
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62cdb4a : nop
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+0x14]
        lea esi, ds:[ebx+0x190]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [ebx+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov edi, eax
        mov eax, dword ptr ds : [public_63fc538]
        test eax, eax
        jne public_62cdbb1
        call public_6391cf0
        mov dword ptr ds : [public_63fc538], eax
        public_62cdbb1 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        push esi
        lea ecx, ds:[ebx+0x2C]
        call public_62d5a80
        public_62cdbdd : nop
        mov dword ptr ds : [ebx+0x164], ebp
        public_62cdbe3 : nop
        mov eax, dword ptr ds : [ebx+0x178]
        test eax, eax
        jl public_62cdc12
        mov ecx, ebx
        call public_62cdfa0
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x164], 4
        mov dword ptr ds : [ebx+0x10], 0
        xor eax, eax
        pop ebx
        add esp, 0xD0
        ret 
        public_62cdc12 : nop
        cmp eax, 0xFFFFFFFF
        jne public_62cdc35
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x164], 2
        mov dword ptr ds : [ebx+0x10], 0
        xor eax, eax
        pop ebx
        add esp, 0xD0
        ret 
        public_62cdc35 : nop
        cmp eax, 0xFFFFFFFE
        jne public_62cdc79
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x10], ebp
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xD0
        ret 
        public_62cdc51 : nop
        mov al, byte ptr ds : [ebx+0x17C]
        test al, al
        je public_62cdc8d
        lea esi, ds:[ebx+0x2C]
        push 0x41C80000
        mov ecx, esi
        call public_62a66b0
        push 0
        mov ecx, esi
        call public_62d5980
        public_62cdc73 : nop
        mov dword ptr ds : [ebx+0x164], edi
        public_62cdc79 : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], 0
        xor eax, eax
        pop ebx
        add esp, 0xD0
        ret 
        public_62cdc8d : nop
        lea eax, ds:[ebx+0x1D8]
        lea esi, ds:[ebx+0xA4]
        push eax
        mov ecx, esi
        call public_62d75c0
        mov eax, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        lea ecx, ds:[ebx+0x1CC]
        lea esi, ds:[ebx+0x2C]
        push ecx
        mov ecx, esi
        call public_62d5840
        push 0x40A00000
        mov ecx, esi
        call public_62a66b0
        push 1
        mov ecx, esi
        call public_62d5980
        mov edx, dword ptr ds : [ebx+0x22C]
        push edx
        mov ecx, esi
        call public_62d5a20
        push 2
        mov ecx, esi
        call public_62d88b0
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        cmp eax, 1
        jne public_62cdc79
        push 0x41700000
        mov ecx, esi
        call public_62a66b0
        jmp public_62cdc73
        public_62cdd0a : nop
        lea eax, ds:[ebx+0x1A8]
        lea esi, ds:[ebx+0xA4]
        push eax
        mov ecx, esi
        call public_62d75c0
        mov eax, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        lea edi, ds:[ebx+0x19C]
        lea ebp, ds:[ebx+0x2C]
        push edi
        mov ecx, ebp
        call public_62d5840
        push 2
        mov ecx, ebp
        call public_62d88b0
        mov eax, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [ebx+0x1CC]
        mov esi, dword ptr ds : [ebx+0x24]
        add esi, 0x14FC
        mov dword ptr ss : [esp+0x1C], eax
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [ebx+0x1D0]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [ebx+0x1D4]
        fstp dword ptr ss : [esp+0x18]
        jne public_62cdda0
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62cdda0 : nop
        fld dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, 1
        fsub dword ptr ds : [edi]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [edi+8]
        je public_62cdde5
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fxch st(2)
        fmul dword ptr ss : [esp+0x14]
        faddp st(2), st
        fxch st(2)
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62cdc79
        jmp public_62cddeb
        public_62cdde5 : nop
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_62cddeb : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [ebx+0x24]
        push 1
        add ecx, 0x12C
        call public_62e9a60
        mov al, byte ptr ds : [ebx+0x230]
        test al, al
        je public_62cde1f
        mov ecx, dword ptr ds : [ebx+0x24]
        push 0
        push 0x3F000000
        add ecx, 0x18
        call public_62e89a0
        public_62cde1f : nop
        mov al, byte ptr ds : [ebx+0x231]
        test al, al
        je public_62cde8b
        fld qword ptr ds : [public_639e2d0]
        lea eax, ds:[ebx+0x1B0]
        fcos 
        mov ecx, 3
        fld qword ptr ds : [public_639e2d0]
        fsin 
        public_62cde44 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62cde44
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        pop ebp
        mov dword ptr ds : [ebx+0x164], 6
        mov dword ptr ds : [ebx+0x10], 0
        xor eax, eax
        pop ebx
        add esp, 0xD0
        ret 
        public_62cde8b : nop
        mov al, byte ptr ds : [ebx+0x28]
        and al, 0xFD
        pop edi
        or al, 1
        mov byte ptr ds : [ebx+0x28], al
        pop esi
        mov eax, 2
        pop ebp
        mov dword ptr ds : [ebx+0x10], eax
        pop ebx
        add esp, 0xD0
        ret 
        public_62cdea8 : nop
        lea esi, ds:[ebx+0xA4]
        push 0x3EC90FDB
        mov ecx, esi
        call public_62d93c0
        lea ecx, ds:[ebx+0x1A8]
        push ecx
        mov ecx, esi
        call public_62d75c0
        mov eax, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        cmp eax, 1
        jne public_62cdc79
        mov cl, byte ptr ds : [ebx+0x28]
        pop edi
        and cl, 0xFD
        or cl, al
        pop esi
        mov eax, 2
        pop ebp
        mov byte ptr ds : [ebx+0x28], cl
        mov dword ptr ds : [ebx+0x10], eax
        pop ebx
        add esp, 0xD0
        ret 
        public_62cdefa : nop
        pop edi
        mov ebp, 3
        pop esi
        mov dword ptr ds : [ebx+0x10], ebp
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xD0
        ret 
        UNREACHABLE_TRAP(0x62cd950)
        ASM_EXPORT_ENTRY_FIRST(0x62cd9ef, public_62cd9ef)
        ASM_EXPORT_ENTRY(0x62cda2f, public_62cda2f)
        ASM_EXPORT_ENTRY(0x62cdbe3, public_62cdbe3)
        ASM_EXPORT_ENTRY(0x62cdc51, public_62cdc51)
        ASM_EXPORT_ENTRY(0x62cdd0a, public_62cdd0a)
        ASM_EXPORT_ENTRY_LAST(0x62cdea8, public_62cdea8)
    }
}

#undef public_62cd9a9
#undef public_62cd9ef
#undef public_62cda0c
#undef public_62cda2f
#undef public_62cda3e
#undef public_62cda40
#undef public_62cdb4a
#undef public_62cdbb1
#undef public_62cdbdd
#undef public_62cdbe3
#undef public_62cdc12
#undef public_62cdc35
#undef public_62cdc51
#undef public_62cdc73
#undef public_62cdc79
#undef public_62cdc8d
#undef public_62cdd0a
#undef public_62cdda0
#undef public_62cdde5
#undef public_62cddeb
#undef public_62cde1f
#undef public_62cde44
#undef public_62cde8b
#undef public_62cdea8
#undef public_62cdefa

#pragma init_seg(compiler)
extern "C" void const* const public_62cd9ef = __AsmFindLabelExport(&internal_62cd950, 0x62cd9ef);
extern "C" void const* const public_62cda2f = __AsmFindLabelExport(&internal_62cd950, 0x62cda2f);
extern "C" void const* const public_62cdbe3 = __AsmFindLabelExport(&internal_62cd950, 0x62cdbe3);
extern "C" void const* const public_62cdc51 = __AsmFindLabelExport(&internal_62cd950, 0x62cdc51);
extern "C" void const* const public_62cdd0a = __AsmFindLabelExport(&internal_62cd950, 0x62cdd0a);
extern "C" void const* const public_62cdea8 = __AsmFindLabelExport(&internal_62cd950, 0x62cdea8);
