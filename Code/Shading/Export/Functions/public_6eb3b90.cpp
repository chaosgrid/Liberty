#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3b90);

#define public_6eb3bda _public_6eb3bda
#define public_6eb3c19 _public_6eb3c19
#define public_6eb3c7a _public_6eb3c7a
#define public_6eb3c8e _public_6eb3c8e
#define public_6eb3c9b _public_6eb3c9b
#define public_6eb3ca8 _public_6eb3ca8
#define public_6eb3cb9 _public_6eb3cb9
#define public_6eb3cc2 _public_6eb3cc2
#define public_6eb3cd7 _public_6eb3cd7
#define public_6eb3cea _public_6eb3cea
#define public_6eb3cef _public_6eb3cef
#define public_6eb3cf4 _public_6eb3cf4
#define public_6eb3cf9 _public_6eb3cf9
#define public_6eb3cfc _public_6eb3cfc
#define public_6eb3d0a _public_6eb3d0a
#define public_6eb3d80 _public_6eb3d80

PROC_DECLARE(0x6eb3b90, internal_6eb3b90, public_6eb3b90);
extern "C" NAKED register_t __cdecl internal_6eb3b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+0x20]
        sub esp, 0x14
        test ah, 1
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        je public_6eb3bda
        mov edx, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [edx+4]
        add edx, ebp
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jge public_6eb3d80
        public_6eb3bda : nop
        mov ecx, dword ptr ds : [edi+0x14]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_6eb3c19
        mov ebp, dword ptr ss : [esp+0x40]
        mov edi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push ebp
        mov ebp, dword ptr ss : [esp+0x44]
        lea edi, ds:[edi+ebp*2]
        mov ebp, dword ptr ss : [esp+0x3C]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        push ebx
        add edi, ebp
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x48]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        mov edi, dword ptr ss : [esp+0x2C]
        public_6eb3c19 : nop
        xor ebp, ebp
        cmp eax, ebp
        jge public_6eb3d80
        mov edi, dword ptr ds : [edi+0xC]
        cmp edi, ebp
        je public_6eb3d80
        cmp ebx, ebp
        jbe public_6eb3d80
        cmp dword ptr ss : [esp+0x40], ebp
        jbe public_6eb3d80
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [edi+0x68]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        cmp eax, ebp
        jl public_6eb3d80
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, edx
        mov edi, 0xC
        and eax, edi
        cmp al, 0xC
        mov dword ptr ss : [esp+0x28], ebp
        jne public_6eb3c7a
        mov dword ptr ss : [esp+0x28], 0x1C
        jmp public_6eb3c9b
        public_6eb3c7a : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_6eb3c8e
        mov dword ptr ss : [esp+0x28], 0x10
        jmp public_6eb3c9b
        public_6eb3c8e : nop
        mov eax, edx
        and eax, 2
        cmp al, 2
        jne public_6eb3c9b
        mov dword ptr ss : [esp+0x28], edi
        public_6eb3c9b : nop
        test dl, 0x10
        mov dword ptr ss : [esp+0x10], ebp
        je public_6eb3ca8
        mov dword ptr ss : [esp+0x10], edi
        public_6eb3ca8 : nop
        test dl, 0x40
        mov dword ptr ss : [esp+0x44], ebp
        je public_6eb3cb9
        mov dword ptr ss : [esp+0x44], 4
        public_6eb3cb9 : nop
        test dl, dl
        jns public_6eb3cc2
        add dword ptr ss : [esp+0x44], 4
        public_6eb3cc2 : nop
        mov eax, edx
        shr eax, 8
        xor edi, edi
        and eax, 0xF
        jle public_6eb3d0a
        mov ecx, 0x10
        mov dword ptr ss : [esp+0x38], eax
        public_6eb3cd7 : nop
        mov eax, edx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_6eb3cfc
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb3d8c] @0x6eb3ce3*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb3cef
  JMPTB cmp eax, 1
  JMPTB je public_6eb3cf4
  JMPTB cmp eax, 2
  JMPTB je public_6eb3cf9
  JMPTB cmp eax, 3
  JMPTB je public_6eb3cea
  JMPTB int 3
        public_6eb3cea : nop
        add edi, 4
        jmp public_6eb3cfc
        public_6eb3cef : nop
        add edi, 8
        jmp public_6eb3cfc
        public_6eb3cf4 : nop
        add edi, 0xC
        jmp public_6eb3cfc
        public_6eb3cf9 : nop
        add edi, 0x10
        public_6eb3cfc : nop
        mov eax, dword ptr ss : [esp+0x38]
        add ecx, 2
        dec eax
        mov dword ptr ss : [esp+0x38], eax
        jne public_6eb3cd7
        public_6eb3d0a : nop
        mov ebp, dword ptr ss : [esp+0x34]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        add edi, edx
        mov edx, dword ptr ss : [esp+0x38]
        add edi, ebp
        add edi, edx
        imul edi, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x30]
        sub edx, edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [edx+0x10]
        lea edx, ds:[edx+esi*2]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x120]
        public_6eb3d80 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x20
        UNREACHABLE_TRAP(0x6eb3b90)
        ASM_EXPORT_ENTRY_FIRST(0x6eb3cea, public_6eb3cea)
        ASM_EXPORT_ENTRY(0x6eb3cef, public_6eb3cef)
        ASM_EXPORT_ENTRY(0x6eb3cf4, public_6eb3cf4)
        ASM_EXPORT_ENTRY_LAST(0x6eb3cf9, public_6eb3cf9)
    }
}

#undef public_6eb3bda
#undef public_6eb3c19
#undef public_6eb3c7a
#undef public_6eb3c8e
#undef public_6eb3c9b
#undef public_6eb3ca8
#undef public_6eb3cb9
#undef public_6eb3cc2
#undef public_6eb3cd7
#undef public_6eb3cea
#undef public_6eb3cef
#undef public_6eb3cf4
#undef public_6eb3cf9
#undef public_6eb3cfc
#undef public_6eb3d0a
#undef public_6eb3d80

#pragma init_seg(compiler)
extern "C" void const* const public_6eb3cea = __AsmFindLabelExport(&internal_6eb3b90, 0x6eb3cea);
extern "C" void const* const public_6eb3cef = __AsmFindLabelExport(&internal_6eb3b90, 0x6eb3cef);
extern "C" void const* const public_6eb3cf4 = __AsmFindLabelExport(&internal_6eb3b90, 0x6eb3cf4);
extern "C" void const* const public_6eb3cf9 = __AsmFindLabelExport(&internal_6eb3b90, 0x6eb3cf9);
