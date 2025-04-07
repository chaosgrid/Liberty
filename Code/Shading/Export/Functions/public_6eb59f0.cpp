#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb59f0);

#define public_6eb5a40 _public_6eb5a40
#define public_6eb5a54 _public_6eb5a54
#define public_6eb5a61 _public_6eb5a61
#define public_6eb5a6e _public_6eb5a6e
#define public_6eb5a7f _public_6eb5a7f
#define public_6eb5a88 _public_6eb5a88
#define public_6eb5aa0 _public_6eb5aa0
#define public_6eb5ab3 _public_6eb5ab3
#define public_6eb5ab8 _public_6eb5ab8
#define public_6eb5abd _public_6eb5abd
#define public_6eb5ac2 _public_6eb5ac2
#define public_6eb5ac5 _public_6eb5ac5
#define public_6eb5acb _public_6eb5acb
#define public_6eb5b44 _public_6eb5b44

PROC_DECLARE(0x6eb59f0, internal_6eb59f0, public_6eb59f0);
extern "C" NAKED register_t __cdecl internal_6eb59f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x1C
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push esi
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [edx+0x68]
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        xor esi, esi
        cmp eax, esi
        jl public_6eb5b44
        mov edx, dword ptr ss : [esp+0x1C]
        push ebp
        mov eax, edx
        mov ebp, 0xC
        and eax, ebp
        cmp al, 0xC
        mov dword ptr ss : [esp+0x14], esi
        jne public_6eb5a40
        mov dword ptr ss : [esp+0x14], 0x1C
        jmp public_6eb5a61
        public_6eb5a40 : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_6eb5a54
        mov dword ptr ss : [esp+0x14], 0x10
        jmp public_6eb5a61
        public_6eb5a54 : nop
        mov eax, edx
        and eax, 2
        cmp al, 2
        jne public_6eb5a61
        mov dword ptr ss : [esp+0x14], ebp
        public_6eb5a61 : nop
        test dl, 0x10
        mov dword ptr ss : [esp+0x18], esi
        je public_6eb5a6e
        mov dword ptr ss : [esp+0x18], ebp
        public_6eb5a6e : nop
        test dl, 0x40
        mov dword ptr ss : [esp+0x10], esi
        je public_6eb5a7f
        mov dword ptr ss : [esp+0x10], 4
        public_6eb5a7f : nop
        test dl, dl
        jns public_6eb5a88
        add dword ptr ss : [esp+0x10], 4
        public_6eb5a88 : nop
        mov eax, edx
        shr eax, 8
        and eax, 0xF
        jle public_6eb5acb
        mov ecx, 0x10
        mov ebp, eax
        lea esp, ss:[esp]
        public_6eb5aa0 : nop
        mov eax, edx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_6eb5ac5
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb5b50] @0x6eb5aac*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb5ab8
  JMPTB cmp eax, 1
  JMPTB je public_6eb5abd
  JMPTB cmp eax, 2
  JMPTB je public_6eb5ac2
  JMPTB cmp eax, 3
  JMPTB je public_6eb5ab3
  JMPTB int 3
        public_6eb5ab3 : nop
        add esi, 4
        jmp public_6eb5ac5
        public_6eb5ab8 : nop
        add esi, 8
        jmp public_6eb5ac5
        public_6eb5abd : nop
        add esi, 0xC
        jmp public_6eb5ac5
        public_6eb5ac2 : nop
        add esi, 0x10
        public_6eb5ac5 : nop
        add ecx, 2
        dec ebp
        jne public_6eb5aa0
        public_6eb5acb : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov ebx, dword ptr ds : [ebx+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edi+0xC]
        push ecx
        mov ebp, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        add esi, edx
        mov edx, dword ptr ss : [esp+0x24]
        add esi, ebx
        add esi, edx
        imul esi, ecx
        mov ecx, dword ptr ss : [esp+0x38]
        sub ecx, esi
        push ecx
        push eax
        call dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [ecx+0x10]
        lea ecx, ds:[ecx+esi*2]
        push ecx
        mov ecx, dword ptr ss : [esp+0x48]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        pop ebp
        public_6eb5b44 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 0x1C
        UNREACHABLE_TRAP(0x6eb59f0)
        ASM_EXPORT_ENTRY_FIRST(0x6eb5ab3, public_6eb5ab3)
        ASM_EXPORT_ENTRY(0x6eb5ab8, public_6eb5ab8)
        ASM_EXPORT_ENTRY(0x6eb5abd, public_6eb5abd)
        ASM_EXPORT_ENTRY_LAST(0x6eb5ac2, public_6eb5ac2)
    }
}

#undef public_6eb5a40
#undef public_6eb5a54
#undef public_6eb5a61
#undef public_6eb5a6e
#undef public_6eb5a7f
#undef public_6eb5a88
#undef public_6eb5aa0
#undef public_6eb5ab3
#undef public_6eb5ab8
#undef public_6eb5abd
#undef public_6eb5ac2
#undef public_6eb5ac5
#undef public_6eb5acb
#undef public_6eb5b44

#pragma init_seg(compiler)
extern "C" void const* const public_6eb5ab3 = __AsmFindLabelExport(&internal_6eb59f0, 0x6eb5ab3);
extern "C" void const* const public_6eb5ab8 = __AsmFindLabelExport(&internal_6eb59f0, 0x6eb5ab8);
extern "C" void const* const public_6eb5abd = __AsmFindLabelExport(&internal_6eb59f0, 0x6eb5abd);
extern "C" void const* const public_6eb5ac2 = __AsmFindLabelExport(&internal_6eb59f0, 0x6eb5ac2);
