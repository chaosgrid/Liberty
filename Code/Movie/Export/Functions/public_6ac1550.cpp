#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1550);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9ca0);

#define public_6ac158b _public_6ac158b
#define public_6ac159b _public_6ac159b
#define public_6ac15a9 _public_6ac15a9
#define public_6ac15b8 _public_6ac15b8
#define public_6ac15ca _public_6ac15ca
#define public_6ac15d0 _public_6ac15d0
#define public_6ac15dd _public_6ac15dd
#define public_6ac15f9 _public_6ac15f9
#define public_6ac1616 _public_6ac1616
#define public_6ac161f _public_6ac161f
#define public_6ac163a _public_6ac163a

PROC_DECLARE(0x6ac1550, internal_6ac1550, public_6ac1550);
extern "C" NAKED register_t __cdecl internal_6ac1550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset _public_6ad9ca0 @0x6ac1555*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad9ca0
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
        jbe public_6ac158b
        mov dword ptr ss : [ebp-0x14], eax
        mov esi, eax
        public_6ac158b : nop
        lea eax, ds:[esi+2]
        mov dword ptr ss : [ebp-4], 0
        test eax, eax
        jge public_6ac159b
        xor eax, eax
        public_6ac159b : nop
        push eax
        call public_6acf3db
        add esp, 4
        mov dword ptr ss : [ebp+8], eax
        jmp public_6ac15d0
        public_6ac15a9 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x14], eax
        add eax, 2
        test eax, eax
        jge public_6ac15b8
        xor eax, eax
        public_6ac15b8 : nop
        push eax
        call public_6acf3db
        mov dword ptr ss : [ebp+8], eax
        add esp, 4
/*FIXUP mov eax, offset public_6ac15ca @0x6ac15c4*/
  FIXUP lea eax, ds : [public_6ac15ca]
        ret 
        public_6ac15ca : nop
        mov ebx, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ss : [ebp-0x14]
        public_6ac15d0 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jbe public_6ac15f9
        cmp eax, esi
        jbe public_6ac15dd
        mov eax, esi
        public_6ac15dd : nop
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
        public_6ac15f9 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6ac161f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6ac1616
        cmp cl, 0xFF
        je public_6ac1616
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ac161f
        public_6ac1616 : nop
        push eax
        call public_6acf3d0
        add esp, 4
        public_6ac161f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], 0
        inc eax
        cmp edi, esi
        mov dword ptr ds : [ebx+4], eax
        mov byte ptr ds : [eax-1], 0
        mov dword ptr ds : [ebx+0xC], esi
        ja public_6ac163a
        mov esi, edi
        public_6ac163a : nop
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
        UNREACHABLE_TRAP(0x6ac1550)
        ASM_EXPORT_ENTRY_FIRST(0x6ac15a9, public_6ac15a9)
        ASM_EXPORT_ENTRY_LAST(0x6ac15ca, public_6ac15ca)
    }
}

#undef public_6ac158b
#undef public_6ac159b
#undef public_6ac15a9
#undef public_6ac15b8
#undef public_6ac15ca
#undef public_6ac15d0
#undef public_6ac15dd
#undef public_6ac15f9
#undef public_6ac1616
#undef public_6ac161f
#undef public_6ac163a

#pragma init_seg(compiler)
extern "C" void const* const public_6ac15a9 = __AsmFindLabelExport(&internal_6ac1550, 0x6ac15a9);
extern "C" void const* const public_6ac15ca = __AsmFindLabelExport(&internal_6ac1550, 0x6ac15ca);
