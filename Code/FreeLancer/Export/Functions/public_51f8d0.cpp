#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_51f810);
CLANG_FORWARD_PROC_SYMBOL(public_51f8d0);

#define public_51f93e _public_51f93e

PROC_DECLARE(0x51f8d0, internal_51f8d0, public_51f8d0);
extern "C" NAKED register_t __cdecl internal_51f8d0()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [public_675314]
        test ecx, ecx
        je public_51f93e
        mov eax, dword ptr ds : [public_675318]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_51f93e
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 0
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_610534]
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edx
        push esi
        call dword ptr ds : [eax+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        push 1
        push 2
        push esi
        mov ecx, edi
        call public_51f810
        pop esi
        public_51f93e : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x51f8d0)
    }
}

#undef public_51f93e
