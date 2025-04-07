#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f38170);
CLANG_FORWARD_PROC_SYMBOL(public_6f68cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d820);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d920);
CLANG_FORWARD_PROC_SYMBOL(public_6f6dd80);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e420);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f6ea08 _public_6f6ea08
#define public_6f6ea15 _public_6f6ea15
#define public_6f6ea1c _public_6f6ea1c
#define public_6f6ea39 _public_6f6ea39
#define public_6f6ea90 _public_6f6ea90
#define public_6f6eacf _public_6f6eacf
#define public_6f6eb53 _public_6f6eb53
#define public_6f6eb67 _public_6f6eb67
#define public_6f6eb85 _public_6f6eb85
#define public_6f6ebf0 _public_6f6ebf0
#define public_6f6ebfd _public_6f6ebfd
#define public_6f6ec27 _public_6f6ec27
#define public_6f6ec2c _public_6f6ec2c
#define public_6f6ec33 _public_6f6ec33
#define public_6f6ec68 _public_6f6ec68
#define public_6f6ec6a _public_6f6ec6a
#define public_6f6ec77 _public_6f6ec77

PROC_DECLARE(0x6f6e9d0, internal_6f6e9d0, public_6f6e9d0);
extern "C" NAKED register_t __cdecl internal_6f6e9d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x58
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [esi]
        push edi
        add eax, 0x10
        push eax
        mov ecx, offset public_6fd1b84
        call public_6f68cf0
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        jne public_6f6ea39
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [public_6fd1c8c]
        mov ecx, dword ptr ds : [public_6fd1c90]
        cmp eax, ecx
        je public_6f6ea1c
        public_6f6ea08 : nop
        cmp dword ptr ds : [eax], edi
        jne public_6f6ea15
        cmp dword ptr ds : [eax+4], edx
        je public_6f6eb53
        public_6f6ea15 : nop
        add eax, 0xC
        cmp eax, ecx
        jne public_6f6ea08
        public_6f6ea1c : nop
        mov dword ptr ss : [esp+0x18], edx
        lea edx, ss:[esp+0x14]
        push edx
        push ecx
        mov ecx, offset public_6fd1c88
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ss : [esp+0x24], 0
        call public_6f38170
        public_6f6ea39 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x70], eax
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6fa8fe0
        mov edx, dword ptr ds : [public_6fd1bd0]
        add esp, 4
        dec edx
        mov dword ptr ds : [public_6fd1bd0], edx
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [public_6fd1bbc]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f6ec77
        push ebp
        lea esp, ss:[esp]
        public_6f6ea90 : nop
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        mov ecx, dword ptr ds : [esi+0x10]
        lea edi, ds:[esi+0x10]
        push eax
        push ecx
        mov ebx, 5
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        test eax, eax
        jne public_6f6ec2c
        test byte ptr ss : [esp+0x10], 0x20
        je public_6f6eacf
        mov al, byte ptr ds : [esi+0x18]
        xor edx, edx
        test al, al
        setne dl
        mov dword ptr ss : [esp+0x6C], edx
        public_6f6eacf : nop
        mov edx, dword ptr ds : [esi+8]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x28]
        lea ecx, ss:[esp+0x6C]
        lea ebp, ds:[esi+0xC]
        push eax
        push ecx
        push edi
        push ebp
        push edx
        call public_6f6d820
        mov ebx, eax
        add esp, 0x14
        cmp ebx, 4
        jne public_6f6ec27
        lea ebx, ds:[esi+8]
        push ebx
        call public_6f75f30
        xor ecx, ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x3C], ecx
        mov byte ptr ss : [esp+0x44], cl
        mov ecx, dword ptr ss : [esp+0x70]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x3C], 5
        mov dword ptr ss : [esp+0x24], offset public_6fbbd70
        je public_6f6eb67
        lea eax, ss:[esp+0x44]
        push eax
        push ecx
        push edi
        call dword ptr ds : [public_6fb3564]
        mov ecx, dword ptr ss : [esp+0x70]
        add esp, 0xC
        mov dword ptr ss : [esp+0x38], ecx
        jmp public_6f6eb85
        public_6f6eb53 : nop
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        jne public_6f6ea39
        mov byte ptr ds : [eax+8], 0
        jmp public_6f6ea39
        public_6f6eb67 : nop
        mov edx, dword ptr ss : [ebp]
        push edx
        mov ecx, eax
        call public_6f73930
        add eax, 0x128
        push eax
        push edi
        call public_6f6e420
        add esp, 8
        mov dword ptr ss : [esp+0x38], eax
        public_6f6eb85 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x2C], eax
        mov ecx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x30], ecx
        push eax
        mov ecx, offset public_6fd1c08
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x40], 4
        mov byte ptr ss : [esp+0x44], 1
        call public_6ee8d70
        fstp st(0)
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x74]
        push 4
        push eax
        push edi
        push ebp
        call dword ptr ds : [public_6fb358c]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x18
        test eax, 0xC40
        jne public_6f6ebf0
        push 1
        push 0
        push ebp
        push ebx
        call public_6f6d920
        jmp public_6f6ebfd
        public_6f6ebf0 : nop
        lea ecx, ss:[esp+0x6C]
        push ecx
        push edi
        push ebp
        push ebx
        call public_6f6dd80
        public_6f6ebfd : nop
        mov edi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0x10
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [public_6fd1bc0]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_6fd1bc0], eax
        mov esi, edi
        jmp public_6f6ec6a
        public_6f6ec27 : nop
        cmp ebx, 5
        ja public_6f6ec6a
