#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4110c0);

#define public_4110ee _public_4110ee
#define public_4110f1 _public_4110f1
#define public_4110fa _public_4110fa

PROC_DECLARE(0x4110c0, internal_4110c0, public_4110c0);
extern "C" NAKED register_t __cdecl internal_4110c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov al, byte ptr ds : [ecx+0xB4]
        push ebx
        mov bl, byte ptr ss : [esp+0xC]
        mov dl, al
        xor dl, bl
        and dl, 1
        xor dl, al
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0xB4], dl
        lea edx, ds:[eax+2]
        cmp edx, 5
        pop ebx
        ja public_4110fa
/*FIXUP jmp dword ptr ds : [edx*4+public_411108] @0x4110e7*/
  JMPTB cmp edx, 0
  JMPTB je public_4110f1
  JMPTB cmp edx, 1
  JMPTB je public_4110fa
  JMPTB cmp edx, 2
  JMPTB je public_4110fa
  JMPTB cmp edx, 3
  JMPTB je public_4110ee
  JMPTB cmp edx, 4
  JMPTB je public_4110ee
  JMPTB cmp edx, 5
  JMPTB je public_4110ee
  JMPTB int 3
        public_4110ee : nop
        mov dword ptr ds : [ecx+0xC], eax
        public_4110f1 : nop
        mov dword ptr ds : [ecx+0xB0], eax
        ret 8
        public_4110fa : nop
        mov dword ptr ds : [ecx+0xB0], 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x4110c0)
        ASM_EXPORT_ENTRY_SINGLE(0x4110ee, public_4110ee)
    }
}

#undef public_4110ee
#undef public_4110f1
#undef public_4110fa

#pragma init_seg(compiler)
extern "C" void const* const public_4110ee = __AsmFindLabelExport(&internal_4110c0, 0x4110ee);
