#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0953);
CLANG_FORWARD_PROC_SYMBOL(public_6ad187f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad188a);
CLANG_FORWARD_JUMP_SYMBOL(public_6ad18c4);
CLANG_FORWARD_JUMP_SYMBOL(public_6ad18c6);
CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad40d9);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4104);
CLANG_FORWARD_PROC_SYMBOL(public_6ad442d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad48e2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4e34);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4e8b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad51fc);
CLANG_FORWARD_PROC_SYMBOL(public_6ad52bc);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5560);

#define public_6ad15e0 _public_6ad15e0
#define public_6ad15f3 _public_6ad15f3
#define public_6ad1601 _public_6ad1601
#define public_6ad1646 _public_6ad1646
#define public_6ad1661 _public_6ad1661
#define public_6ad167e _public_6ad167e
#define public_6ad168d _public_6ad168d
#define public_6ad16b8 _public_6ad16b8
#define public_6ad16ce _public_6ad16ce
#define public_6ad16e3 _public_6ad16e3
#define public_6ad16fe _public_6ad16fe
#define public_6ad1729 _public_6ad1729
#define public_6ad1731 _public_6ad1731
#define public_6ad173a _public_6ad173a
#define public_6ad1754 _public_6ad1754
#define public_6ad1757 _public_6ad1757
#define public_6ad175a _public_6ad175a
#define public_6ad17bc _public_6ad17bc
#define public_6ad17d9 _public_6ad17d9
#define public_6ad17f4 _public_6ad17f4
#define public_6ad17f7 _public_6ad17f7
#define public_6ad1822 _public_6ad1822
#define public_6ad183d _public_6ad183d
#define public_6ad1850 _public_6ad1850
#define public_6ad1859 _public_6ad1859
#define public_6ad1879 _public_6ad1879

