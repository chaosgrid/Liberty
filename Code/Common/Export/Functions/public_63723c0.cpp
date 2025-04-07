#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63723c0);
CLANG_FORWARD_PROC_SYMBOL(public_63735c0);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6383460);

#define public_63723ef _public_63723ef
#define public_6372400 _public_6372400
#define public_6372406 _public_6372406
#define public_637241e _public_637241e
#define public_6372444 _public_6372444
#define public_637244b _public_637244b
#define public_637245e _public_637245e
#define public_63724ae _public_63724ae
#define public_63724b0 _public_63724b0
#define public_63724c9 _public_63724c9
#define public_63724d0 _public_63724d0
#define public_63724f5 _public_63724f5
#define public_63724f9 _public_63724f9
#define public_6372552 _public_6372552
#define public_6372557 _public_6372557
#define public_637255e _public_637255e
#define public_6372574 _public_6372574
#define public_6372578 _public_6372578
#define public_6372589 _public_6372589
#define public_63725b2 _public_63725b2
#define public_63725c9 _public_63725c9
#define public_6372602 _public_6372602
#define public_637260e _public_637260e
#define public_6372623 _public_6372623
#define public_6372651 _public_6372651
#define public_6372669 _public_6372669
#define public_637266b _public_637266b

PROC_DECLARE(0x63723c0, internal_63723c0, public_63723c0);
extern "C" NAKED register_t __cdecl internal_63723c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        xor ebx, ebx
        test esi, esi
        push edi
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], 0x7FEFFFFF
        je public_6372406
        mov eax, esi
        public_63723ef : nop
        mov ecx, dword ptr ds : [eax+0x30]
        test ecx, ecx
        je public_6372406
        test dword ptr ds : [eax+0x50], 0x40000
        je public_6372400
        inc ebx
        public_6372400 : nop
        mov eax, ecx
        test eax, eax
        jne public_63723ef
        public_6372406 : nop
        mov eax, dword ptr ds : [public_658b06c]
        test eax, eax
        jle public_637244b
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        jne public_637244b
        test esi, esi
        je public_637244b
        mov edi, esi
        public_637241e : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_637244b
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [public_658b070]
        push eax
        push ecx
        call public_63735c0
        add esp, 8
        test eax, eax
        jne public_6372444
        and dword ptr ds : [edi+0x50], 0xFFFBFFFF
        dec ebx
        public_6372444 : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_637241e
        public_637244b : nop
        mov eax, dword ptr ds : [public_658b060]
        test eax, eax
        je public_63724d0
        test ebx, ebx
        je public_63724d0
        test esi, esi
        je public_63724d0
        mov edi, esi
        public_637245e : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_63724d0
        test dword ptr ds : [edi+0x50], 0x40000
        je public_63724c9
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        je public_63724c9
        mov ecx, dword ptr ds : [public_658bb68]
        mov eax, dword ptr ds : [public_658b064]
        lea edx, ss:[esp+0x20]
        push edx
        inc ecx
        push edi
        push eax
        mov dword ptr ds : [public_658bb68], ecx
        call public_637fd60
        fld qword ptr ss : [esp+0x2C]
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_63724ae
        mov eax, 1
        jmp public_63724b0
        public_63724ae : nop
        xor eax, eax
        public_63724b0 : nop
        mov edx, dword ptr ds : [public_658b060]
        xor ecx, ecx
        test edx, edx
        setg cl
        xor ecx, eax
        je public_63724c9
        and dword ptr ds : [edi+0x50], 0xFFFBFFFF
        dec ebx
        public_63724c9 : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_637245e
        public_63724d0 : nop
        mov eax, dword ptr ds : [public_658b068]
        test eax, eax
        mov edi, dword ptr ss : [ebp+0xC]
        je public_6372623
        test ebx, ebx
        mov eax, dword ptr ds : [public_658b874]
        jne public_63724f5
        test edi, edi
        jne public_63724f5
        test eax, eax
        je public_6372623
        public_63724f5 : nop
        test esi, esi
        je public_637255e
        public_63724f9 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_637255e
        test dword ptr ds : [esi+0x50], 0x40000
        je public_6372557
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_6372557
        lea edx, ss:[esp+0x18]
        push edx
        push ecx
        call public_6383460
        add esp, 8
        test eax, eax
        jne public_6372552
        mov ecx, dword ptr ds : [esi+0x50]
        and ecx, 0xFFFBFFFF
        mov dword ptr ds : [esi+0x50], ecx
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ss : [esp+0x10]
        dec ebx
        fnstsw ax
        test ah, 1
        je public_6372552
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0xC], esi
        public_6372552 : nop
        mov eax, dword ptr ds : [public_658b874]
        public_6372557 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_63724f9
        public_637255e : nop
        test ebx, ebx
        jne public_637260e
        test edi, edi
        je public_6372574
        test eax, eax
        je public_6372623
        jmp public_6372578
        public_6372574 : nop
        test eax, eax
        je public_63725b2
        public_6372578 : nop
        mov ecx, dword ptr ds : [eax+0x50]
        test ch, 4
        je public_6372589
        xor eax, eax
        mov dword ptr ds : [public_658b874], eax
        jmp public_63725b2
        public_6372589 : nop
        mov eax, dword ptr ds : [eax+0x18]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call public_6383460
        fld qword ptr ss : [esp+0x20]
        fcomp qword ptr ss : [esp+0x18]
        add esp, 8
        fnstsw ax
        test ah, 1
        mov eax, dword ptr ds : [public_658b874]
        je public_63725b2
        mov dword ptr ss : [esp+0xC], eax
        public_63725b2 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_6372623
        cmp ecx, eax
        je public_6372623
        test eax, eax
        je public_63725c9
        and dword ptr ds : [eax+0x50], 0xFFFBFFFF
        public_63725c9 : nop
        mov dword ptr ds : [public_658b874], ecx
        or dword ptr ds : [ecx+0x50], 0x40000
        cmp dword ptr ds : [public_658b078], 2
        jl public_6372602
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+0x4C]
        push edx
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63f0614 @0x63725f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0614
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_6372602 : nop
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637260e : nop
        test eax, eax
        je public_6372623
        and dword ptr ds : [eax+0x50], 0xFFFBFFFF
        mov dword ptr ds : [public_658b874], 0
        public_6372623 : nop
        mov ecx, dword ptr ds : [public_658bc60]
        mov eax, dword ptr ds : [public_658b078]
        add ecx, ebx
        cmp eax, 2
        mov dword ptr ds : [public_658bc60], ecx
        jl public_6372651
        mov eax, dword ptr ds : [public_658b7fc]
        push edi
        push ebx
/*FIXUP push offset public_63f05dc @0x6372642*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f05dc
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6372651 : nop
        test ebx, ebx
        jne public_6372669
        mov eax, dword ptr ds : [public_658b06c]
        test eax, eax
        jle public_6372669
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        mov eax, edi
        je public_637266b
        public_6372669 : nop
        mov eax, ebx
        public_637266b : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63723c0)
    }
}

#undef public_63723ef
#undef public_6372400
#undef public_6372406
#undef public_637241e
#undef public_6372444
#undef public_637244b
#undef public_637245e
#undef public_63724ae
#undef public_63724b0
#undef public_63724c9
#undef public_63724d0
#undef public_63724f5
#undef public_63724f9
#undef public_6372552
#undef public_6372557
#undef public_637255e
#undef public_6372574
#undef public_6372578
#undef public_6372589
#undef public_63725b2
#undef public_63725c9
#undef public_6372602
#undef public_637260e
#undef public_6372623
#undef public_6372651
#undef public_6372669
#undef public_637266b
