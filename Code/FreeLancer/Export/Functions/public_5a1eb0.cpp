#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417620);
CLANG_FORWARD_PROC_SYMBOL(public_5a1eb0);

#define public_5a1ee1 _public_5a1ee1
#define public_5a1f09 _public_5a1f09
#define public_5a1f10 _public_5a1f10

PROC_DECLARE(0x5a1eb0, internal_5a1eb0, public_5a1eb0);
extern "C" NAKED register_t __cdecl internal_5a1eb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x8A4]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, eax
        jge public_5a1f10
        cmp edi, 0x100
        jge public_5a1f10
        mov eax, dword ptr ds : [esi+edi*4+0x48C]
        test eax, eax
        jne public_5a1ee1
        call public_417620
        mov dword ptr ds : [esi+edi*4+0x48C], eax
        public_5a1ee1 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x48C]
        test ecx, ecx
        je public_5a1f09
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+edi*4+0x48C]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x14]
        public_5a1f09 : nop
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_5a1f10 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5a1eb0)
    }
}

#undef public_5a1ee1
#undef public_5a1f09
#undef public_5a1f10
