#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614020);
CLANG_FORWARD_PROC_SYMBOL(public_6619800);
CLANG_FORWARD_PROC_SYMBOL(public_661a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_661acf0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6615b37 _public_6615b37
#define public_6615b67 _public_6615b67
#define public_6615b94 _public_6615b94
#define public_6615bba _public_6615bba
#define public_6615be3 _public_6615be3
#define public_6615bff _public_6615bff
#define public_6615c07 _public_6615c07
#define public_6615c2f _public_6615c2f
#define public_6615c65 _public_6615c65
#define public_6615c77 _public_6615c77
#define public_6615c7a _public_6615c7a
#define public_6615c7e _public_6615c7e
#define public_6615ca6 _public_6615ca6
#define public_6615ce7 _public_6615ce7
#define public_6615cf4 _public_6615cf4
#define public_6615d34 _public_6615d34
#define public_6615d55 _public_6615d55

PROC_DECLARE(0x6615b00, internal_6615b00, public_6615b00);
extern "C" NAKED register_t __cdecl internal_6615b00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        or ebx, 0xFFFFFFFF
        test esi, esi
        push edi
        je public_6615d55
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx-1]
        cmp eax, 7
        ja public_6615c07
/*FIXUP jmp dword ptr ds : [eax*4+public_6615d60] @0x6615b30*/
  JMPTB cmp eax, 0
  JMPTB je public_6615b37
  JMPTB cmp eax, 1
  JMPTB je public_6615b67
  JMPTB cmp eax, 2
  JMPTB je public_6615c07
  JMPTB cmp eax, 3
  JMPTB je public_6615b94
  JMPTB cmp eax, 4
  JMPTB je public_6615c07
  JMPTB cmp eax, 5
  JMPTB je public_6615bba
  JMPTB cmp eax, 6
  JMPTB je public_6615c07
  JMPTB cmp eax, 7
  JMPTB je public_6615be3
  JMPTB int 3
        public_6615b37 : nop
        push 0x44
        call public_66281dc
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6615bff
        push esi
        mov ecx, edi
        call public_661acf0
        mov eax, edi
        mov dword ptr ds : [edi+0x40], ebx
        mov dword ptr ds : [edi], offset public_66291a4
        mov dword ptr ss : [esp+0xC], eax
        jmp public_6615c2f
        public_6615b67 : nop
        push 0x48
        call public_66281dc
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6615bff
        push esi
        mov ecx, edi
        call public_661acf0
        mov eax, edi
        mov dword ptr ds : [edi], offset public_6629168
        mov dword ptr ss : [esp+0xC], eax
        jmp public_6615c2f
        public_6615b94 : nop
        push 0x4C
        call public_66281dc
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6615bff
        push esi
        mov ecx, edi
        call public_661acf0
        mov eax, edi
        mov dword ptr ds : [edi], offset public_662912c
        mov dword ptr ss : [esp+0xC], eax
        jmp public_6615c2f
        public_6615bba : nop
        push 0x94
        call public_66281dc
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6615bff
        push esi
        mov ecx, edi
        call public_661acf0
        mov eax, edi
        mov dword ptr ds : [edi], offset public_66290f0
        mov dword ptr ss : [esp+0xC], eax
        jmp public_6615c2f
        public_6615be3 : nop
        push 0x3C
        call public_66281dc
        add esp, 4
        test eax, eax
        je public_6615bff
        push esi
        mov ecx, eax
        call public_661acf0
        mov dword ptr ss : [esp+0xC], eax
        jmp public_6615c2f
        public_6615bff : nop
        xor eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jmp public_6615c2f
/*FIXUP public_6615c07 : nop
        push offset public_662a254 @0x6615c07*/
  FIXUP public_6615c07 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a254
        push 0x479
        mov eax, 0x100000
