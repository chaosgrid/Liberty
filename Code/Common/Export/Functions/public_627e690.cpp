#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e690);
CLANG_FORWARD_PROC_SYMBOL(public_627f900);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392d98);

#define public_627e6c0 _public_627e6c0
#define public_627e704 _public_627e704
#define public_627e70d _public_627e70d
#define public_627e71a _public_627e71a
#define public_627e73e _public_627e73e
#define public_627e747 _public_627e747
#define public_627e760 _public_627e760
#define public_627e771 _public_627e771
#define public_627e77d _public_627e77d

PROC_DECLARE(0x627e690, internal_627e690, public_627e690);
/* CHUNK of public_627d460 */
extern "C" NAKED register_t __cdecl internal_627e690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6392d98 @0x627e692*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392d98
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        xor esi, esi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x1C], esi
        je public_627e71a
        public_627e6c0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_627f900
        cmp dword ptr ds : [public_63fc028], 0x7FFFFFFF
        jge public_627e704
        mov ecx, dword ptr ds : [public_63fc01c]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [public_63fc028]
        inc eax
        mov dword ptr ds : [public_63fc01c], esi
        mov dword ptr ds : [public_63fc028], eax
        jmp public_627e70d
        public_627e704 : nop
        push esi
        call public_6391d5a
        add esp, 4
        public_627e70d : nop
        mov ecx, dword ptr ds : [ebx+8]
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_627e6c0
        xor esi, esi
        public_627e71a : nop
        cmp dword ptr ds : [public_63fc028], 0x7FFFFFFF
        mov eax, dword ptr ds : [ebx+4]
        jge public_627e73e
        mov edx, dword ptr ds : [public_63fc01c]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [public_63fc01c], eax
        inc dword ptr ds : [public_63fc028]
        jmp public_627e747
        public_627e73e : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627e747 : nop
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx+8], esi
        dec dword ptr ds : [public_63fc020]
        jne public_627e77d
        mov eax, dword ptr ds : [public_63fc01c]
        cmp eax, esi
        je public_627e771
        mov edi, edi
        public_627e760 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_627e760
        public_627e771 : nop
        mov dword ptr ds : [public_63fc01c], esi
        mov dword ptr ds : [public_63fc028], esi
        public_627e77d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x627e690)
        ASM_EXPORT_ENTRY_FIRST(0x627e6c0, public_627e6c0)
        ASM_EXPORT_ENTRY(0x627e704, public_627e704)
        ASM_EXPORT_ENTRY(0x627e70d, public_627e70d)
        ASM_EXPORT_ENTRY(0x627e71a, public_627e71a)
        ASM_EXPORT_ENTRY(0x627e73e, public_627e73e)
        ASM_EXPORT_ENTRY(0x627e747, public_627e747)
        ASM_EXPORT_ENTRY(0x627e760, public_627e760)
        ASM_EXPORT_ENTRY(0x627e771, public_627e771)
        ASM_EXPORT_ENTRY_LAST(0x627e77d, public_627e77d)
    }
}

#undef public_627e6c0
#undef public_627e704
#undef public_627e70d
#undef public_627e71a
#undef public_627e73e
#undef public_627e747
#undef public_627e760
#undef public_627e771
#undef public_627e77d

#pragma init_seg(compiler)
extern "C" void const* const public_627e6c0 = __AsmFindLabelExport(&internal_627e690, 0x627e6c0);
extern "C" void const* const public_627e704 = __AsmFindLabelExport(&internal_627e690, 0x627e704);
extern "C" void const* const public_627e70d = __AsmFindLabelExport(&internal_627e690, 0x627e70d);
extern "C" void const* const public_627e71a = __AsmFindLabelExport(&internal_627e690, 0x627e71a);
extern "C" void const* const public_627e73e = __AsmFindLabelExport(&internal_627e690, 0x627e73e);
extern "C" void const* const public_627e747 = __AsmFindLabelExport(&internal_627e690, 0x627e747);
extern "C" void const* const public_627e760 = __AsmFindLabelExport(&internal_627e690, 0x627e760);
extern "C" void const* const public_627e771 = __AsmFindLabelExport(&internal_627e690, 0x627e771);
extern "C" void const* const public_627e77d = __AsmFindLabelExport(&internal_627e690, 0x627e77d);
