#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1990);
CLANG_FORWARD_PROC_SYMBOL(public_6ef19d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1ee0);

#define public_6ef1b8d _public_6ef1b8d
#define public_6ef1ba7 _public_6ef1ba7
#define public_6ef1bb3 _public_6ef1bb3
#define public_6ef1beb _public_6ef1beb
#define public_6ef1bf0 _public_6ef1bf0
#define public_6ef1c19 _public_6ef1c19
#define public_6ef1c25 _public_6ef1c25
#define public_6ef1c54 _public_6ef1c54
#define public_6ef1c5c _public_6ef1c5c
#define public_6ef1c6f _public_6ef1c6f
#define public_6ef1c94 _public_6ef1c94
#define public_6ef1ca5 _public_6ef1ca5
#define public_6ef1cbe _public_6ef1cbe

PROC_DECLARE(0x6ef1b70, internal_6ef1b70, public_6ef1b70);
extern "C" NAKED register_t __cdecl internal_6ef1b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        add eax, 0xFFFFFFFE
        cmp eax, 7
        ja public_6ef1ca5
/*FIXUP jmp dword ptr ds : [eax*4+public_6ef1cec] @0x6ef1b86*/
  JMPTB cmp eax, 0
  JMPTB je public_6ef1b8d
  JMPTB cmp eax, 1
  JMPTB je public_6ef1ca5
  JMPTB cmp eax, 2
  JMPTB je public_6ef1ca5
  JMPTB cmp eax, 3
  JMPTB je public_6ef1ca5
  JMPTB cmp eax, 4
  JMPTB je public_6ef1bb3
  JMPTB cmp eax, 5
  JMPTB je public_6ef1ca5
  JMPTB cmp eax, 6
  JMPTB je public_6ef1ba7
  JMPTB cmp eax, 7
  JMPTB je public_6ef1ba7
  JMPTB int 3
        public_6ef1b8d : nop
        mov al, byte ptr ds : [esi+0x86]
        test al, al
        je public_6ef1ca5
        mov ecx, esi
        call public_6ef19d0
        jmp public_6ef1ca5
        public_6ef1ba7 : nop
        mov byte ptr ds : [esi+0x86], 0
        jmp public_6ef1ca5
        public_6ef1bb3 : nop
        mov ecx, dword ptr ds : [esi+0xB8]
        test ecx, ecx
        jne public_6ef1bf0
/*FIXUP push offset public_6efe208 @0x6ef1bbd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe208
        push 0x282
/*FIXUP push offset public_6efe070 @0x6ef1bc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe070
        mov eax, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef1bd1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push eax
        mov eax, dword ptr ds : [public_6efc004]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov dword ptr ds : [esi+0x80], 8
        public_6ef1beb : nop
        xor al, al
        pop esi
        pop ecx
        ret 
        public_6ef1bf0 : nop
        cmp dword ptr ds : [esi+0xF8], 0xFFFFFFFF
        jne public_6ef1c25
        mov eax, dword ptr ds : [esi+0xA8]
        test eax, eax
        je public_6ef1c19
        mov eax, dword ptr ds : [esi+0xB4]
        mov edx, dword ptr ds : [esi+0xB0]
        cmp edx, eax
        sbb al, al
        inc al
        test al, al
        je public_6ef1c25
        public_6ef1c19 : nop
        mov eax, dword ptr ds : [esi+0xC0]
        mov dword ptr ds : [esi+0xF8], eax
        public_6ef1c25 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call dword ptr ds : [edx+0x10]
        test eax, eax
        jl public_6ef1c6f
        mov eax, dword ptr ds : [esi+0xF4]
        mov ecx, dword ptr ds : [esi+0xF8]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+4]
        ja public_6ef1c54
        cmp edx, eax
        jb public_6ef1c94
        cmp edx, ecx
        jb public_6ef1c5c
        jmp public_6ef1c94
        public_6ef1c54 : nop
        cmp edx, ecx
        jb public_6ef1c5c
        cmp edx, eax
        jb public_6ef1c94
        public_6ef1c5c : nop
        mov eax, dword ptr ds : [esi+0xFC]
        test eax, eax
        jbe public_6ef1ca5
        mov ecx, esi
        call public_6ef1ee0
        jmp public_6ef1ca5
        public_6ef1c6f : nop
        mov ecx, dword ptr ds : [public_6efc004]
/*FIXUP push offset public_6efe1dc @0x6ef1c75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe1dc
        push 0x2AF
/*FIXUP push offset public_6efe070 @0x6ef1c7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe070
        mov eax, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef1c89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6ef1c94 : nop
        mov ecx, esi
        call public_6ef1990
        mov dword ptr ds : [esi+0x80], 8
        public_6ef1ca5 : nop
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, 2
        je public_6ef1cbe
        cmp eax, 3
        je public_6ef1cbe
        cmp eax, 6
        jne public_6ef1beb
        public_6ef1cbe : nop
        mov ecx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [esi+0xB8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov ecx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ds : [esi+0xB8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x40]
        mov al, 1
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef1b70)
        ASM_EXPORT_ENTRY_FIRST(0x6ef1b8d, public_6ef1b8d)
        ASM_EXPORT_ENTRY(0x6ef1ba7, public_6ef1ba7)
        ASM_EXPORT_ENTRY(0x6ef1bb3, public_6ef1bb3)
        ASM_EXPORT_ENTRY_LAST(0x6ef1ca5, public_6ef1ca5)
    }
}

#undef public_6ef1b8d
#undef public_6ef1ba7
#undef public_6ef1bb3
#undef public_6ef1beb
#undef public_6ef1bf0
#undef public_6ef1c19
#undef public_6ef1c25
#undef public_6ef1c54
#undef public_6ef1c5c
#undef public_6ef1c6f
#undef public_6ef1c94
#undef public_6ef1ca5
#undef public_6ef1cbe

#pragma init_seg(compiler)
extern "C" void const* const public_6ef1b8d = __AsmFindLabelExport(&internal_6ef1b70, 0x6ef1b8d);
extern "C" void const* const public_6ef1ba7 = __AsmFindLabelExport(&internal_6ef1b70, 0x6ef1ba7);
extern "C" void const* const public_6ef1bb3 = __AsmFindLabelExport(&internal_6ef1b70, 0x6ef1bb3);
extern "C" void const* const public_6ef1ca5 = __AsmFindLabelExport(&internal_6ef1b70, 0x6ef1ca5);
