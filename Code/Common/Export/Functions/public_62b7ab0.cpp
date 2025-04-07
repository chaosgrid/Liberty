#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_62b7ab0);

#define public_62b7ad2 _public_62b7ad2
#define public_62b7ae9 _public_62b7ae9
#define public_62b7aef _public_62b7aef
#define public_62b7b0b _public_62b7b0b
#define public_62b7b31 _public_62b7b31
#define public_62b7b44 _public_62b7b44
#define public_62b7b5b _public_62b7b5b
#define public_62b7ba4 _public_62b7ba4
#define public_62b7bb4 _public_62b7bb4
#define public_62b7bcd _public_62b7bcd
#define public_62b7c25 _public_62b7c25
#define public_62b7c4d _public_62b7c4d
#define public_62b7c78 _public_62b7c78
#define public_62b7c89 _public_62b7c89

PROC_DECLARE(0x62b7ab0, internal_62b7ab0, public_62b7ab0);
extern "C" NAKED register_t __cdecl internal_62b7ab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1C4]
        xor ebx, ebx
        cmp eax, ebx
        jne public_62b7ad2
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x1C8]
        fstp dword ptr ds : [esi+0x1C8]
        jmp public_62b7aef
        public_62b7ad2 : nop
        cmp eax, 2
        jne public_62b7ae9
        fld dword ptr ds : [esi+0x1C8]
        fsub dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+0x1C8]
        jmp public_62b7aef
        public_62b7ae9 : nop
        mov dword ptr ds : [esi+0x1C8], ebx
        public_62b7aef : nop
        cmp byte ptr ds : [esi+0x1BC], bl
        je public_62b7ba4
        cmp eax, 4
        ja public_62b7c89
/*FIXUP jmp dword ptr ds : [eax*4+public_62b7c90] @0x62b7b04*/
  JMPTB cmp eax, 0
  JMPTB je public_62b7b31
  JMPTB cmp eax, 1
  JMPTB je public_62b7c89
  JMPTB cmp eax, 2
  JMPTB je public_62b7b44
  JMPTB cmp eax, 3
  JMPTB je public_62b7b0b
  JMPTB cmp eax, 4
  JMPTB je public_62b7b0b
  JMPTB int 3
        public_62b7b0b : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], ebx
        call dword ptr ds : [eax+0xC8]
        mov dword ptr ds : [esi+0x1C4], ebx
        mov dword ptr ds : [esi+0x1C8], ebx
        pop esi
        pop ebx
        ret 4
        public_62b7b31 : nop
        fld dword ptr ds : [esi+0x1C8]
        fcomp dword ptr ds : [public_639e884]
        fnstsw ax
        test ah, 0x41
        jne public_62b7b5b
        public_62b7b44 : nop
        mov dword ptr ds : [esi+0x1C4], 1
        mov dword ptr ss : [esp+0xC], 1
        jmp public_62b7c78
        public_62b7b5b : nop
        mov ecx, dword ptr ds : [esi+0x1C0]
        cmp ecx, 0xFFFFFFFF
        je public_62b7c89
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ebx
        push 0x3F800000
        push 0x3F800000
        push ebx
        push 0x3F800000
        push 0xC0000000
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [esi+0x1C0]
        push eax
        call public_627d8a0
        add esp, 4
        pop esi
        pop ebx
        ret 4
        public_62b7ba4 : nop
        cmp eax, 3
        ja public_62b7c89
/*FIXUP jmp dword ptr ds : [eax*4+public_62b7ca4] @0x62b7bad*/
  JMPTB cmp eax, 0
  JMPTB je public_62b7bb4
  JMPTB cmp eax, 1
  JMPTB je public_62b7bb4
  JMPTB cmp eax, 2
  JMPTB je public_62b7bcd
  JMPTB cmp eax, 3
  JMPTB je public_62b7c4d
  JMPTB int 3
        public_62b7bb4 : nop
        mov dword ptr ds : [esi+0x1C4], 2
        mov dword ptr ds : [esi+0x1C8], 0x40A00000
        pop esi
        pop ebx
        ret 4
        public_62b7bcd : nop
        fld dword ptr ds : [esi+0x1C8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62b7c89
        mov ecx, dword ptr ds : [esi+0x1C0]
        cmp ecx, 0xFFFFFFFF
        je public_62b7c25
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ebx
        push 0x3F800000
        push 0x3F800000
        push ebx
        push 0x3F800000
        push 0xC0000000
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [esi+0x1C0]
        push eax
        call public_627d8a0
        add esp, 4
        public_62b7c25 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 2
        call dword ptr ds : [edx+0xC8]
        mov dword ptr ds : [esi+0x1C4], 3
        pop esi
        pop ebx
        ret 4
        public_62b7c4d : nop
        mov ecx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x1C0]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        test eax, eax
        je public_62b7c89
        mov dword ptr ds : [esi+0x1C4], 4
        mov dword ptr ss : [esp+0xC], 3
        public_62b7c78 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        push 1
        call dword ptr ds : [edx+0xC8]
        public_62b7c89 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62b7ab0)
        ASM_EXPORT_ENTRY_FIRST(0x62b7b0b, public_62b7b0b)
        ASM_EXPORT_ENTRY(0x62b7b31, public_62b7b31)
        ASM_EXPORT_ENTRY(0x62b7b44, public_62b7b44)
        ASM_EXPORT_ENTRY(0x62b7bb4, public_62b7bb4)
        ASM_EXPORT_ENTRY(0x62b7bcd, public_62b7bcd)
        ASM_EXPORT_ENTRY(0x62b7c4d, public_62b7c4d)
        ASM_EXPORT_ENTRY_LAST(0x62b7c89, public_62b7c89)
    }
}

#undef public_62b7ad2
#undef public_62b7ae9
#undef public_62b7aef
#undef public_62b7b0b
#undef public_62b7b31
#undef public_62b7b44
#undef public_62b7b5b
#undef public_62b7ba4
#undef public_62b7bb4
#undef public_62b7bcd
#undef public_62b7c25
#undef public_62b7c4d
#undef public_62b7c78
#undef public_62b7c89

#pragma init_seg(compiler)
extern "C" void const* const public_62b7b0b = __AsmFindLabelExport(&internal_62b7ab0, 0x62b7b0b);
extern "C" void const* const public_62b7b31 = __AsmFindLabelExport(&internal_62b7ab0, 0x62b7b31);
extern "C" void const* const public_62b7b44 = __AsmFindLabelExport(&internal_62b7ab0, 0x62b7b44);
extern "C" void const* const public_62b7bb4 = __AsmFindLabelExport(&internal_62b7ab0, 0x62b7bb4);
extern "C" void const* const public_62b7bcd = __AsmFindLabelExport(&internal_62b7ab0, 0x62b7bcd);
extern "C" void const* const public_62b7c4d = __AsmFindLabelExport(&internal_62b7ab0, 0x62b7c4d);
extern "C" void const* const public_62b7c89 = __AsmFindLabelExport(&internal_62b7ab0, 0x62b7c89);
