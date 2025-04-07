#include "Alchemy-PCH.h"


#define public_6206fdd _public_6206fdd
#define public_6206fe3 _public_6206fe3
#define public_6206ff9 _public_6206ff9
#define public_6207013 _public_6207013
#define public_6207050 _public_6207050
#define public_6207060 _public_6207060
#define public_6207068 _public_6207068
#define public_620706e _public_620706e
#define public_6207075 _public_6207075
#define public_620707b _public_620707b
#define public_620708b _public_620708b
#define public_62070a4 _public_62070a4

PROC_DECLARE(0x6206f90, internal_6206f90, public_6206f90);
extern "C" NAKED register_t __cdecl internal_6206f90()
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
        jnp public_62070a4
        mov ecx, dword ptr ds : [ebx+0x14]
        lea eax, ds:[ecx+1]
        cmp eax, 1
        je public_62070a4
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+ecx*8]
        fnstsw ax
        and eax, 0x100
        jne public_6206fdd
        mov ecx, dword ptr ds : [esi+ecx*8+4]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x28]
        pop esi
        pop ebx
        ret 0xC
        public_6206fdd : nop
        xor edx, edx
        test ecx, ecx
        jle public_6206ff9
        public_6206fe3 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 5
        jnp public_6206ff9
        inc edx
        add esi, 8
        cmp edx, ecx
        jl public_6206fe3
        public_6206ff9 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6207013
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push esi
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [ecx+0x28]
        pop esi
        pop ebx
        ret 0xC
        public_6207013 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [esi+4]
        push edi
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [esi]
        add eax, 0xFFFFFFFE
        cmp eax, 4
        fdivp 
        ja public_620708b
/*FIXUP jmp dword ptr ds : [eax*4+public_62070b8] @0x6207049*/
  JMPTB cmp eax, 0
  JMPTB je public_6207075
  JMPTB cmp eax, 1
  JMPTB je public_620707b
  JMPTB cmp eax, 2
  JMPTB je public_6207050
  JMPTB cmp eax, 3
  JMPTB je public_6207060
  JMPTB cmp eax, 4
  JMPTB je public_6207068
  JMPTB int 3
        public_6207050 : nop
        fld st(0)
        fadd st, st(1)
        fsubr dword ptr ds : [public_624bb14]
        fmul st, st(1)
        fmulp 
        jmp public_620708b
        public_6207060 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp st(2)
        jmp public_620706e
        public_6207068 : nop
        fld st(1)
        fcomp dword ptr ss : [esp+0x14]
        public_620706e : nop
        fnstsw ax
        test ah, 5
        jp public_620707b
        public_6207075 : nop
        fld st(0)
        fmulp 
        jmp public_620708b
        public_620707b : nop
        fsubr dword ptr ds : [public_624bac4]
        fld st(0)
        fmulp 
        fsubr dword ptr ds : [public_624bac4]
        public_620708b : nop
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
        public_62070a4 : nop
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x28]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6206f90)
        ASM_EXPORT_ENTRY_FIRST(0x6207050, public_6207050)
        ASM_EXPORT_ENTRY(0x6207060, public_6207060)
        ASM_EXPORT_ENTRY(0x6207068, public_6207068)
        ASM_EXPORT_ENTRY(0x6207075, public_6207075)
        ASM_EXPORT_ENTRY_LAST(0x620707b, public_620707b)
    }
}

#undef public_6206fdd
#undef public_6206fe3
#undef public_6206ff9
#undef public_6207013
#undef public_6207050
#undef public_6207060
#undef public_6207068
#undef public_620706e
#undef public_6207075
#undef public_620707b
#undef public_620708b
#undef public_62070a4

#pragma init_seg(compiler)
extern "C" void const* const public_6207050 = __AsmFindLabelExport(&internal_6206f90, 0x6207050);
extern "C" void const* const public_6207060 = __AsmFindLabelExport(&internal_6206f90, 0x6207060);
extern "C" void const* const public_6207068 = __AsmFindLabelExport(&internal_6206f90, 0x6207068);
extern "C" void const* const public_6207075 = __AsmFindLabelExport(&internal_6206f90, 0x6207075);
extern "C" void const* const public_620707b = __AsmFindLabelExport(&internal_6206f90, 0x620707b);
