#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671629a);
CLANG_FORWARD_PROC_SYMBOL(public_671633d);

#define public_671634b _public_671634b
#define public_6716373 _public_6716373
#define public_6716377 _public_6716377
#define public_6716381 _public_6716381
#define public_671638b _public_671638b
#define public_6716395 _public_6716395
#define public_6716398 _public_6716398
#define public_67163b9 _public_67163b9
#define public_67163c7 _public_67163c7
#define public_67163d1 _public_67163d1

PROC_DECLARE(0x671633d, internal_671633d, public_671633d);
extern "C" NAKED register_t __cdecl internal_671633d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov eax, ebx
        push edi
        lea edx, ds:[eax+1]
        public_671634b : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        jne public_671634b
        sub eax, edx
        cmp eax, 1
        jb public_6716377
        cmp byte ptr ds : [ebx+1], 0x3A
        jne public_6716377
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        je public_6716373
        push 2
        push ebx
        push esi
        call public_671629a
        and byte ptr ds : [esi+2], 0
        public_6716373 : nop
        inc ebx
        inc ebx
        jmp public_6716381
        public_6716377 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6716381
        and byte ptr ds : [eax], 0
        public_6716381 : nop
        mov cl, byte ptr ds : [ebx]
        xor eax, eax
        test cl, cl
        mov edx, ebx
        je public_67163c7
        public_671638b : nop
        cmp cl, 0x2F
        je public_6716395
        cmp cl, 0x5C
        jne public_6716398
        public_6716395 : nop
        lea eax, ds:[edx+1]
        public_6716398 : nop
        inc edx
        mov cl, byte ptr ds : [edx]
        test cl, cl
        jne public_671638b
        test eax, eax
        je public_67163c7
        mov edi, dword ptr ss : [ebp+0x10]
        test edi, edi
        je public_67163d1
        sub eax, ebx
        mov esi, eax
        mov eax, 0xFF
        cmp esi, eax
        jbe public_67163b9
        mov esi, eax
        public_67163b9 : nop
        push esi
        push ebx
        push edi
        call public_671629a
        and byte ptr ds : [esi+edi], 0
        jmp public_67163d1
        public_67163c7 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_67163d1
        and byte ptr ds : [eax], 0
        public_67163d1 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x671633d)
    }
}

#undef public_671634b
#undef public_6716373
#undef public_6716377
#undef public_6716381
#undef public_671638b
#undef public_6716395
#undef public_6716398
#undef public_67163b9
#undef public_67163c7
#undef public_67163d1
