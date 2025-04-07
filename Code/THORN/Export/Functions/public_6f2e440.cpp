#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f22e90);
CLANG_FORWARD_PROC_SYMBOL(public_6f23090);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e440);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ec80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ed00);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ed20);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ed40);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ed60);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ed80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2eda0);

#define public_6f2e50b _public_6f2e50b
#define public_6f2e623 _public_6f2e623
#define public_6f2e655 _public_6f2e655
#define public_6f2e7c7 _public_6f2e7c7
#define public_6f2e8ea _public_6f2e8ea
#define public_6f2e905 _public_6f2e905
#define public_6f2e91d _public_6f2e91d
#define public_6f2e936 _public_6f2e936
#define public_6f2e94d _public_6f2e94d
#define public_6f2e95d _public_6f2e95d
#define public_6f2e971 _public_6f2e971
#define public_6f2e9d9 _public_6f2e9d9
#define public_6f2e9f2 _public_6f2e9f2
#define public_6f2ea09 _public_6f2ea09
#define public_6f2ea7e _public_6f2ea7e
#define public_6f2ead8 _public_6f2ead8

PROC_DECLARE(0x6f2e440, internal_6f2e440, public_6f2e440);
extern "C" NAKED register_t __cdecl internal_6f2e440()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x9C
        mov edx, dword ptr ss : [esp+0xB4]
        test edx, edx
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        mov dword ptr ss : [esp+0x60], 0xBF800000
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0xBF800000
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], 0xBF800000
        mov ecx, 2
        mov eax, 1
        je public_6f2e50b
        mov edx, dword ptr ds : [edx]
        cmp edx, 6
        je public_6f2e50b
        mov eax, edx
        mov edx, dword ptr ss : [esp+0xB0]
        test edx, edx
        je public_6f2e50b
        mov edx, dword ptr ds : [edx]
        cmp edx, 6
        je public_6f2e50b
        mov ecx, edx
        public_6f2e50b : nop
        lea eax, ds:[eax+eax*2]
        push ebx
        push esi
        lea esi, ss:[esp+eax*4+0x44]
        mov edx, esi
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ds:[ecx+ecx*2]
        lea ecx, ss:[esp+eax*4+0x44]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x3C], eax
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x38], edx
        fld dword ptr ss : [esp+0xC]
        push edi
        fmul dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x50], ecx
        lea ecx, ss:[esp+0x48]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov edx, dword ptr ss : [esp+0xB0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x2C], edx
        call public_6f22e90
        fdivr dword ptr ds : [public_6f5a1b8]
        mov edi, dword ptr ss : [esp+0xB4]
        cmp edi, 2
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        jbe public_6f2e623
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f23090
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        public_6f2e623 : nop
        mov ebx, dword ptr ss : [esp+0xB8]
        cmp ebx, 2
        jbe public_6f2e655
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f23090
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        public_6f2e655 : nop
        fld dword ptr ss : [esp+0x20]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fabs 
        fcomp qword ptr ds : [public_6f5a248]
        fnstsw ax
        test ah, 0x41
        jne public_6f2e7c7
        fld dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x18], edx
        fsubp 
        mov dword ptr ss : [esp+0x1C], eax
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x38]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f22e90
        fdivr dword ptr ds : [public_6f5a1b8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x24]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x34]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], eax
        call public_6f22e90
        fdivr dword ptr ds : [public_6f5a1b8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        jmp public_6f2e8ea
        public_6f2e7c7 : nop
        fld dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x3C]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x24]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x34]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], eax
        call public_6f22e90
        fdivr dword ptr ds : [public_6f5a1b8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x38]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f22e90
        fdivr dword ptr ds : [public_6f5a1b8]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        public_6f2e8ea : nop
        mov esi, dword ptr ss : [esp+0xAC]
        fstp st(0)
        xor dl, dl
        xor al, al
        xor cl, cl
        cmp edi, 5
        ja public_6f2e94d
/*FIXUP jmp dword ptr ds : [edi*4+public_6f2eae4] @0x6f2e8fe*/
  JMPTB cmp edi, 0
  JMPTB je public_6f2e905
  JMPTB cmp edi, 1
  JMPTB je public_6f2e91d
  JMPTB cmp edi, 2
  JMPTB je public_6f2e936
  JMPTB cmp edi, 3
  JMPTB je public_6f2e905
  JMPTB cmp edi, 4
  JMPTB je public_6f2e91d
  JMPTB cmp edi, 5
  JMPTB je public_6f2e936
  JMPTB int 3
        public_6f2e905 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x18], edx
        mov dl, 1
        jmp public_6f2e94d
        public_6f2e91d : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x1C], eax
        mov al, 1
        jmp public_6f2e94d
        public_6f2e936 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x20], ecx
        mov cl, 1
        public_6f2e94d : nop
        cmp ebx, 5
        ja public_6f2ea09
