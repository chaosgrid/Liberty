#include "ReadFile-PCH.h"


#define public_6b75f2a _public_6b75f2a

PROC_DECLARE(0x6b75f10, internal_6b75f10, public_6b75f10);
extern "C" NAKED register_t __cdecl internal_6b75f10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x120]
        test eax, eax
        je public_6b75f2a
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0xA0]
        public_6b75f2a : nop
        push esi
        lea esi, ds:[ecx+0x154]
        push edi
        push esi
        call dword ptr ds : [public_6b79054]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call dword ptr ss : [esp+0x1C]
        push esi
        mov edi, eax
        call dword ptr ds : [public_6b79050]
        mov eax, edi
        pop edi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6b75f10)
    }
}

#undef public_6b75f2a
