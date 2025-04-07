#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6333750 _public_6333750
#define public_6333768 _public_6333768

PROC_DECLARE(0x6333730, internal_6333730, public_6333730);
extern "C" NAKED register_t __cdecl internal_6333730()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x20]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6333750
        mov edi, eax
        public_6333750 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 8
        test eax, eax
        je public_6333768
        mov dword ptr ds : [eax], ecx
        public_6333768 : nop
        mov edi, dword ptr ds : [ebx+0x24]
        inc edi
        lea eax, ss:[esp+0xC]
        mov dword ptr ds : [ebx+0x24], edi
        mov edx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x10], offset public_63a4998
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6333730)
    }
}

#undef public_6333750
#undef public_6333768
