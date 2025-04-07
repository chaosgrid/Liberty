#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7b6b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7d8f);

#define public_6ad7bbf _public_6ad7bbf
#define public_6ad7be1 _public_6ad7be1
#define public_6ad7bf6 _public_6ad7bf6
#define public_6ad7c1d _public_6ad7c1d
#define public_6ad7c33 _public_6ad7c33
#define public_6ad7c7b _public_6ad7c7b
#define public_6ad7c7f _public_6ad7c7f
#define public_6ad7c8e _public_6ad7c8e
#define public_6ad7cf9 _public_6ad7cf9
#define public_6ad7cfb _public_6ad7cfb
#define public_6ad7d0d _public_6ad7d0d
#define public_6ad7d2f _public_6ad7d2f
#define public_6ad7d33 _public_6ad7d33
#define public_6ad7d41 _public_6ad7d41
#define public_6ad7d68 _public_6ad7d68
#define public_6ad7d6e _public_6ad7d6e
#define public_6ad7d88 _public_6ad7d88

PROC_DECLARE(0x6ad7b6b, internal_6ad7b6b, public_6ad7b6b);
extern "C" NAKED register_t __cdecl internal_6ad7b6b()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaf00 @0x6ad7b70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaf00
/*FIXUP push offset _public_6ad023c @0x6ad7b75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        xor edi, edi
        cmp dword ptr ds : [public_6ae1128], edi
        jne public_6ad7be1
        push edi
        push edi
        push 1
        pop ebx
        push ebx
/*FIXUP push offset public_6adaeec @0x6ad7ba1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaeec
        mov esi, 0x100
        push esi
        push edi
        call dword ptr ds : [public_6ada08c]
        test eax, eax
        je public_6ad7bbf
        mov dword ptr ds : [public_6ae1128], ebx
        jmp public_6ad7be1
        public_6ad7bbf : nop
        push edi
        push edi
        push ebx
/*FIXUP push offset public_6adaee8 @0x6ad7bc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaee8
        push esi
        push edi
        call dword ptr ds : [public_6ada090]
        test eax, eax
        je public_6ad7cf9
        mov dword ptr ds : [public_6ae1128], 2
        public_6ad7be1 : nop
        cmp dword ptr ss : [ebp+0x14], edi
        jle public_6ad7bf6
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        call public_6ad7d8f
        pop ecx
        pop ecx
        mov dword ptr ss : [ebp+0x14], eax
        public_6ad7bf6 : nop
        mov eax, dword ptr ds : [public_6ae1128]
        cmp eax, 2
        jne public_6ad7c1d
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6ada090]
        jmp public_6ad7cfb
        public_6ad7c1d : nop
        cmp eax, 1
        jne public_6ad7cf9
        cmp dword ptr ss : [ebp+0x20], edi
        jne public_6ad7c33
        mov eax, dword ptr ds : [public_6ae0f74]
        mov dword ptr ss : [ebp+0x20], eax
        public_6ad7c33 : nop
        push edi
        push edi
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0x24]
        neg eax
        sbb eax, eax
        and eax, 8
        inc eax
        push eax
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_6ada110]
        mov ebx, eax
        mov dword ptr ss : [ebp-0x1C], ebx
        cmp ebx, edi
        je public_6ad7cf9
        mov dword ptr ss : [ebp-4], edi
        lea eax, ds:[ebx+ebx]
        add eax, 3
        and al, 0xFC
        call public_6acf7c0
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, esp
        mov dword ptr ss : [ebp-0x24], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_6ad7c8e
        public_6ad7c7b : nop
        push 1
        pop eax
        ret 
        public_6ad7c7f : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor edi, edi
        mov dword ptr ss : [ebp-0x24], edi
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ebx, dword ptr ss : [ebp-0x1C]
        public_6ad7c8e : nop
        cmp dword ptr ss : [ebp-0x24], edi
        je public_6ad7cf9
        push ebx
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push 1
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_6ada110]
        test eax, eax
        je public_6ad7cf9
        push edi
        push edi
        push ebx
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6ada08c]
        mov esi, eax
        mov dword ptr ss : [ebp-0x28], esi
        cmp esi, edi
        je public_6ad7cf9
        test byte ptr ss : [ebp+0xD], 4
        je public_6ad7d0d
        cmp dword ptr ss : [ebp+0x1C], edi
        je public_6ad7d88
        cmp esi, dword ptr ss : [ebp+0x1C]
        jg public_6ad7cf9
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        push ebx
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6ada08c]
        test eax, eax
        jne public_6ad7d88
        public_6ad7cf9 : nop
        xor eax, eax
        public_6ad7cfb : nop
        lea esp, ss:[ebp-0x38]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ad7d0d : nop
        mov dword ptr ss : [ebp-4], 1
        lea eax, ds:[esi+esi]
        add eax, 3
        and al, 0xFC
        call public_6acf7c0
        mov dword ptr ss : [ebp-0x18], esp
        mov ebx, esp
        mov dword ptr ss : [ebp-0x20], ebx
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_6ad7d41
        public_6ad7d2f : nop
        push 1
        pop eax
        ret 
        public_6ad7d33 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor edi, edi
        xor ebx, ebx
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov esi, dword ptr ss : [ebp-0x28]
        public_6ad7d41 : nop
        cmp ebx, edi
        je public_6ad7cf9
        push esi
        push ebx
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6ada08c]
        test eax, eax
        je public_6ad7cf9
        cmp dword ptr ss : [ebp+0x1C], edi
        push edi
        push edi
        jne public_6ad7d68
        push edi
        push edi
        jmp public_6ad7d6e
        public_6ad7d68 : nop
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        public_6ad7d6e : nop
        push esi
        push ebx
        push 0x220
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_6ada03c]
        mov esi, eax
        cmp esi, edi
        je public_6ad7cf9
        public_6ad7d88 : nop
        mov eax, esi
        jmp public_6ad7cfb
        UNREACHABLE_TRAP(0x6ad7b6b)
        ASM_EXPORT_ENTRY_FIRST(0x6ad7c7b, public_6ad7c7b)
        ASM_EXPORT_ENTRY(0x6ad7c7f, public_6ad7c7f)
        ASM_EXPORT_ENTRY(0x6ad7d2f, public_6ad7d2f)
        ASM_EXPORT_ENTRY_LAST(0x6ad7d33, public_6ad7d33)
    }
}

#undef public_6ad7bbf
#undef public_6ad7be1
#undef public_6ad7bf6
#undef public_6ad7c1d
#undef public_6ad7c33
#undef public_6ad7c7b
#undef public_6ad7c7f
#undef public_6ad7c8e
#undef public_6ad7cf9
#undef public_6ad7cfb
#undef public_6ad7d0d
#undef public_6ad7d2f
#undef public_6ad7d33
#undef public_6ad7d41
#undef public_6ad7d68
#undef public_6ad7d6e
#undef public_6ad7d88

#pragma init_seg(compiler)
extern "C" void const* const public_6ad7c7b = __AsmFindLabelExport(&internal_6ad7b6b, 0x6ad7c7b);
extern "C" void const* const public_6ad7c7f = __AsmFindLabelExport(&internal_6ad7b6b, 0x6ad7c7f);
extern "C" void const* const public_6ad7d2f = __AsmFindLabelExport(&internal_6ad7b6b, 0x6ad7d2f);
extern "C" void const* const public_6ad7d33 = __AsmFindLabelExport(&internal_6ad7b6b, 0x6ad7d33);
