#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c28f50);

#define public_6c22d69 _public_6c22d69
#define public_6c22d83 _public_6c22d83
#define public_6c22dab _public_6c22dab
#define public_6c22de2 _public_6c22de2
#define public_6c22e19 _public_6c22e19
#define public_6c22e50 _public_6c22e50
#define public_6c22e87 _public_6c22e87
#define public_6c22ebe _public_6c22ebe
#define public_6c22edc _public_6c22edc
#define public_6c22f0b _public_6c22f0b
#define public_6c22f12 _public_6c22f12
#define public_6c22f22 _public_6c22f22
#define public_6c22f2a _public_6c22f2a
#define public_6c22f31 _public_6c22f31
#define public_6c22f36 _public_6c22f36
#define public_6c22f7a _public_6c22f7a

PROC_DECLARE(0x6c22d50, internal_6c22d50, public_6c22d50);
extern "C" NAKED register_t __cdecl internal_6c22d50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x1E8]
        cmp eax, dword ptr ds : [ecx+0x14]
        push esi
        push edi
        jne public_6c22d69
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x18
        public_6c22d69 : nop
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov ecx, esi
        call public_6c28f50
        test al, al
        jne public_6c22d83
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x18
        public_6c22d83 : nop
        cmp edi, 0x80
        ja public_6c22ebe
        je public_6c22dab
        lea eax, ds:[edi-1]
        cmp eax, 0xF
        ja public_6c22f22
