#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_440460);
CLANG_FORWARD_PROC_SYMBOL(public_441ea0);

#define public_440481 _public_440481
#define public_4404b3 _public_4404b3
#define public_4404e5 _public_4404e5
#define public_440503 _public_440503
#define public_44051f _public_44051f
#define public_44052f _public_44052f

PROC_DECLARE(0x440460, internal_440460, public_440460);
extern "C" NAKED register_t __cdecl internal_440460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xFFFFFFFE
        sub esp, 0x30
        cmp eax, 0xA
        ja public_44052f
/*FIXUP movzx edx, byte ptr ds : [eax+public_44054c] @0x440473*/
/*FIXUP jmp dword ptr ds : [edx*4+public_440538] @0x44047a*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_4404e5
  JMPTB cmp eax, 1
  JMPTB mov edx, 1
  JMPTB je public_440503
  JMPTB cmp eax, 2
  JMPTB mov edx, 4
  JMPTB je public_44052f
  JMPTB cmp eax, 3
  JMPTB mov edx, 4
  JMPTB je public_44052f
  JMPTB cmp eax, 4
  JMPTB mov edx, 4
  JMPTB je public_44052f
  JMPTB cmp eax, 5
  JMPTB mov edx, 2
  JMPTB je public_4404b3
  JMPTB cmp eax, 6
  JMPTB mov edx, 4
  JMPTB je public_44052f
  JMPTB cmp eax, 7
  JMPTB mov edx, 4
  JMPTB je public_44052f
  JMPTB cmp eax, 8
  JMPTB mov edx, 4
  JMPTB je public_44052f
  JMPTB cmp eax, 9
  JMPTB mov edx, 4
  JMPTB je public_44052f
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 3
  JMPTB je public_440481
  JMPTB int 3
        public_440481 : nop
        mov edx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp]
        push eax
/*FIXUP push offset public_5cb748 @0x44048a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb748
        push edx
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0xBF8CCCCD
        call public_441ea0
        add esp, 0x30
        ret 8
        public_4404b3 : nop
        mov edx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0xC]
        push eax
/*FIXUP push offset public_5cb70c @0x4404bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb70c
        push edx
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0xBDB020C5
        mov dword ptr ss : [esp+0x20], 0xBFA4DD2F
        call public_441ea0
        add esp, 0x30
        ret 8
        public_4404e5 : nop
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x20], 0xBFBFBE77
        lea eax, ss:[esp+0x18]
        jmp public_44051f
        public_440503 : nop
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x2C], 0xBFBFBE77
        lea eax, ss:[esp+0x24]
        public_44051f : nop
        mov edx, dword ptr ss : [esp+0x38]
        push eax
/*FIXUP push offset public_5cb6d8 @0x440524*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6d8
        push edx
        call public_441ea0
        public_44052f : nop
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x440460)
        ASM_EXPORT_ENTRY_SINGLE(0x44052f, public_44052f)
    }
}

#undef public_440481
#undef public_4404b3
#undef public_4404e5
#undef public_440503
#undef public_44051f
#undef public_44052f

#pragma init_seg(compiler)
extern "C" void const* const public_44052f = __AsmFindLabelExport(&internal_440460, 0x44052f);
