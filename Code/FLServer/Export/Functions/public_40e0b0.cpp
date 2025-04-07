#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_419050);
CLANG_FORWARD_PROC_SYMBOL(public_419056);
CLANG_FORWARD_PROC_SYMBOL(public_41905c);

#define public_40e0bb _public_40e0bb
#define public_40e0d4 _public_40e0d4
#define public_40e159 _public_40e159

PROC_DECLARE(0x40e0b0, internal_40e0b0, public_40e0b0);
extern "C" NAKED register_t __cdecl internal_40e0b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        test esi, esi
        jne public_40e0bb
        xor al, al
        pop esi
        ret 
        public_40e0bb : nop
        mov eax, dword ptr ds : [public_427828]
        mov ecx, dword ptr ds : [eax+0x6FC]
        push ebx
        push edi
        xor ebx, ebx
        xor edi, edi
        test ecx, ecx
        jbe public_40e159
        public_40e0d4 : nop
        lea ecx, ds:[edi+1]
        push ecx
        mov ecx, esi
        call public_41905c
        mov edx, dword ptr ds : [public_427828]
        lea edi, ds:[edi+eax+1]
        mov eax, dword ptr ds : [edx+0x6FC]
        inc ebx
        cmp ebx, eax
        jb public_40e0d4
        test edi, edi
        jle public_40e159
        push edi
        push 0
        mov ecx, esi
        call public_419050
        mov eax, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [public_41bbe8]
        push 0
        push 0
        push 0xCF
        push eax
        call edi
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        push 0
        push 0x303
        push ecx
        call edi
        mov edx, dword ptr ds : [esi+0x20]
        push 0
        push 1
        push 0xCF
        push edx
        call edi
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        mov ecx, esi
        call public_419050
        mov eax, dword ptr ds : [esi+0x20]
        push 0
        push 0
        push 0xBA
        push eax
        call edi
        push 0
        push eax
        mov ecx, esi
        call public_419056
        public_40e159 : nop
        pop edi
        pop ebx
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40e0b0)
    }
}

#undef public_40e0bb
#undef public_40e0d4
#undef public_40e159
