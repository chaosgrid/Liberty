#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3d110);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dc40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ef10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f800);
CLANG_FORWARD_PROC_SYMBOL(public_6f40c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f41110);
CLANG_FORWARD_PROC_SYMBOL(public_6f41960);
CLANG_FORWARD_PROC_SYMBOL(public_6f41f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f42210);
CLANG_FORWARD_PROC_SYMBOL(public_6f426f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f43450);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58df3);

#define public_6f3a430 _public_6f3a430
#define public_6f3a455 _public_6f3a455
#define public_6f3a478 _public_6f3a478
#define public_6f3a481 _public_6f3a481
#define public_6f3a4b3 _public_6f3a4b3
#define public_6f3a4e5 _public_6f3a4e5
#define public_6f3a513 _public_6f3a513
#define public_6f3a541 _public_6f3a541
#define public_6f3a56f _public_6f3a56f
#define public_6f3a57a _public_6f3a57a
#define public_6f3a5a1 _public_6f3a5a1
#define public_6f3a5a3 _public_6f3a5a3
#define public_6f3a5c4 _public_6f3a5c4
#define public_6f3a5ed _public_6f3a5ed
#define public_6f3a5ef _public_6f3a5ef
#define public_6f3a612 _public_6f3a612
#define public_6f3a618 _public_6f3a618
#define public_6f3a641 _public_6f3a641
#define public_6f3a643 _public_6f3a643
#define public_6f3a666 _public_6f3a666
#define public_6f3a66a _public_6f3a66a
#define public_6f3a694 _public_6f3a694
#define public_6f3a6e0 _public_6f3a6e0
#define public_6f3a6f4 _public_6f3a6f4
#define public_6f3a6f7 _public_6f3a6f7
#define public_6f3a6fb _public_6f3a6fb
#define public_6f3a723 _public_6f3a723
#define public_6f3a72c _public_6f3a72c
#define public_6f3a739 _public_6f3a739
#define public_6f3a74e _public_6f3a74e
#define public_6f3a766 _public_6f3a766
#define public_6f3a78d _public_6f3a78d
#define public_6f3a791 _public_6f3a791
#define public_6f3a793 _public_6f3a793

PROC_DECLARE(0x6f3a3f0, internal_6f3a3f0, public_6f3a3f0);
extern "C" NAKED register_t __cdecl internal_6f3a3f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f58df3 @0x6f3a3f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58df3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        or ebx, 0xFFFFFFFF
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [edi]
        dec eax
        cmp eax, 0xC
        ja public_6f3a791
        mov esi, dword ptr ss : [esp+0x3C]