/*FIXUP public_6f6ec2c : nop
        jmp dword ptr ds : [ebx*4+public_6f6ec80] @0x6f6ec2c*/
  JMPTB public_6f6ec2c : nop
        cmp ebx, 0
  JMPTB je public_6f6ec33
  JMPTB cmp ebx, 1
  JMPTB je public_6f6ec33
  JMPTB cmp ebx, 2
  JMPTB je public_6f6ec33
  JMPTB cmp ebx, 3
  JMPTB je public_6f6ec68
  JMPTB cmp ebx, 4
  JMPTB je public_6f6ec6a
  JMPTB cmp ebx, 5
  JMPTB je public_6f6ec33
  JMPTB int 3
        public_6f6ec33 : nop
        push ebx
        push 0xFFFFFFFF
        lea edx, ds:[esi+0xC]
        push edi
        push edx
        call dword ptr ds : [public_6fb358c]
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [public_6fd1bc0]
        add esp, 0x14
        dec eax
        mov dword ptr ds : [public_6fd1bc0], eax
        mov esi, edi
        jmp public_6f6ec6a
        public_6f6ec68 : nop
        mov esi, dword ptr ds : [esi]
        public_6f6ec6a : nop
        cmp esi, dword ptr ds : [public_6fd1bbc]
        jne public_6f6ea90
        pop ebp
        public_6f6ec77 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x6f6e9d0)
        ASM_EXPORT_ENTRY_FIRST(0x6f6ec33, public_6f6ec33)
        ASM_EXPORT_ENTRY(0x6f6ec68, public_6f6ec68)
        ASM_EXPORT_ENTRY_LAST(0x6f6ec6a, public_6f6ec6a)
    }
}

#undef public_6f6ea08
#undef public_6f6ea15
#undef public_6f6ea1c
#undef public_6f6ea39
#undef public_6f6ea90
#undef public_6f6eacf
#undef public_6f6eb53
#undef public_6f6eb67
#undef public_6f6eb85
#undef public_6f6ebf0
#undef public_6f6ebfd
#undef public_6f6ec27
#undef public_6f6ec2c
#undef public_6f6ec33
#undef public_6f6ec68
#undef public_6f6ec6a
#undef public_6f6ec77

#pragma init_seg(compiler)
extern "C" void const* const public_6f6ec33 = __AsmFindLabelExport(&internal_6f6e9d0, 0x6f6ec33);
extern "C" void const* const public_6f6ec68 = __AsmFindLabelExport(&internal_6f6e9d0, 0x6f6ec68);
extern "C" void const* const public_6f6ec6a = __AsmFindLabelExport(&internal_6f6e9d0, 0x6f6ec6a);
