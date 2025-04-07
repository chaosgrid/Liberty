#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d70);
CLANG_FORWARD_PROC_SYMBOL(public_6ee9e20);
CLANG_FORWARD_PROC_SYMBOL(public_6eea080);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e440);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f73990);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6ee9c37 _public_6ee9c37
#define public_6ee9c66 _public_6ee9c66
#define public_6ee9c95 _public_6ee9c95
#define public_6ee9ca1 _public_6ee9ca1
#define public_6ee9cac _public_6ee9cac
#define public_6ee9cc5 _public_6ee9cc5
#define public_6ee9d77 _public_6ee9d77
#define public_6ee9dae _public_6ee9dae
#define public_6ee9dc4 _public_6ee9dc4
#define public_6ee9dd0 _public_6ee9dd0

PROC_DECLARE(0x6ee9c10, internal_6ee9c10, public_6ee9c10);
extern "C" NAKED register_t __cdecl internal_6ee9c10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        add eax, 0xFFFFFFD3
        cmp eax, 0x11
        push edi
        mov esi, ecx
        ja public_6ee9dd0
/*FIXUP movzx ecx, byte ptr ds : [eax+public_6ee9df0] @0x6ee9c29*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6ee9ddc] @0x6ee9c30*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6ee9c66
  JMPTB cmp eax, 1
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 2
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 3
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 4
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 5
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 6
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 7
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 8
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 4
  JMPTB je public_6ee9dd0
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 1
  JMPTB je public_6ee9dae
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 2
  JMPTB je public_6ee9dc4
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 3
  JMPTB je public_6ee9c37
  JMPTB int 3
        public_6ee9c37 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ds : [public_6fcf0f4]
        jne public_6ee9dd0
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [ecx]
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ds:[esi+0x18]
        call public_6ecfe80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 8
        public_6ee9c66 : nop
        mov edi, dword ptr ss : [esp+0x3C]
        lea ebp, ds:[edi+8]
        push ebp
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ds:[esi+4]
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x3C]
        cmp ecx, dword ptr ds : [esi+8]
        je public_6ee9dd0
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x38], eax
        je public_6ee9cc5
        public_6ee9c95 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ds : [edi+4]
        je public_6ee9ca1
        test ecx, ecx
        jne public_6ee9cac
        public_6ee9ca1 : nop
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ds : [edi]
        je public_6ee9dd0
        public_6ee9cac : nop
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, dword ptr ds : [esi+0x1C]
        jne public_6ee9c95
        public_6ee9cc5 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        lea ebx, ds:[edi+4]
        push ebx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ds:[edx+0x10]
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        cmp ecx, dword ptr ds : [eax+0x14]
        je public_6ee9dd0
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[esi+0x18]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f1e440
        mov ecx, dword ptr ds : [public_6fcf0f4]
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [edx+4]
        push 0x41F00000
        lea ecx, ss:[esp+0x18]
        push ecx
        add eax, 8
/*FIXUP push offset public_6fd1c74 @0x6ee9d32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_6fb342c]
        push ebp
        call public_6f75f30
        mov edx, dword ptr ds : [edi]
        add esp, 0x10
        push edx
        mov ecx, eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x28], offset public_6fb74c0
        call public_6f73990
        test eax, eax
        je public_6ee9dd0
        mov ecx, dword ptr ds : [eax+0x14C]
        test ecx, ecx
        je public_6ee9d77
        cmp dword ptr ds : [eax+0x154], 0xFFFFFFFF
        jne public_6ee9dd0
        public_6ee9d77 : nop
        mov ecx, eax
        call public_6f33e80
        test al, al
        je public_6ee9dd0
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x2C], ecx
        push eax
        mov ecx, offset public_6fd1c08
        mov dword ptr ss : [esp+0x34], edx
        call public_6ee8d70
        fstp st(0)
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 8
        public_6ee9dae : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, esi
        call public_6ee9e20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 8
        public_6ee9dc4 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov ecx, esi
        call public_6eea080
        public_6ee9dd0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6ee9c10)
        ASM_EXPORT_ENTRY_FIRST(0x6ee9c37, public_6ee9c37)
        ASM_EXPORT_ENTRY(0x6ee9c66, public_6ee9c66)
        ASM_EXPORT_ENTRY(0x6ee9dae, public_6ee9dae)
        ASM_EXPORT_ENTRY(0x6ee9dc4, public_6ee9dc4)
        ASM_EXPORT_ENTRY_LAST(0x6ee9dd0, public_6ee9dd0)
    }
}

#undef public_6ee9c37
#undef public_6ee9c66
#undef public_6ee9c95
#undef public_6ee9ca1
#undef public_6ee9cac
#undef public_6ee9cc5
#undef public_6ee9d77
#undef public_6ee9dae
#undef public_6ee9dc4
#undef public_6ee9dd0

#pragma init_seg(compiler)
extern "C" void const* const public_6ee9c37 = __AsmFindLabelExport(&internal_6ee9c10, 0x6ee9c37);
extern "C" void const* const public_6ee9c66 = __AsmFindLabelExport(&internal_6ee9c10, 0x6ee9c66);
extern "C" void const* const public_6ee9dae = __AsmFindLabelExport(&internal_6ee9c10, 0x6ee9dae);
extern "C" void const* const public_6ee9dc4 = __AsmFindLabelExport(&internal_6ee9c10, 0x6ee9dc4);
extern "C" void const* const public_6ee9dd0 = __AsmFindLabelExport(&internal_6ee9c10, 0x6ee9dd0);
