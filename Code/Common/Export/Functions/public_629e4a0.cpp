#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_629de50);
CLANG_FORWARD_PROC_SYMBOL(public_629e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_62b3040);
CLANG_FORWARD_PROC_SYMBOL(public_62b30f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b3180);
CLANG_FORWARD_PROC_SYMBOL(public_62b3210);

#define public_629e569 _public_629e569
#define public_629e57f _public_629e57f
#define public_629e581 _public_629e581
#define public_629e5ba _public_629e5ba
#define public_629e5d4 _public_629e5d4
#define public_629e5ec _public_629e5ec
#define public_629e604 _public_629e604
#define public_629e623 _public_629e623
#define public_629e62d _public_629e62d

PROC_DECLARE(0x629e4a0, internal_629e4a0, public_629e4a0);
extern "C" NAKED register_t __cdecl internal_629e4a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x54
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x60]
        test edi, edi
        mov esi, ecx
        je public_629e62d
        mov eax, dword ptr ds : [edi+0xF0]
        test eax, eax
        je public_629e62d
        lea eax, ds:[esi+0x20]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 8
        call public_629de50
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        lea edx, ds:[edi+0x2C]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], ecx
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x2C], edx
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        call public_6288800
        mov ecx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [ecx+0x70]
        add esp, 0xC
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_629e569
        fld dword ptr ds : [ecx+0x70]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_629e569
        pop edi
        mov eax, 2
        pop esi
        add esp, 0x54
        ret 4
        public_629e569 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_629e57f
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_629e581
        public_629e57f : nop
        xor esi, esi
        public_629e581 : nop
        mov ecx, dword ptr ds : [edi+0xEC]
        fld dword ptr ds : [ecx+0x5C]
        fst dword ptr ss : [esp+0x60]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_629e5ba
        mov ecx, esi
        call public_62b3040
        fcomp dword ptr ss : [esp+0x60]
        fnstsw ax
        test ah, 5
        jp public_629e5ba
        pop edi
        mov eax, 3
        pop esi
        add esp, 0x54
        ret 4
        public_629e5ba : nop
        mov ecx, dword ptr ds : [edi+0xEC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        add eax, 0xFFFFFFE6
        cmp eax, 7
        ja public_629e623
/*FIXUP jmp dword ptr ds : [eax*4+public_629e63c] @0x629e5cd*/
  JMPTB cmp eax, 0
  JMPTB je public_629e5d4
  JMPTB cmp eax, 1
  JMPTB je public_629e5ec
  JMPTB cmp eax, 2
  JMPTB je public_629e623
  JMPTB cmp eax, 3
  JMPTB je public_629e623
  JMPTB cmp eax, 4
  JMPTB je public_629e623
  JMPTB cmp eax, 5
  JMPTB je public_629e604
  JMPTB cmp eax, 6
  JMPTB je public_629e604
  JMPTB cmp eax, 7
  JMPTB je public_629e604
  JMPTB int 3
        public_629e5d4 : nop
        mov ecx, esi
        call public_62b30f0
        test eax, eax
        jne public_629e623
        pop edi
        mov eax, 5
        pop esi
        add esp, 0x54
        ret 4
        public_629e5ec : nop
        mov ecx, esi
        call public_62b3180
        test eax, eax
        jne public_629e623
        pop edi
        mov eax, 4
        pop esi
        add esp, 0x54
        ret 4
        public_629e604 : nop
        mov edi, dword ptr ds : [edi+0xEC]
        push edi
        mov ecx, esi
        call public_62b3210
        test eax, eax
        jne public_629e623
        pop edi
        mov eax, 6
        pop esi
        add esp, 0x54
        ret 4
        public_629e623 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x54
        ret 4
        public_629e62d : nop
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x629e4a0)
        ASM_EXPORT_ENTRY_FIRST(0x629e5d4, public_629e5d4)
        ASM_EXPORT_ENTRY(0x629e5ec, public_629e5ec)
        ASM_EXPORT_ENTRY(0x629e604, public_629e604)
        ASM_EXPORT_ENTRY_LAST(0x629e623, public_629e623)
    }
}

#undef public_629e569
#undef public_629e57f
#undef public_629e581
#undef public_629e5ba
#undef public_629e5d4
#undef public_629e5ec
#undef public_629e604
#undef public_629e623
#undef public_629e62d

#pragma init_seg(compiler)
extern "C" void const* const public_629e5d4 = __AsmFindLabelExport(&internal_629e4a0, 0x629e5d4);
extern "C" void const* const public_629e5ec = __AsmFindLabelExport(&internal_629e4a0, 0x629e5ec);
extern "C" void const* const public_629e604 = __AsmFindLabelExport(&internal_629e4a0, 0x629e604);
extern "C" void const* const public_629e623 = __AsmFindLabelExport(&internal_629e4a0, 0x629e623);
