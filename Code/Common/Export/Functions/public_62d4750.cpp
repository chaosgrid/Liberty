#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_62ac230);
CLANG_FORWARD_PROC_SYMBOL(public_62c2920);
CLANG_FORWARD_PROC_SYMBOL(public_62d4520);
CLANG_FORWARD_PROC_SYMBOL(public_62d4750);
CLANG_FORWARD_PROC_SYMBOL(public_62d4cf0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4d60);
CLANG_FORWARD_PROC_SYMBOL(public_62ecc50);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63951c8);

#define public_62d47e3 _public_62d47e3
#define public_62d480d _public_62d480d
#define public_62d480f _public_62d480f
#define public_62d481f _public_62d481f
#define public_62d482c _public_62d482c
#define public_62d482e _public_62d482e
#define public_62d483e _public_62d483e
#define public_62d489e _public_62d489e
#define public_62d48d0 _public_62d48d0
#define public_62d4926 _public_62d4926
#define public_62d493e _public_62d493e
#define public_62d4961 _public_62d4961
#define public_62d4984 _public_62d4984
#define public_62d4993 _public_62d4993
#define public_62d4995 _public_62d4995
#define public_62d49a1 _public_62d49a1

PROC_DECLARE(0x62d4750, internal_62d4750, public_62d4750);
extern "C" NAKED register_t __cdecl internal_62d4750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        push 0xFFFFFFFF
/*FIXUP push public_63951c8 @0x62d4762*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63951c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        fnstsw ax
        push esi
        test ah, 0x41
        push edi
        mov edi, ecx
        jne public_62d48d0
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        push 0
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], 0
        call public_6280b40
        mov esi, 1
        push 0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x34], esi
        call public_62c2920
        push 0
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x34], 2
        call public_6280b40
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_62d47e3
        push 0
        lea ecx, ss:[esp+0x1C]
        call public_6341610
        public_62d47e3 : nop
        mov dword ptr ss : [esp+0x24], 0
        mov eax, dword ptr ds : [edi+0xF0]
        test eax, eax
        mov dword ptr ss : [esp+0x30], 3
        mov dword ptr ss : [esp+0xC], esi
        je public_62d480d
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62d480d
        add eax, 8
        jmp public_62d480f
        public_62d480d : nop
        xor eax, eax
        public_62d480f : nop
        cmp eax, dword ptr ss : [esp+0x10]
        je public_62d481f
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6341610
        public_62d481f : nop
        mov eax, dword ptr ss : [esp+0x38]
        test eax, eax
        je public_62d482c
        add eax, 8
        jmp public_62d482e
        public_62d482c : nop
        xor eax, eax
        public_62d482e : nop
        cmp eax, dword ptr ss : [esp+0x18]
        je public_62d483e
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6341610
        public_62d483e : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        lea esi, ds:[edi+0x158]
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        call public_62d4cf0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0xC]
        push ecx
        add eax, 8
        push eax
        call public_62d4d60
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0x30], 4
        je public_62d489e
        push 0
        lea ecx, ss:[esp+0x1C]
        call public_6341610
        public_62d489e : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        je public_62d49a1
        push 0
        lea ecx, ss:[esp+0x14]
        call public_6341610
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0xC
        public_62d48d0 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        test ecx, ecx
        je public_62d49a1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62d49a1
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62d49a1
        mov ecx, eax
        call public_62ac230
        mov esi, eax
        test esi, esi
        je public_62d49a1
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, 3
        ja public_62d49a1
/*FIXUP jmp dword ptr ds : [eax*4+public_62d49b4] @0x62d491f*/
  JMPTB cmp eax, 0
  JMPTB je public_62d4926
  JMPTB cmp eax, 1
  JMPTB je public_62d493e
  JMPTB cmp eax, 2
  JMPTB je public_62d4961
  JMPTB cmp eax, 3
  JMPTB je public_62d4984
  JMPTB int 3
        public_62d4926 : nop
        cmp dword ptr ds : [esi+0xC0], 0xA
        jne public_62d493e
        mov ecx, dword ptr ds : [esi+0x19C]
        test ecx, ecx
        je public_62d493e
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        public_62d493e : nop
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x1364
        call public_62ecc50
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0xC
        public_62d4961 : nop
        mov ecx, dword ptr ds : [esi+8]
        push 1
        add ecx, 0x1364
        call public_62ecc50
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0xC
        public_62d4984 : nop
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        je public_62d4993
        add eax, 0xFFFFFFF8
        jmp public_62d4995
        public_62d4993 : nop
        xor eax, eax
        public_62d4995 : nop
        push 0
        push 1
        push eax
        mov ecx, esi
        call public_62d4520
        public_62d49a1 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0xC
        UNREACHABLE_TRAP(0x62d4750)
        ASM_EXPORT_ENTRY_FIRST(0x62d4926, public_62d4926)
        ASM_EXPORT_ENTRY(0x62d493e, public_62d493e)
        ASM_EXPORT_ENTRY(0x62d4961, public_62d4961)
        ASM_EXPORT_ENTRY_LAST(0x62d4984, public_62d4984)
    }
}

#undef public_62d47e3
#undef public_62d480d
#undef public_62d480f
#undef public_62d481f
#undef public_62d482c
#undef public_62d482e
#undef public_62d483e
#undef public_62d489e
#undef public_62d48d0
#undef public_62d4926
#undef public_62d493e
#undef public_62d4961
#undef public_62d4984
#undef public_62d4993
#undef public_62d4995
#undef public_62d49a1

#pragma init_seg(compiler)
extern "C" void const* const public_62d4926 = __AsmFindLabelExport(&internal_62d4750, 0x62d4926);
extern "C" void const* const public_62d493e = __AsmFindLabelExport(&internal_62d4750, 0x62d493e);
extern "C" void const* const public_62d4961 = __AsmFindLabelExport(&internal_62d4750, 0x62d4961);
extern "C" void const* const public_62d4984 = __AsmFindLabelExport(&internal_62d4750, 0x62d4984);
