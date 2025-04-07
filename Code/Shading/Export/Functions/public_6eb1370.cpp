#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb15e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1630);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1660);
CLANG_FORWARD_PROC_SYMBOL(public_6eb16c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3450);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3510);
CLANG_FORWARD_PROC_SYMBOL(public_6eb35d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb36b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6eb13a9 _public_6eb13a9
#define public_6eb13b0 _public_6eb13b0
#define public_6eb13db _public_6eb13db
#define public_6eb13f2 _public_6eb13f2
#define public_6eb1444 _public_6eb1444
#define public_6eb144b _public_6eb144b
#define public_6eb1470 _public_6eb1470
#define public_6eb1474 _public_6eb1474
#define public_6eb1488 _public_6eb1488
#define public_6eb1497 _public_6eb1497
#define public_6eb14a4 _public_6eb14a4
#define public_6eb14ad _public_6eb14ad
#define public_6eb14ba _public_6eb14ba
#define public_6eb14fc _public_6eb14fc
#define public_6eb1522 _public_6eb1522
#define public_6eb154f _public_6eb154f
#define public_6eb1563 _public_6eb1563
#define public_6eb1567 _public_6eb1567
#define public_6eb157a _public_6eb157a
#define public_6eb157e _public_6eb157e
#define public_6eb1583 _public_6eb1583
#define public_6eb15a6 _public_6eb15a6

PROC_DECLARE(0x6eb1370, internal_6eb1370, public_6eb1370);
extern "C" NAKED register_t __cdecl internal_6eb1370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x68
        push ebp
        mov ebp, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x6C]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+4], ecx
        jbe public_6eb15a6
        push ebx
        push esi
        xor esi, esi
        push edi
        mov edi, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6eb13b0
        public_6eb13a9 : nop
        xor ecx, ecx
        nop 
        lea esp, ss:[esp]
        public_6eb13b0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [esi+edx]
        add esi, edx
        not al
        test al, 1
        je public_6eb1583
        mov ebx, dword ptr ds : [esi+0x10]
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], ecx
        je public_6eb13db
        lea ecx, ss:[esp+0x30]
        call public_6eb1660
        public_6eb13db : nop
        lea eax, ds:[ebx-1]
        cmp eax, 8
        mov dword ptr ss : [esp+0x30], ebx
        ja public_6eb1567
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb15b0] @0x6eb13eb*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb13f2
  JMPTB cmp eax, 1
  JMPTB je public_6eb1474
  JMPTB cmp eax, 2
  JMPTB je public_6eb1488
  JMPTB cmp eax, 3
  JMPTB je public_6eb1497
  JMPTB cmp eax, 4
  JMPTB je public_6eb14ba
  JMPTB cmp eax, 5
  JMPTB je public_6eb1567
  JMPTB cmp eax, 6
  JMPTB je public_6eb14ba
  JMPTB cmp eax, 7
  JMPTB je public_6eb14fc
  JMPTB cmp eax, 8
  JMPTB je public_6eb1522
  JMPTB int 3
        public_6eb13f2 : nop
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed4094 @0x6eb13f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4094
        push ecx
        lea ecx, ss:[esp+0x4C]
        call public_6eb15e0
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x44]
        push eax
        push edi
        xor ebp, ebp
        call dword ptr ds : [edx+0x7C]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_6eb144b
        mov ecx, dword ptr ds : [edi]
        push ebp
        lea edx, ss:[esp+0x20]
        push edx
        push 4
        lea eax, ss:[esp+0x2C]
        push eax
        push ebx
        push edi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6eb1470
        cmp dword ptr ss : [esp+0x1C], 4
        jne public_6eb1470
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebp, 1
        mov dword ptr ss : [esp+0x34], ecx
        public_6eb1444 : nop
        mov edx, dword ptr ds : [edi]
        push ebx
        push edi
        call dword ptr ds : [edx+0x10]
        public_6eb144b : nop
        xor eax, eax
        test ebp, ebp
        setne al
        dec eax
        test eax, 0x80004005
        jge public_6eb1563
        lea ecx, ss:[esp+0x30]
        call public_6eb1660
        mov ebp, dword ptr ss : [esp+0x7C]
        jmp public_6eb1583
        public_6eb1470 : nop
        xor ebp, ebp
        jmp public_6eb1444
        public_6eb1474 : nop
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x34]
        push ecx
        push edx
        push edi
        call public_6eb3510
        add esp, 0xC
        jmp public_6eb14ad
        public_6eb1488 : nop
        mov ecx, dword ptr ds : [esi+4]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        push 3
        push ecx
        jmp public_6eb14a4
        public_6eb1497 : nop
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea edx, ss:[esp+0x38]
        push edx
        push 4
        push eax
        public_6eb14a4 : nop
        push edi
        call public_6eb35d0
        add esp, 0x14
        public_6eb14ad : nop
        test eax, eax
        jge public_6eb1567
        jmp public_6eb157a
        public_6eb14ba : nop
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x80]
        push ecx
        push 0
        push edx
        push edi
        call public_6eb36b0
        add esp, 0x10
        test eax, eax
        lea ecx, ss:[esp+0x30]
        jl public_6eb157e
        mov eax, dword ptr ss : [esp+0x80]
        push eax
        call public_6eb16c0
        mov ecx, dword ptr ss : [esp+0x80]
        push ecx
        call public_6ed0c50
        add esp, 4
        jmp public_6eb1567
        public_6eb14fc : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        push edi
        call public_6eb3450
        add esp, 0xC
        test eax, eax
        jl public_6eb157a
        mov ecx, dword ptr ss : [esp+0x24]
        shr ecx, 4
        and ecx, 0xF
        mov dword ptr ss : [esp+0x34], ecx
        jmp public_6eb1567
        public_6eb1522 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        push edi
        call public_6eb3450
        add esp, 0xC
        test eax, eax
        jl public_6eb157a
        mov eax, dword ptr ds : [esi]
        xor ecx, ecx
        test eax, 0x20000
        jne public_6eb154f
        test eax, 0x40000
        je public_6eb154f
        mov ecx, 1
        public_6eb154f : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call public_6eb1630
        add esp, 8
        mov dword ptr ss : [esp+0x34], eax
        jmp public_6eb1567
        public_6eb1563 : nop
        mov ebp, dword ptr ss : [esp+0x7C]
        public_6eb1567 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x30]
        push eax
        push esi
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x68]
        public_6eb157a : nop
        lea ecx, ss:[esp+0x30]
        public_6eb157e : nop
        call public_6eb1660
        public_6eb1583 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x2C]
        inc eax
        add esi, 0x4C
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], esi
        jb public_6eb13a9
        pop edi
        pop esi
        pop ebx
        public_6eb15a6 : nop
        xor eax, eax
        pop ebp
        add esp, 0x68
        ret 8
        UNREACHABLE_TRAP(0x6eb1370)
        ASM_EXPORT_ENTRY_FIRST(0x6eb13f2, public_6eb13f2)
        ASM_EXPORT_ENTRY(0x6eb1474, public_6eb1474)
        ASM_EXPORT_ENTRY(0x6eb1488, public_6eb1488)
        ASM_EXPORT_ENTRY(0x6eb1497, public_6eb1497)
        ASM_EXPORT_ENTRY(0x6eb14ba, public_6eb14ba)
        ASM_EXPORT_ENTRY(0x6eb14fc, public_6eb14fc)
        ASM_EXPORT_ENTRY(0x6eb1522, public_6eb1522)
        ASM_EXPORT_ENTRY_LAST(0x6eb1567, public_6eb1567)
    }
}

