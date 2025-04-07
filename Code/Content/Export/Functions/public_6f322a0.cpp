#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f322a0);

#define public_6f322d5 _public_6f322d5
#define public_6f322d7 _public_6f322d7
#define public_6f322e9 _public_6f322e9
#define public_6f322fa _public_6f322fa

PROC_DECLARE(0x6f322a0, internal_6f322a0, public_6f322a0);
extern "C" NAKED register_t __cdecl internal_6f322a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 1
        push esi
        mov dword ptr ds : [edx], 1
        mov esi, dword ptr ds : [ecx+4]
        add esi, 0xFFFFC0E8
        cmp esi, 0xB
        ja public_6f322fa
/*FIXUP movzx esi, byte ptr ds : [esi+public_6f32310] @0x6f322c7*/
/*FIXUP jmp dword ptr ds : [esi*4+public_6f32300] @0x6f322ce*/
  JMPTB cmp esi, 0
  JMPTB jne public_4c0000000000524c
  JMPTB mov esi, 0
  JMPTB public_4c0000000000524c : nop
        je public_6f322d5
  JMPTB cmp esi, 1
  JMPTB jne public_4c00000000005248
  JMPTB mov esi, 3
  JMPTB public_4c00000000005248 : nop
        je public_6f322fa
  JMPTB cmp esi, 2
  JMPTB jne public_4c00000000005244
  JMPTB mov esi, 3
  JMPTB public_4c00000000005244 : nop
        je public_6f322fa
  JMPTB cmp esi, 3
  JMPTB jne public_4c00000000005240
  JMPTB mov esi, 3
  JMPTB public_4c00000000005240 : nop
        je public_6f322fa
  JMPTB cmp esi, 4
  JMPTB jne public_4c0000000000523c
  JMPTB mov esi, 3
  JMPTB public_4c0000000000523c : nop
        je public_6f322fa
  JMPTB cmp esi, 5
  JMPTB jne public_4c00000000005238
  JMPTB mov esi, 3
  JMPTB public_4c00000000005238 : nop
        je public_6f322fa
  JMPTB cmp esi, 6
  JMPTB jne public_4c00000000005234
  JMPTB mov esi, 1
  JMPTB public_4c00000000005234 : nop
        je public_6f322e9
  JMPTB cmp esi, 7
  JMPTB jne public_4c00000000005230
  JMPTB mov esi, 3
  JMPTB public_4c00000000005230 : nop
        je public_6f322fa
  JMPTB cmp esi, 8
  JMPTB jne public_4c0000000000522c
  JMPTB mov esi, 3
  JMPTB public_4c0000000000522c : nop
        je public_6f322fa
  JMPTB cmp esi, 9
  JMPTB jne public_4c00000000005228
  JMPTB mov esi, 0
  JMPTB public_4c00000000005228 : nop
        je public_6f322d5
  JMPTB cmp esi, 0xA
  JMPTB jne public_4c00000000005224
  JMPTB mov esi, 0
  JMPTB public_4c00000000005224 : nop
        je public_6f322d5
  JMPTB cmp esi, 0xB
  JMPTB jne public_4c00000000005220
  JMPTB mov esi, 2
  JMPTB public_4c00000000005220 : nop
        je public_6f322d7
  JMPTB int 3
        public_6f322d5 : nop
        mov ecx, dword ptr ds : [ecx]
        public_6f322d7 : nop
        mov ecx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], esi
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax], ecx
        mov al, 1
        pop esi
        ret 
        public_6f322e9 : nop
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], edx
        mov al, 1
        pop esi
        ret 
        public_6f322fa : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f322a0)
        ASM_EXPORT_ENTRY_FIRST(0x6f322d5, public_6f322d5)
        ASM_EXPORT_ENTRY(0x6f322d7, public_6f322d7)
        ASM_EXPORT_ENTRY(0x6f322e9, public_6f322e9)
        ASM_EXPORT_ENTRY_LAST(0x6f322fa, public_6f322fa)
    }
}

#undef public_6f322d5
#undef public_6f322d7
#undef public_6f322e9
#undef public_6f322fa

#pragma init_seg(compiler)
extern "C" void const* const public_6f322d5 = __AsmFindLabelExport(&internal_6f322a0, 0x6f322d5);
extern "C" void const* const public_6f322d7 = __AsmFindLabelExport(&internal_6f322a0, 0x6f322d7);
extern "C" void const* const public_6f322e9 = __AsmFindLabelExport(&internal_6f322a0, 0x6f322e9);
extern "C" void const* const public_6f322fa = __AsmFindLabelExport(&internal_6f322a0, 0x6f322fa);
