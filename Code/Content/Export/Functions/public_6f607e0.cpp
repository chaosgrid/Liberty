#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8d70);
CLANG_FORWARD_PROC_SYMBOL(public_6ee93f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee9b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8790);
CLANG_FORWARD_PROC_SYMBOL(public_6efc8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f27940);
CLANG_FORWARD_PROC_SYMBOL(public_6f27a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f336a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f603d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f607e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69050);
CLANG_FORWARD_PROC_SYMBOL(public_6f690d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6c920);
CLANG_FORWARD_PROC_SYMBOL(public_6f74380);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafaf4);

#define public_6f60815 _public_6f60815
#define public_6f60822 _public_6f60822
#define public_6f6086a _public_6f6086a
#define public_6f608b7 _public_6f608b7
#define public_6f608ce _public_6f608ce
#define public_6f60907 _public_6f60907
#define public_6f60936 _public_6f60936
#define public_6f6094f _public_6f6094f
#define public_6f6097e _public_6f6097e
#define public_6f60985 _public_6f60985
#define public_6f609bb _public_6f609bb
#define public_6f609fe _public_6f609fe
#define public_6f60a00 _public_6f60a00
#define public_6f60a14 _public_6f60a14
#define public_6f60a70 _public_6f60a70
#define public_6f60a9e _public_6f60a9e
#define public_6f60add _public_6f60add
#define public_6f60adf _public_6f60adf
#define public_6f60b01 _public_6f60b01
#define public_6f60b56 _public_6f60b56
#define public_6f60be5 _public_6f60be5
#define public_6f60c66 _public_6f60c66
#define public_6f60c91 _public_6f60c91
#define public_6f60ca0 _public_6f60ca0
#define public_6f60cb5 _public_6f60cb5
#define public_6f60cb8 _public_6f60cb8
#define public_6f60cc1 _public_6f60cc1
#define public_6f60cde _public_6f60cde
#define public_6f60cf1 _public_6f60cf1
#define public_6f60cfc _public_6f60cfc
#define public_6f60d00 _public_6f60d00
#define public_6f60d08 _public_6f60d08
#define public_6f60d12 _public_6f60d12
#define public_6f60d19 _public_6f60d19
#define public_6f60d2c _public_6f60d2c

PROC_DECLARE(0x6f607e0, internal_6f607e0, public_6f607e0);
extern "C" NAKED register_t __cdecl internal_6f607e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fafaf4 @0x6f607e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafaf4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD4
        mov ecx, dword ptr ds : [public_6fd1b88]
        push ebx
        mov ebx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f60d2c
        push ebp
        push esi
        push edi
        public_6f60815 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f60cc1
        public_6f60822 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        lea eax, ss:[esp+0x1C]
        lea ebp, ds:[ebx+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        test eax, eax
        jne public_6f60c91
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, 0xC40
        mov edx, dword ptr ds : [edi+0x118]
        lea esi, ds:[edi+8]
        mov dword ptr ss : [esp+0x18], edx
        je public_6f608b7
        mov ecx, dword ptr ds : [esi+0x48]
        xor eax, eax
        cmp ecx, eax
        je public_6f6086a
        cmp dword ptr ds : [esi+0x4C], 0xFFFFFFFF
        jne public_6f60a9e
        public_6f6086a : nop
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0xEC], eax
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        call public_6f24870
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        push 0x40000000
        call public_6f27940
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x10], ecx
        lea ebp, ds:[esi+0x60]
        push edx
        mov ecx, ebp
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x88]
        jmp public_6f60a70
        public_6f608b7 : nop
        test eax, 0x600DE0
        je public_6f60a9e
        test al, 0x20
        je public_6f608ce
        mov dword ptr ss : [esp+0x18], 1
        public_6f608ce : nop
        mov ecx, dword ptr ds : [esi]
        call public_6f33f80
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebp
        push 0
