#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ac2b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ac9d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73bc);
CLANG_FORWARD_PROC_SYMBOL(public_5b73c2);

#define public_5ac9f8 _public_5ac9f8
#define public_5aca3a _public_5aca3a

PROC_DECLARE(0x5ac9d0, internal_5ac9d0, public_5ac9d0);
extern "C" NAKED register_t __cdecl internal_5ac9d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x234]
        test eax, eax
        push edi
        je public_5ac9f8
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_5ac9f8
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ds : [esi+0x234]
        call public_5b73c2
        public_5ac9f8 : nop
        push 0xFFFFFFFF
        lea ecx, ds:[esi+4]
        call public_5b73bc
        mov ecx, esi
        call public_5ac2b0
        mov al, byte ptr ds : [esi+0x238]
        xor bl, bl
        test al, al
        je public_5aca3a
        mov edi, dword ptr ds : [public_5c72ec]
        call edi
        sub eax, dword ptr ds : [public_67ea58]
        cmp eax, 0x3E8
        jb public_5aca3a
        mov bl, 1
        mov byte ptr ds : [esi+0x238], 0
        call edi
        mov dword ptr ds : [public_67ea58], eax
        public_5aca3a : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5ac9d0)
    }
}

#undef public_5ac9f8
#undef public_5aca3a
