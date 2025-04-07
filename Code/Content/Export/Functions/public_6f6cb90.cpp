#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6cb90);
CLANG_FORWARD_PROC_SYMBOL(public_6f6cf20);

#define public_6f6cbf1 _public_6f6cbf1
#define public_6f6cc26 _public_6f6cc26
#define public_6f6cc45 _public_6f6cc45
#define public_6f6cc4d _public_6f6cc4d
#define public_6f6cc56 _public_6f6cc56
#define public_6f6cc61 _public_6f6cc61
#define public_6f6cc84 _public_6f6cc84
#define public_6f6cc8e _public_6f6cc8e
#define public_6f6cca0 _public_6f6cca0
#define public_6f6ccab _public_6f6ccab
#define public_6f6ccad _public_6f6ccad
#define public_6f6ccb1 _public_6f6ccb1
#define public_6f6ccc1 _public_6f6ccc1
#define public_6f6cccc _public_6f6cccc
#define public_6f6ccce _public_6f6ccce
#define public_6f6ccd2 _public_6f6ccd2
#define public_6f6ccd6 _public_6f6ccd6
#define public_6f6cd3f _public_6f6cd3f
#define public_6f6cd74 _public_6f6cd74
#define public_6f6cd91 _public_6f6cd91
#define public_6f6cda4 _public_6f6cda4
#define public_6f6cdb4 _public_6f6cdb4
#define public_6f6cdbf _public_6f6cdbf
#define public_6f6cdc1 _public_6f6cdc1
#define public_6f6cdc3 _public_6f6cdc3
#define public_6f6cdca _public_6f6cdca
#define public_6f6cded _public_6f6cded
#define public_6f6ce00 _public_6f6ce00
#define public_6f6ce0d _public_6f6ce0d
#define public_6f6ce20 _public_6f6ce20
#define public_6f6ce2d _public_6f6ce2d
#define public_6f6ce31 _public_6f6ce31
#define public_6f6ce3e _public_6f6ce3e

PROC_DECLARE(0x6f6cb90, internal_6f6cb90, public_6f6cb90);
extern "C" NAKED register_t __cdecl internal_6f6cb90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        je public_6f6ccd6
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call public_6f6cf20
        add esp, 8
        test al, al
        jne public_6f6ce3e
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x44], 0x3F800000
        je public_6f6cbf1
        mov ecx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x3C]
        push eax
        push ecx
        call dword ptr ds : [public_6fb364c]
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x48]
        push esi
        push eax
        call dword ptr ds : [public_6fb365c]
        add esp, 0x14
        public_6f6cbf1 : nop
        fld dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_6fd1c84]
        fnstsw ax
        test ah, 0x41
        jne public_6f6ce3e
        lea ecx, ss:[esp+0x10]
        push ecx
        xor ebp, ebp
        push ebp
        push edi
        xor bl, bl
        call dword ptr ds : [public_6fb3564]
        add esp, 0xC
        test eax, eax
        jne public_6f6ce3e
        mov edi, dword ptr ss : [esp+0x38]
        public_6f6cc26 : nop
        test bl, bl
        jne public_6f6ce31
        mov edx, dword ptr ss : [esp+0x30]
        lea eax, ds:[edx-1]
        cmp eax, 7
        ja public_6f6ccd2
/*FIXUP jmp dword ptr ds : [eax*4+public_6f6ce48] @0x6f6cc3e*/
  JMPTB cmp eax, 0
  JMPTB je public_6f6cc45
  JMPTB cmp eax, 1
  JMPTB je public_6f6cc45
  JMPTB cmp eax, 2
  JMPTB je public_6f6cc84
  JMPTB cmp eax, 3
  JMPTB je public_6f6cc8e
  JMPTB cmp eax, 4
  JMPTB je public_6f6ccb1
  JMPTB cmp eax, 5
  JMPTB je public_6f6cc45
  JMPTB cmp eax, 6
  JMPTB je public_6f6ce31
  JMPTB cmp eax, 7
  JMPTB je public_6f6ce31
  JMPTB int 3
        public_6f6cc45 : nop
        mov esi, dword ptr ds : [edi+8]
