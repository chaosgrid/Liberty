#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3570);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7e60);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7f80);

#define public_6ac7fb2 _public_6ac7fb2
#define public_6ac7fcf _public_6ac7fcf
#define public_6ac7fde _public_6ac7fde
#define public_6ac7ffc _public_6ac7ffc

PROC_DECLARE(0x6ac7f80, internal_6ac7f80, public_6ac7f80);
extern "C" NAKED register_t __cdecl internal_6ac7f80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        push eax
        push ebx
        mov esi, dword ptr ds : [edi]
        call public_6ac7e60
        test eax, eax
        je public_6ac7fb2
        mov ebp, dword ptr ss : [esp+0x18]
        push edi
        push 1
        lea ecx, ds:[ebx+esi*4]
        lea eax, ss:[ebp+esi*4]
        push eax
        push ecx
        call public_6ac3140
        jmp public_6ac7fde
        public_6ac7fb2 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ebp, dword ptr ss : [esp+0x18]
        cmp eax, 1
        push edi
        jne public_6ac7fcf
        lea edx, ss:[ebp+esi*4]
        lea eax, ds:[ebx+esi*4]
        push edx
        push eax
        call public_6ac3570
        jmp public_6ac7fde
        public_6ac7fcf : nop
        lea ecx, ss:[ebp+esi*4]
        lea edx, ds:[ebx+esi*4]
        push ecx
        push edx
        push ebx
        call public_6ac30a0
        public_6ac7fde : nop
        test eax, eax
        je public_6ac7ffc
        push edi
        push 1
        push ebp
        push ebx
        call public_6ac3140
        test eax, eax
        je public_6ac7ffc
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0xC
        public_6ac7ffc : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ac7f80)
    }
}

#undef public_6ac7fb2
#undef public_6ac7fcf
#undef public_6ac7fde
#undef public_6ac7ffc
