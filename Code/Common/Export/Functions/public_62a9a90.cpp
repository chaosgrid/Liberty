#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6294460);
CLANG_FORWARD_PROC_SYMBOL(public_6295160);
CLANG_FORWARD_PROC_SYMBOL(public_6295880);
CLANG_FORWARD_PROC_SYMBOL(public_6296f40);
CLANG_FORWARD_PROC_SYMBOL(public_629a240);
CLANG_FORWARD_PROC_SYMBOL(public_629a2f0);
CLANG_FORWARD_PROC_SYMBOL(public_629cd30);
CLANG_FORWARD_PROC_SYMBOL(public_629eca0);
CLANG_FORWARD_PROC_SYMBOL(public_629f180);
CLANG_FORWARD_PROC_SYMBOL(public_629f340);
CLANG_FORWARD_PROC_SYMBOL(public_629f4e0);
CLANG_FORWARD_PROC_SYMBOL(public_629fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_629fcc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a9a90);
CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_JUMP_SYMBOL(public_639407f);

#define public_62a9acf _public_62a9acf
#define public_62a9b14 _public_62a9b14
#define public_62a9b65 _public_62a9b65
#define public_62a9baa _public_62a9baa
#define public_62a9bf2 _public_62a9bf2
#define public_62a9c3a _public_62a9c3a
#define public_62a9c82 _public_62a9c82
#define public_62a9cc7 _public_62a9cc7
#define public_62a9d0c _public_62a9d0c
#define public_62a9d51 _public_62a9d51
#define public_62a9d99 _public_62a9d99
#define public_62a9dde _public_62a9dde
#define public_62a9e23 _public_62a9e23
#define public_62a9e64 _public_62a9e64
#define public_62a9e8c _public_62a9e8c

PROC_DECLARE(0x62a9a90, internal_62a9a90, public_62a9a90);
extern "C" NAKED register_t __cdecl internal_62a9a90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639407f @0x62a9a98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639407f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        add eax, 0xFFFFFFF7
        cmp eax, 0x19
        ja public_62a9e64
