#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_528560);
CLANG_FORWARD_PROC_SYMBOL(public_5288a0);
CLANG_FORWARD_PROC_SYMBOL(public_5295d0);
CLANG_FORWARD_PROC_SYMBOL(public_5296d0);
CLANG_FORWARD_PROC_SYMBOL(public_5298c0);
CLANG_FORWARD_PROC_SYMBOL(public_529920);
CLANG_FORWARD_PROC_SYMBOL(public_531b20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_527e92 _public_527e92
#define public_527ea0 _public_527ea0
#define public_527eae _public_527eae
#define public_527ec0 _public_527ec0
#define public_527edb _public_527edb
#define public_527ef1 _public_527ef1
#define public_527efc _public_527efc
#define public_527f53 _public_527f53
#define public_527f55 _public_527f55
#define public_527f7c _public_527f7c
#define public_527f88 _public_527f88
#define public_527fad _public_527fad
#define public_527fc8 _public_527fc8
#define public_527fcf _public_527fcf
#define public_527fd8 _public_527fd8
#define public_527fe6 _public_527fe6

PROC_DECLARE(0x527e70, internal_527e70, public_527e70);
extern "C" NAKED register_t __cdecl internal_527e70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        add eax, 0xFFFFFFF6
        cmp eax, 4
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        ja public_527fe6
/*FIXUP jmp dword ptr ds : [eax*4+public_528000] @0x527e8b*/
  JMPTB cmp eax, 0
  JMPTB je public_527eae
  JMPTB cmp eax, 1
  JMPTB je public_527ea0
  JMPTB cmp eax, 2
  JMPTB je public_527e92
  JMPTB cmp eax, 3
  JMPTB je public_527f7c
  JMPTB cmp eax, 4
  JMPTB je public_527fd8
  JMPTB int 3
        public_527e92 : nop
        push 1
        mov ecx, edi
        call public_5288a0
        jmp public_527fe6
        public_527ea0 : nop
        push 0
        mov ecx, edi
        call public_5288a0
        jmp public_527fe6
        public_527eae : nop
        mov ebx, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ds : [edi+0x14]
        xor ebp, ebp
        cmp esi, ebx
        je public_527efc
        lea ebx, ds:[ebx]
        public_527ec0 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_527edb
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_527edb
        call public_4f7a90
        mov dword ptr ds : [esi+4], ebp
        public_527edb : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebp
        lea edi, ds:[esi+8]
        je public_527ef1
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, edi
        call public_5298c0
        public_527ef1 : nop
        add esi, 0xC
        cmp esi, ebx
        jne public_527ec0
        mov edi, dword ptr ss : [esp+0x10]
        public_527efc : nop
        lea ecx, ds:[edi+0x10]
        call public_529920
        mov ecx, edi
        call public_5295d0
        mov esi, dword ptr ds : [edi+8]
        call public_54baf0
        cmp esi, eax
        jne public_527fe6
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x158]
        test al, al
        jne public_527fe6
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ebp
        je public_527f53
        add eax, 0xC
        cmp eax, ebp
        je public_527f53
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebp
        je public_527f53
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_527f55
        public_527f53 : nop
        xor eax, eax
        public_527f55 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6358]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_527fe6
        mov edx, dword ptr ds : [public_6753e8]
        push ebp
        push edx
        call public_489e80
        add esp, 8
        jmp public_527fe6
        public_527f7c : nop
        mov ebx, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ds : [edi+0x14]
        cmp esi, ebx
        je public_527fcf
        xor ebp, ebp
        public_527f88 : nop
        mov ax, word ptr ss : [esp+0x1C]
        cmp word ptr ds : [esi], ax
        jne public_527fc8
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_527fad
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_527fad
        call public_4f7a90
        mov dword ptr ds : [esi+4], ebp
        public_527fad : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebp
        je public_527fc8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebp
        je public_527fc8
        call public_4f7a90
        mov dword ptr ds : [esi+8], ebp
        public_527fc8 : nop
        add esi, 0xC
        cmp esi, ebx
        jne public_527f88
        public_527fcf : nop
        mov ecx, edi
        call public_5296d0
        jmp public_527fe6
        public_527fd8 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        push edx
        mov ecx, edi
        call public_528560
        public_527fe6 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        mov ecx, edi
        call public_531b20
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x527e70)
        ASM_EXPORT_ENTRY_SINGLE(0x527fd8, public_527fd8)
    }
}

#undef public_527e92
#undef public_527ea0
#undef public_527eae
#undef public_527ec0
#undef public_527edb
#undef public_527ef1
#undef public_527efc
#undef public_527f53
#undef public_527f55
#undef public_527f7c
#undef public_527f88
#undef public_527fad
#undef public_527fc8
#undef public_527fcf
#undef public_527fd8
#undef public_527fe6

#pragma init_seg(compiler)
extern "C" void const* const public_527fd8 = __AsmFindLabelExport(&internal_527e70, 0x527fd8);
