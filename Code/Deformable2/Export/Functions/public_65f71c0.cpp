#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f71c0);

#define public_65f71e0 _public_65f71e0
#define public_65f71f3 _public_65f71f3
#define public_65f71f8 _public_65f71f8
#define public_65f71fd _public_65f71fd
#define public_65f7202 _public_65f7202
#define public_65f7205 _public_65f7205
#define public_65f720c _public_65f720c

PROC_DECLARE(0x65f71c0, internal_65f71c0, public_65f71c0);
extern "C" NAKED register_t __cdecl internal_65f71c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov edx, edi
        shr edx, 8
        xor eax, eax
        and edx, 0xF
        jle public_65f720c
        push esi
        mov ecx, 0x10
        mov esi, edx
        lea esp, ss:[esp]
        public_65f71e0 : nop
        mov edx, edi
        shr edx, cl
        and edx, 3
        cmp edx, 3
        ja public_65f7205
/*FIXUP jmp dword ptr ds : [edx*4+public_65f7210] @0x65f71ec*/
  JMPTB cmp edx, 0
  JMPTB je public_65f71f8
  JMPTB cmp edx, 1
  JMPTB je public_65f71fd
  JMPTB cmp edx, 2
  JMPTB je public_65f7202
  JMPTB cmp edx, 3
  JMPTB je public_65f71f3
  JMPTB int 3
        public_65f71f3 : nop
        add eax, 4
        jmp public_65f7205
        public_65f71f8 : nop
        add eax, 8
        jmp public_65f7205
        public_65f71fd : nop
        add eax, 0xC
        jmp public_65f7205
        public_65f7202 : nop
        add eax, 0x10
        public_65f7205 : nop
        add ecx, 2
        dec esi
        jne public_65f71e0
        pop esi
        public_65f720c : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x65f71c0)
        ASM_EXPORT_ENTRY_FIRST(0x65f71f3, public_65f71f3)
        ASM_EXPORT_ENTRY(0x65f71f8, public_65f71f8)
        ASM_EXPORT_ENTRY(0x65f71fd, public_65f71fd)
        ASM_EXPORT_ENTRY_LAST(0x65f7202, public_65f7202)
    }
}

#undef public_65f71e0
#undef public_65f71f3
#undef public_65f71f8
#undef public_65f71fd
#undef public_65f7202
#undef public_65f7205
#undef public_65f720c

#pragma init_seg(compiler)
extern "C" void const* const public_65f71f3 = __AsmFindLabelExport(&internal_65f71c0, 0x65f71f3);
extern "C" void const* const public_65f71f8 = __AsmFindLabelExport(&internal_65f71c0, 0x65f71f8);
extern "C" void const* const public_65f71fd = __AsmFindLabelExport(&internal_65f71c0, 0x65f71fd);
extern "C" void const* const public_65f7202 = __AsmFindLabelExport(&internal_65f71c0, 0x65f7202);
