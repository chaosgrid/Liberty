#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63157c0);
CLANG_FORWARD_PROC_SYMBOL(public_631a680);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6396713);

#define public_6315802 _public_6315802
#define public_631580b _public_631580b
#define public_631582e _public_631582e
#define public_6315837 _public_6315837
#define public_6315850 _public_6315850
#define public_6315861 _public_6315861
#define public_6315890 _public_6315890
#define public_6315899 _public_6315899
#define public_63158b0 _public_63158b0
#define public_63158bf _public_63158bf
#define public_63158f0 _public_63158f0
#define public_63158f9 _public_63158f9

PROC_DECLARE(0x63157c0, internal_63157c0, public_63157c0);
/* CHUNK of public_63149d0 */
extern "C" NAKED register_t __cdecl internal_63157c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6396713 @0x63157c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396713
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
        mov eax, dword ptr ds : [esi+0x58]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 2
        je public_631580b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6315802
        cmp cl, 0xFF
        je public_6315802
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_631580b
        public_6315802 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_631580b : nop
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov eax, dword ptr ds : [esi+0x48]
        cmp eax, ebx
        je public_6315837
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_631582e
        cmp cl, 0xFF
        je public_631582e
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6315837
        public_631582e : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6315837 : nop
        push ebp
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov ebp, dword ptr ds : [esi+0x3C]
        push edi
        mov edi, dword ptr ds : [esi+0x38]
        cmp edi, ebp
        je public_6315861
        lea esp, ss:[esp]
        public_6315850 : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_63991b8]
        add edi, 0x10
        cmp edi, ebp
        jne public_6315850
        public_6315861 : nop
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        call public_6391d5a
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov eax, dword ptr ds : [esi+0x28]
        add esp, 4
        cmp eax, ebx
        je public_6315899
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6315890
        cmp cl, 0xFF
        je public_6315890
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6315899
        public_6315890 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6315899 : nop
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov ebp, dword ptr ds : [esi+0x1C]
        mov edi, dword ptr ds : [esi+0x18]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x1C], bl
        je public_63158bf
        public_63158b0 : nop
        push ebx
        mov ecx, edi
        call public_631a680
        add edi, 0x10
        cmp edi, ebp
        jne public_63158b0
        public_63158bf : nop
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        pop edi
        pop ebp
        je public_63158f9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_63158f0
        cmp cl, 0xFF
        je public_63158f0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_63158f9
        public_63158f0 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_63158f9 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63157c0)
        ASM_EXPORT_ENTRY_FIRST(0x6315802, public_6315802)
        ASM_EXPORT_ENTRY(0x631580b, public_631580b)
        ASM_EXPORT_ENTRY(0x631582e, public_631582e)
        ASM_EXPORT_ENTRY(0x6315837, public_6315837)
        ASM_EXPORT_ENTRY(0x6315850, public_6315850)
        ASM_EXPORT_ENTRY(0x6315861, public_6315861)
        ASM_EXPORT_ENTRY(0x6315890, public_6315890)
        ASM_EXPORT_ENTRY(0x6315899, public_6315899)
        ASM_EXPORT_ENTRY(0x63158b0, public_63158b0)
        ASM_EXPORT_ENTRY(0x63158bf, public_63158bf)
        ASM_EXPORT_ENTRY(0x63158f0, public_63158f0)
        ASM_EXPORT_ENTRY_LAST(0x63158f9, public_63158f9)
    }
}

#undef public_6315802
#undef public_631580b
#undef public_631582e
#undef public_6315837
#undef public_6315850
#undef public_6315861
#undef public_6315890
#undef public_6315899
#undef public_63158b0
#undef public_63158bf
#undef public_63158f0
#undef public_63158f9

#pragma init_seg(compiler)
extern "C" void const* const public_6315802 = __AsmFindLabelExport(&internal_63157c0, 0x6315802);
extern "C" void const* const public_631580b = __AsmFindLabelExport(&internal_63157c0, 0x631580b);
extern "C" void const* const public_631582e = __AsmFindLabelExport(&internal_63157c0, 0x631582e);
extern "C" void const* const public_6315837 = __AsmFindLabelExport(&internal_63157c0, 0x6315837);
extern "C" void const* const public_6315850 = __AsmFindLabelExport(&internal_63157c0, 0x6315850);
extern "C" void const* const public_6315861 = __AsmFindLabelExport(&internal_63157c0, 0x6315861);
extern "C" void const* const public_6315890 = __AsmFindLabelExport(&internal_63157c0, 0x6315890);
extern "C" void const* const public_6315899 = __AsmFindLabelExport(&internal_63157c0, 0x6315899);
extern "C" void const* const public_63158b0 = __AsmFindLabelExport(&internal_63157c0, 0x63158b0);
extern "C" void const* const public_63158bf = __AsmFindLabelExport(&internal_63157c0, 0x63158bf);
extern "C" void const* const public_63158f0 = __AsmFindLabelExport(&internal_63157c0, 0x63158f0);
extern "C" void const* const public_63158f9 = __AsmFindLabelExport(&internal_63157c0, 0x63158f9);
