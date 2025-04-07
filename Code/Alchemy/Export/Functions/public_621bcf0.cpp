#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bcf0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248805);

#define public_621bd28 _public_621bd28
#define public_621bd3d _public_621bd3d
#define public_621bd52 _public_621bd52
#define public_621bd67 _public_621bd67
#define public_621bd7c _public_621bd7c
#define public_621bd91 _public_621bd91
#define public_621bda5 _public_621bda5
#define public_621bdd2 _public_621bdd2
#define public_621bde2 _public_621bde2
#define public_621be07 _public_621be07

PROC_DECLARE(0x621bcf0, internal_621bcf0, public_621bcf0);
/* CHUNK of public_621b490 */
extern "C" NAKED register_t __cdecl internal_621bcf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6248805 @0x621bcf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248805
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x68]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 6
        je public_621bd28
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x68], ebx
        public_621bd28 : nop
        mov eax, dword ptr ds : [esi+0x60]
        mov byte ptr ss : [esp+0x14], 5
        cmp eax, ebx
        je public_621bd3d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x60], ebx
        public_621bd3d : nop
        mov eax, dword ptr ds : [esi+0x5C]
        mov byte ptr ss : [esp+0x14], 4
        cmp eax, ebx
        je public_621bd52
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x5C], ebx
        public_621bd52 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov byte ptr ss : [esp+0x14], 3
        cmp eax, ebx
        je public_621bd67
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_621bd67 : nop
        mov eax, dword ptr ds : [esi+0x54]
        mov byte ptr ss : [esp+0x14], 2
        cmp eax, ebx
        je public_621bd7c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x54], ebx
        public_621bd7c : nop
        mov eax, dword ptr ds : [esi+0x50]
        mov byte ptr ss : [esp+0x14], 1
        cmp eax, ebx
        je public_621bd91
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x50], ebx
        public_621bd91 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov byte ptr ss : [esp+0x14], bl
        cmp eax, ebx
        je public_621bda5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], ebx
        public_621bda5 : nop
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 7
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_621bdd2
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, ebx
        je public_621bdd2
        push eax
        call public_62460e0
        add esp, 4
        public_621bdd2 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_621bde2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_621bde2 : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_621be07
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, ebx
        je public_621be07
        push esi
        call public_62460e0
        add esp, 4
        public_621be07 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x621bcf0)
        ASM_EXPORT_ENTRY_FIRST(0x621bd28, public_621bd28)
        ASM_EXPORT_ENTRY(0x621bd3d, public_621bd3d)
        ASM_EXPORT_ENTRY(0x621bd52, public_621bd52)
        ASM_EXPORT_ENTRY(0x621bd67, public_621bd67)
        ASM_EXPORT_ENTRY(0x621bd7c, public_621bd7c)
        ASM_EXPORT_ENTRY(0x621bd91, public_621bd91)
        ASM_EXPORT_ENTRY(0x621bda5, public_621bda5)
        ASM_EXPORT_ENTRY(0x621bdd2, public_621bdd2)
        ASM_EXPORT_ENTRY(0x621bde2, public_621bde2)
        ASM_EXPORT_ENTRY_LAST(0x621be07, public_621be07)
    }
}

#undef public_621bd28
#undef public_621bd3d
#undef public_621bd52
#undef public_621bd67
#undef public_621bd7c
#undef public_621bd91
#undef public_621bda5
#undef public_621bdd2
#undef public_621bde2
#undef public_621be07

#pragma init_seg(compiler)
extern "C" void const* const public_621bd28 = __AsmFindLabelExport(&internal_621bcf0, 0x621bd28);
extern "C" void const* const public_621bd3d = __AsmFindLabelExport(&internal_621bcf0, 0x621bd3d);
extern "C" void const* const public_621bd52 = __AsmFindLabelExport(&internal_621bcf0, 0x621bd52);
extern "C" void const* const public_621bd67 = __AsmFindLabelExport(&internal_621bcf0, 0x621bd67);
extern "C" void const* const public_621bd7c = __AsmFindLabelExport(&internal_621bcf0, 0x621bd7c);
extern "C" void const* const public_621bd91 = __AsmFindLabelExport(&internal_621bcf0, 0x621bd91);
extern "C" void const* const public_621bda5 = __AsmFindLabelExport(&internal_621bcf0, 0x621bda5);
extern "C" void const* const public_621bdd2 = __AsmFindLabelExport(&internal_621bcf0, 0x621bdd2);
extern "C" void const* const public_621bde2 = __AsmFindLabelExport(&internal_621bcf0, 0x621bde2);
extern "C" void const* const public_621be07 = __AsmFindLabelExport(&internal_621bcf0, 0x621be07);
