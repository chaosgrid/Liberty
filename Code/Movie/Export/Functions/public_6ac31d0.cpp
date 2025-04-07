#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac31d0);

#define public_6ac31f2 _public_6ac31f2
#define public_6ac3208 _public_6ac3208
#define public_6ac3217 _public_6ac3217

PROC_DECLARE(0x6ac31d0, internal_6ac31d0, public_6ac31d0);
extern "C" NAKED register_t __cdecl internal_6ac31d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jle public_6ac3217
        cmp eax, 3
        jg public_6ac3217
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0xC]
        public_6ac31f2 : nop
        test eax, eax
        je public_6ac3208
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6ac31f2
        sbb eax, eax
        or eax, 1
        public_6ac3208 : nop
        xor ecx, ecx
        pop edi
        test eax, eax
        sete cl
        mov eax, ecx
        pop esi
        pop ebp
        ret 0xC
        public_6ac3217 : nop
        xor eax, eax
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ac31d0)
    }
}

#undef public_6ac31f2
#undef public_6ac3208
#undef public_6ac3217
