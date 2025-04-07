#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dae0);
CLANG_FORWARD_PROC_SYMBOL(public_627f300);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392d18);

#define public_627db10 _public_627db10
#define public_627db38 _public_627db38
#define public_627db5c _public_627db5c
#define public_627db65 _public_627db65
#define public_627db80 _public_627db80
#define public_627db91 _public_627db91
#define public_627db9d _public_627db9d

PROC_DECLARE(0x627dae0, internal_627dae0, public_627dae0);
/* CHUNK of public_627d8a0 */
extern "C" NAKED register_t __cdecl internal_627dae0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6392d18 @0x627dae2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392d18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+4]
        mov dword ptr ss : [esp+0x10], edi
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        xor ebp, ebp
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebp
        je public_627db38
        public_627db10 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push 1
        mov dword ptr ds : [ecx+4], edx
        push eax
        mov ecx, edi
        call public_627f300
        mov ecx, dword ptr ds : [edi+8]
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_627db10
        public_627db38 : nop
        cmp dword ptr ds : [public_63fc42c], 0x7FFFFFFF
        mov eax, dword ptr ds : [edi+4]
        jge public_627db5c
        mov ecx, dword ptr ds : [public_63fc420]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_63fc420], eax
        inc dword ptr ds : [public_63fc42c]
        jmp public_627db65
        public_627db5c : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627db65 : nop
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        dec dword ptr ds : [public_63fc424]
        jne public_627db9d
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, ebp
        je public_627db91
        lea esp, ss:[esp]
        public_627db80 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_627db80
        public_627db91 : nop
        mov dword ptr ds : [public_63fc420], ebp
        mov dword ptr ds : [public_63fc42c], ebp
        public_627db9d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x627dae0)
        ASM_EXPORT_ENTRY_FIRST(0x627db10, public_627db10)
        ASM_EXPORT_ENTRY(0x627db38, public_627db38)
        ASM_EXPORT_ENTRY(0x627db5c, public_627db5c)
        ASM_EXPORT_ENTRY(0x627db65, public_627db65)
        ASM_EXPORT_ENTRY(0x627db80, public_627db80)
        ASM_EXPORT_ENTRY(0x627db91, public_627db91)
        ASM_EXPORT_ENTRY_LAST(0x627db9d, public_627db9d)
    }
}

#undef public_627db10
#undef public_627db38
#undef public_627db5c
#undef public_627db65
#undef public_627db80
#undef public_627db91
#undef public_627db9d

#pragma init_seg(compiler)
extern "C" void const* const public_627db10 = __AsmFindLabelExport(&internal_627dae0, 0x627db10);
extern "C" void const* const public_627db38 = __AsmFindLabelExport(&internal_627dae0, 0x627db38);
extern "C" void const* const public_627db5c = __AsmFindLabelExport(&internal_627dae0, 0x627db5c);
extern "C" void const* const public_627db65 = __AsmFindLabelExport(&internal_627dae0, 0x627db65);
extern "C" void const* const public_627db80 = __AsmFindLabelExport(&internal_627dae0, 0x627db80);
extern "C" void const* const public_627db91 = __AsmFindLabelExport(&internal_627dae0, 0x627db91);
extern "C" void const* const public_627db9d = __AsmFindLabelExport(&internal_627dae0, 0x627db9d);
