#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f099f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f26770);
CLANG_FORWARD_PROC_SYMBOL(public_6f276f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f57740);
CLANG_FORWARD_PROC_SYMBOL(public_6f57840);
CLANG_FORWARD_PROC_SYMBOL(public_6f60020);
CLANG_FORWARD_PROC_SYMBOL(public_6f62440);
CLANG_FORWARD_PROC_SYMBOL(public_6f77bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad108);

#define public_6f09a7a _public_6f09a7a
#define public_6f09b12 _public_6f09b12
#define public_6f09b4d _public_6f09b4d
#define public_6f09b5a _public_6f09b5a
#define public_6f09bd3 _public_6f09bd3
#define public_6f09be3 _public_6f09be3
#define public_6f09c2a _public_6f09c2a
#define public_6f09cb2 _public_6f09cb2
#define public_6f09cc2 _public_6f09cc2
#define public_6f09d09 _public_6f09d09
#define public_6f09db4 _public_6f09db4
#define public_6f09dc4 _public_6f09dc4
#define public_6f09e07 _public_6f09e07
#define public_6f09e1c _public_6f09e1c
#define public_6f09e5f _public_6f09e5f
#define public_6f09eea _public_6f09eea
#define public_6f09efa _public_6f09efa
#define public_6f09f56 _public_6f09f56
#define public_6f09f88 _public_6f09f88
#define public_6f09fa2 _public_6f09fa2
#define public_6f09fe7 _public_6f09fe7

PROC_DECLARE(0x6f099f0, internal_6f099f0, public_6f099f0);
extern "C" NAKED register_t __cdecl internal_6f099f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fad108 @0x6f099f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad108
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xAC
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x184]
        mov eax, dword ptr ds : [eax]
        push esi
        lea esi, ds:[eax+8]
        cmp byte ptr ss : [ebp+0x1AC], 1
        push edi
        mov ecx, 9
        lea edi, ss:[esp+0x38]
        rep movsd
        jne public_6f09fe7
        mov ecx, dword ptr ss : [ebp+8]
        call public_6f57710
        test al, al
        jne public_6f09fe7
        push ebx
        lea eax, ss:[esp+0x1B]
        xor ebx, ebx
        push eax
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [ebp+0x1AC], bl
        call public_6f93460
        mov eax, dword ptr ss : [ebp+0x174]
        add eax, 0xFFFFFFFE
        cmp eax, 8
        mov dword ptr ss : [esp+0xC4], ebx
        ja public_6f09f56