/*FIXUP push offset public_6fd1cd8 @0x6f6cc48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1cd8
        public_6f6cc4d : nop
        mov ecx, edi
        call public_6eb5f30
        cmp eax, esi
        public_6f6cc56 : nop
        setne bl
        test bl, bl
        jne public_6f6ce31
        public_6f6cc61 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        lea eax, ss:[esp+0x10]
        push eax
        inc ebp
        push ebp
        push ecx
        call dword ptr ds : [public_6fb3564]
        add esp, 0xC
        test eax, eax
        je public_6f6cc26
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x24
        ret 
        public_6f6cc84 : nop
        mov esi, dword ptr ds : [edi+8]
/*FIXUP push offset public_6fd1cd4 @0x6f6cc87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1cd4
        jmp public_6f6cc4d
        public_6f6cc8e : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f6ccab
        mov edx, dword ptr ds : [public_6fd1cd0]
        mov edi, edi
        public_6f6cca0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6ccad
        add eax, 4
        cmp eax, ecx
        jne public_6f6cca0
        public_6f6ccab : nop
        mov eax, ecx
        public_6f6ccad : nop
        cmp eax, ecx
        jmp public_6f6cc56
        public_6f6ccb1 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f6cccc
        mov edx, dword ptr ds : [public_6fd1ccc]
        public_6f6ccc1 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6ccce
        add eax, 4
        cmp eax, ecx
        jne public_6f6ccc1
        public_6f6cccc : nop
        mov eax, ecx
        public_6f6ccce : nop
        cmp eax, ecx
        jmp public_6f6cc56
        public_6f6ccd2 : nop
        xor bl, bl
        jmp public_6f6cc61
        public_6f6ccd6 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [eax]
        push edx
        push ecx
        call public_6f6cf20
        add esp, 8
        test al, al
        jne public_6f6ce3e
        mov esi, dword ptr ss : [esp+0x40]
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        je public_6f6cd3f
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        call dword ptr ds : [public_6fb364c]
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        call dword ptr ds : [public_6fb366c]
        mov eax, dword ptr ss : [esp+0x54]
        add esp, 0x10
        cmp eax, 0xFFFFFFFF
        je public_6f6cd3f
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x48]
        push esi
        push ecx
        call dword ptr ds : [public_6fb3474]
        add esp, 0xC
        public_6f6cd3f : nop
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_6fd1c84]
        fnstsw ax
        test ah, 0x41
        jne public_6f6ce3e
        lea edx, ss:[esp+0x10]
        push edx
        xor ebp, ebp
        push ebp
        push edi
        xor bl, bl
        call dword ptr ds : [public_6fb3564]
        add esp, 0xC
        test eax, eax
        jne public_6f6ce3e
        mov edi, dword ptr ss : [esp+0x38]
        public_6f6cd74 : nop
        test bl, bl
        jne public_6f6ce31
        mov eax, dword ptr ss : [esp+0x30]
        dec eax
        cmp eax, 7
        ja public_6f6ce2d
/*FIXUP jmp dword ptr ds : [eax*4+public_6f6ce68] @0x6f6cd8a*/
  JMPTB cmp eax, 0
  JMPTB je public_6f6cd91
  JMPTB cmp eax, 1
  JMPTB je public_6f6cd91
  JMPTB cmp eax, 2
  JMPTB je public_6f6cda4
  JMPTB cmp eax, 3
  JMPTB je public_6f6cded
  JMPTB cmp eax, 4
  JMPTB je public_6f6ce0d
  JMPTB cmp eax, 5
  JMPTB je public_6f6cd91
  JMPTB cmp eax, 6
  JMPTB je public_6f6ce31
  JMPTB cmp eax, 7
  JMPTB je public_6f6ce31
  JMPTB int 3
        public_6f6cd91 : nop
        mov esi, dword ptr ds : [edi+8]
