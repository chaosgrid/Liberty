#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_52fa10);
CLANG_FORWARD_PROC_SYMBOL(public_531b20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_52f76b _public_52f76b
#define public_52f79c _public_52f79c
#define public_52f845 _public_52f845
#define public_52f8e7 _public_52f8e7
#define public_52f916 _public_52f916
#define public_52f920 _public_52f920
#define public_52f954 _public_52f954
#define public_52f95a _public_52f95a
#define public_52f95d _public_52f95d
#define public_52f965 _public_52f965

PROC_DECLARE(0x52f740, internal_52f740, public_52f740);
extern "C" NAKED register_t __cdecl internal_52f740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x54
        push ebx
        mov ebx, dword ptr ss : [esp+0x60]
        push ebp
        mov ebp, dword ptr ss : [esp+0x60]
        push esi
        lea eax, ss:[ebp-0xA]
        cmp eax, 0xB
        push edi
        mov esi, ecx
        ja public_52f965
/*FIXUP movzx eax, byte ptr ds : [eax+public_52f990] @0x52f75d*/
/*FIXUP jmp dword ptr ds : [eax*4+public_52f978] @0x52f764*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000c36d
  JMPTB mov eax, 0
  JMPTB public_4c0000000000c36d : nop
        je public_52f76b
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000c369
  JMPTB mov eax, 1
  JMPTB public_4c0000000000c369 : nop
        je public_52f79c
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000c365
  JMPTB mov eax, 2
  JMPTB public_4c0000000000c365 : nop
        je public_52f845
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000c361
  JMPTB mov eax, 5
  JMPTB public_4c0000000000c361 : nop
        je public_52f965
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000c35d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000c35d : nop
        je public_52f965
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000c359
  JMPTB mov eax, 5
  JMPTB public_4c0000000000c359 : nop
        je public_52f965
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000c355
  JMPTB mov eax, 5
  JMPTB public_4c0000000000c355 : nop
        je public_52f965
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000c351
  JMPTB mov eax, 5
  JMPTB public_4c0000000000c351 : nop
        je public_52f965
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000c34d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000c34d : nop
        je public_52f965
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000c349
  JMPTB mov eax, 5
  JMPTB public_4c0000000000c349 : nop
        je public_52f965
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000c345
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c345 : nop
        je public_52f8e7
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000c341
  JMPTB mov eax, 4
  JMPTB public_4c0000000000c341 : nop
        je public_52f920
  JMPTB int 3
        public_52f76b : nop
        lea ecx, ds:[esi+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x28
        call public_4fcef0
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[esi+0x20]
        push edx
        add ecx, 0x28
        call public_4fcef0
        push ebx
        push ebp
        mov ecx, esi
        call public_531b20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 8
        public_52f79c : nop
        mov ecx, esi
        call public_52fa10
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_52f965
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[esi+0x20]
        push eax
        lea edx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x58], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0x30]
        push eax
        push ecx
        push edx
        mov ecx, offset public_674c60
        call public_503070
        push ebx
        push ebp
        mov ecx, esi
        call public_531b20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 8
        public_52f845 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [public_5c6610]
        mov cl, byte ptr ss : [esp+0x20]
        and cl, 0xF8
        mov byte ptr ss : [esp+0x20], cl
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi+0x34]
        or cl, 2
        push 0
        mov byte ptr ss : [esp+0x24], cl
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x3C], eax
        call public_428680
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0x10
        lea eax, ds:[esi+0x10]
        push eax
        add ecx, 0x28
        call public_4fcef0
        lea ecx, ds:[esi+0x20]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x28
        call public_4fcef0
        push ebx
        push ebp
        mov ecx, esi
        call public_531b20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 8
        public_52f8e7 : nop
        mov edi, dword ptr ds : [esi+4]
        call public_54baf0
        cmp dword ptr ds : [esi+8], eax
        jne public_52f965
        mov ecx, edi
        call dword ptr ds : [public_5c68fc]
        test eax, eax
        jne public_52f965
        mov eax, dword ptr ds : [ebx]
        cmp eax, 2
        je public_52f916
        jle public_52f965
        cmp eax, 6
        jg public_52f965
        mov edx, dword ptr ds : [public_675498]
        jmp public_52f95a
        public_52f916 : nop
        mov eax, dword ptr ds : [public_675494]
        push 0
        push eax
        jmp public_52f95d
        public_52f920 : nop
        mov edi, dword ptr ds : [esi+4]
        call public_54baf0
        cmp dword ptr ds : [esi+8], eax
        jne public_52f965
        mov ecx, edi
        call dword ptr ds : [public_5c68fc]
        cmp eax, 1
        jne public_52f965
        mov eax, dword ptr ds : [ebx+0x20]
        cmp eax, 2
        je public_52f954
        jle public_52f965
        cmp eax, 6
        jg public_52f965
        mov ecx, dword ptr ds : [public_675498]
        push 0
        push ecx
        jmp public_52f95d
        public_52f954 : nop
        mov edx, dword ptr ds : [public_675494]
        public_52f95a : nop
        push 0
        push edx
        public_52f95d : nop
        call public_489e80
        add esp, 8
        public_52f965 : nop
        push ebx
        push ebp
        mov ecx, esi
        call public_531b20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x52f740)
        ASM_EXPORT_ENTRY_SINGLE(0x52f965, public_52f965)
    }
}

#undef public_52f76b
#undef public_52f79c
#undef public_52f845
#undef public_52f8e7
#undef public_52f916
#undef public_52f920
#undef public_52f954
#undef public_52f95a
#undef public_52f95d
#undef public_52f965

#pragma init_seg(compiler)
extern "C" void const* const public_52f965 = __AsmFindLabelExport(&internal_52f740, 0x52f965);