/*FIXUP push offset public_662a208 @0x6615c16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a208
/*FIXUP push offset public_662a1e8 @0x6615c1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a1e8
        push eax
        mov eax, dword ptr ds : [public_6629004]
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x14
        public_6615c2f : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x1C]
        test al, al
        je public_6615d55
        mov edx, dword ptr ss : [esp+0x20]
        push ebp
        mov ebx, dword ptr ss : [esp+0x10]
        mov al, 1
        mov ecx, dword ptr ds : [edx+0x24]
        lea ebp, ds:[edx+0x20]
        mov edi, ecx
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [ebp+8]
        cmp esi, edx
        je public_6615c7e
        public_6615c65 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        cmp ebx, eax
        setb al
        test al, al
        je public_6615c77
        mov esi, dword ptr ds : [esi]
        jmp public_6615c7a
        public_6615c77 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6615c7a : nop
        cmp esi, edx
        jne public_6615c65
        public_6615c7e : nop
        mov dl, byte ptr ss : [ebp+0xC]
        test dl, dl
        je public_6615ca6
        lea eax, ss:[esp+0x10]
        lea ecx, ss:[esp+0x28]
        push eax
        push edi
        push esi
        push ecx
        mov ecx, ebp
        call public_6619800
        pop ebp
        pop edi
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x10
        ret 0x10
        public_6615ca6 : nop
        test al, al
        mov dword ptr ss : [esp+0x30], edi
        je public_6615cf4
        cmp edi, dword ptr ds : [ecx]
        jne public_6615ce7
        lea edx, ss:[esp+0x28]
        lea eax, ss:[esp+0x10]
        push edx
        push eax
        push edi
        lea ecx, ss:[esp+0x38]
        push esi
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], 1
        call public_6619800
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6614020
        pop ebp
        pop edi
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x10
        ret 0x10
        public_6615ce7 : nop
        lea ecx, ss:[esp+0x30]
        call public_661a1e0
        mov ebx, dword ptr ss : [esp+0x10]
        public_6615cf4 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, ebx
        lea eax, ss:[esp+0x28]
        push eax
        jae public_6615d34
        lea ecx, ss:[esp+0x14]
        lea edx, ss:[esp+0x30]
        push ecx
        push edi
        push esi
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], 1
        call public_6619800
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6614020
        pop ebp
        pop edi
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x10
        ret 0x10
        public_6615d34 : nop
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x2C], 0
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6614020
        pop ebp
        pop edi
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x10
        ret 0x10
        public_6615d55 : nop
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x6615b00)
        ASM_EXPORT_ENTRY_FIRST(0x6615b37, public_6615b37)
        ASM_EXPORT_ENTRY(0x6615b67, public_6615b67)
        ASM_EXPORT_ENTRY(0x6615b94, public_6615b94)
        ASM_EXPORT_ENTRY(0x6615bba, public_6615bba)
        ASM_EXPORT_ENTRY(0x6615be3, public_6615be3)
        ASM_EXPORT_ENTRY_LAST(0x6615c07, public_6615c07)
    }
}

#undef public_6615b37
#undef public_6615b67
#undef public_6615b94
#undef public_6615bba
#undef public_6615be3
#undef public_6615bff
#undef public_6615c07
#undef public_6615c2f
#undef public_6615c65
#undef public_6615c77
#undef public_6615c7a
#undef public_6615c7e
#undef public_6615ca6
#undef public_6615ce7
#undef public_6615cf4
#undef public_6615d34
#undef public_6615d55

#pragma init_seg(compiler)
extern "C" void const* const public_6615b37 = __AsmFindLabelExport(&internal_6615b00, 0x6615b37);
extern "C" void const* const public_6615b67 = __AsmFindLabelExport(&internal_6615b00, 0x6615b67);
extern "C" void const* const public_6615b94 = __AsmFindLabelExport(&internal_6615b00, 0x6615b94);
extern "C" void const* const public_6615bba = __AsmFindLabelExport(&internal_6615b00, 0x6615bba);
extern "C" void const* const public_6615be3 = __AsmFindLabelExport(&internal_6615b00, 0x6615be3);
extern "C" void const* const public_6615c07 = __AsmFindLabelExport(&internal_6615b00, 0x6615c07);
