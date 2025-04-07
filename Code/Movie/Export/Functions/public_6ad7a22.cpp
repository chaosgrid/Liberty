#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4030);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7a22);

#define public_6ad7a6f _public_6ad7a6f
#define public_6ad7a8c _public_6ad7a8c
#define public_6ad7a91 _public_6ad7a91
#define public_6ad7aa2 _public_6ad7aa2
#define public_6ad7aba _public_6ad7aba
#define public_6ad7ad0 _public_6ad7ad0
#define public_6ad7b1b _public_6ad7b1b
#define public_6ad7b1f _public_6ad7b1f
#define public_6ad7b26 _public_6ad7b26
#define public_6ad7b57 _public_6ad7b57
#define public_6ad7b59 _public_6ad7b59

PROC_DECLARE(0x6ad7a22, internal_6ad7a22, public_6ad7a22);
extern "C" NAKED register_t __cdecl internal_6ad7a22()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaef0 @0x6ad7a27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaef0
/*FIXUP push offset _public_6ad023c @0x6ad7a2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, dword ptr ds : [public_6ae1124]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6ad7a91
        lea eax, ss:[ebp-0x1C]
        push eax
        push 1
        pop esi
        push esi
/*FIXUP push offset public_6adaeec @0x6ad7a5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaeec
        push esi
        call dword ptr ds : [public_6ada094]
        test eax, eax
        je public_6ad7a6f
        mov eax, esi
        jmp public_6ad7a8c
        public_6ad7a6f : nop
        lea eax, ss:[ebp-0x1C]
        push eax
        push esi
/*FIXUP push offset public_6adaee8 @0x6ad7a74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaee8
        push esi
        push ebx
        call dword ptr ds : [public_6ada098]
        test eax, eax
        je public_6ad7b57
        push 2
        pop eax
        public_6ad7a8c : nop
        mov dword ptr ds : [public_6ae1124], eax
        public_6ad7a91 : nop
        cmp eax, 2
        jne public_6ad7aba
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6ad7aa2
        mov eax, dword ptr ds : [public_6ae0f64]
        public_6ad7aa2 : nop
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [public_6ada098]
        jmp public_6ad7b59
        public_6ad7aba : nop
        cmp eax, 1
        jne public_6ad7b57
        cmp dword ptr ss : [ebp+0x18], ebx
        jne public_6ad7ad0
        mov eax, dword ptr ds : [public_6ae0f74]
        mov dword ptr ss : [ebp+0x18], eax
        public_6ad7ad0 : nop
        push ebx
        push ebx
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+0x20]
        neg eax
        sbb eax, eax
        and eax, 8
        inc eax
        push eax
        push dword ptr ss : [ebp+0x18]
        call dword ptr ds : [public_6ada110]
        mov dword ptr ss : [ebp-0x20], eax
        cmp eax, ebx
        je public_6ad7b57
        mov dword ptr ss : [ebp-4], ebx
        lea edi, ds:[eax+eax]
        mov eax, edi
        add eax, 3
        and al, 0xFC
        call public_6acf7c0
        mov dword ptr ss : [ebp-0x18], esp
        mov esi, esp
        mov dword ptr ss : [ebp-0x24], esi
        push edi
        push ebx
        push esi
        call public_6ad4030
        add esp, 0xC
        jmp public_6ad7b26
        public_6ad7b1b : nop
        push 1
        pop eax
        ret 
        public_6ad7b1f : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor ebx, ebx
        xor esi, esi
        public_6ad7b26 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        cmp esi, ebx
        je public_6ad7b57
        push dword ptr ss : [ebp-0x20]
        push esi
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push 1
        push dword ptr ss : [ebp+0x18]
        call dword ptr ds : [public_6ada110]
        cmp eax, ebx
        je public_6ad7b57
        push dword ptr ss : [ebp+0x14]
        push eax
        push esi
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6ada094]
        jmp public_6ad7b59
        public_6ad7b57 : nop
        xor eax, eax
        public_6ad7b59 : nop
        lea esp, ss:[ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad7a22)
        ASM_EXPORT_ENTRY_FIRST(0x6ad7b1b, public_6ad7b1b)
        ASM_EXPORT_ENTRY_LAST(0x6ad7b1f, public_6ad7b1f)
    }
}

#undef public_6ad7a6f
#undef public_6ad7a8c
#undef public_6ad7a91
#undef public_6ad7aa2
#undef public_6ad7aba
#undef public_6ad7ad0
#undef public_6ad7b1b
#undef public_6ad7b1f
#undef public_6ad7b26
#undef public_6ad7b57
#undef public_6ad7b59

#pragma init_seg(compiler)
extern "C" void const* const public_6ad7b1b = __AsmFindLabelExport(&internal_6ad7a22, 0x6ad7b1b);
extern "C" void const* const public_6ad7b1f = __AsmFindLabelExport(&internal_6ad7a22, 0x6ad7b1f);
