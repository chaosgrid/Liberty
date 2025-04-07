#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d8910);
CLANG_FORWARD_PROC_SYMBOL(public_62d8930);
CLANG_FORWARD_PROC_SYMBOL(public_62d9ae0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4500);
CLANG_FORWARD_PROC_SYMBOL(public_62e53e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8860);
CLANG_FORWARD_PROC_SYMBOL(public_62e8870);
CLANG_FORWARD_PROC_SYMBOL(public_62e8910);
CLANG_FORWARD_PROC_SYMBOL(public_62e8940);
CLANG_FORWARD_PROC_SYMBOL(public_62e8970);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62ecc60);
CLANG_FORWARD_PROC_SYMBOL(public_62ecce0);
CLANG_FORWARD_PROC_SYMBOL(public_631d950);
CLANG_FORWARD_PROC_SYMBOL(public_63275d0);

#define public_62c7dac _public_62c7dac
#define public_62c7dae _public_62c7dae
#define public_62c7dce _public_62c7dce
#define public_62c7dee _public_62c7dee
#define public_62c7e06 _public_62c7e06
#define public_62c7e2c _public_62c7e2c
#define public_62c7e5a _public_62c7e5a
#define public_62c7e85 _public_62c7e85
#define public_62c7e9d _public_62c7e9d
#define public_62c7ec1 _public_62c7ec1
#define public_62c7ed9 _public_62c7ed9
#define public_62c7ee0 _public_62c7ee0
#define public_62c7f03 _public_62c7f03
#define public_62c7f25 _public_62c7f25
#define public_62c7f27 _public_62c7f27
#define public_62c7f39 _public_62c7f39
#define public_62c7f6a _public_62c7f6a
#define public_62c7f7d _public_62c7f7d
#define public_62c7f9f _public_62c7f9f
#define public_62c7fa1 _public_62c7fa1
#define public_62c7fb1 _public_62c7fb1
#define public_62c7fc3 _public_62c7fc3
#define public_62c7fd2 _public_62c7fd2
#define public_62c7ff2 _public_62c7ff2
#define public_62c7ff4 _public_62c7ff4
#define public_62c8012 _public_62c8012
#define public_62c8030 _public_62c8030
#define public_62c8058 _public_62c8058
#define public_62c805a _public_62c805a
#define public_62c80e8 _public_62c80e8
#define public_62c811e _public_62c811e
#define public_62c8155 _public_62c8155
#define public_62c817f _public_62c817f
#define public_62c8181 _public_62c8181
#define public_62c81a9 _public_62c81a9
#define public_62c81c5 _public_62c81c5
#define public_62c81c7 _public_62c81c7
#define public_62c8206 _public_62c8206
#define public_62c8219 _public_62c8219
#define public_62c822c _public_62c822c
#define public_62c823a _public_62c823a
#define public_62c823f _public_62c823f

PROC_DECLARE(0x62c7d60, internal_62c7d60, public_62c7d60);
extern "C" NAKED register_t __cdecl internal_62c7d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x1C
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62c7dce
        mov eax, dword ptr ds : [esi+0x2A0]
        test eax, eax
        je public_62c823a
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c823a
        mov eax, dword ptr ds : [esi+0x2A0]
        test eax, eax
        je public_62c7dac
        lea ecx, ds:[eax-8]
        jmp public_62c7dae
        public_62c7dac : nop
        xor ecx, ecx
        public_62c7dae : nop
        mov eax, dword ptr ds : [esi+0x2BC]
        mov edx, dword ptr ds : [esi+0x14]
        push eax
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax]
        push eax
        call public_62e53e0
        add esp, 0xC
        test al, al
        je public_62c823a
        public_62c7dce : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [esi+0x2C]
        add ecx, 0x34
        call public_62e8870
        test al, al
        mov ebp, 2
        je public_62c7dee
        mov dword ptr ds : [esi+0x2C], 4
        jmp public_62c7e5a
        public_62c7dee : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8860
        test al, al
        je public_62c7e06
        mov dword ptr ds : [esi+0x2C], 3
        jmp public_62c7e5a
        public_62c7e06 : nop
        mov al, byte ptr ds : [esi+0x2B6]
        test al, al
        jne public_62c7e2c
        fld dword ptr ds : [esi+0x2B0]
        fcomp dword ptr ds : [esi+0x2A8]
        fnstsw ax
        test ah, 5
        jp public_62c7e2c
        mov dword ptr ds : [esi+0x2C], 1
        jmp public_62c7e5a
        public_62c7e2c : nop
        mov al, byte ptr ds : [esi+0x2B7]
        test al, al
        jne public_62c823a
        fld dword ptr ds : [esi+0x2AC]
        fadd dword ptr ds : [esi+0x2A8]
        fcomp dword ptr ds : [esi+0x2B0]
        fnstsw ax
        test ah, 0x41
        jne public_62c823a
        mov dword ptr ds : [esi+0x2C], ebp
        public_62c7e5a : nop
        mov eax, dword ptr ds : [esi+0x2C]
        cmp edi, eax
        je public_62c7ee0
        cmp eax, 1
        jne public_62c7e9d
        mov eax, dword ptr ds : [esi+0x24]
        mov cl, byte ptr ds : [eax+0x17FD]
        test cl, cl
        je public_62c7e85
        mov ecx, dword ptr ds : [eax+0x1800]
        push ecx
        lea ecx, ds:[eax+0x1364]
        call public_62ecc60
        public_62c7e85 : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov cl, byte ptr ds : [eax+0x1804]
        test cl, cl
        je public_62c7e9d
        lea ecx, ds:[eax+0x1364]
        call public_62ecce0
        public_62c7e9d : nop
        cmp dword ptr ds : [esi+0x2C], ebp
        jne public_62c7ed9
        mov eax, dword ptr ds : [esi+0x24]
        mov cl, byte ptr ds : [eax+0x1805]
        test cl, cl
        je public_62c7ec1
        mov edx, dword ptr ds : [eax+0x1808]
        push edx
        lea ecx, ds:[eax+0x1364]
        call public_62ecc60
        public_62c7ec1 : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov cl, byte ptr ds : [eax+0x180C]
        test cl, cl
        je public_62c7ed9
        lea ecx, ds:[eax+0x1364]
        call public_62ecce0
        public_62c7ed9 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        public_62c7ee0 : nop
        fld dword ptr ds : [esi+0x2B0]
        mov eax, dword ptr ds : [esi+0x2C]
        fadd dword ptr ds : [esi+0x1C]
        dec eax
        cmp eax, 3
        fstp dword ptr ds : [esi+0x2B0]
        ja public_62c823f