/*FIXUP jmp dword ptr ds : [eax*4+public_6f0a000] @0x6f09a73*/
  JMPTB cmp eax, 0
  JMPTB je public_6f09a7a
  JMPTB cmp eax, 1
  JMPTB je public_6f09b4d
  JMPTB cmp eax, 2
  JMPTB je public_6f09f56
  JMPTB cmp eax, 3
  JMPTB je public_6f09b5a
  JMPTB cmp eax, 4
  JMPTB je public_6f09c2a
  JMPTB cmp eax, 5
  JMPTB je public_6f09d09
  JMPTB cmp eax, 6
  JMPTB je public_6f09e1c
  JMPTB cmp eax, 7
  JMPTB je public_6f09f56
  JMPTB cmp eax, 8
  JMPTB je public_6f09e5f
  JMPTB int 3
        public_6f09a7a : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0xC4], 1
        call public_6f28e10
        lea ecx, ss:[esp+0x10]
        push ecx
        push 8
        call public_6f24870
        add esp, 8
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x16E]
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x16C]
        push ebx
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x16D]
        push edx
        lea edx, ss:[esp+0x48]
        push eax
        lea eax, ss:[ebp+0x118]
        push ecx
        push 0x43FA0000
        push edx
        push eax
        lea ecx, ss:[ebp+0x168]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        call public_6f26770
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp+0x17C]
        mov dword ptr ds : [eax+0x114], edx
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0x170]
        cmp eax, edi
        lea esi, ss:[ebp+0x170]
        je public_6f09b12
        mov ecx, esi
        call public_6f28e10
        cmp edi, ebx
        mov dword ptr ds : [esi], edi
        je public_6f09b12
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        public_6f09b12 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], esi
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0xC4], bl
        call public_6f28e10
        jmp public_6f09f56
        public_6f09b4d : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6f57740
        jmp public_6f09f56
        public_6f09b5a : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        push 8
        mov byte ptr ss : [esp+0xCC], 2
        call public_6f24870
        add esp, 8
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x16E]
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x16C]
        push ebx
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x16D]
        push edx
        lea edx, ss:[ebp+0x18C]
        push eax
        lea eax, ss:[ebp+0x118]
        push ecx
        push 0x43FA0000
        push edx
        push eax
        lea ecx, ss:[ebp+0x168]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        call public_6f26770
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0x170]
        cmp ecx, eax
        mov esi, eax
        je public_6f09be3
        cmp ecx, ebx
        je public_6f09bd3
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+0x170], ebx
        public_6f09bd3 : nop
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x170], esi
        je public_6f09be3
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        public_6f09be3 : nop
        mov eax, dword ptr ss : [ebp+0x170]
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0xC4], bl
        je public_6f09f56
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        jmp public_6f09f56
        public_6f09c2a : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        push 8
        mov byte ptr ss : [esp+0xCC], 3
        call public_6f24870
        add esp, 8
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x16E]
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x16C]
        push 1
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x16D]
        push edx
        lea edx, ss:[esp+0x54]
        push eax
        lea eax, ss:[ebp+0x118]
        push ecx
        push 0x43FA0000
        push edx
        push eax
        lea ecx, ss:[ebp+0x168]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        call public_6f26770
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp+0x17C]
        mov dword ptr ds : [eax+0x114], edx
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0x170]
        cmp ecx, eax
        mov esi, eax
        je public_6f09cc2
        cmp ecx, ebx
        je public_6f09cb2
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+0x170], ebx
        public_6f09cb2 : nop
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x170], esi
        je public_6f09cc2
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        public_6f09cc2 : nop
        mov eax, dword ptr ss : [ebp+0x170]
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0xC4], bl
        je public_6f09f56
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        jmp public_6f09f56
        public_6f09d09 : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6eea860
        cmp eax, ebx
        je public_6f09f56
        mov cl, byte ptr ss : [esp+0x1B]
        mov byte ptr ss : [esp+0x2C], cl
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, eax
        mov byte ptr ss : [esp+0xCC], 4
        call public_6f77bd0
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        call public_6eb70f0
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        call public_6f62440
        mov dword ptr ss : [esp+0x20], ebx
        lea edx, ss:[esp+0x20]
        push edx
        push 0x13
        mov byte ptr ss : [esp+0xDC], 5
        call public_6f24870
        add esp, 0x18
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x7C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        call public_6f276f0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0x170]
        cmp ecx, eax
        mov esi, eax
        je public_6f09dc4
        cmp ecx, ebx
        je public_6f09db4
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+0x170], ebx
        public_6f09db4 : nop
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x170], esi
        je public_6f09dc4
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        public_6f09dc4 : nop
        mov eax, dword ptr ss : [ebp+0x170]
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0xC4], 4
        je public_6f09e07
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ebx
        public_6f09e07 : nop
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0xC4], bl
        call public_6eec8d0
        jmp public_6f09f56
        public_6f09e1c : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6eea860
        mov esi, eax
        cmp esi, ebx
        je public_6f09f56
        lea ecx, ss:[ebp+0x130]
        push ecx
        push 0x19
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[ebp+0x18C]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6eb70f0
        push eax
        push esi
        call public_6f60020
        add esp, 0x18
        jmp public_6f09f56
        public_6f09e5f : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea edx, ss:[esp+0x10]
        push edx
        push 8
        mov byte ptr ss : [esp+0xCC], 6
        call public_6f24870
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x16E]
        add esp, 8
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x16C]
        push ebx
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x16D]
        push eax
        mov eax, dword ptr ss : [ebp+0x130]
        push ecx
        lea ecx, ss:[ebp+0x124]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ss:[ebp+0x118]
        push edx
        lea eax, ss:[ebp+0x168]
        push eax
        call public_6f26770
        mov ecx, dword ptr ss : [ebp+0x17C]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0x114], ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0x170]
        cmp ecx, eax
        mov esi, eax
        je public_6f09efa
        cmp ecx, ebx
        je public_6f09eea
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0x170], ebx
        public_6f09eea : nop
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x170], esi
        je public_6f09efa
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        public_6f09efa : nop
        mov eax, dword ptr ss : [ebp+0x170]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6f93790
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb6740
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0xC4], bl
        je public_6f09f56
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6f09f56 : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6f57840
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0xC8], 7
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0x20]
        pop ebx
        je public_6f09fa2
        public_6f09f88 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        jne public_6f09f88
        public_6f09fa2 : nop
        lea ecx, ss:[esp+0x18]
        call public_6ecfec0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0xC4], 0xFFFFFFFF
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6fa8370
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6fa8fe0
        add esp, 4
        public_6f09fe7 : nop
        mov ecx, dword ptr ss : [esp+0xB8]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xB8
        ret 
        UNREACHABLE_TRAP(0x6f099f0)
        ASM_EXPORT_ENTRY_FIRST(0x6f09a7a, public_6f09a7a)
        ASM_EXPORT_ENTRY(0x6f09b4d, public_6f09b4d)
        ASM_EXPORT_ENTRY(0x6f09b5a, public_6f09b5a)
        ASM_EXPORT_ENTRY(0x6f09c2a, public_6f09c2a)
        ASM_EXPORT_ENTRY(0x6f09d09, public_6f09d09)
        ASM_EXPORT_ENTRY(0x6f09e1c, public_6f09e1c)
        ASM_EXPORT_ENTRY(0x6f09e5f, public_6f09e5f)
        ASM_EXPORT_ENTRY_LAST(0x6f09f56, public_6f09f56)
    }
}

