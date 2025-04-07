#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4061a0);

#define public_4061c0 _public_4061c0
#define public_4061d3 _public_4061d3
#define public_4061d8 _public_4061d8
#define public_4061dd _public_4061dd
#define public_4061e2 _public_4061e2
#define public_4061e5 _public_4061e5
#define public_4061ec _public_4061ec

PROC_DECLARE(0x4061a0, internal_4061a0, public_4061a0);
extern "C" NAKED register_t __cdecl internal_4061a0()
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
        jle public_4061ec
        push esi
        mov ecx, 0x10
        mov esi, edx
        lea esp, ss:[esp]
        public_4061c0 : nop
        mov edx, edi
        shr edx, cl
        and edx, 3
        cmp edx, 3
        ja public_4061e5
/*FIXUP jmp dword ptr ds : [edx*4+public_4061f0] @0x4061cc*/
  JMPTB cmp edx, 0
  JMPTB je public_4061d8
  JMPTB cmp edx, 1
  JMPTB je public_4061dd
  JMPTB cmp edx, 2
  JMPTB je public_4061e2
  JMPTB cmp edx, 3
  JMPTB je public_4061d3
  JMPTB int 3
        public_4061d3 : nop
        add eax, 4
        jmp public_4061e5
        public_4061d8 : nop
        add eax, 8
        jmp public_4061e5
        public_4061dd : nop
        add eax, 0xC
        jmp public_4061e5
        public_4061e2 : nop
        add eax, 0x10
        public_4061e5 : nop
        add ecx, 2
        dec esi
        jne public_4061c0
        pop esi
        public_4061ec : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x4061a0)
        ASM_EXPORT_ENTRY_SINGLE(0x4061d3, public_4061d3)
    }
}

#undef public_4061c0
#undef public_4061d3
#undef public_4061d8
#undef public_4061dd
#undef public_4061e2
#undef public_4061e5
#undef public_4061ec

#pragma init_seg(compiler)
extern "C" void const* const public_4061d3 = __AsmFindLabelExport(&internal_4061a0, 0x4061d3);
