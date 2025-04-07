#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806100);

#define public_6806115 _public_6806115
#define public_6806128 _public_6806128
#define public_680612e _public_680612e
#define public_6806146 _public_6806146
#define public_6806156 _public_6806156
#define public_6806166 _public_6806166
#define public_6806176 _public_6806176

PROC_DECLARE(0x6806100, internal_6806100, public_6806100);
extern "C" NAKED register_t __cdecl internal_6806100()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        add ecx, 7
        cmp ecx, 7
        ja public_6806176
/*FIXUP jmp dword ptr ds : [ecx*4+public_680617c] @0x680610e*/
  JMPTB cmp ecx, 0
  JMPTB je public_6806166
  JMPTB cmp ecx, 1
  JMPTB je public_6806128
  JMPTB cmp ecx, 2
  JMPTB je public_6806146
  JMPTB cmp ecx, 3
  JMPTB je public_6806156
  JMPTB cmp ecx, 4
  JMPTB je public_6806146
  JMPTB cmp ecx, 5
  JMPTB je public_680612e
  JMPTB cmp ecx, 6
  JMPTB je public_6806115
  JMPTB cmp ecx, 7
  JMPTB je public_680612e
  JMPTB int 3
        public_6806115 : nop
        fld qword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+8]
        fld qword ptr ds : [eax+8]
        fcompp 
        fnstsw ax
        test ah, 0x40
        je public_6806176
        public_6806128 : nop
        mov eax, 1
        ret 
        public_680612e : nop
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
        public_6806146 : nop
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+8]
        sub eax, dword ptr ds : [ecx+8]
        neg eax
        sbb eax, eax
        inc eax
        ret 
        public_6806156 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        sub eax, dword ptr ds : [edx+8]
        neg eax
        sbb eax, eax
        inc eax
        ret 
        public_6806166 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        sub eax, dword ptr ds : [edx+8]
        neg eax
        sbb eax, eax
        inc eax
        ret 
        public_6806176 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6806100)
        ASM_EXPORT_ENTRY_FIRST(0x6806115, public_6806115)
        ASM_EXPORT_ENTRY(0x6806128, public_6806128)
        ASM_EXPORT_ENTRY(0x680612e, public_680612e)
        ASM_EXPORT_ENTRY(0x6806146, public_6806146)
        ASM_EXPORT_ENTRY(0x6806156, public_6806156)
        ASM_EXPORT_ENTRY_LAST(0x6806166, public_6806166)
    }
}

#undef public_6806115
#undef public_6806128
#undef public_680612e
#undef public_6806146
#undef public_6806156
#undef public_6806166
#undef public_6806176

#pragma init_seg(compiler)
extern "C" void const* const public_6806115 = __AsmFindLabelExport(&internal_6806100, 0x6806115);
extern "C" void const* const public_6806128 = __AsmFindLabelExport(&internal_6806100, 0x6806128);
extern "C" void const* const public_680612e = __AsmFindLabelExport(&internal_6806100, 0x680612e);
extern "C" void const* const public_6806146 = __AsmFindLabelExport(&internal_6806100, 0x6806146);
extern "C" void const* const public_6806156 = __AsmFindLabelExport(&internal_6806100, 0x6806156);
extern "C" void const* const public_6806166 = __AsmFindLabelExport(&internal_6806100, 0x6806166);
