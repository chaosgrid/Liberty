#include "Shading-PCH.h"


#define public_6eba8cd _public_6eba8cd
#define public_6eba911 _public_6eba911
#define public_6eba96e _public_6eba96e
#define public_6eba982 _public_6eba982
#define public_6eba98f _public_6eba98f
#define public_6eba9a0 _public_6eba9a0
#define public_6eba9b5 _public_6eba9b5
#define public_6eba9be _public_6eba9be
#define public_6eba9d3 _public_6eba9d3
#define public_6eba9e6 _public_6eba9e6
#define public_6eba9eb _public_6eba9eb
#define public_6eba9f0 _public_6eba9f0
#define public_6eba9f5 _public_6eba9f5
#define public_6eba9f8 _public_6eba9f8
#define public_6ebaa06 _public_6ebaa06
#define public_6ebaa7c _public_6ebaa7c

PROC_DECLARE(0x6eba860, internal_6eba860, public_6eba860);
extern "C" NAKED register_t __cdecl internal_6eba860()
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
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0x48]
        test ah, 1
        mov ebx, dword ptr ss : [esp+0x3C]
        mov edi, dword ptr ss : [esp+0x30]
        je public_6eba8cd
        mov ecx, dword ptr ss : [esp+0x44]
        mov ebp, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [ecx+4]
        add ecx, ebp
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jge public_6ebaa7c
        public_6eba8cd : nop
        mov ecx, dword ptr ds : [edi+0x14]
        test ecx, ecx
        je public_6eba911
        mov ebp, dword ptr ss : [esp+0x44]
        mov edi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
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
        test eax, eax
        jge public_6ebaa7c
        mov edi, dword ptr ss : [esp+0x30]
        public_6eba911 : nop
        mov edi, dword ptr ds : [edi+0xC]
        test edi, edi
        je public_6ebaa7c
        test ebx, ebx
        jbe public_6ebaa7c
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        jbe public_6ebaa7c
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
        jl public_6ebaa7c
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, edx
        mov edi, 0xC
        and eax, edi
        cmp al, 0xC
        mov dword ptr ss : [esp+0x48], 0
        jne public_6eba96e
        mov dword ptr ss : [esp+0x48], 0x1C
        jmp public_6eba98f
        public_6eba96e : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_6eba982
        mov dword ptr ss : [esp+0x48], 0x10
        jmp public_6eba98f
        public_6eba982 : nop
        mov eax, edx
        and eax, 2
        cmp al, 2
        jne public_6eba98f
        mov dword ptr ss : [esp+0x48], edi
        public_6eba98f : nop
        test dl, 0x10
        mov dword ptr ss : [esp+0x10], 0
        je public_6eba9a0
        mov dword ptr ss : [esp+0x10], edi
        public_6eba9a0 : nop
        test dl, 0x40
        mov dword ptr ss : [esp+0x2C], 0
        je public_6eba9b5
        mov dword ptr ss : [esp+0x2C], 4
        public_6eba9b5 : nop
        test dl, dl
        jns public_6eba9be
        add dword ptr ss : [esp+0x2C], 4
        public_6eba9be : nop
        mov eax, edx
        shr eax, 8
        xor edi, edi
        and eax, 0xF
        jle public_6ebaa06
        mov ecx, 0x10
        mov dword ptr ss : [esp+0x3C], eax
        public_6eba9d3 : nop
        mov eax, edx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_6eba9f8
/*FIXUP jmp dword ptr ds : [eax*4+public_6ebaa9c] @0x6eba9df*/
  JMPTB cmp eax, 0
  JMPTB je public_6eba9eb
  JMPTB cmp eax, 1
  JMPTB je public_6eba9f0
  JMPTB cmp eax, 2
  JMPTB je public_6eba9f5
  JMPTB cmp eax, 3
  JMPTB je public_6eba9e6
  JMPTB int 3
        public_6eba9e6 : nop
        add edi, 4
        jmp public_6eba9f8
        public_6eba9eb : nop
        add edi, 8
        jmp public_6eba9f8
        public_6eba9f0 : nop
        add edi, 0xC
        jmp public_6eba9f8
        public_6eba9f5 : nop
        add edi, 0x10
        public_6eba9f8 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        add ecx, 2
        dec eax
        mov dword ptr ss : [esp+0x3C], eax
        jne public_6eba9d3
        public_6ebaa06 : nop
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
        public_6ebaa7c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        push 0x17
        push esi
        call dword ptr ds : [eax+0xF0]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 0x20
        UNREACHABLE_TRAP(0x6eba860)
        ASM_EXPORT_ENTRY_FIRST(0x6eba9e6, public_6eba9e6)
        ASM_EXPORT_ENTRY(0x6eba9eb, public_6eba9eb)
        ASM_EXPORT_ENTRY(0x6eba9f0, public_6eba9f0)
        ASM_EXPORT_ENTRY_LAST(0x6eba9f5, public_6eba9f5)
    }
}

#undef public_6eba8cd
#undef public_6eba911
#undef public_6eba96e
#undef public_6eba982
#undef public_6eba98f
#undef public_6eba9a0
#undef public_6eba9b5
#undef public_6eba9be
#undef public_6eba9d3
#undef public_6eba9e6
#undef public_6eba9eb
#undef public_6eba9f0
#undef public_6eba9f5
#undef public_6eba9f8
#undef public_6ebaa06
#undef public_6ebaa7c

#pragma init_seg(compiler)
extern "C" void const* const public_6eba9e6 = __AsmFindLabelExport(&internal_6eba860, 0x6eba9e6);
extern "C" void const* const public_6eba9eb = __AsmFindLabelExport(&internal_6eba860, 0x6eba9eb);
extern "C" void const* const public_6eba9f0 = __AsmFindLabelExport(&internal_6eba860, 0x6eba9f0);
extern "C" void const* const public_6eba9f5 = __AsmFindLabelExport(&internal_6eba860, 0x6eba9f5);
