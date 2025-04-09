#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5552e0);
CLANG_FORWARD_PROC_SYMBOL(public_5553b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_555357 _public_555357
#define public_555379 _public_555379

PROC_DECLARE(0x5552e0, internal_5552e0, public_5552e0);
extern "C" NAKED register_t __cdecl internal_5552e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0xC
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        call public_5553b0
        mov ecx, eax
        add esp, 0xC
        test ecx, ecx
        je public_555379
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        jne public_555357
        mov edx, dword ptr ds : [ecx]
        push esi
        lea eax, ss:[esp+4]
        push eax
        call dword ptr ds : [edx+0x34]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5c75d8]
        mov esi, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [esi], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5c75d8]
        mov byte ptr ds : [esi+1], al
        call public_5b7ec0
        mov byte ptr ds : [esi+2], al
        pop esi
        add esp, 0xC
        ret 
        public_555357 : nop
        mov cl, byte ptr ds : [public_6140b4]
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax], cl
        mov dl, byte ptr ds : [public_6140b5]
        mov byte ptr ds : [eax+1], dl
        mov cl, byte ptr ds : [public_6140b6]
        mov byte ptr ds : [eax+2], cl
        add esp, 0xC
        ret 
        public_555379 : nop
        mov dl, byte ptr ds : [public_6140b4]
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax], dl
        mov cl, byte ptr ds : [public_6140b5]
        mov byte ptr ds : [eax+1], cl
        mov dl, byte ptr ds : [public_6140b6]
        mov byte ptr ds : [eax+2], dl
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x5552e0)
    }
}

#undef public_555357
#undef public_555379
