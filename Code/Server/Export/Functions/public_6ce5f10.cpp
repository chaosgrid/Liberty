#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5f10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d60440);

#define public_6ce5f4b _public_6ce5f4b
#define public_6ce5f5b _public_6ce5f5b
#define public_6ce5f69 _public_6ce5f69
#define public_6ce5f78 _public_6ce5f78
#define public_6ce5f8a _public_6ce5f8a
#define public_6ce5f90 _public_6ce5f90
#define public_6ce5f9d _public_6ce5f9d
#define public_6ce5fb9 _public_6ce5fb9
#define public_6ce5fd6 _public_6ce5fd6
#define public_6ce5fdf _public_6ce5fdf
#define public_6ce5ffa _public_6ce5ffa

PROC_DECLARE(0x6ce5f10, internal_6ce5f10, public_6ce5f10);
extern "C" NAKED register_t __cdecl internal_6ce5f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset _public_6d60440 @0x6ce5f15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d60440
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, eax
        or esi, 0x1F
        cmp esi, 0xFFFFFFFD
        push edi
        mov ebx, ecx
        mov dword ptr ss : [ebp-0x10], esp
        mov dword ptr ss : [ebp-0x18], ebx
        mov dword ptr ss : [ebp-0x14], esi
        jbe public_6ce5f4b
        mov dword ptr ss : [ebp-0x14], eax
        mov esi, eax
        public_6ce5f4b : nop
        lea eax, ds:[esi+2]
        test eax, eax
        mov dword ptr ss : [ebp-4], 0
        jge public_6ce5f5b
        xor eax, eax
        public_6ce5f5b : nop
        push eax
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [ebp+8], eax
        jmp public_6ce5f90
        public_6ce5f69 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x14], eax
        add eax, 2
        test eax, eax
        jge public_6ce5f78
        xor eax, eax
        public_6ce5f78 : nop
        push eax
        call public_6d60012
        mov dword ptr ss : [ebp+8], eax
        add esp, 4
/*FIXUP mov eax, offset public_6ce5f8a @0x6ce5f84*/
  FIXUP lea eax, ds : [public_6ce5f8a]
        ret 
        public_6ce5f8a : nop
        mov ebx, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ss : [ebp-0x14]
        public_6ce5f90 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jbe public_6ce5fb9
        cmp eax, esi
        jbe public_6ce5f9d
        mov eax, esi
        public_6ce5f9d : nop
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
        public_6ce5fb9 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov edi, dword ptr ds : [ebx+8]
        je public_6ce5fdf
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6ce5fd6
        cmp cl, 0xFF
        je public_6ce5fd6
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ce5fdf
        public_6ce5fd6 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce5fdf : nop
        mov eax, dword ptr ss : [ebp+8]
        inc eax
        cmp edi, esi
        mov dword ptr ds : [ebx+8], 0
        mov dword ptr ds : [ebx+4], eax
        mov byte ptr ds : [eax-1], 0
        mov dword ptr ds : [ebx+0xC], esi
        ja public_6ce5ffa
        mov esi, edi
        public_6ce5ffa : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], esi
        mov byte ptr ds : [esi+ecx], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ce5f10)
        ASM_EXPORT_ENTRY_FIRST(0x6ce5f69, public_6ce5f69)
        ASM_EXPORT_ENTRY_LAST(0x6ce5f8a, public_6ce5f8a)
    }
}

#undef public_6ce5f4b
#undef public_6ce5f5b
#undef public_6ce5f69
#undef public_6ce5f78
#undef public_6ce5f8a
#undef public_6ce5f90
#undef public_6ce5f9d
#undef public_6ce5fb9
#undef public_6ce5fd6
#undef public_6ce5fdf
#undef public_6ce5ffa

#pragma init_seg(compiler)
extern "C" void const* const public_6ce5f69 = __AsmFindLabelExport(&internal_6ce5f10, 0x6ce5f69);
extern "C" void const* const public_6ce5f8a = __AsmFindLabelExport(&internal_6ce5f10, 0x6ce5f8a);
