#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);
CLANG_FORWARD_PROC_SYMBOL(public_4ae4b0);
CLANG_FORWARD_PROC_SYMBOL(public_4ae650);
CLANG_FORWARD_PROC_SYMBOL(public_4ae770);
CLANG_FORWARD_PROC_SYMBOL(public_4ae890);
CLANG_FORWARD_PROC_SYMBOL(public_4ae9a0);
CLANG_FORWARD_PROC_SYMBOL(public_4aeab0);
CLANG_FORWARD_PROC_SYMBOL(public_4aebb0);
CLANG_FORWARD_PROC_SYMBOL(public_4aeca0);
CLANG_FORWARD_PROC_SYMBOL(public_4aed70);
CLANG_FORWARD_PROC_SYMBOL(public_4aee30);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3ec0);

#define public_4aee5b _public_4aee5b
#define public_4aee71 _public_4aee71
#define public_4aee81 _public_4aee81
#define public_4aee91 _public_4aee91
#define public_4aeea1 _public_4aeea1
#define public_4aeeb1 _public_4aeeb1
#define public_4aeec1 _public_4aeec1
#define public_4aef41 _public_4aef41
#define public_4aef5f _public_4aef5f
#define public_4aef7d _public_4aef7d
#define public_4aef9b _public_4aef9b
#define public_4aefb9 _public_4aefb9
#define public_4af026 _public_4af026
#define public_4af03d _public_4af03d
#define public_4af070 _public_4af070
#define public_4af084 _public_4af084
#define public_4af0c0 _public_4af0c0
#define public_4af0d2 _public_4af0d2
#define public_4af0e1 _public_4af0e1

PROC_DECLARE(0x4aee30, internal_4aee30, public_4aee30);
extern "C" NAKED register_t __cdecl internal_4aee30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x80
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7F8]
        cmp eax, 5
        push edi
        je public_4aee5b
        cmp eax, 6
        je public_4aee5b
        push 2
        call public_5645c0
        push 5
        call public_5645c0
        add esp, 8
        public_4aee5b : nop
        mov eax, dword ptr ds : [esi+0x7F8]
        cmp eax, 6
        ja public_4af0e1
/*FIXUP jmp dword ptr ds : [eax*4+public_4af0ec] @0x4aee6a*/
  JMPTB cmp eax, 0
  JMPTB je public_4aee71
  JMPTB cmp eax, 1
  JMPTB je public_4aee81
  JMPTB cmp eax, 2
  JMPTB je public_4aee91
  JMPTB cmp eax, 3
  JMPTB je public_4aeea1
  JMPTB cmp eax, 4
  JMPTB je public_4aeeb1
  JMPTB cmp eax, 5
  JMPTB je public_4aeec1
  JMPTB cmp eax, 6
  JMPTB je public_4af084
  JMPTB int 3
        public_4aee71 : nop
        mov ecx, esi
        call public_4ae4b0
        pop edi
        pop esi
        add esp, 0x80
        ret 
        public_4aee81 : nop
        mov ecx, esi
        call public_4ae650
        pop edi
        pop esi
        add esp, 0x80
        ret 
        public_4aee91 : nop
        mov ecx, esi
        call public_4ae770
        pop edi
        pop esi
        add esp, 0x80
        ret 
        public_4aeea1 : nop
        mov ecx, esi
        call public_4ae890
        pop edi
        pop esi
        add esp, 0x80
        ret 
        public_4aeeb1 : nop
        mov ecx, esi
        call public_4ae9a0
        pop edi
        pop esi
        add esp, 0x80
        ret 
        public_4aeec1 : nop
        mov al, byte ptr ds : [esi+0x32D]
        test al, al
        jne public_4af03d
        mov eax, dword ptr ds : [esi+0x34C]
        mov byte ptr ds : [esi+0x8A2], 1
        xor edi, edi
        mov dword ptr ds : [esi+0x840], edi
        mov dword ptr ds : [esi+0x844], edi
        mov dl, byte ptr ds : [eax+0x331]
        mov cl, 0xFD
        and dl, cl
        mov byte ptr ds : [eax+0x331], dl
        mov eax, dword ptr ds : [esi+0x350]
        push ebx
        and byte ptr ds : [eax+0x331], cl
        mov eax, dword ptr ds : [esi+0x354]
        and byte ptr ds : [eax+0x331], cl
        mov eax, dword ptr ds : [esi+0x358]
        and byte ptr ds : [eax+0x331], cl
        mov eax, dword ptr ds : [esi+0x360]
        and byte ptr ds : [eax+0x331], cl
        mov eax, dword ptr ds : [esi+0x7F4]
        cmp eax, 4
        ja public_4af026
