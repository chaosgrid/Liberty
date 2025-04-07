#include "Shading-PCH.h"


#define public_6ebdb15 _public_6ebdb15
#define public_6ebdb57 _public_6ebdb57
#define public_6ebdb96 _public_6ebdb96
#define public_6ebdc00 _public_6ebdc00
#define public_6ebdc0a _public_6ebdc0a
#define public_6ebdc1a _public_6ebdc1a
#define public_6ebdc28 _public_6ebdc28
#define public_6ebdc34 _public_6ebdc34
#define public_6ebdc45 _public_6ebdc45
#define public_6ebdc4e _public_6ebdc4e
#define public_6ebdc60 _public_6ebdc60
#define public_6ebdc73 _public_6ebdc73
#define public_6ebdc78 _public_6ebdc78
#define public_6ebdc7d _public_6ebdc7d
#define public_6ebdc82 _public_6ebdc82
#define public_6ebdc85 _public_6ebdc85
#define public_6ebdc93 _public_6ebdc93
#define public_6ebdd09 _public_6ebdd09
#define public_6ebdd0b _public_6ebdd0b
#define public_6ebdd4e _public_6ebdd4e

PROC_DECLARE(0x6ebda80, internal_6ebda80, public_6ebda80);
extern "C" NAKED register_t __cdecl internal_6ebda80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x24
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        mov al, byte ptr ds : [esi+0x65]
        test al, al
        push edi
        mov edi, dword ptr ss : [esp+0x4C]
        je public_6ebdc00
        test edi, 0x400
        jne public_6ebdc00
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push 0x18
        push eax
        mov byte ptr ss : [esp+0x3C], 1
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0x80
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x19
        push eax
        call dword ptr ds : [edx+0xF4]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 5
        push 0x19
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push 0xF
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xF
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6ebdb15 : nop
        test edi, 0x100
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        je public_6ebdb57
        mov ecx, dword ptr ss : [esp+0x50]
        mov edi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [ecx+4]
        add ecx, edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        push ebp
        push ecx
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        mov edi, eax
        test edi, edi
        jge public_6ebdd0b
        public_6ebdb57 : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_6ebdb96
        mov edi, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push edi
        mov edi, dword ptr ds : [ebx+0x10]
        mov ebx, dword ptr ss : [esp+0x54]
        lea edi, ds:[edi+ebx*2]
        mov ebx, dword ptr ss : [esp+0x4C]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        push ebp
        add edi, ebx
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        mov ebx, dword ptr ss : [esp+0x3C]
        public_6ebdb96 : nop
        test eax, eax
        mov edi, eax
        jge public_6ebdd0b
        mov ebx, dword ptr ds : [ebx+0xC]
        test ebx, ebx
        je public_6ebdd0b
        test ebp, ebp
        jbe public_6ebdd0b
        mov eax, dword ptr ss : [esp+0x50]
        test eax, eax
        jbe public_6ebdd0b
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x68]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        xor edi, edi
        cmp eax, edi
        jl public_6ebdd09
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xC
        mov ebx, edx
        and ebx, eax
        cmp bl, al
        mov dword ptr ss : [esp+0x48], edi
        mov ecx, 0x10
        jne public_6ebdc0a
        mov dword ptr ss : [esp+0x48], 0x1C
        jmp public_6ebdc28
        public_6ebdc00 : nop
        mov byte ptr ss : [esp+0x30], 0
        jmp public_6ebdb15
        public_6ebdc0a : nop
        mov ebx, edx
        and ebx, 4
        cmp bl, 4
        jne public_6ebdc1a
        mov dword ptr ss : [esp+0x48], ecx
        jmp public_6ebdc28
        public_6ebdc1a : nop
        mov ebx, edx
        and ebx, 2
        cmp bl, 2
        jne public_6ebdc28
        mov dword ptr ss : [esp+0x48], eax
        public_6ebdc28 : nop
        test cl, dl
        mov dword ptr ss : [esp+0x14], edi
        je public_6ebdc34
        mov dword ptr ss : [esp+0x14], eax
        public_6ebdc34 : nop
        test dl, 0x40
        mov dword ptr ss : [esp+0x54], edi
        je public_6ebdc45
        mov dword ptr ss : [esp+0x54], 4
        public_6ebdc45 : nop
        test dl, dl
        jns public_6ebdc4e
        add dword ptr ss : [esp+0x54], 4
        public_6ebdc4e : nop
        mov eax, edx
        shr eax, 8
        and eax, 0xF
        jle public_6ebdc93
        mov dword ptr ss : [esp+0x10], eax
        lea esp, ss:[esp]
        public_6ebdc60 : nop
        mov eax, edx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_6ebdc85
