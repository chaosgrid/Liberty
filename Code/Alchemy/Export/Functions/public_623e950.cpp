#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e950);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624a6c6);

#define public_623e97f _public_623e97f
#define public_623e990 _public_623e990
#define public_623e99d _public_623e99d
#define public_623e9ae _public_623e9ae
#define public_623e9c3 _public_623e9c3
#define public_623e9d5 _public_623e9d5
#define public_623e9e8 _public_623e9e8
#define public_623e9f9 _public_623e9f9
#define public_623ea06 _public_623ea06
#define public_623ea17 _public_623ea17

PROC_DECLARE(0x623e950, internal_623e950, public_623e950);
/* CHUNK of public_6204630 */
extern "C" NAKED register_t __cdecl internal_623e950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_624a6c6 @0x623e952*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a6c6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x14]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], 1
        je public_623e990
        public_623e97f : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        jne public_623e97f
        public_623e990 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, edi
        je public_623e9ae
        public_623e99d : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x1C], edx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, edi
        jne public_623e99d
        public_623e9ae : nop
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_623e9c3
        push eax
        call public_62460e0
        add esp, 4
        public_623e9c3 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], edi
        cmp eax, edi
        je public_623e9d5
        push eax
        call public_62460e0
        add esp, 4
        public_623e9d5 : nop
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x10], edi
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, edi
        je public_623e9f9
        public_623e9e8 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, edi
        jne public_623e9e8
        public_623e9f9 : nop
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_623ea17
        public_623ea06 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        jne public_623ea06
        public_623ea17 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x623e950)
        ASM_EXPORT_ENTRY_FIRST(0x623e97f, public_623e97f)
        ASM_EXPORT_ENTRY(0x623e990, public_623e990)
        ASM_EXPORT_ENTRY(0x623e99d, public_623e99d)
        ASM_EXPORT_ENTRY(0x623e9ae, public_623e9ae)
        ASM_EXPORT_ENTRY(0x623e9c3, public_623e9c3)
        ASM_EXPORT_ENTRY(0x623e9d5, public_623e9d5)
        ASM_EXPORT_ENTRY(0x623e9e8, public_623e9e8)
        ASM_EXPORT_ENTRY(0x623e9f9, public_623e9f9)
        ASM_EXPORT_ENTRY(0x623ea06, public_623ea06)
        ASM_EXPORT_ENTRY_LAST(0x623ea17, public_623ea17)
    }
}

#undef public_623e97f
#undef public_623e990
#undef public_623e99d
#undef public_623e9ae
#undef public_623e9c3
#undef public_623e9d5
#undef public_623e9e8
#undef public_623e9f9
#undef public_623ea06
#undef public_623ea17

#pragma init_seg(compiler)
extern "C" void const* const public_623e97f = __AsmFindLabelExport(&internal_623e950, 0x623e97f);
extern "C" void const* const public_623e990 = __AsmFindLabelExport(&internal_623e950, 0x623e990);
extern "C" void const* const public_623e99d = __AsmFindLabelExport(&internal_623e950, 0x623e99d);
extern "C" void const* const public_623e9ae = __AsmFindLabelExport(&internal_623e950, 0x623e9ae);
extern "C" void const* const public_623e9c3 = __AsmFindLabelExport(&internal_623e950, 0x623e9c3);
extern "C" void const* const public_623e9d5 = __AsmFindLabelExport(&internal_623e950, 0x623e9d5);
extern "C" void const* const public_623e9e8 = __AsmFindLabelExport(&internal_623e950, 0x623e9e8);
extern "C" void const* const public_623e9f9 = __AsmFindLabelExport(&internal_623e950, 0x623e9f9);
extern "C" void const* const public_623ea06 = __AsmFindLabelExport(&internal_623e950, 0x623ea06);
extern "C" void const* const public_623ea17 = __AsmFindLabelExport(&internal_623e950, 0x623ea17);
