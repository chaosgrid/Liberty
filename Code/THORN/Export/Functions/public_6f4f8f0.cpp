#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f8f0);

#define public_6f4f905 _public_6f4f905
#define public_6f4f918 _public_6f4f918
#define public_6f4f91e _public_6f4f91e
#define public_6f4f936 _public_6f4f936
#define public_6f4f946 _public_6f4f946
#define public_6f4f956 _public_6f4f956
#define public_6f4f966 _public_6f4f966

PROC_DECLARE(0x6f4f8f0, internal_6f4f8f0, public_6f4f8f0);
extern "C" NAKED register_t __cdecl internal_6f4f8f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        add ecx, 7
        cmp ecx, 7
        ja public_6f4f966
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f4f96c] @0x6f4f8fe*/
  JMPTB cmp ecx, 0
  JMPTB je public_6f4f956
  JMPTB cmp ecx, 1
  JMPTB je public_6f4f918
  JMPTB cmp ecx, 2
  JMPTB je public_6f4f936
  JMPTB cmp ecx, 3
  JMPTB je public_6f4f946
  JMPTB cmp ecx, 4
  JMPTB je public_6f4f936
  JMPTB cmp ecx, 5
  JMPTB je public_6f4f91e
  JMPTB cmp ecx, 6
  JMPTB je public_6f4f905
  JMPTB cmp ecx, 7
  JMPTB je public_6f4f91e
  JMPTB int 3
        public_6f4f905 : nop
        fld qword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+8]
        fld qword ptr ds : [eax+8]
        fcompp 
        fnstsw ax
        test ah, 0x40
        je public_6f4f966
        public_6f4f918 : nop
        mov eax, 1
        ret 
        public_6f4f91e : nop
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+8]
        add eax, 0x28
        add edx, 0x28
        sub eax, edx
        neg eax
        sbb eax, eax
        inc eax
        ret 
        public_6f4f936 : nop
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+8]
        sub eax, dword ptr ds : [ecx+8]
        neg eax
        sbb eax, eax
        inc eax
        ret 
        public_6f4f946 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        sub eax, dword ptr ds : [edx+8]
        neg eax
        sbb eax, eax
        inc eax
        ret 
        public_6f4f956 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        sub eax, dword ptr ds : [edx+8]
        neg eax
        sbb eax, eax
        inc eax
        ret 
        public_6f4f966 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4f8f0)
        ASM_EXPORT_ENTRY_FIRST(0x6f4f905, public_6f4f905)
        ASM_EXPORT_ENTRY(0x6f4f918, public_6f4f918)
        ASM_EXPORT_ENTRY(0x6f4f91e, public_6f4f91e)
        ASM_EXPORT_ENTRY(0x6f4f936, public_6f4f936)
        ASM_EXPORT_ENTRY(0x6f4f946, public_6f4f946)
        ASM_EXPORT_ENTRY_LAST(0x6f4f956, public_6f4f956)
    }
}

#undef public_6f4f905
#undef public_6f4f918
#undef public_6f4f91e
#undef public_6f4f936
#undef public_6f4f946
#undef public_6f4f956
#undef public_6f4f966

#pragma init_seg(compiler)
extern "C" void const* const public_6f4f905 = __AsmFindLabelExport(&internal_6f4f8f0, 0x6f4f905);
extern "C" void const* const public_6f4f918 = __AsmFindLabelExport(&internal_6f4f8f0, 0x6f4f918);
extern "C" void const* const public_6f4f91e = __AsmFindLabelExport(&internal_6f4f8f0, 0x6f4f91e);
extern "C" void const* const public_6f4f936 = __AsmFindLabelExport(&internal_6f4f8f0, 0x6f4f936);
extern "C" void const* const public_6f4f946 = __AsmFindLabelExport(&internal_6f4f8f0, 0x6f4f946);
extern "C" void const* const public_6f4f956 = __AsmFindLabelExport(&internal_6f4f8f0, 0x6f4f956);
