#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_440260);
CLANG_FORWARD_PROC_SYMBOL(public_441ea0);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e590);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4402c1 _public_4402c1
#define public_4402e5 _public_4402e5
#define public_440309 _public_440309
#define public_440328 _public_440328
#define public_440345 _public_440345
#define public_44034a _public_44034a
#define public_440356 _public_440356
#define public_440370 _public_440370
#define public_44037a _public_44037a
#define public_440384 _public_440384
#define public_44038c _public_44038c
#define public_4403b9 _public_4403b9

PROC_DECLARE(0x440260, internal_440260, public_440260);
extern "C" NAKED register_t __cdecl internal_440260()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x30
        push ebx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x32C]
        call public_55e280
        test al, al
        jne public_4403b9
        lea ebx, ds:[esi+0x34C]
        mov ecx, ebx
        call public_55e280
        test al, al
        jne public_4403b9
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        push 0x1B
        mov dword ptr ds : [esi+0x3EC], edi
        call public_5645c0
        mov eax, dword ptr ds : [edi+0x30]
        add eax, 0xFFFFFFFE
        add esp, 4
        cmp eax, 0xA
        ja public_440356
/*FIXUP movzx eax, byte ptr ds : [eax+public_4403e0] @0x4402b3*/
/*FIXUP jmp dword ptr ds : [eax*4+public_4403cc] @0x4402ba*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000a17c
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a17c : nop
        je public_440309
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000a178
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a178 : nop
        je public_440328
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000a174
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a174 : nop
        je public_440356
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000a170
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a170 : nop
        je public_440356
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000a16c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a16c : nop
        je public_440356
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000a168
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a168 : nop
        je public_4402e5
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000a164
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a164 : nop
        je public_440356
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000a160
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a160 : nop
        je public_440356
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000a15c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a15c : nop
        je public_440356
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000a158
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a158 : nop
        je public_440356
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000a154
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a154 : nop
        je public_4402c1
  JMPTB int 3
        public_4402c1 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0xBF8CCCCD
/*FIXUP push offset public_5cb748 @0x4402de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb748
        jmp public_44034a
        public_4402e5 : nop
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0xBDB020C5
        mov dword ptr ss : [esp+0x24], 0xBFA4DD2F
/*FIXUP push offset public_5cb70c @0x440302*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb70c
        jmp public_44034a
        public_440309 : nop
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x2C], 0xBFBFBE77
        push eax
        jmp public_440345
        public_440328 : nop
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x38], 0xBFBFBE77
        push ecx
/*FIXUP public_440345 : nop
        push offset public_5cb6d8 @0x440345*/
  FIXUP public_440345 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6d8
        public_44034a : nop
        mov ecx, esi
        push 0x3F800000
        call public_441ea0
        public_440356 : nop
        mov edi, dword ptr ds : [edi+0x30]
        lea eax, ds:[edi-2]
        cmp eax, 0xA
        pop edi
        ja public_440384
/*FIXUP movzx edx, byte ptr ds : [eax+public_4403f8] @0x440362*/
/*FIXUP jmp dword ptr ds : [edx*4+public_4403ec] @0x440369*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_440370
  JMPTB cmp eax, 1
  JMPTB mov edx, 0
  JMPTB je public_440370
  JMPTB cmp eax, 2
  JMPTB mov edx, 2
  JMPTB je public_440384
  JMPTB cmp eax, 3
  JMPTB mov edx, 2
  JMPTB je public_440384
  JMPTB cmp eax, 4
  JMPTB mov edx, 2
  JMPTB je public_440384
  JMPTB cmp eax, 5
  JMPTB mov edx, 1
  JMPTB je public_44037a
  JMPTB cmp eax, 6
  JMPTB mov edx, 2
  JMPTB je public_440384
  JMPTB cmp eax, 7
  JMPTB mov edx, 2
  JMPTB je public_440384
  JMPTB cmp eax, 8
  JMPTB mov edx, 2
  JMPTB je public_440384
  JMPTB cmp eax, 9
  JMPTB mov edx, 2
  JMPTB je public_440384
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 0
  JMPTB je public_440370
  JMPTB int 3
        public_440370 : nop
        mov dword ptr ss : [esp+0x3C], 0x3DA3D70A
        jmp public_44038c
        public_44037a : nop
        mov dword ptr ss : [esp+0x3C], 0x3D4CCCCD
        jmp public_44038c
        public_440384 : nop
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        public_44038c : nop
        mov eax, dword ptr ds : [public_5cb4d0]
        push eax
        mov ecx, ebx
        call public_55e590
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [esi+0x3E8]
        push ecx
        push 0x3F800000
        push edx
        mov ecx, ebx
        call public_55e360
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        public_4403b9 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [esi+0x3F0], eax
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x440260)
        ASM_EXPORT_ENTRY_FIRST(0x440356, public_440356)
        ASM_EXPORT_ENTRY_LAST(0x440384, public_440384)
    }
}

#undef public_4402c1
#undef public_4402e5
#undef public_440309
#undef public_440328
#undef public_440345
#undef public_44034a
#undef public_440356
#undef public_440370
#undef public_44037a
#undef public_440384
#undef public_44038c
#undef public_4403b9

#pragma init_seg(compiler)
extern "C" void const* const public_440356 = __AsmFindLabelExport(&internal_440260, 0x440356);
extern "C" void const* const public_440384 = __AsmFindLabelExport(&internal_440260, 0x440384);
