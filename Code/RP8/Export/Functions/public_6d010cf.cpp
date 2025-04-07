#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d010cf);

#define public_6d010e9 _public_6d010e9
#define public_6d010ed _public_6d010ed
#define public_6d010f2 _public_6d010f2
#define public_6d010fc _public_6d010fc
#define public_6d01104 _public_6d01104
#define public_6d01111 _public_6d01111
#define public_6d01119 _public_6d01119
#define public_6d01121 _public_6d01121
#define public_6d01123 _public_6d01123

PROC_DECLARE(0x6d010cf, internal_6d010cf, public_6d010cf);
extern "C" NAKED register_t __cdecl internal_6d010cf()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 6
        ja public_6d01121
        mov ecx, dword ptr ss : [ebp-4]
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d01127] @0x6d010e2*/
  JMPTB cmp ecx, 0
  JMPTB je public_6d010e9
  JMPTB cmp ecx, 1
  JMPTB je public_6d010ed
  JMPTB cmp ecx, 2
  JMPTB je public_6d010f2
  JMPTB cmp ecx, 3
  JMPTB je public_6d010fc
  JMPTB cmp ecx, 4
  JMPTB je public_6d01104
  JMPTB cmp ecx, 5
  JMPTB je public_6d01111
  JMPTB cmp ecx, 6
  JMPTB je public_6d01119
  JMPTB int 3
        public_6d010e9 : nop
        xor eax, eax
        jmp public_6d01123
        public_6d010ed : nop
        mov eax, dword ptr ss : [ebp+0xC]
        jmp public_6d01123
        public_6d010f2 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cdq 
        sub eax, edx
        sar eax, 1
        jmp public_6d01123
        public_6d010fc : nop
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, 1
        jmp public_6d01123
        public_6d01104 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cdq 
        mov ecx, 3
        idiv ecx
        jmp public_6d01123
        public_6d01111 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, 2
        jmp public_6d01123
        public_6d01119 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, 2
        jmp public_6d01123
        public_6d01121 : nop
        xor eax, eax
        public_6d01123 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d010cf)
        ASM_EXPORT_ENTRY_FIRST(0x6d010e9, public_6d010e9)
        ASM_EXPORT_ENTRY(0x6d010ed, public_6d010ed)
        ASM_EXPORT_ENTRY(0x6d010f2, public_6d010f2)
        ASM_EXPORT_ENTRY(0x6d010fc, public_6d010fc)
        ASM_EXPORT_ENTRY(0x6d01104, public_6d01104)
        ASM_EXPORT_ENTRY(0x6d01111, public_6d01111)
        ASM_EXPORT_ENTRY_LAST(0x6d01119, public_6d01119)
    }
}

#undef public_6d010e9
#undef public_6d010ed
#undef public_6d010f2
#undef public_6d010fc
#undef public_6d01104
#undef public_6d01111
#undef public_6d01119
#undef public_6d01121
#undef public_6d01123

#pragma init_seg(compiler)
extern "C" void const* const public_6d010e9 = __AsmFindLabelExport(&internal_6d010cf, 0x6d010e9);
extern "C" void const* const public_6d010ed = __AsmFindLabelExport(&internal_6d010cf, 0x6d010ed);
extern "C" void const* const public_6d010f2 = __AsmFindLabelExport(&internal_6d010cf, 0x6d010f2);
extern "C" void const* const public_6d010fc = __AsmFindLabelExport(&internal_6d010cf, 0x6d010fc);
extern "C" void const* const public_6d01104 = __AsmFindLabelExport(&internal_6d010cf, 0x6d01104);
extern "C" void const* const public_6d01111 = __AsmFindLabelExport(&internal_6d010cf, 0x6d01111);
extern "C" void const* const public_6d01119 = __AsmFindLabelExport(&internal_6d010cf, 0x6d01119);
