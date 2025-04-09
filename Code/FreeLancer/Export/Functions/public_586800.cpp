#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_586800);

#define public_58680e _public_58680e
#define public_586819 _public_586819
#define public_586830 _public_586830
#define public_586848 _public_586848
#define public_58684c _public_58684c
#define public_586853 _public_586853
#define public_586858 _public_586858
#define public_586864 _public_586864
#define public_58686b _public_58686b

PROC_DECLARE(0x586800, internal_586800, public_586800);
extern "C" NAKED register_t __cdecl internal_586800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+0x550]
        test eax, eax
        jne public_58680e
        xor edx, edx
        jmp public_586819
        public_58680e : nop
        mov edx, dword ptr ds : [ecx+0x554]
        sub edx, eax
        sar edx, 2
        public_586819 : nop
        push esi
        xor esi, esi
        test edx, edx
        push edi
        jle public_586864
        mov ecx, dword ptr ds : [ecx+0x550]
        mov edi, dword ptr ss : [esp+0xC]
        nop 
        lea esp, ss:[esp]
        public_586830 : nop
        mov eax, dword ptr ds : [ecx]
        add eax, 0xFFFFFFFC
        cmp eax, 0x3E
        ja public_586853
/*FIXUP movzx eax, byte ptr ds : [eax+public_586880] @0x58683a*/
/*FIXUP jmp dword ptr ds : [eax*4+public_586874] @0x586841*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000d073
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d073 : nop
        je public_586848
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000d06f
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d06f : nop
        je public_58684c
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000d06b
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d06b : nop
        je public_58684c
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000d067
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d067 : nop
        je public_58684c
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000d063
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d063 : nop
        je public_58684c
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000d05f
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d05f : nop
        je public_58684c
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000d05b
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d05b : nop
        je public_586848
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000d057
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d057 : nop
        je public_586848
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000d053
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d053 : nop
        je public_586848
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000d04f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d04f : nop
        je public_586848
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000d04b
  JMPTB mov eax, 2
  JMPTB public_4c0000000000d04b : nop
        je public_586853
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000d047
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d047 : nop
        je public_586848
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000d043
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d043 : nop
        je public_586848
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000d03f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d03f : nop
        je public_586848
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000d03b
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d03b : nop
        je public_586848
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000d037
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d037 : nop
        je public_586848
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000d033
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d033 : nop
        je public_586848
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000d02f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d02f : nop
        je public_586848
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000d02b
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d02b : nop
        je public_586848
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000d027
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d027 : nop
        je public_586848
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000d023
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d023 : nop
        je public_586848
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000d01f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d01f : nop
        je public_586848
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000d01b
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d01b : nop
        je public_586848
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000d017
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d017 : nop
        je public_586848
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000d013
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d013 : nop
        je public_586848
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000d00f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d00f : nop
        je public_586848
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000d00b
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d00b : nop
        je public_586848
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000d007
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d007 : nop
        je public_586848
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000d003
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d003 : nop
        je public_586848
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000cfff
  JMPTB mov eax, 0
  JMPTB public_4c0000000000cfff : nop
        je public_586848
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000cffb
  JMPTB mov eax, 0
  JMPTB public_4c0000000000cffb : nop
        je public_586848
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000cff7
  JMPTB mov eax, 0
  JMPTB public_4c0000000000cff7 : nop
        je public_586848
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000cff3
  JMPTB mov eax, 0
  JMPTB public_4c0000000000cff3 : nop
        je public_586848
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000cfef
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfef : nop
        je public_58684c
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000cfeb
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfeb : nop
        je public_58684c
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000cfe7
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfe7 : nop
        je public_58684c
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000cfe3
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfe3 : nop
        je public_58684c
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000cfdf
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfdf : nop
        je public_58684c
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000cfdb
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfdb : nop
        je public_58684c
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000cfd7
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfd7 : nop
        je public_58684c
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000cfd3
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfd3 : nop
        je public_58684c
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000cfcf
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfcf : nop
        je public_58684c
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000cfcb
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfcb : nop
        je public_58684c
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000cfc7
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfc7 : nop
        je public_58684c
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000cfc3
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfc3 : nop
        je public_58684c
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000cfbf
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfbf : nop
        je public_58684c
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c0000000000cfbb
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfbb : nop
        je public_58684c
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000cfb7
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfb7 : nop
        je public_58684c
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000cfb3
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfb3 : nop
        je public_58684c
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000cfaf
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfaf : nop
        je public_58684c
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c0000000000cfab
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfab : nop
        je public_58684c
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000cfa7
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfa7 : nop
        je public_58684c
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000cfa3
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cfa3 : nop
        je public_58684c
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c0000000000cf9f
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cf9f : nop
        je public_58684c
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c0000000000cf9b
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cf9b : nop
        je public_58684c
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c0000000000cf97
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cf97 : nop
        je public_58684c
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c0000000000cf93
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cf93 : nop
        je public_58684c
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c0000000000cf8f
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cf8f : nop
        je public_58684c
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c0000000000cf8b
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cf8b : nop
        je public_58684c
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c0000000000cf87
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cf87 : nop
        je public_58684c
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c0000000000cf83
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cf83 : nop
        je public_58684c
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c0000000000cf7f
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cf7f : nop
        je public_58684c
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c0000000000cf7b
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cf7b : nop
        je public_58684c
  JMPTB int 3
        public_586848 : nop
        xor eax, eax
        jmp public_586858
        public_58684c : nop
        mov eax, 1
        jmp public_586858
        public_586853 : nop
        mov eax, 2
        public_586858 : nop
        cmp eax, edi
        je public_58686b
        inc esi
        add ecx, 4
        cmp esi, edx
        jl public_586830
        public_586864 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        public_58686b : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x586800)
        ASM_EXPORT_ENTRY_SINGLE(0x586853, public_586853)
    }
}

#undef public_58680e
#undef public_586819
#undef public_586830
#undef public_586848
#undef public_58684c
#undef public_586853
#undef public_586858
#undef public_586864
#undef public_58686b

#pragma init_seg(compiler)
extern "C" void const* const public_586853 = __AsmFindLabelExport(&internal_586800, 0x586853);
