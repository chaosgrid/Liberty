#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f07950);
CLANG_FORWARD_PROC_SYMBOL(public_6f60020);

#define public_6f077c0 _public_6f077c0
#define public_6f077cf _public_6f077cf
#define public_6f077d8 _public_6f077d8
#define public_6f077f1 _public_6f077f1
#define public_6f07857 _public_6f07857
#define public_6f07890 _public_6f07890
#define public_6f078b1 _public_6f078b1
#define public_6f07906 _public_6f07906
#define public_6f0791c _public_6f0791c
#define public_6f07923 _public_6f07923

PROC_DECLARE(0x6f077b0, internal_6f077b0, public_6f077b0);
extern "C" NAKED register_t __cdecl internal_6f077b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x24
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov esi, ecx
        nop 
        lea esp, ss:[esp]
        public_6f077c0 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 4
        ja public_6f077c0
/*FIXUP jmp dword ptr ds : [eax*4+public_6f07934] @0x6f077c8*/
  JMPTB cmp eax, 0
  JMPTB je public_6f077f1
  JMPTB cmp eax, 1
  JMPTB je public_6f07857
  JMPTB cmp eax, 2
  JMPTB je public_6f077cf
  JMPTB cmp eax, 3
  JMPTB je public_6f077d8
  JMPTB cmp eax, 4
  JMPTB je public_6f07923
  JMPTB int 3
        public_6f077cf : nop
        mov dword ptr ds : [esi+8], 3
        jmp public_6f077c0
        public_6f077d8 : nop
        push edi
        mov ecx, esi
        call public_6f07950
        test al, al
        jne public_6f07923
        mov dword ptr ds : [esi+8], 1
        jmp public_6f077c0
        public_6f077f1 : nop
        lea eax, ds:[esi+0x18]
        push eax
        push 1
        push edi
        lea ecx, ds:[esi+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x24]
        push edx
        call public_6eb70f0
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6eea860
        push eax
        call public_6f60020
        mov eax, dword ptr ds : [edi+8]
        add esp, 0x18
        test eax, eax
        je public_6f0791c
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        cmp eax, 5
        je public_6f07906
        xor ecx, ecx
        cmp eax, 0x13
        mov eax, dword ptr ds : [esi]
        sete cl
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        pop edi
        pop esi
        add esp, 0x24
        ret 4
        public_6f07857 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        cmp eax, 5
        jne public_6f07890
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [eax]
        add eax, 0x11C
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6f078b1
        public_6f07890 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call public_6eb70f0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], edx
        public_6f078b1 : nop
        lea eax, ds:[esi+0x18]
        push eax
        push 1
        push edi
        lea ecx, ds:[esi+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push edx
        call public_6eea860
        push eax
        call public_6f60020
        mov eax, dword ptr ds : [edi+8]
        add esp, 0x18
        test eax, eax
        je public_6f0791c
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        cmp eax, 5
        je public_6f07906
        cmp eax, 0x13
        jne public_6f07923
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ds : [esi+8], 2
        call dword ptr ds : [eax+8]
        pop edi
        pop esi
        add esp, 0x24
        ret 4
        public_6f07906 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ds : [esi+8], 1
        call dword ptr ds : [eax+8]
        pop edi
        pop esi
        add esp, 0x24
        ret 4
        public_6f0791c : nop
        mov dword ptr ds : [esi+8], 4
        public_6f07923 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        pop edi
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6f077b0)
        ASM_EXPORT_ENTRY_FIRST(0x6f077cf, public_6f077cf)
        ASM_EXPORT_ENTRY(0x6f077d8, public_6f077d8)
        ASM_EXPORT_ENTRY(0x6f077f1, public_6f077f1)
        ASM_EXPORT_ENTRY(0x6f07857, public_6f07857)
        ASM_EXPORT_ENTRY_LAST(0x6f07923, public_6f07923)
    }
}

#undef public_6f077c0
#undef public_6f077cf
#undef public_6f077d8
#undef public_6f077f1
#undef public_6f07857
#undef public_6f07890
#undef public_6f078b1
#undef public_6f07906
#undef public_6f0791c
#undef public_6f07923

#pragma init_seg(compiler)
extern "C" void const* const public_6f077cf = __AsmFindLabelExport(&internal_6f077b0, 0x6f077cf);
extern "C" void const* const public_6f077d8 = __AsmFindLabelExport(&internal_6f077b0, 0x6f077d8);
extern "C" void const* const public_6f077f1 = __AsmFindLabelExport(&internal_6f077b0, 0x6f077f1);
extern "C" void const* const public_6f07857 = __AsmFindLabelExport(&internal_6f077b0, 0x6f07857);
extern "C" void const* const public_6f07923 = __AsmFindLabelExport(&internal_6f077b0, 0x6f07923);
