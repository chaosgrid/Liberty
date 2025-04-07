#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b330);

#define public_6f3b350 _public_6f3b350
#define public_6f3b36c _public_6f3b36c
#define public_6f3b387 _public_6f3b387
#define public_6f3b3a2 _public_6f3b3a2
#define public_6f3b3bb _public_6f3b3bb
#define public_6f3b3cd _public_6f3b3cd

PROC_DECLARE(0x6f3b330, internal_6f3b330, public_6f3b330);
extern "C" NAKED register_t __cdecl internal_6f3b330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+0xF8]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_6f3b3cd
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_6f3b350 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        dec eax
        cmp eax, 0xC
        ja public_6f3b3bb
/*FIXUP movzx ecx, byte ptr ds : [eax+public_6f3b3ec] @0x6f3b35e*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f3b3dc] @0x6f3b365*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6f3b36c
  JMPTB cmp eax, 1
  JMPTB mov ecx, 0
  JMPTB je public_6f3b36c
  JMPTB cmp eax, 2
  JMPTB mov ecx, 3
  JMPTB je public_6f3b3bb
  JMPTB cmp eax, 3
  JMPTB mov ecx, 3
  JMPTB je public_6f3b3bb
  JMPTB cmp eax, 4
  JMPTB mov ecx, 3
  JMPTB je public_6f3b3bb
  JMPTB cmp eax, 5
  JMPTB mov ecx, 3
  JMPTB je public_6f3b3bb
  JMPTB cmp eax, 6
  JMPTB mov ecx, 3
  JMPTB je public_6f3b3bb
  JMPTB cmp eax, 7
  JMPTB mov ecx, 3
  JMPTB je public_6f3b3bb
  JMPTB cmp eax, 8
  JMPTB mov ecx, 3
  JMPTB je public_6f3b3bb
  JMPTB cmp eax, 9
  JMPTB mov ecx, 1
  JMPTB je public_6f3b387
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 3
  JMPTB je public_6f3b3bb
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 3
  JMPTB je public_6f3b3bb
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 2
  JMPTB je public_6f3b3a2
  JMPTB int 3
        public_6f3b36c : nop
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f3b3bb
        mov edx, dword ptr ds : [eax]
        mov ecx, ebx
        sub ecx, dword ptr ds : [edi+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        jmp public_6f3b3bb
        public_6f3b387 : nop
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0x108]
        test eax, eax
        je public_6f3b3bb
        mov edx, dword ptr ds : [eax]
        mov ecx, ebx
        sub ecx, dword ptr ds : [edi+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        jmp public_6f3b3bb
        public_6f3b3a2 : nop
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f3b3bb
        mov edx, dword ptr ds : [eax]
        mov ecx, ebx
        sub ecx, dword ptr ds : [edi+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        public_6f3b3bb : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_6f3b350
        mov dword ptr ds : [edi+0x24], ebx
        pop ebx
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 4
        public_6f3b3cd : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x24], edx
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f3b330)
        ASM_EXPORT_ENTRY_FIRST(0x6f3b36c, public_6f3b36c)
        ASM_EXPORT_ENTRY(0x6f3b387, public_6f3b387)
        ASM_EXPORT_ENTRY(0x6f3b3a2, public_6f3b3a2)
        ASM_EXPORT_ENTRY_LAST(0x6f3b3bb, public_6f3b3bb)
    }
}

#undef public_6f3b350
#undef public_6f3b36c
#undef public_6f3b387
#undef public_6f3b3a2
#undef public_6f3b3bb
#undef public_6f3b3cd

#pragma init_seg(compiler)
extern "C" void const* const public_6f3b36c = __AsmFindLabelExport(&internal_6f3b330, 0x6f3b36c);
extern "C" void const* const public_6f3b387 = __AsmFindLabelExport(&internal_6f3b330, 0x6f3b387);
extern "C" void const* const public_6f3b3a2 = __AsmFindLabelExport(&internal_6f3b330, 0x6f3b3a2);
extern "C" void const* const public_6f3b3bb = __AsmFindLabelExport(&internal_6f3b330, 0x6f3b3bb);
