#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed6800);
CLANG_FORWARD_PROC_SYMBOL(public_6ed8450);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb190);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab2eb);

#define public_6ed8540 _public_6ed8540
#define public_6ed858d _public_6ed858d
#define public_6ed85be _public_6ed85be
#define public_6ed8776 _public_6ed8776
#define public_6ed8787 _public_6ed8787
#define public_6ed8798 _public_6ed8798
#define public_6ed87a7 _public_6ed87a7
#define public_6ed87af _public_6ed87af
#define public_6ed87cc _public_6ed87cc
#define public_6ed87cf _public_6ed87cf

PROC_DECLARE(0x6ed8450, internal_6ed8450, public_6ed8450);
extern "C" NAKED register_t __cdecl internal_6ed8450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fab2eb @0x6ed8452*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab2eb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1F0
        mov eax, dword ptr ss : [esp+0x204]
        mov dl, byte ptr ss : [esp+0xB]
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x214]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x20C]
        lea ebp, ds:[esi+0x14]
        push edi
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        lea edi, ds:[esi+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        lea ecx, ss:[esp+0x214]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x210], ebx
        mov dword ptr ds : [esi], offset public_6fb6534
        call dword ptr ds : [public_6fb3444]
        push edi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, ebx
        je public_6ed87cc
        push 0x40
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ed87cc
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x210]
        push edx
        call public_6f73930
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ed87cf
        mov dword ptr ds : [esi+0x28], 0x4A3F
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, ebx
        je public_6ed8540
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 7
        jae public_6ed858d
        public_6ed8540 : nop
        push 0x1C
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[esi+0x1C]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
        public_6ed858d : nop
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x24]
        push edx
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], 0
        call public_6eb6bb0
        push eax
        call public_6eeb190
        add esp, 8
        test eax, eax
        je public_6ed85be
/*FIXUP push offset public_6fb632c @0x6ed85b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x28]
        call public_6ead640
/*FIXUP public_6ed85be : nop
        push offset public_6fb6324 @0x6ed85be*/
  FIXUP public_6ed85be : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x28]
        call public_6eec250
        mov ebx, dword ptr ds : [public_6fb3684]
        lea eax, ss:[esp+0x6C]
        mov ecx, 0x11
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x68]
        push eax
        rep movsd
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0xF8]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x7C]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x78]
        push edx
        rep movsd
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x14]
        push 0
        push edx
        lea eax, ss:[esp+0x180]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x78]
        rep movsd
        lea ecx, ss:[esp+0x7C]
        push ecx
        call ebx
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6314 @0x6ed8681*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6314
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0x13C]
        push 3
        push ecx
        call public_6eeb210
        mov ecx, 0x11
        lea edx, ss:[esp+0x7C]
        mov esi, eax
        lea edi, ss:[esp+0x78]
        push edx
        rep movsd
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6518 @0x6ed86e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6518
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0xB0], 0
        mov byte ptr ss : [esp+0xB4], 0
        call public_6ead640
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[edx+0xC]
        mov eax, dword ptr ds : [eax]
        push eax
/*FIXUP push offset public_6fb62ec @0x6ed870e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea ecx, ss:[esp+0xB8]
        push ecx
        lea edx, ss:[esp+0x1C8]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x7C]
        mov ecx, 0x11
        lea edi, ss:[esp+0x78]
        push eax
        rep movsd
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x21C]
        dec eax
        cmp eax, 5
        mov dword ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x28], 0
        ja public_6ed87af
/*FIXUP jmp dword ptr ds : [eax*4+public_6ed87ec] @0x6ed876f*/
  JMPTB cmp eax, 0
  JMPTB je public_6ed8776
  JMPTB cmp eax, 1
  JMPTB je public_6ed87af
  JMPTB cmp eax, 2
  JMPTB je public_6ed8787
  JMPTB cmp eax, 3
  JMPTB je public_6ed8787
  JMPTB cmp eax, 4
  JMPTB je public_6ed8787
  JMPTB cmp eax, 5
  JMPTB je public_6ed8798
  JMPTB int 3
/*FIXUP public_6ed8776 : nop
        push offset public_6fb6064 @0x6ed8776*/
  FIXUP public_6ed8776 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb62d0 @0x6ed877b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62d0
        lea ecx, ss:[esp+0x2C]
        push ecx
        jmp public_6ed87a7
/*FIXUP public_6ed8787 : nop
        push offset public_6fb6064 @0x6ed8787*/
  FIXUP public_6ed8787 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb62b4 @0x6ed878c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62b4
        lea edx, ss:[esp+0x2C]
        push edx
        jmp public_6ed87a7
/*FIXUP public_6ed8798 : nop
        push offset public_6fb6064 @0x6ed8798*/
  FIXUP public_6ed8798 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb6298 @0x6ed879d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6298
        lea eax, ss:[esp+0x2C]
        push eax
        public_6ed87a7 : nop
        call public_6eec2b0
        add esp, 0xC
        public_6ed87af : nop
        sub esp, 0x44
        mov edi, esp
        mov ecx, 0x11
        lea esi, ss:[esp+0x68]
        rep movsd
        mov esi, dword ptr ss : [esp+0x60]
        mov ecx, esi
        call public_6ed6800
        jmp public_6ed87cf
        public_6ed87cc : nop
        mov dword ptr ds : [esi+0x24], ebx
        public_6ed87cf : nop
        mov ecx, dword ptr ss : [esp+0x200]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x1FC
        ret 0x10
        UNREACHABLE_TRAP(0x6ed8450)
        ASM_EXPORT_ENTRY_FIRST(0x6ed8776, public_6ed8776)
        ASM_EXPORT_ENTRY(0x6ed8787, public_6ed8787)
        ASM_EXPORT_ENTRY(0x6ed8798, public_6ed8798)
        ASM_EXPORT_ENTRY_LAST(0x6ed87af, public_6ed87af)
    }
}

#undef public_6ed8540
#undef public_6ed858d
#undef public_6ed85be
#undef public_6ed8776
#undef public_6ed8787
#undef public_6ed8798
#undef public_6ed87a7
#undef public_6ed87af
#undef public_6ed87cc
#undef public_6ed87cf

#pragma init_seg(compiler)
extern "C" void const* const public_6ed8776 = __AsmFindLabelExport(&internal_6ed8450, 0x6ed8776);
extern "C" void const* const public_6ed8787 = __AsmFindLabelExport(&internal_6ed8450, 0x6ed8787);
extern "C" void const* const public_6ed8798 = __AsmFindLabelExport(&internal_6ed8450, 0x6ed8798);
extern "C" void const* const public_6ed87af = __AsmFindLabelExport(&internal_6ed8450, 0x6ed87af);
