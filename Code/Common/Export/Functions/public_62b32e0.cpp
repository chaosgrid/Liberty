#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62b3220);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62b3340 _public_62b3340
#define public_62b3364 _public_62b3364
#define public_62b336e _public_62b336e
#define public_62b3382 _public_62b3382
#define public_62b33a1 _public_62b33a1
#define public_62b33a9 _public_62b33a9
#define public_62b33c5 _public_62b33c5
#define public_62b33df _public_62b33df
#define public_62b3416 _public_62b3416
#define public_62b3437 _public_62b3437
#define public_62b3442 _public_62b3442
#define public_62b3444 _public_62b3444
#define public_62b345c _public_62b345c
#define public_62b3493 _public_62b3493
#define public_62b34c6 _public_62b34c6
#define public_62b34c8 _public_62b34c8
#define public_62b34d8 _public_62b34d8
#define public_62b3510 _public_62b3510
#define public_62b3531 _public_62b3531
#define public_62b353c _public_62b353c
#define public_62b353e _public_62b353e
#define public_62b3556 _public_62b3556
#define public_62b3595 _public_62b3595
#define public_62b35c4 _public_62b35c4
#define public_62b35e1 _public_62b35e1
#define public_62b3601 _public_62b3601

PROC_DECLARE(0x62b32e0, internal_62b32e0, public_62b32e0);
extern "C" NAKED register_t __cdecl internal_62b32e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x1C
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ebx+0x5C]
        push ebp
        fst dword ptr ss : [esp+0x10]
        push esi
        fcomp dword ptr ds : [public_6399408]
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], 0x7FFFFFFF
        fnstsw ax
        test ah, 0x41
        jne public_62b33c5
        push 0x1FF0000
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x34], 0
        call public_629b990
        lea eax, ss:[esp+0x1C]
        lea esi, ds:[edi+0xE4]
        push eax
        mov ecx, esi
        call public_629b430
        xor ebp, ebp
        cmp eax, ebp
        je public_62b3382
        nop 
        lea esp, ss:[esp]
        public_62b3340 : nop
        cmp dword ptr ds : [eax+0x14], 0x10000
        jne public_62b3364
        mov edx, dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], ebp
        fild qword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ecx+0x5C]
        fadd dword ptr ss : [esp+0x30]
        jmp public_62b336e
        public_62b3364 : nop
        mov eax, dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax+0x5C]
        public_62b336e : nop
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, esi
        call public_629b430
        cmp eax, ebp
        jne public_62b3340
        public_62b3382 : nop
        mov edx, dword ptr ds : [edi+0x88]
        fld dword ptr ds : [edx+0x100]
        fld dword ptr ss : [esp+0x30]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_62b33a1
        fsub dword ptr ss : [esp+0x30]
        jmp public_62b33a9
        public_62b33a1 : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_62b33a9 : nop
        fdiv dword ptr ss : [esp+0x18]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991f8]
        add esp, 8
        call public_6391dae
        mov dword ptr ss : [esp+0x10], eax
        public_62b33c5 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x10]
        add eax, 0xFFFFFFE6
        cmp eax, 7
        ja public_62b3601
