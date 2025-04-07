#include "EngBase-PCH.h"


#define public_66226ed _public_66226ed
#define public_66226f2 _public_66226f2
#define public_66226fe _public_66226fe
#define public_6622725 _public_6622725
#define public_662274e _public_662274e
#define public_6622771 _public_6622771
#define public_6622781 _public_6622781
#define public_662279e _public_662279e
#define public_66227cd _public_66227cd
#define public_66227f3 _public_66227f3
#define public_6622835 _public_6622835

PROC_DECLARE(0x66226e0, internal_66226e0, public_66226e0);
extern "C" NAKED register_t __cdecl internal_66226e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_66226ed
        test ecx, ecx
        jne public_66226f2
        public_66226ed : nop
        xor eax, eax
        ret 0x10
        public_66226f2 : nop
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_66226fe
        xor eax, eax
        ret 0x10
        public_66226fe : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        jne public_6622835
        mov eax, dword ptr ds : [ecx+0x5C]
        mov byte ptr ds : [ecx+0xD4], 1
        dec eax
        cmp eax, 5
        ja public_6622835
/*FIXUP jmp dword ptr ds : [eax*4+public_6622840] @0x662271e*/
  JMPTB cmp eax, 0
  JMPTB je public_6622725
  JMPTB cmp eax, 1
  JMPTB je public_6622725
  JMPTB cmp eax, 2
  JMPTB je public_6622781
  JMPTB cmp eax, 3
  JMPTB je public_662279e
  JMPTB cmp eax, 4
  JMPTB je public_66227cd
  JMPTB cmp eax, 5
  JMPTB je public_66227f3
  JMPTB int 3
        public_6622725 : nop
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0xA8]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        and eax, 0x4100
        jne public_662274e
        fld dword ptr ds : [ecx+0xA8]
        mov eax, 1
        fstp dword ptr ds : [ecx+0xB8]
        ret 0x10
        public_662274e : nop
        fld dword ptr ds : [ecx+0xAC]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 5
        jp public_6622771
        fld dword ptr ds : [ecx+0xAC]
        mov eax, 1
        fstp dword ptr ds : [ecx+0xB8]
        ret 0x10
        public_6622771 : nop
        fld dword ptr ds : [edx]
        mov eax, 1
        fstp dword ptr ds : [ecx+0xB8]
        ret 0x10
        public_6622781 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0xB8], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0xBC], eax
        mov eax, 1
        ret 0x10
        public_662279e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0xC4], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0xC8], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0xCC], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xD0], eax
        mov eax, 1
        ret 0x10
        public_66227cd : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0xB8], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0xBC], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0xC0], eax
        mov eax, 1
        ret 0x10
        public_66227f3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0xB8], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0xBC], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0xC0], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC4], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx+0xC8], edx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [ecx+0xCC], edx
        mov eax, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [ecx+0xD0], eax
        public_6622835 : nop
        mov eax, 1
        ret 0x10
        UNREACHABLE_TRAP(0x66226e0)
        ASM_EXPORT_ENTRY_FIRST(0x6622725, public_6622725)
        ASM_EXPORT_ENTRY(0x6622781, public_6622781)
        ASM_EXPORT_ENTRY(0x662279e, public_662279e)
        ASM_EXPORT_ENTRY(0x66227cd, public_66227cd)
        ASM_EXPORT_ENTRY_LAST(0x66227f3, public_66227f3)
    }
}

#undef public_66226ed
#undef public_66226f2
#undef public_66226fe
#undef public_6622725
#undef public_662274e
#undef public_6622771
#undef public_6622781
#undef public_662279e
#undef public_66227cd
#undef public_66227f3
#undef public_6622835

#pragma init_seg(compiler)
extern "C" void const* const public_6622725 = __AsmFindLabelExport(&internal_66226e0, 0x6622725);
extern "C" void const* const public_6622781 = __AsmFindLabelExport(&internal_66226e0, 0x6622781);
extern "C" void const* const public_662279e = __AsmFindLabelExport(&internal_66226e0, 0x662279e);
extern "C" void const* const public_66227cd = __AsmFindLabelExport(&internal_66226e0, 0x66227cd);
extern "C" void const* const public_66227f3 = __AsmFindLabelExport(&internal_66226e0, 0x66227f3);
