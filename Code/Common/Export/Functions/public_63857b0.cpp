#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6380f40);
CLANG_FORWARD_PROC_SYMBOL(public_6381ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6382900);
CLANG_FORWARD_PROC_SYMBOL(public_6382e00);
CLANG_FORWARD_PROC_SYMBOL(public_6383af0);
CLANG_FORWARD_PROC_SYMBOL(public_63840b0);
CLANG_FORWARD_PROC_SYMBOL(public_63857b0);

#define public_6385805 _public_6385805
#define public_6385826 _public_6385826
#define public_638583a _public_638583a
#define public_6385850 _public_6385850
#define public_6385866 _public_6385866
#define public_638587f _public_638587f
#define public_6385888 _public_6385888
#define public_63858ca _public_63858ca
#define public_63858ef _public_63858ef
#define public_6385907 _public_6385907
#define public_6385911 _public_6385911
#define public_638592a _public_638592a
#define public_638595f _public_638595f
#define public_638598c _public_638598c
#define public_63859a2 _public_63859a2
#define public_63859c5 _public_63859c5
#define public_63859da _public_63859da
#define public_6385a16 _public_6385a16
#define public_6385a4b _public_6385a4b
#define public_6385a58 _public_6385a58
#define public_6385a6e _public_6385a6e
#define public_6385ad6 _public_6385ad6
#define public_6385b05 _public_6385b05
#define public_6385b47 _public_6385b47
#define public_6385b4d _public_6385b4d
#define public_6385b68 _public_6385b68
#define public_6385b96 _public_6385b96
#define public_6385b9c _public_6385b9c
#define public_6385bc1 _public_6385bc1
#define public_6385bf8 _public_6385bf8
#define public_6385c2f _public_6385c2f
#define public_6385c41 _public_6385c41
#define public_6385c70 _public_6385c70
#define public_6385c80 _public_6385c80
#define public_6385cc3 _public_6385cc3
#define public_6385d1f _public_6385d1f
#define public_6385d4f _public_6385d4f
#define public_6385d99 _public_6385d99
#define public_6385db9 _public_6385db9
#define public_6385dbd _public_6385dbd
#define public_6385ddb _public_6385ddb

PROC_DECLARE(0x63857b0, internal_63857b0, public_63857b0);
extern "C" NAKED register_t __cdecl internal_63857b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x3C
        mov eax, dword ptr ds : [public_658b80c]
        push ebx
        push esi
        push edi
        xor esi, esi
        push eax
        mov dword ptr ss : [esp+0x18], esi
        call public_636ec70
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, eax
        imul edx, eax
        lea edi, ds:[eax-1]
        mov eax, dword ptr ds : [public_658b904]
        xor ecx, ecx
        lea edx, ds:[eax+edx*8]
        add esp, 4
        xor eax, eax
        cmp edi, esi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x20], edx
        jle public_6385826
        public_6385805 : nop
        mov esi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [ebp+0xC]
        fld qword ptr ds : [esi+eax*8]
        mov ebx, dword ptr ds : [ebx+8]
        fadd qword ptr ds : [ebx+eax*8]
        inc eax
        cmp eax, edi
        fmul qword ptr ds : [public_63a5980]
        fstp qword ptr ds : [edx+eax*8-8]
        jl public_6385805
        public_6385826 : nop
        mov ebx, dword ptr ss : [ebp+0x10]
        test ebx, ebx
        je public_6385888
        mov esi, dword ptr ds : [ebx+4]
        add ebx, 4
        add ebx, 4
        test esi, esi
        je public_6385888
        public_638583a : nop
        mov eax, dword ptr ds : [esi+0x48]
        inc ecx
        test eax, eax
        mov dword ptr ss : [esp+0x2C], ecx
        jne public_6385850
        mov dword ptr ss : [esp+0x1C], 1
        jmp public_638587f
        public_6385850 : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jne public_6385866
        mov ecx, dword ptr ds : [esi+0x34]
        push ecx
        call public_6382e00
        add esp, 4
        mov dword ptr ds : [esi+0x28], eax
        public_6385866 : nop
        mov edx, dword ptr ds : [esi+0x28]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_636e1b0
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 8
        public_638587f : nop
        mov esi, dword ptr ds : [ebx]
        add ebx, 4
        test esi, esi
        jne public_638583a
        public_6385888 : nop
        cmp ecx, edi
        jle public_63858ef
        mov ecx, dword ptr ds : [public_658b80c]
        push ecx
        call public_636ec70
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edx+8]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_636e1b0
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0xC
        test eax, eax
        je public_63858ca
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_636e1b0
        add esp, 8
        public_63858ca : nop
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0
        push 0
        push edx
        push edi
        call public_6383af0
        mov eax, dword ptr ss : [esp+0x28]
        push 0
        push eax
        call public_636e4a0
        add esp, 0x1C
        jmp public_638592a
        public_63858ef : nop
        jne public_6385911
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_6385907
        push edx
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_636e1b0
        add esp, 8
        public_6385907 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], edx
        jmp public_638592a
        public_6385911 : nop
        push ecx