/*FIXUP push offset public_6fbbb70 @0x6f608dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb70
        lea edx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x38], eax
        push edx
        lea eax, ds:[esi+0x50]
        push eax
        call public_6f6c920
        add esp, 0x18
        cmp eax, 5
        ja public_6f609bb
/*FIXUP jmp dword ptr ds : [eax*4+public_6f60d44] @0x6f60900*/
  JMPTB cmp eax, 0
  JMPTB je public_6f60907
  JMPTB cmp eax, 1
  JMPTB je public_6f609bb
  JMPTB cmp eax, 2
  JMPTB je public_6f60907
  JMPTB cmp eax, 3
  JMPTB je public_6f6094f
  JMPTB cmp eax, 4
  JMPTB je public_6f60985
  JMPTB cmp eax, 5
  JMPTB je public_6f60936
  JMPTB int 3
        public_6f60907 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        push 0
        mov ecx, esi
        mov dword ptr ds : [edx+4], eax
        call public_6ef8790
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+0x18]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0x18], eax
        mov edi, ebp
        jmp public_6f60cb8
        public_6f60936 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x10]
        push eax
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        call public_6efc8c0
        jmp public_6f60cb5
        public_6f6094f : nop
        fld dword ptr ds : [esi+0x104]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 1
        jne public_6f6097e
        mov eax, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x10]
        push eax
        push edx
        lea eax, ss:[esp+0x80]
        push eax
        call public_6efc8c0
        jmp public_6f60cb5
        public_6f6097e : nop
        mov edi, dword ptr ds : [edi]
        jmp public_6f60cb8
        public_6f60985 : nop
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x90]
        push ecx
        push edx
        push ebp
        call dword ptr ds : [public_6fb3564]
        lea eax, ss:[esp+0xCC]
        push eax
        lea ecx, ss:[esp+0xC4]
        push ecx
        lea edx, ss:[esp+0xA4]
        push edx
        push ebp
        call dword ptr ds : [public_6fb3578]
        add esp, 0x1C
        public_6f609bb : nop
        mov edx, dword ptr ss : [esp+0xB0]
        lea eax, ss:[esp+0xC0]
        push eax
        lea ecx, ss:[esp+0xB8]
        push ecx
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        push esi
        call public_6f603d0
        mov eax, dword ptr ss : [esp+0xC4]
        add esp, 0x14
        cmp eax, 2
        mov cl, 1
        je public_6f609fe
        cmp eax, 3
        je public_6f609fe
        cmp eax, 4
        je public_6f609fe
        cmp eax, 5
        jne public_6f60a00
        public_6f609fe : nop
        xor cl, cl
        public_6f60a00 : nop
        cmp dword ptr ds : [esi+0x104], 0xBF800000
        jne public_6f60a14
        test cl, cl
        je public_6f60a9e
        public_6f60a14 : nop
        mov dword ptr ss : [esp+0x14], 0
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x15
        mov dword ptr ss : [esp+0xF4], 1
        call public_6f24870
        mov edx, dword ptr ss : [esp+0xB8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        push edx
        push eax
        push ebp
        call public_6f27a10
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x10], ecx
        lea ebp, ds:[esi+0x60]
        push edx
        mov ecx, ebp
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x8C]
        public_6f60a70 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        push eax
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov dword ptr ss : [esp+0xEC], 0xFFFFFFFF
        je public_6f60a9e
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6f60a9e : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x110], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        push 0x5B0
        mov dword ptr ds : [esi+0x114], edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0xEC], 2
        je public_6f60add
        push esi
        mov ecx, eax
        call public_6f336a0
        mov ebp, eax
        jmp public_6f60adf
        public_6f60add : nop
        xor ebp, ebp
        public_6f60adf : nop
        fld dword ptr ds : [esi+0x104]
        mov dword ptr ss : [esp+0xEC], 0xFFFFFFFF
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 1
        jne public_6f60b01
        mov dword ptr ss : [esp+0x20], ebp
        public_6f60b01 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        push ebp
        call public_6f74380
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x14]
        push 0x1010
        push ecx
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x1C], 0
        call public_6f24070
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0xC
        test eax, 0xC40
        je public_6f60b56
        mov edx, dword ptr ss : [ebp+4]
        lea eax, ds:[ebx+0xC]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_6fb3574]
        add esp, 8
        jmp public_6f60c66
        public_6f60b56 : nop
        test eax, 0x600DE0
        je public_6f60c66
        lea ecx, ss:[esp+0x48]
        call public_6f6bbf0
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [ecx+0x48]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x48]
        push ecx
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_6fd1bcc]
        mov dword ptr ss : [esp+0x50], edx
        push eax
        lea edx, ss:[esp+0x8C]
        push edx
        mov ecx, offset public_6fd1bc8
        mov byte ptr ss : [esp+0x64], 1
        call public_6f69050
        test dword ptr ss : [esp+0x1C], 0x200100
        je public_6f60be5
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 0
        call public_6ee93f0
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        push 0x1E
/*FIXUP push offset public_6fbbb98 @0x6f60bd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb98
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        push edx
        mov ecx, eax
        call public_6ee9b70
        public_6f60be5 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x90]
        push ecx
        mov dword ptr ss : [esp+0x38], eax
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        mov dword ptr ss : [esp+0x3C], offset public_6fbbc18
        call dword ptr ds : [public_6fb3564]
        mov ecx, dword ptr ss : [esp+0xBC]
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x44], edx
        add esp, 0xC
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x40], ecx
        push edx
        mov ecx, offset public_6fd1c08
        mov dword ptr ss : [esp+0x40], eax
        call public_6ee8d70
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x1C]
        test ah, 1
        jne public_6f60c66
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x10], eax
        push 0
        lea eax, ds:[ebx+0xC]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_6fb3570]
        add esp, 0xC
        public_6f60c66 : nop
        mov ebp, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx], ebp
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, esi
        call public_6ef4bb0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+0x18]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0x18], eax
        mov edi, dword ptr ss : [ebp]
        jmp public_6f60cb8
        public_6f60c91 : nop
        mov edi, dword ptr ds : [ebx+0x14]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        lea ebp, ds:[ebx+0x10]
        je public_6f60cb5
        lea ecx, ds:[ecx]
        public_6f60ca0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x78]
        push edx
        mov ecx, ebp
        call public_6f1f4b0
        cmp esi, edi
        jne public_6f60ca0
        public_6f60cb5 : nop
        mov edi, dword ptr ds : [ebx+0x14]
        public_6f60cb8 : nop
        cmp edi, dword ptr ds : [ebx+0x14]
        jne public_6f60822
        public_6f60cc1 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        jne public_6f60cde
        push ebx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, offset public_6fd1b84
        call public_6f690d0
        mov ebx, dword ptr ss : [esp+0x24]
        jmp public_6f60d19
        public_6f60cde : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov al, byte ptr ds : [ecx+0x1D]
        test al, al
        jne public_6f60d00
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x1D]
        test dl, dl
        jne public_6f60cfc
        public_6f60cf1 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x1D]
        test dl, dl
        je public_6f60cf1
        public_6f60cfc : nop
        mov ebx, ecx
        jmp public_6f60d19
        public_6f60d00 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp ebx, dword ptr ds : [eax+8]
        jne public_6f60d12
        public_6f60d08 : nop
        mov ebx, eax
        mov eax, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [eax+8]
        je public_6f60d08
        public_6f60d12 : nop
        cmp dword ptr ds : [ebx+8], eax
        je public_6f60d19
        mov ebx, eax
        public_6f60d19 : nop
        cmp ebx, dword ptr ds : [public_6fd1b88]
        jne public_6f60815
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        public_6f60d2c : nop
        mov ecx, dword ptr ss : [esp+0xD8]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE0
        ret 
        UNREACHABLE_TRAP(0x6f607e0)
        ASM_EXPORT_ENTRY_FIRST(0x6f60907, public_6f60907)
        ASM_EXPORT_ENTRY(0x6f60936, public_6f60936)
        ASM_EXPORT_ENTRY(0x6f6094f, public_6f6094f)
        ASM_EXPORT_ENTRY(0x6f60985, public_6f60985)
        ASM_EXPORT_ENTRY_LAST(0x6f609bb, public_6f609bb)
    }
}

#undef public_6f60815
#undef public_6f60822
#undef public_6f6086a
#undef public_6f608b7
#undef public_6f608ce
#undef public_6f60907
#undef public_6f60936
#undef public_6f6094f
#undef public_6f6097e
#undef public_6f60985
#undef public_6f609bb
#undef public_6f609fe
#undef public_6f60a00
#undef public_6f60a14
#undef public_6f60a70
#undef public_6f60a9e
#undef public_6f60add
#undef public_6f60adf
#undef public_6f60b01
#undef public_6f60b56
#undef public_6f60be5
#undef public_6f60c66
#undef public_6f60c91
#undef public_6f60ca0
#undef public_6f60cb5
#undef public_6f60cb8
#undef public_6f60cc1
#undef public_6f60cde
#undef public_6f60cf1
#undef public_6f60cfc
#undef public_6f60d00
#undef public_6f60d08
#undef public_6f60d12
#undef public_6f60d19
#undef public_6f60d2c

#pragma init_seg(compiler)
extern "C" void const* const public_6f60907 = __AsmFindLabelExport(&internal_6f607e0, 0x6f60907);
extern "C" void const* const public_6f60936 = __AsmFindLabelExport(&internal_6f607e0, 0x6f60936);
extern "C" void const* const public_6f6094f = __AsmFindLabelExport(&internal_6f607e0, 0x6f6094f);
extern "C" void const* const public_6f60985 = __AsmFindLabelExport(&internal_6f607e0, 0x6f60985);
extern "C" void const* const public_6f609bb = __AsmFindLabelExport(&internal_6f607e0, 0x6f609bb);
