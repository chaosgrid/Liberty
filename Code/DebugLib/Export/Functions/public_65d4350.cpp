#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d4350);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_PROC_SYMBOL(public_65e0000);

#define public_65d438b _public_65d438b
#define public_65d439b _public_65d439b
#define public_65d43a9 _public_65d43a9
#define public_65d43b8 _public_65d43b8
#define public_65d43ca _public_65d43ca
#define public_65d43d0 _public_65d43d0
#define public_65d43dd _public_65d43dd
#define public_65d43f9 _public_65d43f9
#define public_65d4416 _public_65d4416
#define public_65d441f _public_65d441f
#define public_65d443a _public_65d443a

PROC_DECLARE(0x65d4350, internal_65d4350, public_65d4350);
extern "C" NAKED register_t __cdecl internal_65d4350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset _public_65e0000 @0x65d4355*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65e0000
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, eax
        or esi, 0x1F
        push edi
        mov ebx, ecx
        cmp esi, 0xFFFFFFFD
        mov dword ptr ss : [ebp-0x10], esp
        mov dword ptr ss : [ebp-0x18], ebx
        mov dword ptr ss : [ebp-0x14], esi
        jbe public_65d438b
        mov dword ptr ss : [ebp-0x14], eax
        mov esi, eax
        public_65d438b : nop
        lea eax, ds:[esi+2]
        mov dword ptr ss : [ebp-4], 0
        test eax, eax
        jge public_65d439b
        xor eax, eax
        public_65d439b : nop
        push eax
        call public_65d6f71
        add esp, 4
        mov dword ptr ss : [ebp+8], eax
        jmp public_65d43d0
        public_65d43a9 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x14], eax
        add eax, 2
        test eax, eax
        jge public_65d43b8
        xor eax, eax
        public_65d43b8 : nop
        push eax
        call public_65d6f71
        mov dword ptr ss : [ebp+8], eax
        add esp, 4
/*FIXUP mov eax, offset public_65d43ca @0x65d43c4*/
  FIXUP lea eax, ds : [public_65d43ca]
        ret 
        public_65d43ca : nop
        mov ebx, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ss : [ebp-0x14]
        public_65d43d0 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jbe public_65d43f9
        cmp eax, esi
        jbe public_65d43dd
        mov eax, esi
        public_65d43dd : nop
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+8]
        mov edx, ecx
        shr ecx, 2
        lea edi, ds:[eax+1]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [ebp-0x14]
        public_65d43f9 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx+8]
        test eax, eax
        je public_65d441f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_65d4416
        cmp cl, 0xFF
        je public_65d4416
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d441f
        public_65d4416 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d441f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], 0
        inc eax
        cmp edi, esi
        mov dword ptr ds : [ebx+4], eax
        mov byte ptr ds : [eax-1], 0
        mov dword ptr ds : [ebx+0xC], esi
        ja public_65d443a
        mov esi, edi
        public_65d443a : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], esi
        pop edi
        mov byte ptr ds : [esi+ecx], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x65d4350)
        ASM_EXPORT_ENTRY_FIRST(0x65d43a9, public_65d43a9)
        ASM_EXPORT_ENTRY_LAST(0x65d43ca, public_65d43ca)
    }
}

#undef public_65d438b
#undef public_65d439b
#undef public_65d43a9
#undef public_65d43b8
#undef public_65d43ca
#undef public_65d43d0
#undef public_65d43dd
#undef public_65d43f9
#undef public_65d4416
#undef public_65d441f
#undef public_65d443a

#pragma init_seg(compiler)
extern "C" void const* const public_65d43a9 = __AsmFindLabelExport(&internal_65d4350, 0x65d43a9);
extern "C" void const* const public_65d43ca = __AsmFindLabelExport(&internal_65d4350, 0x65d43ca);