/*FIXUP jmp dword ptr ds : [eax*4+public_62b3610] @0x62b33d8*/
  JMPTB cmp eax, 0
  JMPTB je public_62b33df
  JMPTB cmp eax, 1
  JMPTB je public_62b34d8
  JMPTB cmp eax, 2
  JMPTB je public_62b3601
  JMPTB cmp eax, 3
  JMPTB je public_62b3601
  JMPTB cmp eax, 4
  JMPTB je public_62b3601
  JMPTB cmp eax, 5
  JMPTB je public_62b35e1
  JMPTB cmp eax, 6
  JMPTB je public_62b35e1
  JMPTB cmp eax, 7
  JMPTB je public_62b35e1
  JMPTB int 3
        public_62b33df : nop
        mov ecx, dword ptr ds : [edi+0x88]
        mov ebx, dword ptr ds : [ecx+0x140]
        cmp ebx, 0xFFFFFFFF
        je public_62b3444
        push 0x10000
        lea ecx, ss:[esp+0x20]
        call public_629b990
        lea edx, ss:[esp+0x1C]
        lea ebp, ds:[edi+0xE4]
        push edx
        mov ecx, ebp
        call public_629b430
        mov esi, eax
        test esi, esi
        je public_62b3444
        public_62b3416 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 0x1A
        je public_62b3437
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_629b430
        mov esi, eax
        test esi, esi
        jne public_62b3416
        jmp public_62b3444
        public_62b3437 : nop
        mov esi, dword ptr ds : [esi+0x28]
        cmp esi, ebx
        jg public_62b3442
        sub ebx, esi
        jmp public_62b3444
        public_62b3442 : nop
        xor ebx, ebx
        public_62b3444 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        jge public_62b345c
        pop edi
        pop esi
        mov ebx, eax
        pop ebp
        mov dword ptr ss : [esp+4], ebx
        pop ebx
        add esp, 0x1C
        ret 4
        public_62b345c : nop
        mov edx, dword ptr ds : [edi+0x88]
        mov ebx, dword ptr ds : [edx+0x140]
        cmp ebx, 0xFFFFFFFF
        je public_62b34c8
        push 0x10000
        lea ecx, ss:[esp+0x20]
        call public_629b990
        lea eax, ss:[esp+0x1C]
        add edi, 0xE4
        push eax
        mov ecx, edi
        call public_629b430
        mov esi, eax
        test esi, esi
        je public_62b34c8
        public_62b3493 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x1A
        je public_62b35c4
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_629b430
        mov esi, eax
        test esi, esi
        jne public_62b3493
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+4], ebx
        mov eax, ebx
        pop ebx
        add esp, 0x1C
        ret 4
        public_62b34c6 : nop
        xor ebx, ebx
        public_62b34c8 : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+4], ebx
        mov eax, ebx
        pop ebx
        add esp, 0x1C
        ret 4
        public_62b34d8 : nop
        mov ecx, dword ptr ds : [edi+0x88]
        mov ebx, dword ptr ds : [ecx+0x144]
        cmp ebx, 0xFFFFFFFF
        je public_62b353e
        push 0x10000
        lea ecx, ss:[esp+0x20]
        call public_629b990
        lea edx, ss:[esp+0x1C]
        lea ebp, ds:[edi+0xE4]
        push edx
        mov ecx, ebp
        call public_629b430
        mov esi, eax
        test esi, esi
        je public_62b353e
        nop 
        public_62b3510 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 0x1B
        je public_62b3531
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_629b430
        mov esi, eax
        test esi, esi
        jne public_62b3510
        jmp public_62b353e
        public_62b3531 : nop
        mov esi, dword ptr ds : [esi+0x28]
        cmp esi, ebx
        jg public_62b353c
        sub ebx, esi
        jmp public_62b353e
        public_62b353c : nop
        xor ebx, ebx
        public_62b353e : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        jge public_62b3556
        pop edi
        pop esi
        mov ebx, eax
        pop ebp
        mov dword ptr ss : [esp+4], ebx
        pop ebx
        add esp, 0x1C
        ret 4
        public_62b3556 : nop
        mov edx, dword ptr ds : [edi+0x88]
        mov ebx, dword ptr ds : [edx+0x144]
        cmp ebx, 0xFFFFFFFF
        je public_62b34c8
        push 0x10000
        lea ecx, ss:[esp+0x20]
        call public_629b990
        lea eax, ss:[esp+0x1C]
        add edi, 0xE4
        push eax
        mov ecx, edi
        call public_629b430
        mov esi, eax
        test esi, esi
        je public_62b34c8
        public_62b3595 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x1B
        je public_62b35c4
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_629b430
        mov esi, eax
        test esi, esi
        jne public_62b3595
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+4], ebx
        mov eax, ebx
        pop ebx
        add esp, 0x1C
        ret 4
        public_62b35c4 : nop
        mov esi, dword ptr ds : [esi+0x28]
        cmp esi, ebx
        jg public_62b34c6
        sub ebx, esi
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+4], ebx
        mov eax, ebx
        pop ebx
        add esp, 0x1C
        ret 4
        public_62b35e1 : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        mov ecx, edi
        call public_62b3220
        cmp dword ptr ss : [esp+0x10], eax
        jl public_62b3601
        mov eax, dword ptr ds : [ebx+8]
        push eax
        mov ecx, edi
        call public_62b3220
        mov dword ptr ss : [esp+0x10], eax
        public_62b3601 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x62b32e0)
        ASM_EXPORT_ENTRY_FIRST(0x62b33df, public_62b33df)
        ASM_EXPORT_ENTRY(0x62b34d8, public_62b34d8)
        ASM_EXPORT_ENTRY(0x62b35e1, public_62b35e1)
        ASM_EXPORT_ENTRY_LAST(0x62b3601, public_62b3601)
    }
}

#undef public_62b3340
#undef public_62b3364
#undef public_62b336e
#undef public_62b3382
#undef public_62b33a1
#undef public_62b33a9
#undef public_62b33c5
#undef public_62b33df
#undef public_62b3416
#undef public_62b3437
#undef public_62b3442
#undef public_62b3444
#undef public_62b345c
#undef public_62b3493
#undef public_62b34c6
#undef public_62b34c8
#undef public_62b34d8
#undef public_62b3510
#undef public_62b3531
#undef public_62b353c
#undef public_62b353e
#undef public_62b3556
#undef public_62b3595
#undef public_62b35c4
#undef public_62b35e1
#undef public_62b3601

#pragma init_seg(compiler)
extern "C" void const* const public_62b33df = __AsmFindLabelExport(&internal_62b32e0, 0x62b33df);
extern "C" void const* const public_62b34d8 = __AsmFindLabelExport(&internal_62b32e0, 0x62b34d8);
extern "C" void const* const public_62b35e1 = __AsmFindLabelExport(&internal_62b32e0, 0x62b35e1);
extern "C" void const* const public_62b3601 = __AsmFindLabelExport(&internal_62b32e0, 0x62b3601);
