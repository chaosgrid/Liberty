#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6711000);
CLANG_FORWARD_PROC_SYMBOL(public_671697c);
CLANG_FORWARD_PROC_SYMBOL(public_67169d0);
CLANG_FORWARD_PROC_SYMBOL(public_67169dc);

#define public_671103a _public_671103a
#define public_671105c _public_671105c
#define public_671105e _public_671105e
#define public_6711068 _public_6711068

PROC_DECLARE(0x6711000, internal_6711000, public_6711000);
extern "C" NAKED register_t __cdecl internal_6711000()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6717114]
        push esi
        push 0
        push 0
        xor bl, bl
        call ebp
        mov esi, eax
        test esi, esi
        je public_6711068
        lea eax, ds:[esi*4]
        push edi
        push eax
        call public_67169dc
        add esp, 4
        mov edi, eax
        push edi
        push esi
        call ebp
        mov ebp, eax
        test ebp, ebp
        je public_671105e
        xor esi, esi
        test ebp, ebp
        jbe public_671105e
        public_671103a : nop
        mov eax, dword ptr ds : [edi+esi*4]
        push eax
        call public_671697c
        test eax, eax
        jne public_671105c
        inc esi
        cmp esi, ebp
        jb public_671103a
        push edi
        call public_67169d0
        add esp, 4
        mov al, bl
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_671105c : nop
        mov bl, 1
        public_671105e : nop
        push edi
        call public_67169d0
        add esp, 4
        pop edi
        public_6711068 : nop
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6711000)
    }
}

#undef public_671103a
#undef public_671105c
#undef public_671105e
#undef public_6711068
