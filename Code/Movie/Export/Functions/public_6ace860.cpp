#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac9250);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9360);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9430);
CLANG_FORWARD_PROC_SYMBOL(public_6ace860);
CLANG_FORWARD_PROC_SYMBOL(public_6aced90);
CLANG_FORWARD_PROC_SYMBOL(public_6acedc0);
CLANG_FORWARD_PROC_SYMBOL(public_6aceea0);

#define public_6ace8d1 _public_6ace8d1
#define public_6ace8e2 _public_6ace8e2
#define public_6ace91b _public_6ace91b
#define public_6ace92e _public_6ace92e
#define public_6ace93b _public_6ace93b
#define public_6ace942 _public_6ace942
#define public_6ace952 _public_6ace952
#define public_6ace965 _public_6ace965
#define public_6ace967 _public_6ace967

PROC_DECLARE(0x6ace860, internal_6ace860, public_6ace860);
extern "C" NAKED register_t __cdecl internal_6ace860()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xF8
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        test esi, esi
        je public_6ace965
        cmp dword ptr ds : [esi], 0x1423
        jne public_6ace965
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [esi+0x14], 1
        lea edi, ds:[esi+0x20]
        mov dword ptr ss : [ebp-8], ebx
        mov dword ptr ss : [ebp-4], eax
        jne public_6ace8e2
        lea eax, ss:[ebp-0x84]
        mov dword ptr ss : [ebp+8], 0x10
        push eax
        call public_6aced90
        push dword ptr ss : [ebp+0x10]
        lea eax, ss:[ebp-0x84]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6acedc0
        test byte ptr ds : [esi+8], 1
        je public_6ace8d1
        push ebx
        lea eax, ss:[ebp-0x84]
        push edi
        push eax
        call public_6acedc0
        public_6ace8d1 : nop
        lea eax, ss:[ebp-0x84]
        push eax
        call public_6aceea0
        lea eax, ss:[ebp-0x2C]
        jmp public_6ace92e
        public_6ace8e2 : nop
        lea eax, ss:[ebp-0xF8]
        mov dword ptr ss : [ebp+8], 0x14
        push eax
        call public_6ac9250
        push dword ptr ss : [ebp+0x10]
        lea eax, ss:[ebp-0xF8]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6ac9360
        test byte ptr ds : [esi+8], 1
        je public_6ace91b
        push ebx
        lea eax, ss:[ebp-0xF8]
        push edi
        push eax
        call public_6ac9360
        public_6ace91b : nop
        lea eax, ss:[ebp-0x1C]
        push eax
        lea eax, ss:[ebp-0xF8]
        push eax
        call public_6ac9430
        lea eax, ss:[ebp-0x1C]
        public_6ace92e : nop
        xor ecx, ecx
        mov dword ptr ss : [ebp+0x10], eax
        cmp dword ptr ss : [ebp+8], ecx
        mov eax, dword ptr ss : [ebp-4]
        jbe public_6ace952
        public_6ace93b : nop
        cmp eax, dword ptr ss : [ebp-8]
        jb public_6ace942
        xor eax, eax
        public_6ace942 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov dl, byte ptr ds : [ecx+edx]
        xor byte ptr ds : [edi+eax], dl
        inc eax
        inc ecx
        cmp ecx, dword ptr ss : [ebp+8]
        jb public_6ace93b
        public_6ace952 : nop
        mov eax, dword ptr ds : [esi+0xC]
        xor edx, edx
        add eax, dword ptr ss : [ebp-4]
        push 1
        div dword ptr ss : [ebp-8]
        pop eax
        mov dword ptr ds : [esi+0x10], edx
        jmp public_6ace967
        public_6ace965 : nop
        xor eax, eax
        public_6ace967 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6ace860)
    }
}

#undef public_6ace8d1
#undef public_6ace8e2
#undef public_6ace91b
#undef public_6ace92e
#undef public_6ace93b
#undef public_6ace942
#undef public_6ace952
#undef public_6ace965
#undef public_6ace967
