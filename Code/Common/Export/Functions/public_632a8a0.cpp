#include "Common-PCH.h"


#define public_632a8c0 _public_632a8c0
#define public_632a8dc _public_632a8dc
#define public_632a8f8 _public_632a8f8
#define public_632a911 _public_632a911
#define public_632a916 _public_632a916
#define public_632a92a _public_632a92a
#define public_632a940 _public_632a940

PROC_DECLARE(0x632a8a0, internal_632a8a0, public_632a8a0);
extern "C" NAKED register_t __cdecl internal_632a8a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        push edi
        mov al, 1
        xor edi, edi
        test ecx, ecx
        mov byte ptr ss : [esp+0x13], al
        je public_632a940
        lea ecx, ds:[ecx]
        public_632a8c0 : nop
        cmp edi, dword ptr ss : [esp+0x1C]
        jae public_632a92a
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_632a916
        mov eax, dword ptr ds : [ebx]
        dec eax
        cmp eax, 4
        ja public_632a911
/*FIXUP jmp dword ptr ds : [eax*4+public_632a954] @0x632a8d5*/
  JMPTB cmp eax, 0
  JMPTB je public_632a916
  JMPTB cmp eax, 1
  JMPTB je public_632a8dc
  JMPTB cmp eax, 2
  JMPTB je public_632a916
  JMPTB cmp eax, 3
  JMPTB je public_632a916
  JMPTB cmp eax, 4
  JMPTB je public_632a916
  JMPTB int 3
        public_632a8dc : nop
        lea ebp, ds:[ebx+8]
        push ebp
        call dword ptr ds : [public_6399238]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        inc esi
        sub eax, edi
        cmp esi, eax
        jbe public_632a8f8
        mov esi, eax
        public_632a8f8 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        lea ecx, ds:[eax+edi*2]
        push ebp
        push ecx
        call dword ptr ds : [public_6399234]
        add esp, 0xC
        lea edi, ds:[edi+esi-1]
        jmp public_632a916
        public_632a911 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_632a916 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x28]
        add eax, 8
        add ebx, eax
        sub ecx, eax
        mov dword ptr ss : [esp+0x28], ecx
        jne public_632a8c0
        public_632a92a : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov al, byte ptr ss : [esp+0x13]
        mov word ptr ds : [edx+edi*2], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x14
        public_632a940 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov word ptr ds : [ecx+edi*2], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x632a8a0)
        ASM_EXPORT_ENTRY_FIRST(0x632a8dc, public_632a8dc)
        ASM_EXPORT_ENTRY_LAST(0x632a916, public_632a916)
    }
}

#undef public_632a8c0
#undef public_632a8dc
#undef public_632a8f8
#undef public_632a911
#undef public_632a916
#undef public_632a92a
#undef public_632a940

#pragma init_seg(compiler)
extern "C" void const* const public_632a8dc = __AsmFindLabelExport(&internal_632a8a0, 0x632a8dc);
extern "C" void const* const public_632a916 = __AsmFindLabelExport(&internal_632a8a0, 0x632a916);
