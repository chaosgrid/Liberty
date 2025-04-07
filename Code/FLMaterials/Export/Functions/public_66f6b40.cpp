#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fc970);

#define public_66f6bae _public_66f6bae
#define public_66f6bfb _public_66f6bfb
#define public_66f6c40 _public_66f6c40
#define public_66f6c97 _public_66f6c97
#define public_66f6cab _public_66f6cab
#define public_66f6cb8 _public_66f6cb8
#define public_66f6cc5 _public_66f6cc5
#define public_66f6cd6 _public_66f6cd6
#define public_66f6cdf _public_66f6cdf
#define public_66f6cf4 _public_66f6cf4
#define public_66f6d07 _public_66f6d07
#define public_66f6d0c _public_66f6d0c
#define public_66f6d11 _public_66f6d11
#define public_66f6d16 _public_66f6d16
#define public_66f6d19 _public_66f6d19
#define public_66f6d27 _public_66f6d27
#define public_66f6d9d _public_66f6d9d

PROC_DECLARE(0x66f6b40, internal_66f6b40, public_66f6b40);
extern "C" NAKED register_t __cdecl internal_66f6b40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+4]
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        xor ebp, ebp
        push 0x8B
        mov dword ptr ss : [esp+0x1C], ebp
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        call public_66fc970
        cmp eax, ebp
        mov edi, dword ptr ss : [esp+0x30]
        je public_66f6bae
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        cmp eax, ebp
        je public_66f6bae
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x2C], edx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x30], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x34], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x38], eax
        public_66f6bae : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0x48]
        test ah, 1
        mov ebx, dword ptr ss : [esp+0x3C]
        je public_66f6bfb
        mov edx, dword ptr ss : [esp+0x44]
        mov ebp, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [edx+4]
        add edx, ebp
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        xor ebp, ebp
        cmp eax, ebp
        jge public_66f6d9d
        public_66f6bfb : nop
        mov ecx, dword ptr ds : [edi+0x14]
        cmp ecx, ebp
        je public_66f6c40
        mov edi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        lea edi, ds:[edi+ebp*2]
        mov ebp, dword ptr ss : [esp+0x40]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        push ebx
        add edi, ebp
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        xor ebp, ebp
        cmp eax, ebp
        jge public_66f6d9d
        mov edi, dword ptr ss : [esp+0x30]
        public_66f6c40 : nop
        mov edi, dword ptr ds : [edi+0xC]
        cmp edi, ebp
        je public_66f6d9d
        cmp ebx, ebp
        jbe public_66f6d9d
        cmp dword ptr ss : [esp+0x44], ebp
        jbe public_66f6d9d
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [edi+0x68]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        jl public_66f6d9d
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, edx
        mov edi, 0xC
        and eax, edi
        cmp al, 0xC
        mov dword ptr ss : [esp+0x48], ebp
        jne public_66f6c97
        mov dword ptr ss : [esp+0x48], 0x1C
        jmp public_66f6cb8
        public_66f6c97 : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_66f6cab
        mov dword ptr ss : [esp+0x48], 0x10
        jmp public_66f6cb8
        public_66f6cab : nop
        mov eax, edx
        and eax, 2
        cmp al, 2
        jne public_66f6cb8
        mov dword ptr ss : [esp+0x48], edi
        public_66f6cb8 : nop
        test dl, 0x10
        mov dword ptr ss : [esp+0x10], ebp
        je public_66f6cc5
        mov dword ptr ss : [esp+0x10], edi
        public_66f6cc5 : nop
        test dl, 0x40
        mov dword ptr ss : [esp+0x2C], ebp
        je public_66f6cd6
        mov dword ptr ss : [esp+0x2C], 4
        public_66f6cd6 : nop
        test dl, dl
        jns public_66f6cdf
        add dword ptr ss : [esp+0x2C], 4
        public_66f6cdf : nop
        mov eax, edx
        shr eax, 8
        xor edi, edi
        and eax, 0xF
        jle public_66f6d27
        mov ecx, 0x10
        mov dword ptr ss : [esp+0x3C], eax
        public_66f6cf4 : nop
        mov eax, edx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_66f6d19
/*FIXUP jmp dword ptr ds : [eax*4+public_66f6dc0] @0x66f6d00*/
  JMPTB cmp eax, 0
  JMPTB je public_66f6d0c
  JMPTB cmp eax, 1
  JMPTB je public_66f6d11
  JMPTB cmp eax, 2
  JMPTB je public_66f6d16
  JMPTB cmp eax, 3
  JMPTB je public_66f6d07
  JMPTB int 3
        public_66f6d07 : nop
        add edi, 4
        jmp public_66f6d19
        public_66f6d0c : nop
        add edi, 8
        jmp public_66f6d19
        public_66f6d11 : nop
        add edi, 0xC
        jmp public_66f6d19
        public_66f6d16 : nop
        add edi, 0x10
        public_66f6d19 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        add ecx, 2
        dec eax
        mov dword ptr ss : [esp+0x3C], eax
        jne public_66f6cf4
        public_66f6d27 : nop
        mov ebp, dword ptr ss : [esp+0x38]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        add edi, edx
        mov edx, dword ptr ss : [esp+0x58]
        add edi, ebp
        add edi, edx
        imul edi, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x34]
        sub edx, edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x44]
        mov edi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [edx+0x10]
        lea edx, ds:[edx+edi*2]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x120]
        public_66f6d9d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        push 0x8B
        push esi
        call dword ptr ds : [eax+0xF0]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 0x20
        UNREACHABLE_TRAP(0x66f6b40)
        ASM_EXPORT_ENTRY_FIRST(0x66f6d07, public_66f6d07)
        ASM_EXPORT_ENTRY(0x66f6d0c, public_66f6d0c)
        ASM_EXPORT_ENTRY(0x66f6d11, public_66f6d11)
        ASM_EXPORT_ENTRY_LAST(0x66f6d16, public_66f6d16)
    }
}

#undef public_66f6bae
#undef public_66f6bfb
#undef public_66f6c40
#undef public_66f6c97
#undef public_66f6cab
#undef public_66f6cb8
#undef public_66f6cc5
#undef public_66f6cd6
#undef public_66f6cdf
#undef public_66f6cf4
#undef public_66f6d07
#undef public_66f6d0c
#undef public_66f6d11
#undef public_66f6d16
#undef public_66f6d19
#undef public_66f6d27
#undef public_66f6d9d

#pragma init_seg(compiler)
extern "C" void const* const public_66f6d07 = __AsmFindLabelExport(&internal_66f6b40, 0x66f6d07);
extern "C" void const* const public_66f6d0c = __AsmFindLabelExport(&internal_66f6b40, 0x66f6d0c);
extern "C" void const* const public_66f6d11 = __AsmFindLabelExport(&internal_66f6b40, 0x66f6d11);
extern "C" void const* const public_66f6d16 = __AsmFindLabelExport(&internal_66f6b40, 0x66f6d16);
