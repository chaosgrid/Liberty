#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6334ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6334d10);
CLANG_FORWARD_PROC_SYMBOL(public_6334f30);
CLANG_FORWARD_PROC_SYMBOL(public_6335440);
CLANG_FORWARD_PROC_SYMBOL(public_6335b10);

#define public_633aa8c _public_633aa8c
#define public_633aada _public_633aada
#define public_633ab16 _public_633ab16
#define public_633ab5b _public_633ab5b
#define public_633aba0 _public_633aba0
#define public_633abc5 _public_633abc5

PROC_DECLARE(0x633aa40, internal_633aa40, public_633aa40);
extern "C" NAKED register_t __cdecl internal_633aa40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x64
        mov eax, dword ptr ss : [esp+0x68]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [ebx+0x3C]
        dec eax
        cmp eax, 4
        push esi
        push edi
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x30], ecx
        ja public_633aba0
/*FIXUP jmp dword ptr ds : [eax*4+public_633ac08] @0x633aa85*/
  JMPTB cmp eax, 0
  JMPTB je public_633abc5
  JMPTB cmp eax, 1
  JMPTB je public_633aa8c
  JMPTB cmp eax, 2
  JMPTB je public_633ab16
  JMPTB cmp eax, 3
  JMPTB je public_633aada
  JMPTB cmp eax, 4
  JMPTB je public_633ab5b
  JMPTB int 3
        public_633aa8c : nop
        lea ecx, ss:[esp+0x34]
        call public_62748a0
        lea esi, ds:[ebx+0xC]
        add ebx, 0x44
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, 0xC
        lea edi, ss:[esp+0x34]
        rep movsd
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x68], eax
        push edx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x70], ecx
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        call public_6334d10
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 0x64
        ret 0xC
        public_633aada : nop
        fld dword ptr ds : [ebx+0x44]
        mov edx, dword ptr ss : [esp+0x7C]
        lea esi, ds:[ebx+0xC]
        mov ecx, 0xC
        lea edi, ss:[esp+0x34]
        rep movsd
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        fstp dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ds : [ebx+0x48]
        push ecx
        fstp dword ptr ss : [esp+0x74]
        call public_6334f30
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 0x64
        ret 0xC
        public_633ab16 : nop
        lea esi, ds:[ebx+0xC]
        add ebx, 0x44
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, 0xC
        lea edi, ss:[esp+0x34]
        rep movsd
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x68], eax
        push edx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x70], ecx
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        call public_6335b10
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 0x64
        ret 0xC
        public_633ab5b : nop
        fld dword ptr ds : [ebx+0x44]
        mov edx, dword ptr ss : [esp+0x7C]
        lea esi, ds:[ebx+0xC]
        mov ecx, 0xC
        lea edi, ss:[esp+0x34]
        rep movsd
        push edx
        fstp dword ptr ss : [esp+0x68]
        lea eax, ss:[esp+0x20]
        fld dword ptr ds : [ebx+0x48]
        fstp dword ptr ss : [esp+0x6C]
        push eax
        fld dword ptr ds : [ebx+0x4C]
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+0x74]
        push ecx
        call public_6335440
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 0x64
        ret 0xC
        mov edi, edi
        public_633aba0 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a51bc @0x633aba6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a51bc
        push 0x55A
/*FIXUP push offset public_63a4b20 @0x633abb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x633abba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_633abc5 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0x18]
        add ebx, 0x30
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x10], edx
        push ecx
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_6334ac0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 0x64
        ret 0xC
        UNREACHABLE_TRAP(0x633aa40)
        ASM_EXPORT_ENTRY_FIRST(0x633aa8c, public_633aa8c)
        ASM_EXPORT_ENTRY(0x633aada, public_633aada)
        ASM_EXPORT_ENTRY(0x633ab16, public_633ab16)
        ASM_EXPORT_ENTRY(0x633ab5b, public_633ab5b)
        ASM_EXPORT_ENTRY_LAST(0x633abc5, public_633abc5)
    }
}

#undef public_633aa8c
#undef public_633aada
#undef public_633ab16
#undef public_633ab5b
#undef public_633aba0
#undef public_633abc5

#pragma init_seg(compiler)
extern "C" void const* const public_633aa8c = __AsmFindLabelExport(&internal_633aa40, 0x633aa8c);
extern "C" void const* const public_633aada = __AsmFindLabelExport(&internal_633aa40, 0x633aada);
extern "C" void const* const public_633ab16 = __AsmFindLabelExport(&internal_633aa40, 0x633ab16);
extern "C" void const* const public_633ab5b = __AsmFindLabelExport(&internal_633aa40, 0x633ab5b);
extern "C" void const* const public_633abc5 = __AsmFindLabelExport(&internal_633aa40, 0x633abc5);
