#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65df946);
CLANG_FORWARD_PROC_SYMBOL(public_65dfd28);

#define public_65df955 _public_65df955
#define public_65df95d _public_65df95d
#define public_65df967 _public_65df967
#define public_65df988 _public_65df988
#define public_65df98c _public_65df98c
#define public_65df9a3 _public_65df9a3

PROC_DECLARE(0x65df946, internal_65df946, public_65df946);
extern "C" NAKED register_t __cdecl internal_65df946()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        xor ecx, ecx
        test edi, edi
        jne public_65df955
        xor eax, eax
        pop edi
        ret 
        public_65df955 : nop
        cmp dword ptr ds : [edi], 0
        lea eax, ds:[edi+4]
        je public_65df967
        public_65df95d : nop
        mov edx, dword ptr ds : [eax]
        inc ecx
        add eax, 4
        test edx, edx
        jne public_65df95d
        public_65df967 : nop
        push ebx
        push ebp
        lea eax, ds:[ecx*4+4]
        push esi
        push eax
        call public_65d8535
        mov esi, eax
        pop ecx
        test esi, esi
        mov ebp, esi
        jne public_65df988
        push 9
        call public_65d7ef0
        pop ecx
        public_65df988 : nop
        mov eax, dword ptr ds : [edi]
        mov ebx, edi
        public_65df98c : nop
        test eax, eax
        je public_65df9a3
        push eax
        add ebx, 4
        call public_65dfd28
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [ebx]
        pop ecx
        add esi, 4
        jmp public_65df98c
        public_65df9a3 : nop
        and dword ptr ds : [esi], 0
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x65df946)
    }
}

#undef public_65df955
#undef public_65df95d
#undef public_65df967
#undef public_65df988
#undef public_65df98c
#undef public_65df9a3
