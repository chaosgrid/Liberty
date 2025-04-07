#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67139a0);
CLANG_FORWARD_PROC_SYMBOL(public_6715bd0);

#define public_6711762 _public_6711762
#define public_6711775 _public_6711775
#define public_6711781 _public_6711781
#define public_6711794 _public_6711794
#define public_671179d _public_671179d
#define public_67117a4 _public_67117a4

PROC_DECLARE(0x6711710, internal_6711710, public_6711710);
extern "C" NAKED register_t __cdecl internal_6711710()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov byte ptr ss : [esp+0x13], 0
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x14], 0
        test eax, eax
        je public_67117a4
        mov ebx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x13]
        push eax
        push ebx
        push edi
        push ecx
        push ebp
        call public_67139a0
        mov dword ptr ss : [esp+0x28], eax
        mov al, byte ptr ss : [esp+0x27]
        add esp, 0x14
        test al, al
        jne public_6711762
        mov dword ptr ss : [esp+0x14], 0
        public_6711762 : nop
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ds:[edx-5]
        cmp eax, 3
        ja public_67117a4
/*FIXUP jmp dword ptr ds : [eax*4+public_67117bc] @0x671176e*/
  JMPTB cmp eax, 0
  JMPTB je public_6711775
  JMPTB cmp eax, 1
  JMPTB je public_6711781
  JMPTB cmp eax, 2
  JMPTB je public_6711794
  JMPTB cmp eax, 3
  JMPTB je public_671179d
  JMPTB int 3
        public_6711775 : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        push edi
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        jmp public_67117a4
        public_6711781 : nop
        xor ecx, ecx
        test di, di
        sete cl
        push ecx
        call public_6715bd0
        add esp, 4
        jmp public_67117a4
        public_6711794 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        jmp public_67117a4
        public_671179d : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        public_67117a4 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x14]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], edx
        pop ebx
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x6711710)
        ASM_EXPORT_ENTRY_FIRST(0x6711775, public_6711775)
        ASM_EXPORT_ENTRY(0x6711781, public_6711781)
        ASM_EXPORT_ENTRY(0x6711794, public_6711794)
        ASM_EXPORT_ENTRY_LAST(0x671179d, public_671179d)
    }
}

#undef public_6711762
#undef public_6711775
#undef public_6711781
#undef public_6711794
#undef public_671179d
#undef public_67117a4

#pragma init_seg(compiler)
extern "C" void const* const public_6711775 = __AsmFindLabelExport(&internal_6711710, 0x6711775);
extern "C" void const* const public_6711781 = __AsmFindLabelExport(&internal_6711710, 0x6711781);
extern "C" void const* const public_6711794 = __AsmFindLabelExport(&internal_6711710, 0x6711794);
extern "C" void const* const public_671179d = __AsmFindLabelExport(&internal_6711710, 0x671179d);
