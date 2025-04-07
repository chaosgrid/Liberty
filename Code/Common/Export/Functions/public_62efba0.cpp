#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fb890);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_62efbb6 _public_62efbb6
#define public_62efbe0 _public_62efbe0
#define public_62efbfe _public_62efbfe
#define public_62efc03 _public_62efc03
#define public_62efc30 _public_62efc30
#define public_62efc53 _public_62efc53
#define public_62efc80 _public_62efc80
#define public_62efca3 _public_62efca3
#define public_62efcd4 _public_62efcd4
#define public_62efcf3 _public_62efcf3
#define public_62efd24 _public_62efd24
#define public_62efd43 _public_62efd43
#define public_62efd49 _public_62efd49
#define public_62efd5b _public_62efd5b

PROC_DECLARE(0x62efba0, internal_62efba0, public_62efba0);
extern "C" NAKED register_t __cdecl internal_62efba0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 6
        push esi
        push edi
        ja public_62efd5b
/*FIXUP jmp dword ptr ds : [eax*4+public_62efd64] @0x62efbaf*/
  JMPTB cmp eax, 0
  JMPTB je public_62efbb6
  JMPTB cmp eax, 1
  JMPTB je public_62efd5b
  JMPTB cmp eax, 2
  JMPTB je public_62efca3
  JMPTB cmp eax, 3
  JMPTB je public_62efc53
  JMPTB cmp eax, 4
  JMPTB je public_62efcf3
  JMPTB cmp eax, 5
  JMPTB je public_62efd49
  JMPTB cmp eax, 6
  JMPTB je public_62efc03
  JMPTB int 3
        public_62efbb6 : nop
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [public_63fcaf8]
        jae public_62efbfe
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_63fcae8
        xor esi, esi
        call public_632c410
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcaec]
        je public_62efbfe
        nop 
        public_62efbe0 : nop
        cmp esi, edi
        je public_62efd43
        lea ecx, ss:[esp+0x10]
        inc esi
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcaec]
        jne public_62efbe0
        public_62efbfe : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_62efc03 : nop
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [public_63fcae4]
        jae public_62efbfe
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fcad4
        xor esi, esi
        call public_632c410
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcad8]
        je public_62efbfe
        lea esp, ss:[esp]
        public_62efc30 : nop
        cmp esi, edi
        je public_62efd43
        lea ecx, ss:[esp+0x10]
        inc esi
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcad8]
        jne public_62efc30
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_62efc53 : nop
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [public_63fcad0]
        jae public_62efbfe
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_63fcac0
        xor esi, esi
        call public_632c410
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcac4]
        je public_62efbfe
        lea esp, ss:[esp]
        public_62efc80 : nop
        cmp esi, edi
        je public_62efd43
        lea ecx, ss:[esp+0x10]
        inc esi
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcac4]
        jne public_62efc80
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_62efca3 : nop
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [public_63fcabc]
        jae public_62efbfe
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_63fcaac
        xor esi, esi
        call public_632c410
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcab0]
        je public_62efbfe
        public_62efcd4 : nop
        cmp esi, edi
        je public_62efd43
        lea ecx, ss:[esp+0x10]
        inc esi
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcab0]
        jne public_62efcd4
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_62efcf3 : nop
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [public_63fcaa8]
        jae public_62efbfe
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fca98
        xor esi, esi
        call public_632c410
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fca9c]
        je public_62efbfe
        public_62efd24 : nop
        cmp esi, edi
        je public_62efd43
        lea ecx, ss:[esp+0x10]
        inc esi
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fca9c]
        jne public_62efd24
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_62efd43 : nop
        mov eax, dword ptr ds : [eax+0xC]
        pop edi
        pop esi
        ret 
        public_62efd49 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov ecx, offset public_63fca84
        call public_62fb890
        pop edi
        pop esi
        ret 
        public_62efd5b : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62efba0)
        ASM_EXPORT_ENTRY_FIRST(0x62efbb6, public_62efbb6)
        ASM_EXPORT_ENTRY(0x62efc03, public_62efc03)
        ASM_EXPORT_ENTRY(0x62efc53, public_62efc53)
        ASM_EXPORT_ENTRY(0x62efca3, public_62efca3)
        ASM_EXPORT_ENTRY(0x62efcf3, public_62efcf3)
        ASM_EXPORT_ENTRY(0x62efd49, public_62efd49)
        ASM_EXPORT_ENTRY_LAST(0x62efd5b, public_62efd5b)
    }
}

#undef public_62efbb6
#undef public_62efbe0
#undef public_62efbfe
#undef public_62efc03
#undef public_62efc30
#undef public_62efc53
#undef public_62efc80
#undef public_62efca3
#undef public_62efcd4
#undef public_62efcf3
#undef public_62efd24
#undef public_62efd43
#undef public_62efd49
#undef public_62efd5b

#pragma init_seg(compiler)
extern "C" void const* const public_62efbb6 = __AsmFindLabelExport(&internal_62efba0, 0x62efbb6);
extern "C" void const* const public_62efc03 = __AsmFindLabelExport(&internal_62efba0, 0x62efc03);
extern "C" void const* const public_62efc53 = __AsmFindLabelExport(&internal_62efba0, 0x62efc53);
extern "C" void const* const public_62efca3 = __AsmFindLabelExport(&internal_62efba0, 0x62efca3);
extern "C" void const* const public_62efcf3 = __AsmFindLabelExport(&internal_62efba0, 0x62efcf3);
extern "C" void const* const public_62efd49 = __AsmFindLabelExport(&internal_62efba0, 0x62efd49);
extern "C" void const* const public_62efd5b = __AsmFindLabelExport(&internal_62efba0, 0x62efd5b);
