#include "FLMaterials-PCH.h"


#define public_67002f5 _public_67002f5
#define public_6700358 _public_6700358
#define public_670036c _public_670036c
#define public_6700379 _public_6700379
#define public_6700386 _public_6700386
#define public_6700397 _public_6700397
#define public_67003a0 _public_67003a0
#define public_67003b3 _public_67003b3
#define public_67003c6 _public_67003c6
#define public_67003cb _public_67003cb
#define public_67003d0 _public_67003d0
#define public_67003d5 _public_67003d5
#define public_67003d8 _public_67003d8
#define public_67003e6 _public_67003e6
#define public_670045c _public_670045c

PROC_DECLARE(0x6700260, internal_6700260, public_6700260);
extern "C" NAKED register_t __cdecl internal_6700260()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov cl, byte ptr ds : [esi+0x6C]
        xor eax, eax
        test cl, cl
        push edi
        je public_670045c
        mov ecx, dword ptr ss : [esp+0x44]
        test ch, 1
        je public_670045c
        mov edx, dword ptr ss : [esp+0x40]
        mov edi, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x3C]
        mov ebx, dword ptr ss : [esp+0x38]
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
        jge public_670045c
        mov ecx, dword ptr ds : [edi+0x14]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_67002f5
        mov edi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push dword ptr ss : [esp+0x44]
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
        public_67002f5 : nop
        test eax, eax
        jge public_670045c
        mov edi, dword ptr ds : [edi+0xC]
        test edi, edi
        je public_670045c
        test ebx, ebx
        jbe public_670045c
        mov ecx, dword ptr ss : [esp+0x40]
        test ecx, ecx
        jbe public_670045c
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [edi+0x68]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        xor edi, edi
        cmp eax, edi
        jl public_670045c
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, edx
        mov ebp, 0xC
        and eax, ebp
        cmp al, 0xC
        mov dword ptr ss : [esp+0x44], edi
        jne public_6700358
        mov dword ptr ss : [esp+0x44], 0x1C
        jmp public_6700379
        public_6700358 : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_670036c
        mov dword ptr ss : [esp+0x44], 0x10
        jmp public_6700379
        public_670036c : nop
        mov eax, edx
        and eax, 2
        cmp al, 2
        jne public_6700379
        mov dword ptr ss : [esp+0x44], ebp
        public_6700379 : nop
        test dl, 0x10
        mov dword ptr ss : [esp+0x10], edi
        je public_6700386
        mov dword ptr ss : [esp+0x10], ebp
        public_6700386 : nop
        test dl, 0x40
        mov dword ptr ss : [esp+0x28], edi
        je public_6700397
        mov dword ptr ss : [esp+0x28], 4
        public_6700397 : nop
        test dl, dl
        jns public_67003a0
        add dword ptr ss : [esp+0x28], 4
        public_67003a0 : nop
        mov eax, edx
        shr eax, 8
        and eax, 0xF
        jle public_67003e6
        mov ecx, 0x10
        mov dword ptr ss : [esp+0x38], eax
        public_67003b3 : nop
        mov eax, edx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_67003d8
/*FIXUP jmp dword ptr ds : [eax*4+public_6700468] @0x67003bf*/
  JMPTB cmp eax, 0
  JMPTB je public_67003cb
  JMPTB cmp eax, 1
  JMPTB je public_67003d0
  JMPTB cmp eax, 2
  JMPTB je public_67003d5
  JMPTB cmp eax, 3
  JMPTB je public_67003c6
  JMPTB int 3
        public_67003c6 : nop
        add edi, 4
        jmp public_67003d8
        public_67003cb : nop
        add edi, 8
        jmp public_67003d8
        public_67003d0 : nop
        add edi, 0xC
        jmp public_67003d8
        public_67003d5 : nop
        add edi, 0x10
        public_67003d8 : nop
        mov eax, dword ptr ss : [esp+0x38]
        add ecx, 2
        dec eax
        mov dword ptr ss : [esp+0x38], eax
        jne public_67003b3
        public_67003e6 : nop
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
        mov edx, dword ptr ss : [esp+0x38]
        add edi, edx
        mov edx, dword ptr ss : [esp+0x54]
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
        public_670045c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x20
        UNREACHABLE_TRAP(0x6700260)
        ASM_EXPORT_ENTRY_FIRST(0x67003c6, public_67003c6)
        ASM_EXPORT_ENTRY(0x67003cb, public_67003cb)
        ASM_EXPORT_ENTRY(0x67003d0, public_67003d0)
        ASM_EXPORT_ENTRY_LAST(0x67003d5, public_67003d5)
    }
}

#undef public_67002f5
#undef public_6700358
#undef public_670036c
#undef public_6700379
#undef public_6700386
#undef public_6700397
#undef public_67003a0
#undef public_67003b3
#undef public_67003c6
#undef public_67003cb
#undef public_67003d0
#undef public_67003d5
#undef public_67003d8
#undef public_67003e6
#undef public_670045c

#pragma init_seg(compiler)
extern "C" void const* const public_67003c6 = __AsmFindLabelExport(&internal_6700260, 0x67003c6);
extern "C" void const* const public_67003cb = __AsmFindLabelExport(&internal_6700260, 0x67003cb);
extern "C" void const* const public_67003d0 = __AsmFindLabelExport(&internal_6700260, 0x67003d0);
extern "C" void const* const public_67003d5 = __AsmFindLabelExport(&internal_6700260, 0x67003d5);