PROC_DECLARE(0x6ad15a6, internal_6ad15a6, public_6ad15a6);
extern "C" NAKED register_t __cdecl internal_6ad15a6()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaa80 @0x6ad15ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaa80
/*FIXUP push offset _public_6ad023c @0x6ad15b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push esi
        push edi
        mov ebx, dword ptr ss : [ebp+8]
        xor edi, edi
        cmp ebx, edi
        jne public_6ad15e0
        push dword ptr ss : [ebp+0xC]
        call public_6ad0953
        pop ecx
        jmp public_6ad18c6
        public_6ad15e0 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        cmp esi, edi
        jne public_6ad15f3
        push ebx
        call public_6ad07b3
        pop ecx
        jmp public_6ad18c4
        public_6ad15f3 : nop
        mov eax, dword ptr ds : [public_6ae2464]
        cmp eax, 3
        jne public_6ad173a
        public_6ad1601 : nop
        mov dword ptr ss : [ebp-0x24], edi
        cmp esi, 0xFFFFFFE0
        ja public_6ad16fe
        push 9
        call public_6ad237a
        pop ecx
        mov dword ptr ss : [ebp-4], edi
        push ebx
        call public_6ad40d9
        pop ecx
        mov dword ptr ss : [ebp-0x28], eax
        cmp eax, edi
        je public_6ad16ce
        cmp esi, dword ptr ds : [public_6ae245c]
        ja public_6ad167e
        push esi
        push ebx
        push eax
        call public_6ad48e2
        add esp, 0xC
        test eax, eax
        je public_6ad1646
        mov dword ptr ss : [ebp-0x24], ebx
        jmp public_6ad167e
        public_6ad1646 : nop
        push esi
        call public_6ad442d
        pop ecx
        mov dword ptr ss : [ebp-0x24], eax
        cmp eax, edi
        je public_6ad167e
        mov eax, dword ptr ds : [ebx-4]
        dec eax
        mov dword ptr ss : [ebp-0x20], eax
        cmp eax, esi
        jb public_6ad1661
        mov eax, esi
        public_6ad1661 : nop
        push eax
        push ebx
        push dword ptr ss : [ebp-0x24]
        call public_6ad5560
        push ebx
        call public_6ad40d9
        mov dword ptr ss : [ebp-0x28], eax
        push ebx
        push eax
        call public_6ad4104
        add esp, 0x18
        public_6ad167e : nop
        cmp dword ptr ss : [ebp-0x24], edi
        jne public_6ad16ce
        cmp esi, edi
        jne public_6ad168d
        push 1
        pop esi
        mov dword ptr ss : [ebp+0xC], esi
        public_6ad168d : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        mov dword ptr ss : [ebp+0xC], esi
        push esi
        push edi
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada130]
        mov dword ptr ss : [ebp-0x24], eax
        cmp eax, edi
        je public_6ad16ce
        mov eax, dword ptr ds : [ebx-4]
        dec eax
        mov dword ptr ss : [ebp-0x20], eax
        cmp eax, esi
        jb public_6ad16b8
        mov eax, esi
        public_6ad16b8 : nop
        push eax
        push ebx
        push dword ptr ss : [ebp-0x24]
        call public_6ad5560
        push ebx
        push dword ptr ss : [ebp-0x28]
        call public_6ad4104
        add esp, 0x14
        public_6ad16ce : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad1731
        cmp dword ptr ss : [ebp-0x28], edi
        jne public_6ad16fe
        cmp esi, edi
        jne public_6ad16e3
        push 1
        pop esi
        public_6ad16e3 : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        mov dword ptr ss : [ebp+0xC], esi
        push esi
        push ebx
        push edi
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada100]
        mov dword ptr ss : [ebp-0x24], eax
        public_6ad16fe : nop
        mov eax, dword ptr ss : [ebp-0x24]
        cmp eax, edi
        jne public_6ad18c6
        cmp dword ptr ds : [public_6ae108c], edi
        je public_6ad18c6
        push esi
        call public_6ad52bc
        pop ecx
        test eax, eax
        jne public_6ad1601
        jmp public_6ad18c4
        public_6ad1729 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ss : [ebp+8]
        xor edi, edi
        public_6ad1731 : nop
        push 9
        call public_6ad23db
        pop ecx
        ret 
        public_6ad173a : nop
        cmp eax, 2
        jne public_6ad188a
        cmp esi, 0xFFFFFFE0
        ja public_6ad175a
        cmp esi, edi
        jbe public_6ad1754
        add esi, 0xF
        and esi, 0xFFFFFFF0
        jmp public_6ad1757
        public_6ad1754 : nop
        push 0x10
        pop esi
        public_6ad1757 : nop
        mov dword ptr ss : [ebp+0xC], esi
        public_6ad175a : nop
        mov dword ptr ss : [ebp-0x24], edi
        cmp esi, 0xFFFFFFE0
        ja public_6ad1859
        push 9
        call public_6ad237a
        pop ecx
        mov dword ptr ss : [ebp-4], 1
        lea eax, ss:[ebp-0x2C]
        push eax
        lea eax, ss:[ebp-0x38]
        push eax
        push ebx
        call public_6ad4e34
        add esp, 0xC
        mov edi, eax
        mov dword ptr ss : [ebp-0x30], edi
        test edi, edi
        je public_6ad183d
        cmp esi, dword ptr ds : [public_6adfc74]
        jae public_6ad17f7
        mov ebx, esi
        shr ebx, 4
        push ebx
        push edi
        push dword ptr ss : [ebp-0x2C]
        push dword ptr ss : [ebp-0x38]
        call public_6ad51fc
        add esp, 0x10
        test eax, eax
        je public_6ad17bc
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x24], eax
        jmp public_6ad17f4
        public_6ad17bc : nop
        push ebx
        call public_6ad4ed0
        pop ecx
        mov dword ptr ss : [ebp-0x24], eax
        test eax, eax
        je public_6ad17f4
        movzx eax, byte ptr ds : [edi]
        shl eax, 4
        mov dword ptr ss : [ebp-0x34], eax
        cmp eax, esi
        jb public_6ad17d9
        mov eax, esi
        public_6ad17d9 : nop
        push eax
        push dword ptr ss : [ebp+8]
        push dword ptr ss : [ebp-0x24]
        call public_6ad5560
        push edi
        push dword ptr ss : [ebp-0x2C]
        push dword ptr ss : [ebp-0x38]
        call public_6ad4e8b
        add esp, 0x18
        public_6ad17f4 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6ad17f7 : nop
        cmp dword ptr ss : [ebp-0x24], 0
        jne public_6ad1850
        push esi
        push 0
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada130]
        mov dword ptr ss : [ebp-0x24], eax
        test eax, eax
        je public_6ad1850
        movzx eax, byte ptr ds : [edi]
        shl eax, 4
        mov dword ptr ss : [ebp-0x34], eax
        cmp eax, esi
        jb public_6ad1822
        mov eax, esi
        public_6ad1822 : nop
        push eax
        push ebx
        push dword ptr ss : [ebp-0x24]
        call public_6ad5560
        push edi
        push dword ptr ss : [ebp-0x2C]
        push dword ptr ss : [ebp-0x38]
        call public_6ad4e8b
        add esp, 0x18
        jmp public_6ad1850
        public_6ad183d : nop
        push esi
        push ebx
        push 0
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada100]
        mov dword ptr ss : [ebp-0x24], eax
        public_6ad1850 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad187f
        public_6ad1859 : nop
        mov eax, dword ptr ss : [ebp-0x24]
        cmp eax, edi
        jne public_6ad18c6
        cmp dword ptr ds : [public_6ae108c], edi
        je public_6ad18c6
        push esi
        call public_6ad52bc
        pop ecx
        test eax, eax
        jne public_6ad175a
        jmp public_6ad18c4
        public_6ad1879 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ss : [ebp+8]
        UNREACHABLE_TRAP(0x6ad15a6)
        ASM_EXPORT_ENTRY_FIRST(0x6ad1729, public_6ad1729)
        ASM_EXPORT_ENTRY_LAST(0x6ad1879, public_6ad1879)
    }
}

#undef public_6ad15e0
#undef public_6ad15f3
#undef public_6ad1601
#undef public_6ad1646
#undef public_6ad1661
#undef public_6ad167e
#undef public_6ad168d
#undef public_6ad16b8
#undef public_6ad16ce
#undef public_6ad16e3
#undef public_6ad16fe
#undef public_6ad1729
#undef public_6ad1731
#undef public_6ad173a
#undef public_6ad1754
#undef public_6ad1757
#undef public_6ad175a
#undef public_6ad17bc
#undef public_6ad17d9
#undef public_6ad17f4
#undef public_6ad17f7
#undef public_6ad1822
#undef public_6ad183d
#undef public_6ad1850
#undef public_6ad1859
#undef public_6ad1879

#pragma init_seg(compiler)
extern "C" void const* const public_6ad1729 = __AsmFindLabelExport(&internal_6ad15a6, 0x6ad1729);
extern "C" void const* const public_6ad1879 = __AsmFindLabelExport(&internal_6ad15a6, 0x6ad1879);
