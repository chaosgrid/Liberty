#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661d5ef _public_661d5ef
#define public_661d643 _public_661d643
#define public_661d678 _public_661d678
#define public_661d69d _public_661d69d
#define public_661d6a4 _public_661d6a4
#define public_661d6ab _public_661d6ab
#define public_661d6b2 _public_661d6b2
#define public_661d6b9 _public_661d6b9
#define public_661d6c0 _public_661d6c0
#define public_661d6c2 _public_661d6c2
#define public_661d6dc _public_661d6dc

PROC_DECLARE(0x661d5b0, internal_661d5b0, public_661d5b0);
extern "C" NAKED register_t __cdecl internal_661d5b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0x10], bl
        mov dword ptr ds : [esi], offset public_6629518
        mov dword ptr ds : [esi+4], 2
        mov eax, dword ptr ds : [edi]
        sub eax, ebx
        je public_661d678
        dec eax
        je public_661d5ef
        mov dword ptr ds : [esi+0x14], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        public_661d5ef : nop
        mov dword ptr ds : [esi+0x14], 7
        mov eax, dword ptr ds : [public_662acec]
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x90]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [public_662acec]
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x98]
        mov edi, eax
        mov eax, dword ptr ds : [public_662b0f8]
        cmp eax, ebx
        jne public_661d643
        call public_6628190
        mov dword ptr ds : [public_662b0f8], eax
        public_661d643 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x24]
        pop edi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        public_661d678 : nop
        mov eax, dword ptr ds : [public_662acec]
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC4]
        cmp eax, ebx
        je public_661d6dc
        mov eax, dword ptr ds : [eax]
        dec eax
        cmp eax, 5
        ja public_661d6c0
/*FIXUP jmp dword ptr ds : [eax*4+public_661d6e8] @0x661d696*/
  JMPTB cmp eax, 0
  JMPTB je public_661d69d
  JMPTB cmp eax, 1
  JMPTB je public_661d69d
  JMPTB cmp eax, 2
  JMPTB je public_661d6a4
  JMPTB cmp eax, 3
  JMPTB je public_661d6b2
  JMPTB cmp eax, 4
  JMPTB je public_661d6ab
  JMPTB cmp eax, 5
  JMPTB je public_661d6b9
  JMPTB int 3
        public_661d69d : nop
        mov eax, 1
        jmp public_661d6c2
        public_661d6a4 : nop
        mov eax, 2
        jmp public_661d6c2
        public_661d6ab : nop
        mov eax, 3
        jmp public_661d6c2
        public_661d6b2 : nop
        mov eax, 4
        jmp public_661d6c2
        public_661d6b9 : nop
        mov eax, 7
        jmp public_661d6c2
        public_661d6c0 : nop
        xor eax, eax
        public_661d6c2 : nop
        lea edx, ds:[esi+0x18]
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ds : [public_662acec]
        push edx
        mov edx, dword ptr ds : [edi+0xC]
        push ebx
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xCC]
        public_661d6dc : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x661d5b0)
        ASM_EXPORT_ENTRY_FIRST(0x661d69d, public_661d69d)
        ASM_EXPORT_ENTRY(0x661d6a4, public_661d6a4)
        ASM_EXPORT_ENTRY(0x661d6ab, public_661d6ab)
        ASM_EXPORT_ENTRY(0x661d6b2, public_661d6b2)
        ASM_EXPORT_ENTRY_LAST(0x661d6b9, public_661d6b9)
    }
}

#undef public_661d5ef
#undef public_661d643
#undef public_661d678
#undef public_661d69d
#undef public_661d6a4
#undef public_661d6ab
#undef public_661d6b2
#undef public_661d6b9
#undef public_661d6c0
#undef public_661d6c2
#undef public_661d6dc

#pragma init_seg(compiler)
extern "C" void const* const public_661d69d = __AsmFindLabelExport(&internal_661d5b0, 0x661d69d);
extern "C" void const* const public_661d6a4 = __AsmFindLabelExport(&internal_661d5b0, 0x661d6a4);
extern "C" void const* const public_661d6ab = __AsmFindLabelExport(&internal_661d5b0, 0x661d6ab);
extern "C" void const* const public_661d6b2 = __AsmFindLabelExport(&internal_661d5b0, 0x661d6b2);
extern "C" void const* const public_661d6b9 = __AsmFindLabelExport(&internal_661d5b0, 0x661d6b9);
