#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4400d0);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_44012d _public_44012d
#define public_440171 _public_440171
#define public_4401ac _public_4401ac
#define public_4401e7 _public_4401e7
#define public_440222 _public_440222
#define public_44022c _public_44022c

PROC_DECLARE(0x4400d0, internal_4400d0, public_4400d0);
extern "C" NAKED register_t __cdecl internal_4400d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push esi
        mov ebx, ecx
        push edi
        lea edi, ds:[ebx+0x32C]
        mov ecx, edi
        call public_55e280
        test al, al
        jne public_440222
        lea ecx, ds:[ebx+0x34C]
        call public_55e280
        test al, al
        jne public_440222
        call public_45a460
        push 0x1B
        call public_5645c0
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x30]
        add eax, 0xFFFFFFFE
        add esp, 4
        cmp eax, 0xA
        ja public_44022c
/*FIXUP movzx eax, byte ptr ds : [eax+public_440248] @0x44011f*/
/*FIXUP jmp dword ptr ds : [eax*4+public_440234] @0x440126*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000a14d
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a14d : nop
        je public_4401e7
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000a149
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a149 : nop
        je public_4401ac
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000a145
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a145 : nop
        je public_44022c
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000a141
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a141 : nop
        je public_44022c
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000a13d
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a13d : nop
        je public_44022c
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000a139
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a139 : nop
        je public_440171
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000a135
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a135 : nop
        je public_44022c
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000a131
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a131 : nop
        je public_44022c
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000a12d
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a12d : nop
        je public_44022c
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000a129
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a129 : nop
        je public_44022c
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000a125
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a125 : nop
        je public_44012d
  JMPTB int 3
        public_44012d : nop
        mov ecx, dword ptr ds : [esi+0x18]
        push ebp
        push 0
        lea ebp, ds:[esi+0x24]
        push ebp
        mov byte ptr ds : [esi+0x20], 1
        mov edx, dword ptr ds : [ecx]
        push 7
        call dword ptr ds : [edx+0xA8]
        mov byte ptr ds : [ebx+0x3D5], 1
        mov eax, dword ptr ds : [public_5cb4d0]
        push eax
        mov ecx, edi
        call public_55e120
        mov ecx, dword ptr ds : [esi+0x18]
/*FIXUP push offset public_668804 @0x44015c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_668804
        push ebp
        push ecx
        mov ecx, edi
        call public_55dee0
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret 4
        public_440171 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        lea ebx, ds:[esi+0x24]
        push ebx
        mov byte ptr ds : [esi+0x20], 1
        mov edx, dword ptr ds : [ecx]
        push 7
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_5cb4d0]
        push eax
        mov ecx, edi
        call public_55e120
        mov ecx, dword ptr ds : [esi+0x18]
/*FIXUP push offset public_6687f8 @0x440198*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6687f8
        push ebx
        push ecx
        mov ecx, edi
        call public_55dee0
        pop edi
        pop esi
        pop ebx
        ret 4
        public_4401ac : nop
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        lea ebx, ds:[esi+0x24]
        push ebx
        mov byte ptr ds : [esi+0x20], 1
        mov edx, dword ptr ds : [ecx]
        push 7
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_5cb4d0]
        push eax
        mov ecx, edi
        call public_55e120
        mov ecx, dword ptr ds : [esi+0x18]
/*FIXUP push offset public_6687e0 @0x4401d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6687e0
        push ebx
        push ecx
        mov ecx, edi
        call public_55dee0
        pop edi
        pop esi
        pop ebx
        ret 4
        public_4401e7 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        lea ebx, ds:[esi+0x24]
        push ebx
        mov byte ptr ds : [esi+0x20], 1
        mov edx, dword ptr ds : [ecx]
        push 7
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_5cb4d0]
        push eax
        mov ecx, edi
        call public_55e120
        mov ecx, dword ptr ds : [esi+0x18]
/*FIXUP push offset public_6687ec @0x44020e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6687ec
        push ebx
        push ecx
        mov ecx, edi
        call public_55dee0
        pop edi
        pop esi
        pop ebx
        ret 4
        public_440222 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x3F4], edx
        public_44022c : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4400d0)
        ASM_EXPORT_ENTRY_SINGLE(0x44022c, public_44022c)
    }
}

#undef public_44012d
#undef public_440171
#undef public_4401ac
#undef public_4401e7
#undef public_440222
#undef public_44022c

#pragma init_seg(compiler)
extern "C" void const* const public_44022c = __AsmFindLabelExport(&internal_4400d0, 0x44022c);