/*FIXUP jmp dword ptr ds : [eax*4+public_6ebdd58] @0x6ebdc6c*/
  JMPTB cmp eax, 0
  JMPTB je public_6ebdc78
  JMPTB cmp eax, 1
  JMPTB je public_6ebdc7d
  JMPTB cmp eax, 2
  JMPTB je public_6ebdc82
  JMPTB cmp eax, 3
  JMPTB je public_6ebdc73
  JMPTB int 3
        public_6ebdc73 : nop
        add edi, 4
        jmp public_6ebdc85
        public_6ebdc78 : nop
        add edi, 8
        jmp public_6ebdc85
        public_6ebdc7d : nop
        add edi, 0xC
        jmp public_6ebdc85
        public_6ebdc82 : nop
        add edi, 0x10
        public_6ebdc85 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ecx, 2
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ebdc60
        public_6ebdc93 : nop
        mov ebx, dword ptr ss : [esp+0x44]
        push ebp
        push ebx
        mov ebx, dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x64]
        add edi, edx
        mov edx, dword ptr ss : [esp+0x58]
        add edi, ebx
        add edi, edx
        imul edi, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x40]
        sub edx, edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x50]
        mov edi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [edx+0x10]
        lea edx, ds:[edx+edi*2]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push ebp
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        push eax
        call dword ptr ds : [ecx+0x120]
        public_6ebdd09 : nop
        mov edi, eax
        public_6ebdd0b : nop
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        pop ebp
        pop ebx
        je public_6ebdd4e
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x19
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        push 0xF
        push esi
        call dword ptr ds : [eax+0xF0]
        public_6ebdd4e : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x24
        ret 0x20
        UNREACHABLE_TRAP(0x6ebda80)
        ASM_EXPORT_ENTRY_FIRST(0x6ebdc73, public_6ebdc73)
        ASM_EXPORT_ENTRY(0x6ebdc78, public_6ebdc78)
        ASM_EXPORT_ENTRY(0x6ebdc7d, public_6ebdc7d)
        ASM_EXPORT_ENTRY_LAST(0x6ebdc82, public_6ebdc82)
    }
}

#undef public_6ebdb15
#undef public_6ebdb57
#undef public_6ebdb96
#undef public_6ebdc00
#undef public_6ebdc0a
#undef public_6ebdc1a
#undef public_6ebdc28
#undef public_6ebdc34
#undef public_6ebdc45
#undef public_6ebdc4e
#undef public_6ebdc60
#undef public_6ebdc73
#undef public_6ebdc78
#undef public_6ebdc7d
#undef public_6ebdc82
#undef public_6ebdc85
#undef public_6ebdc93
#undef public_6ebdd09
#undef public_6ebdd0b
#undef public_6ebdd4e

#pragma init_seg(compiler)
extern "C" void const* const public_6ebdc73 = __AsmFindLabelExport(&internal_6ebda80, 0x6ebdc73);
extern "C" void const* const public_6ebdc78 = __AsmFindLabelExport(&internal_6ebda80, 0x6ebdc78);
extern "C" void const* const public_6ebdc7d = __AsmFindLabelExport(&internal_6ebda80, 0x6ebdc7d);
extern "C" void const* const public_6ebdc82 = __AsmFindLabelExport(&internal_6ebda80, 0x6ebdc82);