/*FIXUP movzx eax, byte ptr ds : [eax+public_6c22fc4] @0x6c22d9d*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6c22fac] @0x6c22da4*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c000000000003e9
  JMPTB mov eax, 0
  JMPTB public_4c000000000003e9 : nop
        je public_6c22dab
  JMPTB cmp eax, 1
  JMPTB jne public_4c000000000003e5
  JMPTB mov eax, 1
  JMPTB public_4c000000000003e5 : nop
        je public_6c22e19
  JMPTB cmp eax, 2
  JMPTB jne public_4c000000000003e1
  JMPTB mov eax, 5
  JMPTB public_4c000000000003e1 : nop
        je public_6c22f22
  JMPTB cmp eax, 3
  JMPTB jne public_4c000000000003dd
  JMPTB mov eax, 2
  JMPTB public_4c000000000003dd : nop
        je public_6c22e50
  JMPTB cmp eax, 4
  JMPTB jne public_4c000000000003d9
  JMPTB mov eax, 5
  JMPTB public_4c000000000003d9 : nop
        je public_6c22f22
  JMPTB cmp eax, 5
  JMPTB jne public_4c000000000003d5
  JMPTB mov eax, 5
  JMPTB public_4c000000000003d5 : nop
        je public_6c22f22
  JMPTB cmp eax, 6
  JMPTB jne public_4c000000000003d1
  JMPTB mov eax, 5
  JMPTB public_4c000000000003d1 : nop
        je public_6c22f22
  JMPTB cmp eax, 7
  JMPTB jne public_4c000000000003cd
  JMPTB mov eax, 3
  JMPTB public_4c000000000003cd : nop
        je public_6c22de2
  JMPTB cmp eax, 8
  JMPTB jne public_4c000000000003c9
  JMPTB mov eax, 5
  JMPTB public_4c000000000003c9 : nop
        je public_6c22f22
  JMPTB cmp eax, 9
  JMPTB jne public_4c000000000003c5
  JMPTB mov eax, 5
  JMPTB public_4c000000000003c5 : nop
        je public_6c22f22
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c000000000003c1
  JMPTB mov eax, 5
  JMPTB public_4c000000000003c1 : nop
        je public_6c22f22
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c000000000003bd
  JMPTB mov eax, 5
  JMPTB public_4c000000000003bd : nop
        je public_6c22f22
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c000000000003b9
  JMPTB mov eax, 5
  JMPTB public_4c000000000003b9 : nop
        je public_6c22f22
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c000000000003b5
  JMPTB mov eax, 5
  JMPTB public_4c000000000003b5 : nop
        je public_6c22f22
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c000000000003b1
  JMPTB mov eax, 5
  JMPTB public_4c000000000003b1 : nop
        je public_6c22f22
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c000000000003ad
  JMPTB mov eax, 4
  JMPTB public_4c000000000003ad : nop
        je public_6c22e87
  JMPTB int 3
        public_6c22dab : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        ret 0x18
        public_6c22de2 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+0x1C]
        pop edi
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        ret 0x18
        public_6c22e19 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x48]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+0x44]
        pop edi
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        ret 0x18
        public_6c22e50 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x5C]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x64]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+0x58]
        pop edi
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        ret 0x18
        public_6c22e87 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+0x30]
        pop edi
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        ret 0x18
        public_6c22ebe : nop
        cmp edi, 0x8000
        ja public_6c22f12
        je public_6c22f0b
        cmp edi, 0x100
        je public_6c22edc
        cmp edi, 0x4000
        jne public_6c22f22
        xor eax, eax
        jmp public_6c22f36
        public_6c22edc : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], 4
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        shr ecx, 1
        mov dword ptr ds : [edx], ecx
        pop edi
        mov dword ptr ds : [eax], 4
        xor eax, eax
        pop esi
        ret 0x18
        public_6c22f0b : nop
        mov eax, 1
        jmp public_6c22f36
        public_6c22f12 : nop
        cmp edi, 0x10000
        je public_6c22f31
        cmp edi, 0x20000
        je public_6c22f2a
        public_6c22f22 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x18
        public_6c22f2a : nop
        mov eax, 3
        jmp public_6c22f36
        public_6c22f31 : nop
        mov eax, 2
        public_6c22f36 : nop
        mov ecx, dword ptr ds : [esi+0x38]
        test ecx, ecx
        je public_6c22f7a
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        mov ecx, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [ecx+eax+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [edx+eax+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [ecx+eax+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        ret 0x18
        public_6c22f7a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], 0
        mov dword ptr ds : [eax], 0
        pop edi
        mov dword ptr ds : [ecx], 0
        xor eax, eax
        pop esi
        ret 0x18
        UNREACHABLE_TRAP(0x6c22d50)
        ASM_EXPORT_ENTRY_FIRST(0x6c22dab, public_6c22dab)
        ASM_EXPORT_ENTRY(0x6c22de2, public_6c22de2)
        ASM_EXPORT_ENTRY(0x6c22e19, public_6c22e19)
        ASM_EXPORT_ENTRY(0x6c22e50, public_6c22e50)
        ASM_EXPORT_ENTRY(0x6c22e87, public_6c22e87)
        ASM_EXPORT_ENTRY_LAST(0x6c22f22, public_6c22f22)
    }
}

#undef public_6c22d69
#undef public_6c22d83
#undef public_6c22dab
#undef public_6c22de2
#undef public_6c22e19
#undef public_6c22e50
#undef public_6c22e87
#undef public_6c22ebe
#undef public_6c22edc
#undef public_6c22f0b
#undef public_6c22f12
#undef public_6c22f22
#undef public_6c22f2a
#undef public_6c22f31
#undef public_6c22f36
#undef public_6c22f7a

#pragma init_seg(compiler)
extern "C" void const* const public_6c22dab = __AsmFindLabelExport(&internal_6c22d50, 0x6c22dab);
extern "C" void const* const public_6c22de2 = __AsmFindLabelExport(&internal_6c22d50, 0x6c22de2);
extern "C" void const* const public_6c22e19 = __AsmFindLabelExport(&internal_6c22d50, 0x6c22e19);
extern "C" void const* const public_6c22e50 = __AsmFindLabelExport(&internal_6c22d50, 0x6c22e50);
extern "C" void const* const public_6c22e87 = __AsmFindLabelExport(&internal_6c22d50, 0x6c22e87);
extern "C" void const* const public_6c22f22 = __AsmFindLabelExport(&internal_6c22d50, 0x6c22f22);
