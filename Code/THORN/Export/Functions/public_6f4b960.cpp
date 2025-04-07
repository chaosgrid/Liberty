#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);

#define public_6f4b970 _public_6f4b970
#define public_6f4b99b _public_6f4b99b
#define public_6f4b9a3 _public_6f4b9a3
#define public_6f4b9ab _public_6f4b9ab
#define public_6f4b9b2 _public_6f4b9b2
#define public_6f4b9b9 _public_6f4b9b9
#define public_6f4b9c1 _public_6f4b9c1

PROC_DECLARE(0x6f4b960, internal_6f4b960, public_6f4b960);
extern "C" NAKED register_t __cdecl internal_6f4b960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        jne public_6f4b970
        mov eax, 0xFFFFFFFA
        pop esi
        ret 
        public_6f4b970 : nop
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        mov esi, dword ptr ds : [edx+eax-0x10]
        lea ecx, ds:[edx+eax-0x10]
        lea edx, ds:[esi+0xA]
        cmp edx, 0xA
        ja public_6f4b9c1
/*FIXUP xor eax, eax @0x6f4b98c*/
/*FIXUP mov al, byte ptr ds : [edx+public_6f4b9e0] @0x6f4b98e*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6f4b9c8] @0x6f4b994*/
  JMPTB cmp edx, 0
  JMPTB mov eax, 0
  JMPTB je public_6f4b9b2
  JMPTB cmp edx, 1
  JMPTB mov eax, 1
  JMPTB je public_6f4b9ab
  JMPTB cmp edx, 2
  JMPTB mov eax, 2
  JMPTB je public_6f4b9b9
  JMPTB cmp edx, 3
  JMPTB mov eax, 2
  JMPTB je public_6f4b9b9
  JMPTB cmp edx, 4
  JMPTB mov eax, 5
  JMPTB je public_6f4b9c1
  JMPTB cmp edx, 5
  JMPTB mov eax, 5
  JMPTB je public_6f4b9c1
  JMPTB cmp edx, 6
  JMPTB mov eax, 5
  JMPTB je public_6f4b9c1
  JMPTB cmp edx, 7
  JMPTB mov eax, 3
  JMPTB je public_6f4b9a3
  JMPTB cmp edx, 8
  JMPTB mov eax, 5
  JMPTB je public_6f4b9c1
  JMPTB cmp edx, 9
  JMPTB mov eax, 5
  JMPTB je public_6f4b9c1
  JMPTB cmp edx, 0xA
  JMPTB mov eax, 4
  JMPTB je public_6f4b99b
  JMPTB int 3
        public_6f4b99b : nop
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        pop esi
        ret 
        public_6f4b9a3 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0x14]
        pop esi
        ret 
        public_6f4b9ab : nop
        mov eax, 0xFFFFFFFC
        pop esi
        ret 
        public_6f4b9b2 : nop
        mov eax, 0xFFFFFFFB
        pop esi
        ret 
        public_6f4b9b9 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0x10]
        pop esi
        ret 
        public_6f4b9c1 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b960)
        ASM_EXPORT_ENTRY_FIRST(0x6f4b99b, public_6f4b99b)
        ASM_EXPORT_ENTRY(0x6f4b9a3, public_6f4b9a3)
        ASM_EXPORT_ENTRY(0x6f4b9ab, public_6f4b9ab)
        ASM_EXPORT_ENTRY(0x6f4b9b2, public_6f4b9b2)
        ASM_EXPORT_ENTRY(0x6f4b9b9, public_6f4b9b9)
        ASM_EXPORT_ENTRY_LAST(0x6f4b9c1, public_6f4b9c1)
    }
}

#undef public_6f4b970
#undef public_6f4b99b
#undef public_6f4b9a3
#undef public_6f4b9ab
#undef public_6f4b9b2
#undef public_6f4b9b9
#undef public_6f4b9c1

#pragma init_seg(compiler)
extern "C" void const* const public_6f4b99b = __AsmFindLabelExport(&internal_6f4b960, 0x6f4b99b);
extern "C" void const* const public_6f4b9a3 = __AsmFindLabelExport(&internal_6f4b960, 0x6f4b9a3);
extern "C" void const* const public_6f4b9ab = __AsmFindLabelExport(&internal_6f4b960, 0x6f4b9ab);
extern "C" void const* const public_6f4b9b2 = __AsmFindLabelExport(&internal_6f4b960, 0x6f4b9b2);
extern "C" void const* const public_6f4b9b9 = __AsmFindLabelExport(&internal_6f4b960, 0x6f4b9b9);
extern "C" void const* const public_6f4b9c1 = __AsmFindLabelExport(&internal_6f4b960, 0x6f4b9c1);