/*FIXUP movzx ecx, byte ptr ds : [eax+public_62a9edc] @0x62a9ac1*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_62a9ea4] @0x62a9ac8*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_62a9cc7
  JMPTB cmp eax, 1
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 2
  JMPTB mov ecx, 1
  JMPTB je public_62a9d0c
  JMPTB cmp eax, 3
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 4
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 5
  JMPTB mov ecx, 2
  JMPTB je public_62a9c82
  JMPTB cmp eax, 6
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 7
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 8
  JMPTB mov ecx, 3
  JMPTB je public_62a9baa
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_62a9bf2
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 5
  JMPTB je public_62a9c3a
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 6
  JMPTB je public_62a9d51
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 7
  JMPTB je public_62a9acf
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 8
  JMPTB je public_62a9b14
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 9
  JMPTB je public_62a9b65
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 0xA
  JMPTB je public_62a9d99
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 0xB
  JMPTB je public_62a9dde
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 0xD
  JMPTB je public_62a9e64
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 0xC
  JMPTB je public_62a9e23
  JMPTB int 3
        public_62a9acf : nop
        push 0x28
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_62a9e8c
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        push esi
        push ecx
        push edi
        mov ecx, eax
        call public_629f180
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9b14 : nop
        push 0x28
        call public_62fd560
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], 1
        je public_62a9e8c
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        push esi
        push eax
        push edi
        push 2
        mov ecx, ebx
        call public_629eca0
        mov dword ptr ds : [ebx], offset public_639c51c
        mov eax, ebx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9b65 : nop
        push 0x24
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 2
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_629fcc0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9baa : nop
        push 0x270
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 3
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_6296f40
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9bf2 : nop
        push 0x1F4
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 4
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_629a240
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9c3a : nop
        push 0x1F4
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 5
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_629a2f0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9c82 : nop
        push 0x60
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 6
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_629cd30
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9cc7 : nop
        push 0x50
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 7
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_6295880
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9d0c : nop
        push 0x20
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 8
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_629f340
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9d51 : nop
        push 0x840
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 9
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_629f4e0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9d99 : nop
        push 0x24
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0xA
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_629fbc0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9dde : nop
        push 0x54
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0xB
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_6294460
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9e23 : nop
        push 0x20
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0xC
        je public_62a9e8c
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push edi
        mov ecx, eax
        call public_6295160
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62a9e64 : nop
        lea ecx, ds:[esi+8]
        mov edi, 0x100002
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x1CF
/*FIXUP push offset public_639e254 @0x62a9e7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e254
/*FIXUP push offset public_639e280 @0x62a9e81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e280
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62a9e8c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62a9a90)
        ASM_EXPORT_ENTRY_FIRST(0x62a9acf, public_62a9acf)
        ASM_EXPORT_ENTRY(0x62a9b14, public_62a9b14)
        ASM_EXPORT_ENTRY(0x62a9b65, public_62a9b65)
        ASM_EXPORT_ENTRY(0x62a9baa, public_62a9baa)
        ASM_EXPORT_ENTRY(0x62a9bf2, public_62a9bf2)
        ASM_EXPORT_ENTRY(0x62a9c3a, public_62a9c3a)
        ASM_EXPORT_ENTRY(0x62a9c82, public_62a9c82)
        ASM_EXPORT_ENTRY(0x62a9cc7, public_62a9cc7)
        ASM_EXPORT_ENTRY(0x62a9d0c, public_62a9d0c)
        ASM_EXPORT_ENTRY(0x62a9d51, public_62a9d51)
        ASM_EXPORT_ENTRY(0x62a9d99, public_62a9d99)
        ASM_EXPORT_ENTRY(0x62a9dde, public_62a9dde)
        ASM_EXPORT_ENTRY(0x62a9e23, public_62a9e23)
        ASM_EXPORT_ENTRY_LAST(0x62a9e64, public_62a9e64)
    }
}

#undef public_62a9acf
#undef public_62a9b14
#undef public_62a9b65
#undef public_62a9baa
#undef public_62a9bf2
#undef public_62a9c3a
#undef public_62a9c82
#undef public_62a9cc7
#undef public_62a9d0c
#undef public_62a9d51
#undef public_62a9d99
#undef public_62a9dde
#undef public_62a9e23
#undef public_62a9e64
#undef public_62a9e8c

#pragma init_seg(compiler)
extern "C" void const* const public_62a9acf = __AsmFindLabelExport(&internal_62a9a90, 0x62a9acf);
extern "C" void const* const public_62a9b14 = __AsmFindLabelExport(&internal_62a9a90, 0x62a9b14);
extern "C" void const* const public_62a9b65 = __AsmFindLabelExport(&internal_62a9a90, 0x62a9b65);
extern "C" void const* const public_62a9baa = __AsmFindLabelExport(&internal_62a9a90, 0x62a9baa);
extern "C" void const* const public_62a9bf2 = __AsmFindLabelExport(&internal_62a9a90, 0x62a9bf2);
extern "C" void const* const public_62a9c3a = __AsmFindLabelExport(&internal_62a9a90, 0x62a9c3a);
extern "C" void const* const public_62a9c82 = __AsmFindLabelExport(&internal_62a9a90, 0x62a9c82);
extern "C" void const* const public_62a9cc7 = __AsmFindLabelExport(&internal_62a9a90, 0x62a9cc7);
extern "C" void const* const public_62a9d0c = __AsmFindLabelExport(&internal_62a9a90, 0x62a9d0c);
extern "C" void const* const public_62a9d51 = __AsmFindLabelExport(&internal_62a9a90, 0x62a9d51);
extern "C" void const* const public_62a9d99 = __AsmFindLabelExport(&internal_62a9a90, 0x62a9d99);
extern "C" void const* const public_62a9dde = __AsmFindLabelExport(&internal_62a9a90, 0x62a9dde);
extern "C" void const* const public_62a9e23 = __AsmFindLabelExport(&internal_62a9a90, 0x62a9e23);
extern "C" void const* const public_62a9e64 = __AsmFindLabelExport(&internal_62a9a90, 0x62a9e64);
