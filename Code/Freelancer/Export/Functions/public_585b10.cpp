#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_585b10);

#define public_585b2a _public_585b2a
#define public_585b30 _public_585b30
#define public_585b36 _public_585b36
#define public_585b3c _public_585b3c
#define public_585b42 _public_585b42
#define public_585b48 _public_585b48
#define public_585b4e _public_585b4e
#define public_585b54 _public_585b54
#define public_585b5a _public_585b5a
#define public_585b60 _public_585b60

PROC_DECLARE(0x585b10, internal_585b10, public_585b10);
extern "C" NAKED register_t __cdecl internal_585b10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xFFFFFFFC
        cmp eax, 0x3E
        ja public_585b60
/*FIXUP movzx ecx, byte ptr ds : [eax+public_585b90] @0x585b1c*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_585b64] @0x585b23*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 2
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 3
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 4
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB cmp eax, 5
  JMPTB mov ecx, 4
  JMPTB je public_585b5a
  JMPTB cmp eax, 6
  JMPTB mov ecx, 5
  JMPTB je public_585b2a
  JMPTB cmp eax, 7
  JMPTB mov ecx, 6
  JMPTB je public_585b36
  JMPTB cmp eax, 8
  JMPTB mov ecx, 7
  JMPTB je public_585b42
  JMPTB cmp eax, 9
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 0xA
  JMPTB je public_585b60
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 0
  JMPTB je public_585b60
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 8
  JMPTB je public_585b3c
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 9
  JMPTB je public_585b30
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 5
  JMPTB je public_585b2a
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 1
  JMPTB je public_585b48
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 2
  JMPTB je public_585b4e
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 3
  JMPTB je public_585b54
  JMPTB int 3
        public_585b2a : nop
        mov eax, 1
        ret 
        public_585b30 : nop
        mov eax, 2
        ret 
        public_585b36 : nop
        mov eax, 3
        ret 
        public_585b3c : nop
        mov eax, 4
        ret 
        public_585b42 : nop
        mov eax, 5
        ret 
        public_585b48 : nop
        mov eax, 6
        ret 
        public_585b4e : nop
        mov eax, 7
        ret 
        public_585b54 : nop
        mov eax, 8
        ret 
        public_585b5a : nop
        mov eax, 9
        ret 
        public_585b60 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x585b10)
        ASM_EXPORT_ENTRY_SINGLE(0x585b60, public_585b60)
    }
}

#undef public_585b2a
#undef public_585b30
#undef public_585b36
#undef public_585b3c
#undef public_585b42
#undef public_585b48
#undef public_585b4e
#undef public_585b54
#undef public_585b5a
#undef public_585b60

#pragma init_seg(compiler)
extern "C" void const* const public_585b60 = __AsmFindLabelExport(&internal_585b10, 0x585b60);
