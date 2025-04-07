#include "Deformable2-PCH.h"


#define public_65fea4a _public_65fea4a
#define public_65fea89 _public_65fea89
#define public_65feaea _public_65feaea
#define public_65feafe _public_65feafe
#define public_65feb0b _public_65feb0b
#define public_65feb18 _public_65feb18
#define public_65feb29 _public_65feb29
#define public_65feb32 _public_65feb32
#define public_65feb47 _public_65feb47
#define public_65feb5a _public_65feb5a
#define public_65feb5f _public_65feb5f
#define public_65feb64 _public_65feb64
#define public_65feb69 _public_65feb69
#define public_65feb6c _public_65feb6c
#define public_65feb7a _public_65feb7a
#define public_65febf0 _public_65febf0

PROC_DECLARE(0x65fea00, internal_65fea00, public_65fea00);
extern "C" NAKED register_t __cdecl internal_65fea00()
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
        je public_65fea4a
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
        jge public_65febf0
        public_65fea4a : nop
        mov ecx, dword ptr ds : [edi+0x14]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_65fea89
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
        public_65fea89 : nop
        xor ebp, ebp
        cmp eax, ebp
        jge public_65febf0
        mov edi, dword ptr ds : [edi+0xC]
        cmp edi, ebp
        je public_65febf0
        cmp ebx, ebp
        jbe public_65febf0
        cmp dword ptr ss : [esp+0x40], ebp
        jbe public_65febf0
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
        jl public_65febf0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, edx
        mov edi, 0xC
        and eax, edi
        cmp al, 0xC
        mov dword ptr ss : [esp+0x28], ebp
        jne public_65feaea
        mov dword ptr ss : [esp+0x28], 0x1C
        jmp public_65feb0b
        public_65feaea : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_65feafe
        mov dword ptr ss : [esp+0x28], 0x10
        jmp public_65feb0b
        public_65feafe : nop
        mov eax, edx
        and eax, 2
        cmp al, 2
        jne public_65feb0b
        mov dword ptr ss : [esp+0x28], edi
        public_65feb0b : nop
        test dl, 0x10
        mov dword ptr ss : [esp+0x10], ebp
        je public_65feb18
        mov dword ptr ss : [esp+0x10], edi
        public_65feb18 : nop
        test dl, 0x40
        mov dword ptr ss : [esp+0x44], ebp
        je public_65feb29
        mov dword ptr ss : [esp+0x44], 4
        public_65feb29 : nop
        test dl, dl
        jns public_65feb32
        add dword ptr ss : [esp+0x44], 4
        public_65feb32 : nop
        mov eax, edx
        shr eax, 8
        xor edi, edi
        and eax, 0xF
        jle public_65feb7a
        mov ecx, 0x10
        mov dword ptr ss : [esp+0x38], eax
        public_65feb47 : nop
        mov eax, edx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_65feb6c
/*FIXUP jmp dword ptr ds : [eax*4+public_65febfc] @0x65feb53*/
  JMPTB cmp eax, 0
  JMPTB je public_65feb5f
  JMPTB cmp eax, 1
  JMPTB je public_65feb64
  JMPTB cmp eax, 2
  JMPTB je public_65feb69
  JMPTB cmp eax, 3
  JMPTB je public_65feb5a
  JMPTB int 3
        public_65feb5a : nop
        add edi, 4
        jmp public_65feb6c
        public_65feb5f : nop
        add edi, 8
        jmp public_65feb6c
        public_65feb64 : nop
        add edi, 0xC
        jmp public_65feb6c
        public_65feb69 : nop
        add edi, 0x10
        public_65feb6c : nop
        mov eax, dword ptr ss : [esp+0x38]
        add ecx, 2
        dec eax
        mov dword ptr ss : [esp+0x38], eax
        jne public_65feb47
        public_65feb7a : nop
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
        public_65febf0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x20
        UNREACHABLE_TRAP(0x65fea00)
        ASM_EXPORT_ENTRY_FIRST(0x65feb5a, public_65feb5a)
        ASM_EXPORT_ENTRY(0x65feb5f, public_65feb5f)
        ASM_EXPORT_ENTRY(0x65feb64, public_65feb64)
        ASM_EXPORT_ENTRY_LAST(0x65feb69, public_65feb69)
    }
}

#undef public_65fea4a
#undef public_65fea89
#undef public_65feaea
#undef public_65feafe
#undef public_65feb0b
#undef public_65feb18
#undef public_65feb29
#undef public_65feb32
#undef public_65feb47
#undef public_65feb5a
#undef public_65feb5f
#undef public_65feb64
#undef public_65feb69
#undef public_65feb6c
#undef public_65feb7a
#undef public_65febf0

#pragma init_seg(compiler)
extern "C" void const* const public_65feb5a = __AsmFindLabelExport(&internal_65fea00, 0x65feb5a);
extern "C" void const* const public_65feb5f = __AsmFindLabelExport(&internal_65fea00, 0x65feb5f);
extern "C" void const* const public_65feb64 = __AsmFindLabelExport(&internal_65fea00, 0x65feb64);
extern "C" void const* const public_65feb69 = __AsmFindLabelExport(&internal_65fea00, 0x65feb69);
