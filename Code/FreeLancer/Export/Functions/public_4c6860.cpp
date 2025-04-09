#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6860);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4c688f _public_4c688f
#define public_4c689c _public_4c689c
#define public_4c68a9 _public_4c68a9
#define public_4c68b6 _public_4c68b6
#define public_4c68c3 _public_4c68c3
#define public_4c68cb _public_4c68cb

PROC_DECLARE(0x4c6860, internal_4c6860, public_4c6860);
extern "C" NAKED register_t __cdecl internal_4c6860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_4c68cb
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        add eax, 0xFFFFFFFA
        cmp eax, 0x1B
        ja public_4c68cb
/*FIXUP movzx eax, byte ptr ds : [eax+public_4c68e8] @0x4c6881*/
/*FIXUP jmp dword ptr ds : [eax*4+public_4c68d0] @0x4c6888*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000b7fc
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b7fc : nop
        je public_4c68a9
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000b7f8
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b7f8 : nop
        je public_4c68cb
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000b7f4
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b7f4 : nop
        je public_4c68cb
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000b7f0
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b7f0 : nop
        je public_4c68cb
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000b7ec
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b7ec : nop
        je public_4c68a9
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000b7e8
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b7e8 : nop
        je public_4c68c3
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000b7e4
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b7e4 : nop
        je public_4c68b6
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000b7e0
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b7e0 : nop
        je public_4c68c3
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000b7dc
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b7dc : nop
        je public_4c68c3
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000b7d8
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b7d8 : nop
        je public_4c68b6
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000b7d4
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b7d4 : nop
        je public_4c68cb
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000b7d0
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b7d0 : nop
        je public_4c689c
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000b7cc
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b7cc : nop
        je public_4c688f
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000b7c8
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b7c8 : nop
        je public_4c689c
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000b7c4
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b7c4 : nop
        je public_4c68a9
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000b7c0
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b7c0 : nop
        je public_4c68a9
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000b7bc
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b7bc : nop
        je public_4c68a9
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000b7b8
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b7b8 : nop
        je public_4c68cb
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000b7b4
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b7b4 : nop
        je public_4c68cb
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000b7b0
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b7b0 : nop
        je public_4c68a9
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000b7ac
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b7ac : nop
        je public_4c68cb
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000b7a8
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b7a8 : nop
        je public_4c68cb
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000b7a4
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b7a4 : nop
        je public_4c68a9
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000b7a0
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b7a0 : nop
        je public_4c68cb
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000b79c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b79c : nop
        je public_4c688f
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000b798
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b798 : nop
        je public_4c688f
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000b794
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b794 : nop
        je public_4c688f
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000b790
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b790 : nop
        je public_4c689c
  JMPTB int 3
        public_4c688f : nop
        push 0x14
        call public_5645c0
        add esp, 4
        ret 4
        public_4c689c : nop
        push 0x12
        call public_5645c0
        add esp, 4
        ret 4
        public_4c68a9 : nop
        push 0x16
        call public_5645c0
        add esp, 4
        ret 4
        public_4c68b6 : nop
        push 0x13
        call public_5645c0
        add esp, 4
        ret 4
        public_4c68c3 : nop
        push 0x15
        call public_5645c0
        pop ecx
        public_4c68cb : nop
        ret 4
        UNREACHABLE_TRAP(0x4c6860)
        ASM_EXPORT_ENTRY_SINGLE(0x4c68cb, public_4c68cb)
    }
}

#undef public_4c688f
#undef public_4c689c
#undef public_4c68a9
#undef public_4c68b6
#undef public_4c68c3
#undef public_4c68cb

#pragma init_seg(compiler)
extern "C" void const* const public_4c68cb = __AsmFindLabelExport(&internal_4c6860, 0x4c68cb);