#undef public_6eb13a9
#undef public_6eb13b0
#undef public_6eb13db
#undef public_6eb13f2
#undef public_6eb1444
#undef public_6eb144b
#undef public_6eb1470
#undef public_6eb1474
#undef public_6eb1488
#undef public_6eb1497
#undef public_6eb14a4
#undef public_6eb14ad
#undef public_6eb14ba
#undef public_6eb14fc
#undef public_6eb1522
#undef public_6eb154f
#undef public_6eb1563
#undef public_6eb1567
#undef public_6eb157a
#undef public_6eb157e
#undef public_6eb1583
#undef public_6eb15a6

#pragma init_seg(compiler)
extern "C" void const* const public_6eb13f2 = __AsmFindLabelExport(&internal_6eb1370, 0x6eb13f2);
extern "C" void const* const public_6eb1474 = __AsmFindLabelExport(&internal_6eb1370, 0x6eb1474);
extern "C" void const* const public_6eb1488 = __AsmFindLabelExport(&internal_6eb1370, 0x6eb1488);
extern "C" void const* const public_6eb1497 = __AsmFindLabelExport(&internal_6eb1370, 0x6eb1497);
extern "C" void const* const public_6eb14ba = __AsmFindLabelExport(&internal_6eb1370, 0x6eb14ba);
extern "C" void const* const public_6eb14fc = __AsmFindLabelExport(&internal_6eb1370, 0x6eb14fc);
extern "C" void const* const public_6eb1522 = __AsmFindLabelExport(&internal_6eb1370, 0x6eb1522);
extern "C" void const* const public_6eb1567 = __AsmFindLabelExport(&internal_6eb1370, 0x6eb1567);
