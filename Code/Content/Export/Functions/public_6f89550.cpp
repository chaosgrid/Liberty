#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f89550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

#define public_6f89565 _public_6f89565
#define public_6f89578 _public_6f89578
#define public_6f8958b _public_6f8958b
#define public_6f895b4 _public_6f895b4
#define public_6f895c7 _public_6f895c7
#define public_6f895da _public_6f895da
#define public_6f895e5 _public_6f895e5
#define public_6f895f0 _public_6f895f0
#define public_6f895f3 _public_6f895f3
#define public_6f89608 _public_6f89608

PROC_DECLARE(0x6f89550, internal_6f89550, public_6f89550);
extern "C" NAKED register_t __cdecl internal_6f89550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        dec eax
        cmp eax, 0xD
        ja public_6f89608
/*FIXUP jmp dword ptr ds : [eax*4+public_6f89610] @0x6f8955e*/
  JMPTB cmp eax, 0
  JMPTB je public_6f89565
  JMPTB cmp eax, 1
  JMPTB je public_6f89578
  JMPTB cmp eax, 2
  JMPTB je public_6f89608
  JMPTB cmp eax, 3
  JMPTB je public_6f89608
  JMPTB cmp eax, 4
  JMPTB je public_6f89608
  JMPTB cmp eax, 5
  JMPTB je public_6f89608
  JMPTB cmp eax, 6
  JMPTB je public_6f895c7
  JMPTB cmp eax, 7
  JMPTB je public_6f895da
  JMPTB cmp eax, 8
  JMPTB je public_6f895e5
  JMPTB cmp eax, 9
  JMPTB je public_6f89608
  JMPTB cmp eax, 0xA
  JMPTB je public_6f895f0
  JMPTB cmp eax, 0xB
  JMPTB je public_6f895b4
  JMPTB cmp eax, 0xC
  JMPTB je public_6f89608
  JMPTB cmp eax, 0xD
  JMPTB je public_6f8958b
  JMPTB int 3
        public_6f89565 : nop
        add ecx, 0x24
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_6fb314c]
        mov al, 1
        ret 8
        public_6f89578 : nop
        add ecx, 0x28
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_6fb314c]
        mov al, 1
        ret 8
        public_6f8958b : nop
        mov eax, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [eax+0x48]
        lea edx, ss:[esp+4]
        push edx
        push ecx
        call dword ptr ds : [public_6fb35a8]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 8
        push edx
        call dword ptr ds : [public_6fb307c]
        mov al, 1
        ret 8
        public_6f895b4 : nop
        add ecx, 0x20
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_6fb3170]
        mov al, 1
        ret 8
        public_6f895c7 : nop
        mov eax, dword ptr ds : [ecx+0x30]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [public_6fb3148]
        mov al, 1
        ret 8
        public_6f895da : nop
        fld dword ptr ds : [ecx+0x38]
        fmul dword ptr ds : [public_6fb8574]
        jmp public_6f895f3
        public_6f895e5 : nop
        fld dword ptr ds : [ecx+0x34]
        fmul dword ptr ds : [public_6fb8574]
        jmp public_6f895f3
        public_6f895f0 : nop
        fld dword ptr ds : [ecx+0x2C]
        public_6f895f3 : nop
        call public_6fa9130
        mov ecx, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [public_6fb3148]
        mov al, 1
        ret 8
        public_6f89608 : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x6f89550)
        ASM_EXPORT_ENTRY_FIRST(0x6f89565, public_6f89565)
        ASM_EXPORT_ENTRY(0x6f89578, public_6f89578)
        ASM_EXPORT_ENTRY(0x6f8958b, public_6f8958b)
        ASM_EXPORT_ENTRY(0x6f895b4, public_6f895b4)
        ASM_EXPORT_ENTRY(0x6f895c7, public_6f895c7)
        ASM_EXPORT_ENTRY(0x6f895da, public_6f895da)
        ASM_EXPORT_ENTRY(0x6f895e5, public_6f895e5)
        ASM_EXPORT_ENTRY(0x6f895f0, public_6f895f0)
        ASM_EXPORT_ENTRY_LAST(0x6f89608, public_6f89608)
    }
}

#undef public_6f89565
#undef public_6f89578
#undef public_6f8958b
#undef public_6f895b4
#undef public_6f895c7
#undef public_6f895da
#undef public_6f895e5
#undef public_6f895f0
#undef public_6f895f3
#undef public_6f89608

#pragma init_seg(compiler)
extern "C" void const* const public_6f89565 = __AsmFindLabelExport(&internal_6f89550, 0x6f89565);
extern "C" void const* const public_6f89578 = __AsmFindLabelExport(&internal_6f89550, 0x6f89578);
extern "C" void const* const public_6f8958b = __AsmFindLabelExport(&internal_6f89550, 0x6f8958b);
extern "C" void const* const public_6f895b4 = __AsmFindLabelExport(&internal_6f89550, 0x6f895b4);
extern "C" void const* const public_6f895c7 = __AsmFindLabelExport(&internal_6f89550, 0x6f895c7);
extern "C" void const* const public_6f895da = __AsmFindLabelExport(&internal_6f89550, 0x6f895da);
extern "C" void const* const public_6f895e5 = __AsmFindLabelExport(&internal_6f89550, 0x6f895e5);
extern "C" void const* const public_6f895f0 = __AsmFindLabelExport(&internal_6f89550, 0x6f895f0);
extern "C" void const* const public_6f89608 = __AsmFindLabelExport(&internal_6f89550, 0x6f89608);
