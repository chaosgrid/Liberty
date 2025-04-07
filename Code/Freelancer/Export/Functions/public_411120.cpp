#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411120);

#define public_411156 _public_411156
#define public_411159 _public_411159
#define public_411161 _public_411161
#define public_41116b _public_41116b
#define public_41124f _public_41124f
#define public_4112ab _public_4112ab
#define public_4112ce _public_4112ce

PROC_DECLARE(0x411120, internal_411120, public_411120);
extern "C" NAKED register_t __cdecl internal_411120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [esi+0xB4]
        or cl, 0x20
        test cl, 4
        push edi
        mov byte ptr ds : [esi+0xB4], cl
        jne public_41116b
        mov edx, dword ptr ds : [eax]
        and cl, 0xFE
        mov byte ptr ds : [esi+0xB4], cl
        lea ecx, ds:[edx+2]
        cmp ecx, 5
        ja public_411161
/*FIXUP jmp dword ptr ds : [ecx*4+public_4112d4] @0x41114f*/
  JMPTB cmp ecx, 0
  JMPTB je public_411159
  JMPTB cmp ecx, 1
  JMPTB je public_411161
  JMPTB cmp ecx, 2
  JMPTB je public_411161
  JMPTB cmp ecx, 3
  JMPTB je public_411156
  JMPTB cmp ecx, 4
  JMPTB je public_411156
  JMPTB cmp ecx, 5
  JMPTB je public_411156
  JMPTB int 3
        public_411156 : nop
        mov dword ptr ds : [esi+0xC], edx
        public_411159 : nop
        mov dword ptr ds : [esi+0xB0], edx
        jmp public_41116b
        public_411161 : nop
        mov dword ptr ds : [esi+0xB0], 0xFFFFFFFF
        public_41116b : nop
        push ebx
        lea edx, ds:[eax+4]
        mov ebx, dword ptr ds : [edx]
        lea ecx, ds:[esi+0x10]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [edi+0xC], edx
        lea edx, ds:[eax+0x14]
        mov ebx, dword ptr ds : [edx]
        lea edi, ds:[esi+0x20]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [edi+0xC], edx
        lea edx, ds:[eax+0x24]
        mov ebx, dword ptr ds : [edx]
        lea edi, ds:[esi+0x30]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [edi+0xC], edx
        mov edx, dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+0x58], edx
        mov edx, dword ptr ds : [eax+0x50]
        mov dword ptr ds : [esi+0x5C], edx
        mov edx, dword ptr ds : [eax+0x54]
        mov dword ptr ds : [esi+0x60], edx
        mov edx, dword ptr ds : [eax+0x58]
        mov dword ptr ds : [esi+0x64], edx
        mov edx, dword ptr ds : [eax+0x5C]
        mov dword ptr ds : [esi+0x68], edx
        mov edx, dword ptr ds : [eax+0x60]
        mov dword ptr ds : [esi+0x6C], edx
        mov eax, dword ptr ds : [eax+0x64]
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x70], eax
        mov eax, dword ptr ds : [esi+0x18]
        lea edi, ds:[esi+0xC]
        mov dword ptr ds : [esi+0xAC], eax
        cmp dword ptr ds : [edi], 3
        mov dword ptr ds : [esi+0xA4], ecx
        mov dword ptr ds : [esi+0xA8], edx
        pop ebx
        je public_4112ab
        fld dword ptr ds : [esi+0x70]
        fcomp dword ptr ds : [public_5c8a5c]
        fnstsw ax
        test ah, 0x41
        jne public_41124f
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5c8a38 @0x411229*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a38
        push 0x23B
/*FIXUP push offset public_5c8a08 @0x411233*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a08
        mov eax, 0x100002
/*FIXUP push offset public_5c7418 @0x41123d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7418
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov dword ptr ds : [esi+0x70], 0x40490FDB
        public_41124f : nop
        fld dword ptr ds : [esi+0x60]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4112ab
        fld dword ptr ds : [esi+0x64]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4112ab
        fld dword ptr ds : [esi+0x68]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4112ab
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5c89e0 @0x411285*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c89e0
        push 0x241
/*FIXUP push offset public_5c8a08 @0x41128f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a08
        mov eax, 0x100002
/*FIXUP push offset public_5c7418 @0x411299*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7418
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov dword ptr ds : [esi+0x60], 0x3DCCCCCD
        public_4112ab : nop
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        jne public_4112ce
        test byte ptr ds : [esi+0xB4], 4
        je public_4112ce
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x12C]
        public_4112ce : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x411120)
        ASM_EXPORT_ENTRY_SINGLE(0x411156, public_411156)
    }
}

#undef public_411156
#undef public_411159
#undef public_411161
#undef public_41116b
#undef public_41124f
#undef public_4112ab
#undef public_4112ce

#pragma init_seg(compiler)
extern "C" void const* const public_411156 = __AsmFindLabelExport(&internal_411120, 0x411156);