/*FIXUP jmp dword ptr ds : [eax*4+public_6f3a7a8] @0x6f3a429*/
  JMPTB cmp eax, 0
  JMPTB je public_6f3a430
  JMPTB cmp eax, 1
  JMPTB je public_6f3a430
  JMPTB cmp eax, 2
  JMPTB je public_6f3a481
  JMPTB cmp eax, 3
  JMPTB je public_6f3a481
  JMPTB cmp eax, 4
  JMPTB je public_6f3a4b3
  JMPTB cmp eax, 5
  JMPTB je public_6f3a4e5
  JMPTB cmp eax, 6
  JMPTB je public_6f3a513
  JMPTB cmp eax, 7
  JMPTB je public_6f3a513
  JMPTB cmp eax, 8
  JMPTB je public_6f3a57a
  JMPTB cmp eax, 9
  JMPTB je public_6f3a5c4
  JMPTB cmp eax, 0xA
  JMPTB je public_6f3a541
  JMPTB cmp eax, 0xB
  JMPTB je public_6f3a791
  JMPTB cmp eax, 0xC
  JMPTB je public_6f3a618
  JMPTB int 3
        public_6f3a430 : nop
        push 0xDC
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x34], ebp
        je public_6f3a455
        push edi
        mov ecx, eax
        call public_6f40c80
        mov ebp, eax
        public_6f3a455 : nop
        mov edi, dword ptr ds : [esi+0xF8]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        call public_6f57e9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6f3a478
        mov ebx, eax
        public_6f3a478 : nop
        lea edx, ss:[esp+0x10]
        jmp public_6f3a66a
        public_6f3a481 : nop
        push 0xFC
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        test eax, eax
        mov dword ptr ss : [esp+0x34], 1
        je public_6f3a56f
        push edi
        mov ecx, eax
        call public_6f41110
        mov dword ptr ss : [esp+0x34], ebx
        jmp public_6f3a694
        public_6f3a4b3 : nop
        push 0x1F0
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        test eax, eax
        mov dword ptr ss : [esp+0x34], 2
        je public_6f3a56f
        push edi
        mov ecx, eax
        call public_6f41960
        mov dword ptr ss : [esp+0x34], ebx
        jmp public_6f3a694
        public_6f3a4e5 : nop
        push 0x110
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        test eax, eax
        mov dword ptr ss : [esp+0x34], 3
        je public_6f3a56f
        push edi
        mov ecx, eax
        call public_6f42210
        mov dword ptr ss : [esp+0x34], ebx
        jmp public_6f3a694
        public_6f3a513 : nop
        push 0xC8
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        test eax, eax
        mov dword ptr ss : [esp+0x34], 4
        je public_6f3a56f
        push edi
        mov ecx, eax
        call public_6f41f30
        mov dword ptr ss : [esp+0x34], ebx
        jmp public_6f3a694
        public_6f3a541 : nop
        push 0xEC
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        test eax, eax
        mov dword ptr ss : [esp+0x34], 5
        je public_6f3a56f
        push edi
        mov ecx, eax
        call public_6f426f0
        mov dword ptr ss : [esp+0x34], ebx
        jmp public_6f3a694
        public_6f3a56f : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x34], ebx
        jmp public_6f3a694
        public_6f3a57a : nop
        push 0x158
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        test eax, eax
        mov dword ptr ss : [esp+0x34], 6
        je public_6f3a5a1
        push edi
        mov ecx, eax
        call public_6f42d70
        jmp public_6f3a5a3
        public_6f3a5a1 : nop
        xor eax, eax
        public_6f3a5a3 : nop
        mov ecx, dword ptr ds : [eax+0xE0]
        mov dword ptr ds : [esi+0x98], ecx
        mov edx, dword ptr ds : [eax+0xDC]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ds : [esi+0x94], edx
        jmp public_6f3a694
        public_6f3a5c4 : nop
        push 0x158
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        test eax, eax
        mov dword ptr ss : [esp+0x34], 7
        je public_6f3a5ed
        push edi
        mov ecx, eax
        call public_6f42d70
        mov ebp, eax
        jmp public_6f3a5ef
        public_6f3a5ed : nop
        xor ebp, ebp
        public_6f3a5ef : nop
        mov edi, dword ptr ds : [esi+0xF8]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x14], ebp
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        call public_6f57e9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6f3a612
        mov ebx, eax
        public_6f3a612 : nop
        lea edx, ss:[esp+0x14]
        jmp public_6f3a66a
        public_6f3a618 : nop
        push 0xD4
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        test eax, eax
        mov dword ptr ss : [esp+0x34], 8
        je public_6f3a641
        push edi
        mov ecx, eax
        call public_6f43450
        mov ebp, eax
        jmp public_6f3a643
        public_6f3a641 : nop
        xor ebp, ebp
        public_6f3a643 : nop
        mov edi, dword ptr ds : [esi+0xF8]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x18], ebp
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        call public_6f57e9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6f3a666
        mov ebx, eax
        public_6f3a666 : nop
        lea edx, ss:[esp+0x18]
        public_6f3a66a : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push edx
        push eax
        call public_6f3f800
        mov eax, dword ptr ds : [esi+0xFC]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+0xFC], eax
        mov eax, ebp
        or ebx, 0xFFFFFFFF
        public_6f3a694 : nop
        test eax, eax
        je public_6f3a791
        lea ecx, ds:[esi+0x34]
        mov dword ptr ds : [eax+4], ecx
        lea edx, ds:[esi+0x94]
        mov dword ptr ds : [eax+8], edx
        lea ecx, ds:[esi+0x98]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [esi+0xA0]
        mov ecx, dword ptr ds : [esi+0xA8]
        lea ebp, ds:[esi+0xA4]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x20], eax
        mov edi, dword ptr ds : [ecx+4]
        cmp edi, edx
        mov ebx, ecx
        mov al, 1
        je public_6f3a6fb
        lea esp, ss:[esp]
        public_6f3a6e0 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [edi+0xC]
        mov ebx, edi
        setl al
        test al, al
        je public_6f3a6f4
        mov edi, dword ptr ds : [edi]
        jmp public_6f3a6f7
        public_6f3a6f4 : nop
        mov edi, dword ptr ds : [edi+8]
        public_6f3a6f7 : nop
        cmp edi, edx
        jne public_6f3a6e0
        public_6f3a6fb : nop
        mov dl, byte ptr ss : [ebp+0xC]
        test dl, dl
        jne public_6f3a739
        test al, al
        mov dword ptr ss : [esp+0x3C], ebx
        je public_6f3a72c
        cmp ebx, dword ptr ds : [ecx]
        jne public_6f3a723
        lea eax, ss:[esp+0x1C]
        push eax
        push ebx
        push edi
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebp
        call public_6f3dc40
        jmp public_6f3a766
        public_6f3a723 : nop
        lea ecx, ss:[esp+0x3C]
        call public_6f3ef10
        public_6f3a72c : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ss : [esp+0x1C]
        jge public_6f3a74e
        public_6f3a739 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebx
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        call public_6f3dc40
        jmp public_6f3a766
        public_6f3a74e : nop
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x48], 0
        call public_6f3d110
        public_6f3a766 : nop
        mov edx, dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ds : [esi+0x2C]
        inc ecx
        test eax, eax
        mov dword ptr ds : [esi+0xA0], ecx
        jne public_6f3a78d
        mov dword ptr ds : [esi+0x2C], 2
        public_6f3a78d : nop
        xor eax, eax
        jmp public_6f3a793
        public_6f3a791 : nop
        mov eax, ebx
        public_6f3a793 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x6f3a3f0)
        ASM_EXPORT_ENTRY_FIRST(0x6f3a430, public_6f3a430)
        ASM_EXPORT_ENTRY(0x6f3a481, public_6f3a481)
        ASM_EXPORT_ENTRY(0x6f3a4b3, public_6f3a4b3)
        ASM_EXPORT_ENTRY(0x6f3a4e5, public_6f3a4e5)
        ASM_EXPORT_ENTRY(0x6f3a513, public_6f3a513)
        ASM_EXPORT_ENTRY(0x6f3a541, public_6f3a541)
        ASM_EXPORT_ENTRY(0x6f3a57a, public_6f3a57a)
        ASM_EXPORT_ENTRY(0x6f3a5c4, public_6f3a5c4)
        ASM_EXPORT_ENTRY(0x6f3a618, public_6f3a618)
        ASM_EXPORT_ENTRY_LAST(0x6f3a791, public_6f3a791)
    }
}