/*FIXUP push offset public_63f7a54 @0x6385912*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7a54
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x14
        public_638592a : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [public_658b904]
        lea eax, ds:[edx+4]
        xor ebx, ebx
        test edx, edx
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x10], ebx
        je public_63859da
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        add edx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x28], edx
        je public_63859da
        public_638595f : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_638598c
        mov ecx, dword ptr ds : [public_658b7fc]
        push edi
        push 1
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_63f7a2c @0x6385976*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7a2c
        push ecx
        call public_63840b0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 0x14
        public_638598c : nop
        cmp eax, ecx
        je public_63859c5
        mov edx, dword ptr ds : [public_658b908]
        mov dword ptr ds : [edx+ebx*4], esi
        inc ebx
        test edi, edi
        mov eax, ecx
        je public_63859c5
        lea ecx, ds:[edi]
        public_63859a2 : nop
        mov edx, dword ptr ss : [esp+0x10]
        fld qword ptr ds : [edx]
        add esi, 8
        fsub qword ptr ds : [eax]
        add eax, 8
        fstp qword ptr ds : [esi-8]
        mov edx, dword ptr ss : [esp+0x10]
        add edx, 8
        dec ecx
        mov dword ptr ss : [esp+0x10], edx
        jne public_63859a2
        mov ecx, dword ptr ss : [esp+0x2C]
        public_63859c5 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edx]
        add edx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x28], edx
        jne public_638595f
        public_63859da : nop
        mov eax, dword ptr ds : [public_658b908]
        mov dword ptr ds : [eax+ebx*4], esi
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        push esi
        push 1
        push ecx
        mov ecx, dword ptr ds : [public_658b908]
        push ecx
        push edi
        call public_6381ce0
        mov ebx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [public_658b070]
        add esp, 0x1C
        cmp ecx, eax
        je public_6385a16
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+8]
        public_6385a16 : nop
        inc dword ptr ds : [public_658bb70]
        lea ecx, ss:[esp+0x38]
        push ecx
        push esi
        push eax
        push edi
        call public_6382900
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_6385a58
        test edi, edi
        fld qword ptr ss : [esp+0x38]
        fchs 
        mov eax, esi
        fstp qword ptr ss : [esp+0x38]
        je public_6385a58
        lea ecx, ds:[edi]
        public_6385a4b : nop
        fld qword ptr ds : [eax]
        add eax, 8
        dec ecx
        fchs 
        fstp qword ptr ds : [eax-8]
        jne public_6385a4b
        public_6385a58 : nop
        mov eax, dword ptr ds : [public_658b220]
        test eax, eax
        jne public_6385a6e
        mov eax, dword ptr ds : [public_658b190]
        test eax, eax
        je public_6385db9
        public_6385a6e : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+8]
        push eax
        call public_6370570
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        mov dword ptr ss : [esp+0x34], eax
        call public_6370570
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        test eax, eax
        jne public_6385c80
        mov ecx, dword ptr ds : [public_658bb80]
        mov ebx, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x38]
        push edx
        push esi
        inc ecx
        push ebx
        push edi
        mov dword ptr ds : [public_658bb80], ecx
        call public_6382900
        fst qword ptr ss : [esp+0x40]
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0x10
        fnstsw ax
        test ah, 1
        je public_6385ad6
        fld qword ptr ss : [esp+0x30]
        fchs 
        fstp qword ptr ss : [esp+0x30]
        public_6385ad6 : nop
        fld qword ptr ds : [public_658bf10]
        mov eax, dword ptr ds : [public_658bf00]
        fcomp qword ptr ss : [esp+0x30]
        inc eax
        mov dword ptr ds : [public_658bf00], eax
        fnstsw ax
        test ah, 1
        je public_6385b05
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [public_658bf10], eax
        mov dword ptr ds : [public_658bf14], ecx
        public_6385b05 : nop
        fld qword ptr ds : [public_658bf08]
        mov eax, dword ptr ds : [public_658b078]
        cmp eax, 4
        fadd qword ptr ss : [esp+0x30]
        fstp qword ptr ds : [public_658bf08]
        jl public_6385b47
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63f79fc @0x6385b38*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f79fc
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_6385b47 : nop
        xor eax, eax
        test edi, edi
        jle public_6385b68
        public_6385b4d : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [ebp+8]
        fld qword ptr ds : [edx+eax*8]
        mov ecx, dword ptr ds : [ecx+8]
        fsub qword ptr ds : [ecx+eax*8]
        inc eax
        cmp eax, edi
        fstp qword ptr ds : [ebx+eax*8-8]
        jl public_6385b4d
        public_6385b68 : nop
        push 0
        push edi
        push ebx
        call public_6380f40
        lea edx, ss:[esp+0x4C]
        push edx
        push esi
        push ebx
        push edi
        call public_6382900
        fcom qword ptr ds : [public_63a58b0]
        add esp, 0x1C
        fnstsw ax
        test ah, 1
        je public_6385b96
        fadd qword ptr ds : [public_63a5940]
        jmp public_6385b9c
        public_6385b96 : nop
        fsub qword ptr ds : [public_63a5940]
        public_6385b9c : nop
        fstp qword ptr ss : [esp+0x30]
        fld qword ptr ss : [esp+0x30]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 1
        je public_6385bc1
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        public_6385bc1 : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_6385bf8
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63f79c8 @0x6385be9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f79c8
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x1C
        public_6385bf8 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6385c41
        fld qword ptr ds : [public_658bef8]
        mov eax, dword ptr ds : [public_658bee8]
        fcomp qword ptr ss : [esp+0x30]
        inc eax
        mov dword ptr ds : [public_658bee8], eax
        fnstsw ax
        test ah, 1
        je public_6385c2f
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [public_658bef8], eax
        mov dword ptr ds : [public_658befc], ecx
        public_6385c2f : nop
        fld qword ptr ds : [public_658bef0]
        fadd qword ptr ss : [esp+0x30]
        fstp qword ptr ds : [public_658bef0]
        jmp public_6385c80
        public_6385c41 : nop
        fld qword ptr ds : [public_658bf28]
        mov eax, dword ptr ds : [public_658bf18]
        fcomp qword ptr ss : [esp+0x30]
        inc eax
        mov dword ptr ds : [public_658bf18], eax
        fnstsw ax
        test ah, 1
        je public_6385c70
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [public_658bf28], edx
        mov dword ptr ds : [public_658bf2c], eax
        public_6385c70 : nop
        fld qword ptr ds : [public_658bf20]
        fadd qword ptr ss : [esp+0x30]
        fstp qword ptr ds : [public_658bf20]
        public_6385c80 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp dword ptr ss : [esp+0x14], eax
        je public_6385dbd
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6385dbd
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ss : [esp+0x14], ecx
        call public_636ec10
        add esp, 4
        test eax, eax
        jle public_6385db9
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, 4
        mov dword ptr ss : [esp+0x20], eax
        public_6385cc3 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_6385d99
        mov edx, dword ptr ds : [public_658bb80]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [ebx+eax]
        mov eax, dword ptr ss : [esp+0x10]
        inc edx
        mov dword ptr ds : [public_658bb80], edx
        lea edx, ss:[esp+0x38]
        push edx
        push esi
        push eax
        push edi
        mov dword ptr ss : [esp+0x2C], ecx
        call public_6382900
        fst qword ptr ss : [esp+0x40]
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0x10
        fnstsw ax
        test ah, 1
        je public_6385d1f
        fld qword ptr ss : [esp+0x30]
        fchs 
        fstp qword ptr ss : [esp+0x30]
        public_6385d1f : nop
        fld qword ptr ds : [public_658bee0]
        mov eax, dword ptr ds : [public_658bed0]
        fcomp qword ptr ss : [esp+0x30]
        inc eax
        mov dword ptr ds : [public_658bed0], eax
        fnstsw ax
        test ah, 1
        je public_6385d4f
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [public_658bee0], ecx
        mov dword ptr ds : [public_658bee4], edx
        public_6385d4f : nop
        fld qword ptr ds : [public_658bed8]
        mov eax, dword ptr ds : [public_658b078]
        cmp eax, 4
        fadd qword ptr ss : [esp+0x30]
        fstp qword ptr ds : [public_658bed8]
        jl public_6385d99
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ds : [edx+0x48]
        mov edx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63f7990 @0x6385d8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7990
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x1C
        public_6385d99 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+eax+4]
        add ebx, 4
        dec edx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x20], edx
        jne public_6385cc3
        jmp public_6385dbd
        public_6385db9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_6385dbd : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        fld qword ptr ss : [esp+0x38]
        fstp qword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6385ddb
        lea edx, ss:[esp+0x14]
        push edx
        call public_636ecc0
        add esp, 4
        public_6385ddb : nop
        lea eax, ss:[esp+0x18]
        push eax
        call public_636ecc0
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63857b0)
    }
}

#undef public_6385805
#undef public_6385826
#undef public_638583a
#undef public_6385850
#undef public_6385866
#undef public_638587f
#undef public_6385888
#undef public_63858ca
#undef public_63858ef
#undef public_6385907
#undef public_6385911
#undef public_638592a
#undef public_638595f
#undef public_638598c
#undef public_63859a2
#undef public_63859c5
#undef public_63859da
#undef public_6385a16
#undef public_6385a4b
#undef public_6385a58
#undef public_6385a6e
#undef public_6385ad6
#undef public_6385b05
#undef public_6385b47
#undef public_6385b4d
#undef public_6385b68
#undef public_6385b96
#undef public_6385b9c
#undef public_6385bc1
#undef public_6385bf8
#undef public_6385c2f
#undef public_6385c41
#undef public_6385c70
#undef public_6385c80
#undef public_6385cc3
#undef public_6385d1f
#undef public_6385d4f
#undef public_6385d99
#undef public_6385db9
#undef public_6385dbd
#undef public_6385ddb
