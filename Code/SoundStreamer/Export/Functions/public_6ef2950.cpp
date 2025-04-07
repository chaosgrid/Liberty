#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2950);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4a65);
CLANG_FORWARD_PROC_SYMBOL(public_6efbc60);

#define public_6ef298b _public_6ef298b
#define public_6ef29a4 _public_6ef29a4
#define public_6ef29b3 _public_6ef29b3
#define public_6ef29c5 _public_6ef29c5
#define public_6ef29cb _public_6ef29cb
#define public_6ef29df _public_6ef29df
#define public_6ef29f9 _public_6ef29f9
#define public_6ef2a15 _public_6ef2a15
#define public_6ef2a1e _public_6ef2a1e
#define public_6ef2a3b _public_6ef2a3b

PROC_DECLARE(0x6ef2950, internal_6ef2950, public_6ef2950);
extern "C" NAKED register_t __cdecl internal_6ef2950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset _public_6efbc60 @0x6ef2955*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6efbc60
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x10], esp
        mov ebx, ecx
        mov dword ptr ss : [ebp-0x14], ebx
        mov eax, dword ptr ss : [ebp+8]
        mov esi, eax
        or esi, 0x1F
        mov dword ptr ss : [ebp-0x18], esi
        cmp esi, 0xFFFFFFFD
        jbe public_6ef298b
        mov dword ptr ss : [ebp-0x18], eax
        mov esi, eax
        public_6ef298b : nop
        mov dword ptr ss : [ebp-4], 0
        push 0
        lea eax, ds:[esi+2]
        push eax
        mov ecx, ebx
        call public_6ef2a60
        mov dword ptr ss : [ebp-0x1C], eax
        jmp public_6ef29cb
        public_6ef29a4 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x18], eax
        add eax, 2
        test eax, eax
        jge public_6ef29b3
        xor eax, eax
        public_6ef29b3 : nop
        push eax
        call public_6ef4a65
        add esp, 4
        mov dword ptr ss : [ebp-0x1C], eax
/*FIXUP mov eax, offset public_6ef29c5 @0x6ef29bf*/
  FIXUP lea eax, ds : [public_6ef29c5]
        ret 
        public_6ef29c5 : nop
        mov ebx, dword ptr ss : [ebp-0x14]
        mov esi, dword ptr ss : [ebp-0x18]
        public_6ef29cb : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jbe public_6ef29f9
        cmp eax, esi
        jbe public_6ef29df
        mov eax, esi
        public_6ef29df : nop
        mov ecx, eax
        mov esi, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [ebp-0x1C]
        lea edi, ds:[edx+1]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [ebp-0x18]
        public_6ef29f9 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6ef2a1e
        dec eax
        mov cl, byte ptr ds : [eax]
        test cl, cl
        je public_6ef2a15
        cmp cl, 0xFF
        je public_6ef2a15
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ef2a1e
        public_6ef2a15 : nop
        push eax
        call public_6ef4507
        add esp, 4
        public_6ef2a1e : nop
        mov dword ptr ds : [ebx+8], 0
        mov ecx, dword ptr ss : [ebp-0x1C]
        lea eax, ds:[ecx+1]
        mov dword ptr ds : [ebx+4], eax
        mov byte ptr ds : [eax-1], 0
        mov dword ptr ds : [ebx+0xC], esi
        cmp edi, esi
        ja public_6ef2a3b
        mov esi, edi
        public_6ef2a3b : nop
        mov dword ptr ds : [ebx+8], esi
        mov edx, dword ptr ds : [ebx+4]
        mov byte ptr ds : [esi+edx], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ef2950)
        ASM_EXPORT_ENTRY_FIRST(0x6ef29a4, public_6ef29a4)
        ASM_EXPORT_ENTRY_LAST(0x6ef29c5, public_6ef29c5)
    }
}

#undef public_6ef298b
#undef public_6ef29a4
#undef public_6ef29b3
#undef public_6ef29c5
#undef public_6ef29cb
#undef public_6ef29df
#undef public_6ef29f9
#undef public_6ef2a15
#undef public_6ef2a1e
#undef public_6ef2a3b

#pragma init_seg(compiler)
extern "C" void const* const public_6ef29a4 = __AsmFindLabelExport(&internal_6ef2950, 0x6ef29a4);
extern "C" void const* const public_6ef29c5 = __AsmFindLabelExport(&internal_6ef2950, 0x6ef29c5);