/*FIXUP push offset public_6fd1cd8 @0x6f6cd94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1cd8
        mov ecx, edi
        call public_6eb5f30
        cmp eax, esi
        jmp public_6f6cdc3
        public_6f6cda4 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f6cdbf
        mov edx, dword ptr ds : [public_6fd1cd4]
        public_6f6cdb4 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6cdc1
        add eax, 4
        cmp eax, ecx
        jne public_6f6cdb4
        public_6f6cdbf : nop
        mov eax, ecx
        public_6f6cdc1 : nop
        cmp eax, ecx
        public_6f6cdc3 : nop
        setne bl
        test bl, bl
        jne public_6f6ce31
        public_6f6cdca : nop
        mov edx, dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x10]
        push ecx
        inc ebp
        push ebp
        push edx
        call dword ptr ds : [public_6fb3564]
        add esp, 0xC
        test eax, eax
        je public_6f6cd74
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x24
        ret 
        public_6f6cded : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f6cdbf
        mov edx, dword ptr ds : [public_6fd1cd0]
        lea ecx, ds:[ecx]
        public_6f6ce00 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6cdc1
        add eax, 4
        cmp eax, ecx
        jne public_6f6ce00
        jmp public_6f6cdbf
        public_6f6ce0d : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f6cdbf
        mov edx, dword ptr ds : [public_6fd1ccc]
        lea ecx, ds:[ecx]
        public_6f6ce20 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6cdc1
        add eax, 4
        cmp eax, ecx
        jne public_6f6ce20
        jmp public_6f6cdbf
        public_6f6ce2d : nop
        xor bl, bl
        jmp public_6f6cdca
        public_6f6ce31 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x24
        ret 
        public_6f6ce3e : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f6cb90)
        ASM_EXPORT_ENTRY_FIRST(0x6f6cc45, public_6f6cc45)
        ASM_EXPORT_ENTRY(0x6f6cc84, public_6f6cc84)
        ASM_EXPORT_ENTRY(0x6f6cc8e, public_6f6cc8e)
        ASM_EXPORT_ENTRY(0x6f6ccb1, public_6f6ccb1)
        ASM_EXPORT_ENTRY(0x6f6cd91, public_6f6cd91)
        ASM_EXPORT_ENTRY(0x6f6cda4, public_6f6cda4)
        ASM_EXPORT_ENTRY(0x6f6cded, public_6f6cded)
        ASM_EXPORT_ENTRY(0x6f6ce0d, public_6f6ce0d)
        ASM_EXPORT_ENTRY_LAST(0x6f6ce31, public_6f6ce31)
    }
}

#undef public_6f6cbf1
#undef public_6f6cc26
#undef public_6f6cc45
#undef public_6f6cc4d
#undef public_6f6cc56
#undef public_6f6cc61
#undef public_6f6cc84
#undef public_6f6cc8e
#undef public_6f6cca0
#undef public_6f6ccab
#undef public_6f6ccad
#undef public_6f6ccb1
#undef public_6f6ccc1
#undef public_6f6cccc
#undef public_6f6ccce
#undef public_6f6ccd2
#undef public_6f6ccd6
#undef public_6f6cd3f
#undef public_6f6cd74
#undef public_6f6cd91
#undef public_6f6cda4
#undef public_6f6cdb4
#undef public_6f6cdbf
#undef public_6f6cdc1
#undef public_6f6cdc3
#undef public_6f6cdca
#undef public_6f6cded
#undef public_6f6ce00
#undef public_6f6ce0d
#undef public_6f6ce20
#undef public_6f6ce2d
#undef public_6f6ce31
#undef public_6f6ce3e

#pragma init_seg(compiler)
extern "C" void const* const public_6f6cc45 = __AsmFindLabelExport(&internal_6f6cb90, 0x6f6cc45);
extern "C" void const* const public_6f6cc84 = __AsmFindLabelExport(&internal_6f6cb90, 0x6f6cc84);
extern "C" void const* const public_6f6cc8e = __AsmFindLabelExport(&internal_6f6cb90, 0x6f6cc8e);
extern "C" void const* const public_6f6ccb1 = __AsmFindLabelExport(&internal_6f6cb90, 0x6f6ccb1);
extern "C" void const* const public_6f6cd91 = __AsmFindLabelExport(&internal_6f6cb90, 0x6f6cd91);
extern "C" void const* const public_6f6cda4 = __AsmFindLabelExport(&internal_6f6cb90, 0x6f6cda4);
extern "C" void const* const public_6f6cded = __AsmFindLabelExport(&internal_6f6cb90, 0x6f6cded);
extern "C" void const* const public_6f6ce0d = __AsmFindLabelExport(&internal_6f6cb90, 0x6f6ce0d);
extern "C" void const* const public_6f6ce31 = __AsmFindLabelExport(&internal_6f6cb90, 0x6f6ce31);