/*FIXUP jmp dword ptr ds : [eax*4+public_4af108] @0x4aef3a*/
  JMPTB cmp eax, 0
  JMPTB je public_4aef41
  JMPTB cmp eax, 1
  JMPTB je public_4aef5f
  JMPTB cmp eax, 2
  JMPTB je public_4aef7d
  JMPTB cmp eax, 3
  JMPTB je public_4aef9b
  JMPTB cmp eax, 4
  JMPTB je public_4aefb9
  JMPTB int 3
        public_4aef41 : nop
        mov ecx, esi
        call public_4aeab0
/*FIXUP push offset public_5d5088 @0x4aef48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5088
        call public_5b3ec0
        add esp, 4
        pop ebx
        pop edi
        pop esi
        add esp, 0x80
        ret 
        public_4aef5f : nop
        mov ecx, esi
        call public_4aebb0
/*FIXUP push offset public_5d5088 @0x4aef66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5088
        call public_5b3ec0
        add esp, 4
        pop ebx
        pop edi
        pop esi
        add esp, 0x80
        ret 
        public_4aef7d : nop
        mov ecx, esi
        call public_4aeca0
/*FIXUP push offset public_5d5088 @0x4aef84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5088
        call public_5b3ec0
        add esp, 4
        pop ebx
        pop edi
        pop esi
        add esp, 0x80
        ret 
        public_4aef9b : nop
        mov ecx, esi
        call public_4aed70
/*FIXUP push offset public_5d5088 @0x4aefa2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5088
        call public_5b3ec0
        add esp, 4
        pop ebx
        pop edi
        pop esi
        add esp, 0x80
        ret 
        public_4aefb9 : nop
        mov eax, dword ptr ds : [esi+0x7F0]
        mov cl, byte ptr ds : [eax+0x6C]
        mov bl, 0xFC
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x374]
        mov ecx, dword ptr ds : [public_679bb0]
        push 0x40
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ds : [eax+0x348], ecx
        mov eax, dword ptr ds : [public_67eca8]
        push 0x5E4
        push eax
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x7B4]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x7B0]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x7B4]
        and byte ptr ds : [eax+0x6C], bl
        mov esi, dword ptr ds : [esi+0x344]
        and byte ptr ds : [esi+0x6C], bl
/*FIXUP public_4af026 : nop
        push offset public_5d5088 @0x4af026*/
  FIXUP public_4af026 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5088
        call public_5b3ec0
        add esp, 4
        pop ebx
        pop edi
        pop esi
        add esp, 0x80
        ret 
        public_4af03d : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x84B]
        mov byte ptr ds : [esi+0x32C], 1
        push ecx
        call public_4a7690
/*FIXUP push offset public_5d5088 @0x4af052*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5088
        mov byte ptr ds : [public_67dcc8], 0
        call public_5b3ec0
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        test eax, eax
        je public_4af0d2
        lea ecx, ds:[ecx]
        public_4af070 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4af070
        jmp public_4af0d2
        public_4af084 : nop
        mov byte ptr ds : [esi+0x32C], 1
        mov byte ptr ds : [public_67dcc8], 0
        mov al, byte ptr ds : [esi+0x32D]
        test al, al
        je public_4af0e1
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x84B]
        push ecx
        call public_4a7690
/*FIXUP push offset public_5d5088 @0x4af0aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5088
        call public_5b3ec0
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        test eax, eax
        je public_4af0d2
        mov edi, edi
        public_4af0c0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4af0c0
        public_4af0d2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        push 1
        call dword ptr ds : [eax]
        public_4af0e1 : nop
        pop edi
        pop esi
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4aee30)
        ASM_EXPORT_ENTRY_FIRST(0x4aefb9, public_4aefb9)
        ASM_EXPORT_ENTRY_LAST(0x4af084, public_4af084)
    }
}

#undef public_4aee5b
#undef public_4aee71
#undef public_4aee81
#undef public_4aee91
#undef public_4aeea1
#undef public_4aeeb1
#undef public_4aeec1
#undef public_4aef41
#undef public_4aef5f
#undef public_4aef7d
#undef public_4aef9b
#undef public_4aefb9
#undef public_4af026
#undef public_4af03d
#undef public_4af070
#undef public_4af084
#undef public_4af0c0
#undef public_4af0d2
#undef public_4af0e1

#pragma init_seg(compiler)
extern "C" void const* const public_4aefb9 = __AsmFindLabelExport(&internal_4aee30, 0x4aefb9);
extern "C" void const* const public_4af084 = __AsmFindLabelExport(&internal_4aee30, 0x4af084);
