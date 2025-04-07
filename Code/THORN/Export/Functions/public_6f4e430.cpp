#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e430);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f8f0);

#define public_6f4e453 _public_6f4e453
#define public_6f4e47f _public_6f4e47f
#define public_6f4e489 _public_6f4e489
#define public_6f4e49e _public_6f4e49e

PROC_DECLARE(0x6f4e430, internal_6f4e430, public_6f4e430);
extern "C" NAKED register_t __cdecl internal_6f4e430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [eax+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push ebp
        call public_6f4e4b0
        mov ecx, eax
        cdq 
        add esp, 4
        idiv ebx
        mov dword ptr ss : [esp+0x18], ecx
        mov edi, edx
        public_6f4e453 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ss : [ebp]
        mov esi, edi
        shl esi, 5
        add esi, eax
        mov eax, dword ptr ds : [esi]
        cmp eax, edx
        jne public_6f4e47f
        push esi
        push ebp
        call public_6f4f8f0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
        jmp public_6f4e489
        public_6f4e47f : nop
        xor edx, edx
        cmp eax, 0xFFFFFFFA
        setne dl
        mov eax, edx
        public_6f4e489 : nop
        test eax, eax
        je public_6f4e49e
        lea eax, ds:[ebx-2]
        and eax, ecx
        lea edi, ds:[edi+eax+1]
        cmp edi, ebx
        jl public_6f4e453
        sub edi, ebx
        jmp public_6f4e453
        public_6f4e49e : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4e430)
    }
}

#undef public_6f4e453
#undef public_6f4e47f
#undef public_6f4e489
#undef public_6f4e49e