#undef public_6f09a7a
#undef public_6f09b12
#undef public_6f09b4d
#undef public_6f09b5a
#undef public_6f09bd3
#undef public_6f09be3
#undef public_6f09c2a
#undef public_6f09cb2
#undef public_6f09cc2
#undef public_6f09d09
#undef public_6f09db4
#undef public_6f09dc4
#undef public_6f09e07
#undef public_6f09e1c
#undef public_6f09e5f
#undef public_6f09eea
#undef public_6f09efa
#undef public_6f09f56
#undef public_6f09f88
#undef public_6f09fa2
#undef public_6f09fe7

#pragma init_seg(compiler)
extern "C" void const* const public_6f09a7a = __AsmFindLabelExport(&internal_6f099f0, 0x6f09a7a);
extern "C" void const* const public_6f09b4d = __AsmFindLabelExport(&internal_6f099f0, 0x6f09b4d);
extern "C" void const* const public_6f09b5a = __AsmFindLabelExport(&internal_6f099f0, 0x6f09b5a);
extern "C" void const* const public_6f09c2a = __AsmFindLabelExport(&internal_6f099f0, 0x6f09c2a);
extern "C" void const* const public_6f09d09 = __AsmFindLabelExport(&internal_6f099f0, 0x6f09d09);
extern "C" void const* const public_6f09e1c = __AsmFindLabelExport(&internal_6f099f0, 0x6f09e1c);
extern "C" void const* const public_6f09e5f = __AsmFindLabelExport(&internal_6f099f0, 0x6f09e5f);
extern "C" void const* const public_6f09f56 = __AsmFindLabelExport(&internal_6f099f0, 0x6f09f56);
