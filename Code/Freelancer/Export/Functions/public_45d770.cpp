#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_45d770);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_45d790 _public_45d790
#define public_45d7a3 _public_45d7a3
#define public_45d7bc _public_45d7bc
#define public_45d7d1 _public_45d7d1
#define public_45d7d8 _public_45d7d8
#define public_45d7df _public_45d7df
#define public_45d7e6 _public_45d7e6
#define public_45d7ed _public_45d7ed
#define public_45d7f4 _public_45d7f4
#define public_45d7fb _public_45d7fb
#define public_45d7fd _public_45d7fd
#define public_45d87b _public_45d87b
#define public_45d8be _public_45d8be
#define public_45d978 _public_45d978

PROC_DECLARE(0x45d770, internal_45d770, public_45d770);
extern "C" NAKED register_t __cdecl internal_45d770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x54
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+0x508]
        test ebx, ebx
        je public_45d7bc
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_45d7a3
        push edi
        lea esp, ss:[esp]
        public_45d790 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_45d790
        pop edi
        public_45d7a3 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x508], 0
        public_45d7bc : nop
        mov eax, dword ptr ds : [esi+0x3AC]
        add eax, 0xFFFFFF9D
        cmp eax, 7
        ja public_45d7fb
/*FIXUP jmp dword ptr ds : [eax*4+public_45d9d8] @0x45d7ca*/
  JMPTB cmp eax, 0
  JMPTB je public_45d7fb
  JMPTB cmp eax, 1
  JMPTB je public_45d7fb
  JMPTB cmp eax, 2
  JMPTB je public_45d7df
  JMPTB cmp eax, 3
  JMPTB je public_45d7d1
  JMPTB cmp eax, 4
  JMPTB je public_45d7d8
  JMPTB cmp eax, 5
  JMPTB je public_45d7ed
  JMPTB cmp eax, 6
  JMPTB je public_45d7f4
  JMPTB cmp eax, 7
  JMPTB je public_45d7e6
  JMPTB int 3
        public_45d7d1 : nop
        mov eax, 1
        jmp public_45d7fd
        public_45d7d8 : nop
        mov eax, 2
        jmp public_45d7fd
        public_45d7df : nop
        mov eax, 3
        jmp public_45d7fd
        public_45d7e6 : nop
        mov eax, 4
        jmp public_45d7fd
        public_45d7ed : nop
        mov eax, 5
        jmp public_45d7fd
        public_45d7f4 : nop
        mov eax, 6
        jmp public_45d7fd
        public_45d7fb : nop
        xor eax, eax
        public_45d7fd : nop
        mov cl, byte ptr ds : [esi+0x52C]
        test cl, cl
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        je public_45d87b
        lea eax, ss:[esp+8]
        push eax
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
        lea edx, ss:[esp+0x54]
        push edx
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x5C], 0xBDB020C5
        mov dword ptr ss : [esp+0x60], 0xBFA4DD2F
/*FIXUP push offset public_5cb70c @0x45d874*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb70c
        jmp public_45d8be
        public_45d87b : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [eax*4+public_6114f8]
        push 0
        lea edx, ds:[esi+ecx*4+0x4B4]
        push edx
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        push eax
        public_45d8be : nop
        mov ecx, esi
/*FIXUP push offset public_5cb8a8 @0x45d8c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb8a8
        call public_5a0db0
        mov dword ptr ds : [esi+0x508], eax
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x508]
        mov ecx, dword ptr ds : [ecx+0x84]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        add eax, 0x24
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x50], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x54], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_66d3ec]
        test eax, eax
        mov dword ptr ss : [esp+0x58], edx
        jne public_45d978
        call public_5b73e0
        mov dword ptr ds : [public_66d3ec], eax
        public_45d978 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        mov edx, dword ptr ds : [esi+0x508]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov edx, dword ptr ds : [esi+0x508]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop esi
        pop ebx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x45d770)
        ASM_EXPORT_ENTRY_SINGLE(0x45d7e6, public_45d7e6)
    }
}

#undef public_45d790
#undef public_45d7a3
#undef public_45d7bc
#undef public_45d7d1
#undef public_45d7d8
#undef public_45d7df
#undef public_45d7e6
#undef public_45d7ed
#undef public_45d7f4
#undef public_45d7fb
#undef public_45d7fd
#undef public_45d87b
#undef public_45d8be
#undef public_45d978

#pragma init_seg(compiler)
extern "C" void const* const public_45d7e6 = __AsmFindLabelExport(&internal_45d770, 0x45d7e6);
