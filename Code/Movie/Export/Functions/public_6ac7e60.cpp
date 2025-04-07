#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac7e60);

#define public_6ac7e88 _public_6ac7e88
#define public_6ac7e9e _public_6ac7e9e
#define public_6ac7eb4 _public_6ac7eb4
#define public_6ac7eca _public_6ac7eca
#define public_6ac7edc _public_6ac7edc
#define public_6ac7ee7 _public_6ac7ee7
#define public_6ac7ef3 _public_6ac7ef3
#define public_6ac7f01 _public_6ac7f01

PROC_DECLARE(0x6ac7e60, internal_6ac7e60, public_6ac7e60);
extern "C" NAKED register_t __cdecl internal_6ac7e60()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        mov ebx, dword ptr ds : [eax]
        cmp ecx, 1
        mov dword ptr ss : [ebp-4], ebx
        jne public_6ac7ee7
        mov ecx, dword ptr ds : [eax+0x10]
        push esi
        push edi
        mov dword ptr ss : [ebp+0xC], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0xC]
        public_6ac7e88 : nop
        test eax, eax
        je public_6ac7e9e
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6ac7e88
        sbb eax, eax
        or eax, 1
        public_6ac7e9e : nop
        test eax, eax
        jne public_6ac7edc
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ds:[edx+ebx*4]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0xC]
        public_6ac7eb4 : nop
        test eax, eax
        je public_6ac7eca
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6ac7eb4
        sbb eax, eax
        or eax, 1
        public_6ac7eca : nop
        test eax, eax
        jne public_6ac7edc
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_6ac7edc : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_6ac7ee7 : nop
        lea ecx, ds:[ebx+ebx]
        mov dword ptr ss : [ebp+0xC], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        public_6ac7ef3 : nop
        test eax, eax
        je public_6ac7f01
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac7ef3
        inc eax
        public_6ac7f01 : nop
        xor edx, edx
        pop ebx
        test eax, eax
        sete dl
        mov eax, edx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6ac7e60)
    }
}

#undef public_6ac7e88
#undef public_6ac7e9e
#undef public_6ac7eb4
#undef public_6ac7eca
#undef public_6ac7edc
#undef public_6ac7ee7
#undef public_6ac7ef3
#undef public_6ac7f01
