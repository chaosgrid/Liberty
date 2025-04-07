#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1340);
CLANG_FORWARD_PROC_SYMBOL(public_65d734e);

#define public_65d1361 _public_65d1361
#define public_65d1374 _public_65d1374

PROC_DECLARE(0x65d1340, internal_65d1340, public_65d1340);
extern "C" NAKED register_t __cdecl internal_65d1340()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0x50
        lea eax, ds:[ecx-0x2714]
        cmp eax, 0x59
        ja public_65d1361
/*FIXUP xor edx, edx @0x65d1352*/
/*FIXUP mov dl, byte ptr ds : [eax+public_65d1380] @0x65d1354*/
/*FIXUP jmp dword ptr ds : [edx*4+public_65d1378] @0x65d135a*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 1
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 2
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 3
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 4
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 5
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 6
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 7
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 8
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 9
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0xB
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0xC
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0xD
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0xE
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0xF
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x10
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x11
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x12
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x13
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x14
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x15
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x16
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x17
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x18
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x19
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x1A
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x1B
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x1C
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x1D
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x1E
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x1F
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x20
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x21
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x22
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x23
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x24
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x25
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x26
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x27
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x28
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x29
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x2A
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x2B
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x2C
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x2D
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x2E
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x2F
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x30
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x31
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x32
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x33
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x34
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x35
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x36
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x37
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x38
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x39
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x3A
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x3B
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x3C
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x3D
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x3E
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x3F
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x40
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x41
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x42
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x43
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x44
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x45
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x46
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x47
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x48
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x49
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x4A
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x4B
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x4C
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x4D
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x4E
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x4F
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x50
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x51
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x52
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x53
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x54
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x55
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x56
  JMPTB mov edx, 1
  JMPTB je public_65d1361
  JMPTB cmp eax, 0x57
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x58
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB cmp eax, 0x59
  JMPTB mov edx, 0
  JMPTB je public_65d1374
  JMPTB int 3
        public_65d1361 : nop
        push ecx
        lea eax, ss:[esp+4]
/*FIXUP push offset public_65e3040 @0x65d1366*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3040
        push eax
        call public_65d734e
        add esp, 0xC
        public_65d1374 : nop
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x65d1340)
        ASM_EXPORT_ENTRY_FIRST(0x65d1361, public_65d1361)
        ASM_EXPORT_ENTRY_LAST(0x65d1374, public_65d1374)
    }
}

#undef public_65d1361
#undef public_65d1374

#pragma init_seg(compiler)
extern "C" void const* const public_65d1361 = __AsmFindLabelExport(&internal_65d1340, 0x65d1361);
extern "C" void const* const public_65d1374 = __AsmFindLabelExport(&internal_65d1340, 0x65d1374);
