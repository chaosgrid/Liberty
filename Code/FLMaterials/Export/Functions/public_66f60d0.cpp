#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f60d0);

#define public_66f6120 _public_66f6120
#define public_66f6134 _public_66f6134
#define public_66f6141 _public_66f6141
#define public_66f614e _public_66f614e
#define public_66f615f _public_66f615f
#define public_66f6168 _public_66f6168
#define public_66f6180 _public_66f6180
#define public_66f6193 _public_66f6193
#define public_66f6198 _public_66f6198
#define public_66f619d _public_66f619d
#define public_66f61a2 _public_66f61a2
#define public_66f61a5 _public_66f61a5
#define public_66f61ab _public_66f61ab
#define public_66f6224 _public_66f6224

PROC_DECLARE(0x66f60d0, internal_66f60d0, public_66f60d0);
extern "C" NAKED register_t __cdecl internal_66f60d0()
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
        jl public_66f6224
        mov edx, dword ptr ss : [esp+0x1C]
        push ebp
        mov eax, edx
        mov ebp, 0xC
        and eax, ebp
        cmp al, 0xC
        mov dword ptr ss : [esp+0x14], esi
        jne public_66f6120
        mov dword ptr ss : [esp+0x14], 0x1C
        jmp public_66f6141
        public_66f6120 : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_66f6134
        mov dword ptr ss : [esp+0x14], 0x10
        jmp public_66f6141
        public_66f6134 : nop
        mov eax, edx
        and eax, 2
        cmp al, 2
        jne public_66f6141
        mov dword ptr ss : [esp+0x14], ebp
        public_66f6141 : nop
        test dl, 0x10
        mov dword ptr ss : [esp+0x18], esi
        je public_66f614e
        mov dword ptr ss : [esp+0x18], ebp
        public_66f614e : nop
        test dl, 0x40
        mov dword ptr ss : [esp+0x10], esi
        je public_66f615f
        mov dword ptr ss : [esp+0x10], 4
        public_66f615f : nop
        test dl, dl
        jns public_66f6168
        add dword ptr ss : [esp+0x10], 4
        public_66f6168 : nop
        mov eax, edx
        shr eax, 8
        and eax, 0xF
        jle public_66f61ab
        mov ecx, 0x10
        mov ebp, eax
        lea esp, ss:[esp]
        public_66f6180 : nop
        mov eax, edx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_66f61a5
/*FIXUP jmp dword ptr ds : [eax*4+public_66f6230] @0x66f618c*/
  JMPTB cmp eax, 0
  JMPTB je public_66f6198
  JMPTB cmp eax, 1
  JMPTB je public_66f619d
  JMPTB cmp eax, 2
  JMPTB je public_66f61a2
  JMPTB cmp eax, 3
  JMPTB je public_66f6193
  JMPTB int 3
        public_66f6193 : nop
        add esi, 4
        jmp public_66f61a5
        public_66f6198 : nop
        add esi, 8
        jmp public_66f61a5
        public_66f619d : nop
        add esi, 0xC
        jmp public_66f61a5
        public_66f61a2 : nop
        add esi, 0x10
        public_66f61a5 : nop
        add ecx, 2
        dec ebp
        jne public_66f6180
        public_66f61ab : nop
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
        public_66f6224 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 0x1C
        UNREACHABLE_TRAP(0x66f60d0)
        ASM_EXPORT_ENTRY_FIRST(0x66f6193, public_66f6193)
        ASM_EXPORT_ENTRY(0x66f6198, public_66f6198)
        ASM_EXPORT_ENTRY(0x66f619d, public_66f619d)
        ASM_EXPORT_ENTRY_LAST(0x66f61a2, public_66f61a2)
    }
}

#undef public_66f6120
#undef public_66f6134
#undef public_66f6141
#undef public_66f614e
#undef public_66f615f
#undef public_66f6168
#undef public_66f6180
#undef public_66f6193
#undef public_66f6198
#undef public_66f619d
#undef public_66f61a2
#undef public_66f61a5
#undef public_66f61ab
#undef public_66f6224

#pragma init_seg(compiler)
extern "C" void const* const public_66f6193 = __AsmFindLabelExport(&internal_66f60d0, 0x66f6193);
extern "C" void const* const public_66f6198 = __AsmFindLabelExport(&internal_66f60d0, 0x66f6198);
extern "C" void const* const public_66f619d = __AsmFindLabelExport(&internal_66f60d0, 0x66f619d);
extern "C" void const* const public_66f61a2 = __AsmFindLabelExport(&internal_66f60d0, 0x66f61a2);
