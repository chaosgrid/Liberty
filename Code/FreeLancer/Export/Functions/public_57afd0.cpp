#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57afd0);
CLANG_FORWARD_PROC_SYMBOL(public_595dd0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_57b00f _public_57b00f
#define public_57b029 _public_57b029
#define public_57b031 _public_57b031
#define public_57b035 _public_57b035
#define public_57b04e _public_57b04e
#define public_57b05c _public_57b05c
#define public_57b060 _public_57b060
#define public_57b07a _public_57b07a

PROC_DECLARE(0x57afd0, internal_57afd0, public_57afd0);
extern "C" NAKED register_t __cdecl internal_57afd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xF005
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        jne public_57b07a
        cmp ecx, dword ptr ds : [esi+0x3F0]
        jne public_57b00f
        mov edi, dword ptr ds : [esi+0x360]
        call public_595dd0
        call public_5b7ec0
        push eax
        push edi
        mov ecx, esi
        call public_5798b0
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_57b00f : nop
        cmp ecx, dword ptr ds : [esi+0x3F4]
        jne public_57b07a
        mov eax, dword ptr ds : [esi+0x408]
        cmp eax, 3
        ja public_57b05c
/*FIXUP jmp dword ptr ds : [eax*4+public_57b090] @0x57b022*/
  JMPTB cmp eax, 0
  JMPTB je public_57b029
  JMPTB cmp eax, 1
  JMPTB je public_57b031
  JMPTB cmp eax, 2
  JMPTB je public_57b035
  JMPTB cmp eax, 3
  JMPTB je public_57b04e
  JMPTB int 3
        public_57b029 : nop
        mov edi, dword ptr ds : [esi+0x364]
        jmp public_57b060
        public_57b031 : nop
        xor edi, edi
        jmp public_57b060
        public_57b035 : nop
        mov edx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [esi+0x35C]
        sub eax, edx
        cdq 
        sub eax, edx
        sar eax, 1
        mov edi, eax
        neg edi
        jmp public_57b060
        public_57b04e : nop
        mov edi, dword ptr ds : [esi+0x380]
        sub edi, dword ptr ds : [esi+0x35C]
        jmp public_57b060
        public_57b05c : nop
        mov edi, dword ptr ss : [esp+0xC]
        public_57b060 : nop
        call public_595dd0
        call public_5b7ec0
        push edi
        push eax
        mov ecx, esi
        call public_5798b0
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_57b07a : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call public_5a0840
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x57afd0)
        ASM_EXPORT_ENTRY_SINGLE(0x57b04e, public_57b04e)
    }
}

#undef public_57b00f
#undef public_57b029
#undef public_57b031
#undef public_57b035
#undef public_57b04e
#undef public_57b05c
#undef public_57b060
#undef public_57b07a

#pragma init_seg(compiler)
extern "C" void const* const public_57b04e = __AsmFindLabelExport(&internal_57afd0, 0x57b04e);