/*FIXUP jmp dword ptr ds : [eax*4+public_62c824c] @0x62c7efc*/
  JMPTB cmp eax, 0
  JMPTB je public_62c8030
  JMPTB cmp eax, 1
  JMPTB je public_62c8219
  JMPTB cmp eax, 2
  JMPTB je public_62c7fd2
  JMPTB cmp eax, 3
  JMPTB je public_62c7f03
  JMPTB int 3
        public_62c7f03 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8910
        test al, al
        je public_62c7f39
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x11C
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62c7f25
        add eax, 0xFFFFFFF8
        jmp public_62c7f27
        public_62c7f25 : nop
        xor eax, eax
        public_62c7f27 : nop
        lea edi, ds:[esi+0x1AC]
        push eax
        mov ecx, edi
        call public_62d9ae0
        push 1
        jmp public_62c7fb1
        public_62c7f39 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8940
        test al, al
        je public_62c7f7d
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x11C
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62c7f6a
        add eax, 0xFFFFFFF8
        lea edi, ds:[esi+0x1AC]
        push eax
        mov ecx, edi
        call public_62d9ae0
        push ebp
        jmp public_62c7fb1
        public_62c7f6a : nop
        xor eax, eax
        lea edi, ds:[esi+0x1AC]
        push eax
        mov ecx, edi
        call public_62d9ae0
        push ebp
        jmp public_62c7fb1
        public_62c7f7d : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8970
        test al, al
        je public_62c7fc3
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x11C
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62c7f9f
        add eax, 0xFFFFFFF8
        jmp public_62c7fa1
        public_62c7f9f : nop
        xor eax, eax
        public_62c7fa1 : nop
        lea edi, ds:[esi+0x1AC]
        push eax
        mov ecx, edi
        call public_62d9ae0
        push 0
        public_62c7fb1 : nop
        mov ecx, edi
        call public_631d950
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        push eax
        call dword ptr ds : [edx+4]
        public_62c7fc3 : nop
        mov eax, 1
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        add esp, 0x1C
        ret 
        public_62c7fd2 : nop
        mov eax, dword ptr ds : [esi+0x2A0]
        test eax, eax
        je public_62c8012
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c8012
        mov eax, dword ptr ds : [esi+0x2A0]
        test eax, eax
        je public_62c7ff2
        lea ecx, ds:[eax-8]
        jmp public_62c7ff4
        public_62c7ff2 : nop
        xor ecx, ecx
        public_62c7ff4 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0x3F333333
        push edx
        call dword ptr ds : [eax]
        push eax
        call public_62e53e0
        add esp, 0xC
        test al, al
        je public_62c823f
        public_62c8012 : nop
        lea edi, ds:[esi+0x110]
        push ebp
        mov ecx, edi
        call public_63275d0
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        jmp public_62c822c
        public_62c8030 : nop
        mov eax, dword ptr ds : [esi+0x2A0]
        test eax, eax
        je public_62c80e8
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c80e8
        mov eax, dword ptr ds : [esi+0x2A0]
        test eax, eax
        je public_62c8058
        lea ecx, ds:[eax-8]
        jmp public_62c805a
        public_62c8058 : nop
        xor ecx, ecx
        public_62c805a : nop
        mov edx, dword ptr ds : [esi+0x2B8]
        mov eax, dword ptr ds : [esi+0x14]
        push edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        push eax
        call public_62e53e0
        add esp, 0xC
        test al, al
        jne public_62c80e8
        mov ecx, dword ptr ds : [esi+0x24]
        lea eax, ss:[esp+0x10]
        push eax
        add ecx, 0x18
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        call public_62e8c20
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x18
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        call public_62e8ce0
        mov ecx, dword ptr ds : [esi+0x24]
        push 0
        push 0x3F800000
        add ecx, 0x18
        call public_62e89a0
        pop edi
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x1C
        ret 
        public_62c80e8 : nop
        mov al, byte ptr ds : [esi+0x2B5]
        test al, al
        je public_62c81a9
        mov edx, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [edx+0x1598]
        fmul dword ptr ds : [public_639dfd4]
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_639f5d4]
        fnstsw ax
        test ah, 0x41
        jne public_62c811e
        mov dword ptr ss : [esp+0xC], 0x3FC90FDB
        public_62c811e : nop
        mov eax, dword ptr ss : [esp+0xC]
        lea edi, ds:[esi+0x30]
        push eax
        mov ecx, edi
        call public_62a66b0
        mov ecx, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [ecx+0x15A0]
        fmul dword ptr ds : [public_639dfd4]
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_639f5d4]
        fnstsw ax
        test ah, 0x41
        jne public_62c8155
        mov dword ptr ss : [esp+0xC], 0x3FC90FDB
        public_62c8155 : nop
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        mov ecx, edi
        call public_62d88b0
        mov eax, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+0x15A8]
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62c817f
        fmul dword ptr ds : [public_639c13c]
        jmp public_62c8181
        public_62c817f : nop
        fadd st(0), st
        public_62c8181 : nop
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, edi
        call public_63275d0
        push 0x3F800000
        mov ecx, edi
        call public_62d8910
        push 0x3F800000
        mov ecx, edi
        call public_62d8930
        public_62c81a9 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x30]
        lea ecx, ds:[esi+0x30]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi+0x2A0]
        test eax, eax
        je public_62c81c5
        add eax, 0xFFFFFFF8
        jmp public_62c81c7
        public_62c81c5 : nop
        xor eax, eax
        public_62c81c7 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push 0x42480000
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e4500
        mov edx, dword ptr ds : [esi+0x28C]
        add esp, 0xC
        test al, al
        lea ecx, ds:[esi+0x28C]
        je public_62c8206
        mov eax, dword ptr ds : [esi+0x1C]
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x1C
        ret 
        public_62c8206 : nop
        call dword ptr ds : [edx+0x10]
        pop edi
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x1C
        ret 
        public_62c8219 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x110]
        lea ecx, ds:[esi+0x110]
        push edx
        call dword ptr ds : [eax+4]
        public_62c822c : nop
        test eax, eax
        jne public_62c823f
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        add esp, 0x1C
        ret 
        public_62c823a : nop
        mov ebp, 2
        public_62c823f : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62c7d60)
        ASM_EXPORT_ENTRY_FIRST(0x62c7f03, public_62c7f03)
        ASM_EXPORT_ENTRY(0x62c7fd2, public_62c7fd2)
        ASM_EXPORT_ENTRY(0x62c8030, public_62c8030)
        ASM_EXPORT_ENTRY_LAST(0x62c8219, public_62c8219)
    }
}

