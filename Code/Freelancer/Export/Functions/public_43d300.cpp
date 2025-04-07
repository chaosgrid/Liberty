#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a140);
CLANG_FORWARD_PROC_SYMBOL(public_4b9bb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4910);

#define public_43d359 _public_43d359

PROC_DECLARE(0x43d300, internal_43d300, public_43d300);
extern "C" NAKED register_t __cdecl internal_43d300()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+4]
        test al, al
        jne public_43d359
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_43d359
        mov cl, 1
        mov byte ptr ds : [esi+0x14], cl
        mov byte ptr ds : [esi+4], cl
        mov byte ptr ds : [esi+0xD], 0
        and byte ptr ds : [eax+0x6C], 0xFC
        lea eax, ss:[esp+4]
        push eax
        mov dword ptr ss : [esp+8], 0
        call public_4c4910
        add esp, 4
        call public_45a140
        call public_4b9bb0
        mov ecx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        je public_43d359
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0xEF02
        call dword ptr ds : [edx+0x5C]
        public_43d359 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x43d300)
    }
}

#undef public_43d359