/*FIXUP jmp dword ptr ds : [ebx*4+public_6f2eafc] @0x6f2e956*/
  JMPTB cmp ebx, 0
  JMPTB je public_6f2e95d
  JMPTB cmp ebx, 1
  JMPTB je public_6f2e9d9
  JMPTB cmp ebx, 2
  JMPTB je public_6f2e9f2
  JMPTB cmp ebx, 3
  JMPTB je public_6f2e95d
  JMPTB cmp ebx, 4
  JMPTB je public_6f2e9d9
  JMPTB cmp ebx, 5
  JMPTB je public_6f2e9f2
  JMPTB int 3
        public_6f2e95d : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x18], edx
        public_6f2e971 : nop
        test al, al
        jne public_6f2ea7e
        lea ecx, ss:[esp+0x90]
        push ecx
        mov ecx, esi
        call public_6f2ed00
        push eax
        lea edx, ss:[esp+0xA0]
        push edx
        mov ecx, esi
        call public_6f2ed40
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        call public_6f2ecc0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 0xC
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x14], eax
        call public_6f2ec80
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call public_6f2ed80
        pop edi
        pop esi
        pop ebx
        add esp, 0x9C
        ret 
        public_6f2e9d9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x1C], eax
        mov al, 1
        jmp public_6f2ea09
        public_6f2e9f2 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov cl, 1
        public_6f2ea09 : nop
        test dl, dl
        jne public_6f2e971
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_6f22d50
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0xA0]
        push eax
        mov ecx, esi
        call public_6f2ed20
        push eax
        lea ecx, ss:[esp+0x98]
        push ecx
        call public_6f2ecc0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+8]
        add esp, 0xC
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x14], edx
        call public_6f2ec80
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_6f2ed60
        pop edi
        pop esi
        pop ebx
        add esp, 0x9C
        ret 
        public_6f2ea7e : nop
        test cl, cl
        jne public_6f2ead8
        lea edx, ss:[esp+0x90]
        push edx
        mov ecx, esi
        call public_6f2ed20
        push eax
        lea eax, ss:[esp+0xA0]
        push eax
        mov ecx, esi
        call public_6f2ed00
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_6f2ecc0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+8]
        add esp, 0xC
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x14], edx
        call public_6f2ec80
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_6f2eda0
        public_6f2ead8 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x9C
        ret 
        UNREACHABLE_TRAP(0x6f2e440)
        ASM_EXPORT_ENTRY_FIRST(0x6f2e905, public_6f2e905)
        ASM_EXPORT_ENTRY(0x6f2e91d, public_6f2e91d)
        ASM_EXPORT_ENTRY(0x6f2e936, public_6f2e936)
        ASM_EXPORT_ENTRY(0x6f2e95d, public_6f2e95d)
        ASM_EXPORT_ENTRY(0x6f2e9d9, public_6f2e9d9)
        ASM_EXPORT_ENTRY_LAST(0x6f2e9f2, public_6f2e9f2)
    }
}

#undef public_6f2e50b
#undef public_6f2e623
#undef public_6f2e655
#undef public_6f2e7c7
#undef public_6f2e8ea
#undef public_6f2e905
#undef public_6f2e91d
#undef public_6f2e936
#undef public_6f2e94d
#undef public_6f2e95d
#undef public_6f2e971
#undef public_6f2e9d9
#undef public_6f2e9f2
#undef public_6f2ea09
#undef public_6f2ea7e
#undef public_6f2ead8

#pragma init_seg(compiler)
extern "C" void const* const public_6f2e905 = __AsmFindLabelExport(&internal_6f2e440, 0x6f2e905);
extern "C" void const* const public_6f2e91d = __AsmFindLabelExport(&internal_6f2e440, 0x6f2e91d);
extern "C" void const* const public_6f2e936 = __AsmFindLabelExport(&internal_6f2e440, 0x6f2e936);
extern "C" void const* const public_6f2e95d = __AsmFindLabelExport(&internal_6f2e440, 0x6f2e95d);
extern "C" void const* const public_6f2e9d9 = __AsmFindLabelExport(&internal_6f2e440, 0x6f2e9d9);
extern "C" void const* const public_6f2e9f2 = __AsmFindLabelExport(&internal_6f2e440, 0x6f2e9f2);
