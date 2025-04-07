#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f316c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f322a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f323c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f32420);
CLANG_FORWARD_PROC_SYMBOL(public_6f51370);
CLANG_FORWARD_PROC_SYMBOL(public_6f51ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f520d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae9aa);

#define public_6f317c2 _public_6f317c2
#define public_6f317ca _public_6f317ca
#define public_6f317cd _public_6f317cd
#define public_6f317f2 _public_6f317f2
#define public_6f31803 _public_6f31803
#define public_6f31810 _public_6f31810
#define public_6f31882 _public_6f31882
#define public_6f3188c _public_6f3188c
#define public_6f3189a _public_6f3189a
#define public_6f318b1 _public_6f318b1
#define public_6f318c6 _public_6f318c6

PROC_DECLARE(0x6f316c0, internal_6f316c0, public_6f316c0);
extern "C" NAKED register_t __cdecl internal_6f316c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fae9aa @0x6f316c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae9aa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ds : [edi], offset public_6fb940c
        xor ebx, ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov byte ptr ss : [esp+0x4C], bl
        mov byte ptr ss : [esp+0x4D], bl
        mov byte ptr ss : [esp+0x4E], bl
        mov byte ptr ss : [esp+0x4F], bl
        mov byte ptr ss : [esp+0x50], bl
        mov byte ptr ss : [esp+0x51], bl
        mov byte ptr ss : [esp+0x52], bl
        mov byte ptr ss : [esp+0x53], bl
        mov byte ptr ss : [esp+0x54], bl
        mov byte ptr ss : [esp+0x55], bl
        mov byte ptr ss : [esp+0x56], bl
        mov byte ptr ss : [esp+0x57], bl
        mov byte ptr ss : [esp+0x58], bl
        mov byte ptr ss : [esp+0x59], bl
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov byte ptr ss : [esp+0x3E], bl
        mov byte ptr ss : [esp+0x3F], bl
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x48]
        lea eax, ds:[edi+8]
        push edx
        push eax
        mov byte ptr ss : [esp+0x70], 2
        call dword ptr ds : [public_6fb34fc]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        call public_6f322a0
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 0x1C
        sub eax, 0x3F1A
        mov ebp, 1
        je public_6f317c2
        sub eax, 2
        jne public_6f317cd
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        jmp public_6f317ca
        public_6f317c2 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        public_6f317ca : nop
        mov ebp, dword ptr ds : [eax+4]
        public_6f317cd : nop
        mov edx, dword ptr ss : [esp+0x48]
        lea eax, ds:[edx-0x3F17]
        cmp eax, 0xD
        mov dword ptr ss : [esp+0x10], 1
        ja public_6f31810
/*FIXUP movzx eax, byte ptr ds : [eax+public_6f31900] @0x6f317e4*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6f318f4] @0x6f317eb*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c000000000051bf
  JMPTB mov eax, 0
  JMPTB public_4c000000000051bf : nop
        je public_6f317f2
  JMPTB cmp eax, 1
  JMPTB jne public_4c000000000051bb
  JMPTB mov eax, 2
  JMPTB public_4c000000000051bb : nop
        je public_6f31810
  JMPTB cmp eax, 2
  JMPTB jne public_4c000000000051b7
  JMPTB mov eax, 0
  JMPTB public_4c000000000051b7 : nop
        je public_6f317f2
  JMPTB cmp eax, 3
  JMPTB jne public_4c000000000051b3
  JMPTB mov eax, 2
  JMPTB public_4c000000000051b3 : nop
        je public_6f31810
  JMPTB cmp eax, 4
  JMPTB jne public_4c000000000051af
  JMPTB mov eax, 0
  JMPTB public_4c000000000051af : nop
        je public_6f317f2
  JMPTB cmp eax, 5
  JMPTB jne public_4c000000000051ab
  JMPTB mov eax, 2
  JMPTB public_4c000000000051ab : nop
        je public_6f31810
  JMPTB cmp eax, 6
  JMPTB jne public_4c000000000051a7
  JMPTB mov eax, 0
  JMPTB public_4c000000000051a7 : nop
        je public_6f317f2
  JMPTB cmp eax, 7
  JMPTB jne public_4c000000000051a3
  JMPTB mov eax, 2
  JMPTB public_4c000000000051a3 : nop
        je public_6f31810
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000519f
  JMPTB mov eax, 2
  JMPTB public_4c0000000000519f : nop
        je public_6f31810
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000519b
  JMPTB mov eax, 0
  JMPTB public_4c0000000000519b : nop
        je public_6f317f2
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c00000000005197
  JMPTB mov eax, 2
  JMPTB public_4c00000000005197 : nop
        je public_6f31810
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c00000000005193
  JMPTB mov eax, 2
  JMPTB public_4c00000000005193 : nop
        je public_6f31810
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000518f
  JMPTB mov eax, 2
  JMPTB public_4c0000000000518f : nop
        je public_6f31810
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000518b
  JMPTB mov eax, 1
  JMPTB public_4c0000000000518b : nop
        je public_6f31803
  JMPTB int 3
        public_6f317f2 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6f31810
        public_6f31803 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        public_6f31810 : nop
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        call public_6f323c0
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        call public_6f32420
        mov esi, dword ptr ds : [public_6fb3034]
        add esp, 0x18
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x64], 1
        call esi
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x64], bl
        call esi
        mov ecx, edi
        call public_6eb6bb0
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_6f51370
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        cmp eax, 1
        jne public_6f31882
        cmp ecx, 1
        je public_6f3188c
        public_6f31882 : nop
        push ebx
        push ecx
        push eax
        mov ecx, esi
        call public_6f51ee0
        public_6f3188c : nop
        cmp ebp, 1
        je public_6f3189a
        push ebx
        push ebp
        mov ecx, esi
        call public_6f51fe0
        public_6f3189a : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, 1
        je public_6f318b1
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        push ecx
        push eax
        mov ecx, esi
        call public_6f520d0
        public_6f318b1 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, 0xFFFFFFFF
        lea eax, ds:[edi+8]
        je public_6f318c6
        push eax
        call dword ptr ds : [public_6fb34f8]
        add esp, 4
        public_6f318c6 : nop
        mov eax, dword ptr ds : [public_6fd0884]
        dec eax
        mov ecx, edi
        mov dword ptr ds : [public_6fd0884], eax
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        call public_6ea8cc0
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x6f316c0)
        ASM_EXPORT_ENTRY_FIRST(0x6f317f2, public_6f317f2)
        ASM_EXPORT_ENTRY(0x6f31803, public_6f31803)
        ASM_EXPORT_ENTRY_LAST(0x6f31810, public_6f31810)
    }
}

#undef public_6f317c2
#undef public_6f317ca
#undef public_6f317cd
#undef public_6f317f2
#undef public_6f31803
#undef public_6f31810
#undef public_6f31882
#undef public_6f3188c
#undef public_6f3189a
#undef public_6f318b1
#undef public_6f318c6

#pragma init_seg(compiler)
extern "C" void const* const public_6f317f2 = __AsmFindLabelExport(&internal_6f316c0, 0x6f317f2);
extern "C" void const* const public_6f31803 = __AsmFindLabelExport(&internal_6f316c0, 0x6f31803);
extern "C" void const* const public_6f31810 = __AsmFindLabelExport(&internal_6f316c0, 0x6f31810);