#undef public_62c7dac
#undef public_62c7dae
#undef public_62c7dce
#undef public_62c7dee
#undef public_62c7e06
#undef public_62c7e2c
#undef public_62c7e5a
#undef public_62c7e85
#undef public_62c7e9d
#undef public_62c7ec1
#undef public_62c7ed9
#undef public_62c7ee0
#undef public_62c7f03
#undef public_62c7f25
#undef public_62c7f27
#undef public_62c7f39
#undef public_62c7f6a
#undef public_62c7f7d
#undef public_62c7f9f
#undef public_62c7fa1
#undef public_62c7fb1
#undef public_62c7fc3
#undef public_62c7fd2
#undef public_62c7ff2
#undef public_62c7ff4
#undef public_62c8012
#undef public_62c8030
#undef public_62c8058
#undef public_62c805a
#undef public_62c80e8
#undef public_62c811e
#undef public_62c8155
#undef public_62c817f
#undef public_62c8181
#undef public_62c81a9
#undef public_62c81c5
#undef public_62c81c7
#undef public_62c8206
#undef public_62c8219
#undef public_62c822c
#undef public_62c823a
#undef public_62c823f

#pragma init_seg(compiler)
extern "C" void const* const public_62c7f03 = __AsmFindLabelExport(&internal_62c7d60, 0x62c7f03);
extern "C" void const* const public_62c7fd2 = __AsmFindLabelExport(&internal_62c7d60, 0x62c7fd2);
extern "C" void const* const public_62c8030 = __AsmFindLabelExport(&internal_62c7d60, 0x62c8030);
extern "C" void const* const public_62c8219 = __AsmFindLabelExport(&internal_62c7d60, 0x62c8219);
