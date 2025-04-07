#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32350);

#define public_6f32379 _public_6f32379
#define public_6f32387 _public_6f32387
#define public_6f32393 _public_6f32393

PROC_DECLARE(0x6f32350, internal_6f32350, public_6f32350);
extern "C" NAKED register_t __cdecl internal_6f32350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], 1
        mov eax, dword ptr ds : [edx+4]
        add eax, 0xFFFFC0E9
        cmp eax, 0xD
        ja public_6f32393
/*FIXUP movzx eax, byte ptr ds : [eax+public_6f323a4] @0x6f3236b*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6f32398] @0x6f32372*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c00000000005287
  JMPTB mov eax, 0
  JMPTB public_4c00000000005287 : nop
        je public_6f32379
  JMPTB cmp eax, 1
  JMPTB jne public_4c00000000005283
  JMPTB mov eax, 2
  JMPTB public_4c00000000005283 : nop
        je public_6f32393
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000527f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000527f : nop
        je public_6f32379
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000527b
  JMPTB mov eax, 2
  JMPTB public_4c0000000000527b : nop
        je public_6f32393
  JMPTB cmp eax, 4
  JMPTB jne public_4c00000000005277
  JMPTB mov eax, 0
  JMPTB public_4c00000000005277 : nop
        je public_6f32379
  JMPTB cmp eax, 5
  JMPTB jne public_4c00000000005273
  JMPTB mov eax, 2
  JMPTB public_4c00000000005273 : nop
        je public_6f32393
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000526f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000526f : nop
        je public_6f32379
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000526b
  JMPTB mov eax, 2
  JMPTB public_4c0000000000526b : nop
        je public_6f32393
  JMPTB cmp eax, 8
  JMPTB jne public_4c00000000005267
  JMPTB mov eax, 2
  JMPTB public_4c00000000005267 : nop
        je public_6f32393
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000005263
  JMPTB mov eax, 0
  JMPTB public_4c00000000005263 : nop
        je public_6f32379
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000525f
  JMPTB mov eax, 2
  JMPTB public_4c0000000000525f : nop
        je public_6f32393
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000525b
  JMPTB mov eax, 2
  JMPTB public_4c0000000000525b : nop
        je public_6f32393
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c00000000005257
  JMPTB mov eax, 2
  JMPTB public_4c00000000005257 : nop
        je public_6f32393
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c00000000005253
  JMPTB mov eax, 1
  JMPTB public_4c00000000005253 : nop
        je public_6f32387
  JMPTB int 3
        public_6f32379 : nop
        mov edx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 
        public_6f32387 : nop
        mov edx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], edx
        mov al, 1
        ret 
        public_6f32393 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6f32350)
        ASM_EXPORT_ENTRY_FIRST(0x6f32379, public_6f32379)
        ASM_EXPORT_ENTRY(0x6f32387, public_6f32387)
        ASM_EXPORT_ENTRY_LAST(0x6f32393, public_6f32393)
    }
}

#undef public_6f32379
#undef public_6f32387
#undef public_6f32393

#pragma init_seg(compiler)
extern "C" void const* const public_6f32379 = __AsmFindLabelExport(&internal_6f32350, 0x6f32379);
extern "C" void const* const public_6f32387 = __AsmFindLabelExport(&internal_6f32350, 0x6f32387);
extern "C" void const* const public_6f32393 = __AsmFindLabelExport(&internal_6f32350, 0x6f32393);
