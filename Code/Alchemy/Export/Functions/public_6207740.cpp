#include "Alchemy-PCH.h"


#define public_620778d _public_620778d
#define public_6207793 _public_6207793
#define public_62077a9 _public_62077a9
#define public_62077c3 _public_62077c3
#define public_6207800 _public_6207800
#define public_6207810 _public_6207810
#define public_6207818 _public_6207818
#define public_620781e _public_620781e
#define public_6207825 _public_6207825
#define public_620782b _public_620782b
#define public_620783b _public_620783b
#define public_6207854 _public_6207854

PROC_DECLARE(0x6207740, internal_6207740, public_6207740);
extern "C" NAKED register_t __cdecl internal_6207740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        fld dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ebx+0xC]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jnp public_6207854
        mov ecx, dword ptr ds : [ebx+0x14]
        lea eax, ds:[ecx+1]
        cmp eax, 1
        je public_6207854
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+ecx*8]
        fnstsw ax
        and eax, 0x100
        jne public_620778d
        mov ecx, dword ptr ds : [esi+ecx*8+4]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        pop esi
        pop ebx
        ret 0xC
        public_620778d : nop
        xor edx, edx
        test ecx, ecx
        jle public_62077a9
        public_6207793 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 5
        jnp public_62077a9
        inc edx
        add esi, 8
        cmp edx, ecx
        jl public_6207793
        public_62077a9 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_62077c3
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push esi
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [ecx+0x1C]
        pop esi
        pop ebx
        ret 0xC
        public_62077c3 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+4]
        push edi
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [esi]
        add eax, 0xFFFFFFFE
        cmp eax, 4
        fdivp 
        ja public_620783b
/*FIXUP jmp dword ptr ds : [eax*4+public_6207868] @0x62077f9*/
  JMPTB cmp eax, 0
  JMPTB je public_6207825
  JMPTB cmp eax, 1
  JMPTB je public_620782b
  JMPTB cmp eax, 2
  JMPTB je public_6207800
  JMPTB cmp eax, 3
  JMPTB je public_6207810
  JMPTB cmp eax, 4
  JMPTB je public_6207818
  JMPTB int 3
        public_6207800 : nop
        fld st(0)
        fadd st, st(1)
        fsubr dword ptr ds : [public_624bb14]
        fmul st, st(1)
        fmulp 
        jmp public_620783b
        public_6207810 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp st(2)
        jmp public_620781e
        public_6207818 : nop
        fld st(1)
        fcomp dword ptr ss : [esp+0x14]
        public_620781e : nop
        fnstsw ax
        test ah, 5
        jp public_620782b
        public_6207825 : nop
        fld st(0)
        fmulp 
        jmp public_620783b
        public_620782b : nop
        fsubr dword ptr ds : [public_624bac4]
        fld st(0)
        fmulp 
        fsubr dword ptr ds : [public_624bac4]
        public_620783b : nop
        fld dword ptr ds : [public_624bac4]
        fsub st, st(1)
        pop esi
        pop ebx
        fmulp st(2), st
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        ret 0xC
        public_6207854 : nop
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x1C]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6207740)
        ASM_EXPORT_ENTRY_FIRST(0x6207800, public_6207800)
        ASM_EXPORT_ENTRY(0x6207810, public_6207810)
        ASM_EXPORT_ENTRY(0x6207818, public_6207818)
        ASM_EXPORT_ENTRY(0x6207825, public_6207825)
        ASM_EXPORT_ENTRY_LAST(0x620782b, public_620782b)
    }
}

#undef public_620778d
#undef public_6207793
#undef public_62077a9
#undef public_62077c3
#undef public_6207800
#undef public_6207810
#undef public_6207818
#undef public_620781e
#undef public_6207825
#undef public_620782b
#undef public_620783b
#undef public_6207854

#pragma init_seg(compiler)
extern "C" void const* const public_6207800 = __AsmFindLabelExport(&internal_6207740, 0x6207800);
extern "C" void const* const public_6207810 = __AsmFindLabelExport(&internal_6207740, 0x6207810);
extern "C" void const* const public_6207818 = __AsmFindLabelExport(&internal_6207740, 0x6207818);
extern "C" void const* const public_6207825 = __AsmFindLabelExport(&internal_6207740, 0x6207825);
extern "C" void const* const public_620782b = __AsmFindLabelExport(&internal_6207740, 0x620782b);