#undef public_6f3a430
#undef public_6f3a455
#undef public_6f3a478
#undef public_6f3a481
#undef public_6f3a4b3
#undef public_6f3a4e5
#undef public_6f3a513
#undef public_6f3a541
#undef public_6f3a56f
#undef public_6f3a57a
#undef public_6f3a5a1
#undef public_6f3a5a3
#undef public_6f3a5c4
#undef public_6f3a5ed
#undef public_6f3a5ef
#undef public_6f3a612
#undef public_6f3a618
#undef public_6f3a641
#undef public_6f3a643
#undef public_6f3a666
#undef public_6f3a66a
#undef public_6f3a694
#undef public_6f3a6e0
#undef public_6f3a6f4
#undef public_6f3a6f7
#undef public_6f3a6fb
#undef public_6f3a723
#undef public_6f3a72c
#undef public_6f3a739
#undef public_6f3a74e
#undef public_6f3a766
#undef public_6f3a78d
#undef public_6f3a791
#undef public_6f3a793

#pragma init_seg(compiler)
extern "C" void const* const public_6f3a430 = __AsmFindLabelExport(&internal_6f3a3f0, 0x6f3a430);
extern "C" void const* const public_6f3a481 = __AsmFindLabelExport(&internal_6f3a3f0, 0x6f3a481);
extern "C" void const* const public_6f3a4b3 = __AsmFindLabelExport(&internal_6f3a3f0, 0x6f3a4b3);
extern "C" void const* const public_6f3a4e5 = __AsmFindLabelExport(&internal_6f3a3f0, 0x6f3a4e5);
extern "C" void const* const public_6f3a513 = __AsmFindLabelExport(&internal_6f3a3f0, 0x6f3a513);
extern "C" void const* const public_6f3a541 = __AsmFindLabelExport(&internal_6f3a3f0, 0x6f3a541);
extern "C" void const* const public_6f3a57a = __AsmFindLabelExport(&internal_6f3a3f0, 0x6f3a57a);
extern "C" void const* const public_6f3a5c4 = __AsmFindLabelExport(&internal_6f3a3f0, 0x6f3a5c4);
extern "C" void const* const public_6f3a618 = __AsmFindLabelExport(&internal_6f3a3f0, 0x6f3a618);
extern "C" void const* const public_6f3a791 = __AsmFindLabelExport(&internal_6f3a3f0, 0x6f3a791);
