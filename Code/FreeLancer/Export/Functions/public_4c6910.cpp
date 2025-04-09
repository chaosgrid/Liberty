#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6910);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_5850f0);

#define public_4c6975 _public_4c6975
#define public_4c699c _public_4c699c
#define public_4c69ca _public_4c69ca
#define public_4c69da _public_4c69da
#define public_4c69ea _public_4c69ea
#define public_4c69fa _public_4c69fa
#define public_4c6a0a _public_4c6a0a
#define public_4c6a14 _public_4c6a14

PROC_DECLARE(0x4c6910, internal_4c6910, public_4c6910);
extern "C" NAKED register_t __cdecl internal_4c6910()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        mov ebx, ecx
        je public_4c6a14
        cmp dword ptr ds : [ebx], 0
        je public_4c6a14
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        push edi
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_4c6a14
        push 0
        push edi
        call dword ptr ds : [public_5c6028]
        mov dword ptr ss : [esp+0x18], eax
        add esp, 8
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c63a4]
        mov ecx, dword ptr ds : [public_5c6210]
        cmp edi, dword ptr ds : [ecx]
        je public_4c6975
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6390]
        public_4c6975 : nop
        mov ecx, dword ptr ds : [ebx]
        lea edx, ds:[ebx+0x1C]
        push edx
        call public_5850f0
        mov ecx, esi
        call dword ptr ds : [public_5c60b4]
        test al, al
        je public_4c699c
        push 0x10
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        ret 8
        public_4c699c : nop
        mov esi, dword ptr ds : [esi+4]
        push esi
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_4c6a14
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        add eax, 0xFFFFFFFA
        cmp eax, 0x1B
        ja public_4c6a14
/*FIXUP movzx eax, byte ptr ds : [eax+public_4c6a34] @0x4c69bc*/
/*FIXUP jmp dword ptr ds : [eax*4+public_4c6a1c] @0x4c69c3*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000b86f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b86f : nop
        je public_4c69ea
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000b86b
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b86b : nop
        je public_4c6a14
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000b867
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b867 : nop
        je public_4c6a14
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000b863
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b863 : nop
        je public_4c6a14
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000b85f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b85f : nop
        je public_4c69ea
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000b85b
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b85b : nop
        je public_4c6a0a
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000b857
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b857 : nop
        je public_4c69fa
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000b853
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b853 : nop
        je public_4c6a0a
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000b84f
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b84f : nop
        je public_4c6a0a
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000b84b
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b84b : nop
        je public_4c69fa
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000b847
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b847 : nop
        je public_4c6a14
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000b843
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b843 : nop
        je public_4c69da
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000b83f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b83f : nop
        je public_4c69ca
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000b83b
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b83b : nop
        je public_4c69da
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000b837
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b837 : nop
        je public_4c69ea
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000b833
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b833 : nop
        je public_4c69ea
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000b82f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b82f : nop
        je public_4c69ea
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000b82b
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b82b : nop
        je public_4c6a14
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000b827
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b827 : nop
        je public_4c6a14
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000b823
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b823 : nop
        je public_4c69ea
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000b81f
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b81f : nop
        je public_4c6a14
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000b81b
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b81b : nop
        je public_4c6a14
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000b817
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b817 : nop
        je public_4c69ea
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000b813
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b813 : nop
        je public_4c6a14
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000b80f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b80f : nop
        je public_4c69ca
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000b80b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b80b : nop
        je public_4c69ca
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000b807
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b807 : nop
        je public_4c69ca
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000b803
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b803 : nop
        je public_4c69da
  JMPTB int 3
        public_4c69ca : nop
        push 0x14
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        ret 8
        public_4c69da : nop
        push 0x12
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        ret 8
        public_4c69ea : nop
        push 0x16
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        ret 8
        public_4c69fa : nop
        push 0x13
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        ret 8
        public_4c6a0a : nop
        push 0x15
        call public_5645c0
        add esp, 4
        public_4c6a14 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4c6910)
        ASM_EXPORT_ENTRY_SINGLE(0x4c6a14, public_4c6a14)
    }
}

#undef public_4c6975
#undef public_4c699c
#undef public_4c69ca
#undef public_4c69da
#undef public_4c69ea
#undef public_4c69fa
#undef public_4c6a0a
#undef public_4c6a14

#pragma init_seg(compiler)
extern "C" void const* const public_4c6a14 = __AsmFindLabelExport(&internal_4c6910, 0x4c6a14);
