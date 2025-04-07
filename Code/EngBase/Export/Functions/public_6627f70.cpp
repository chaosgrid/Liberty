#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627f70);

#define public_6627fba _public_6627fba

PROC_DECLARE(0x6627f70, internal_6627f70, public_6627f70);
extern "C" NAKED register_t __cdecl internal_6627f70()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        je public_6627fba
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        lea edi, ds:[ebx+8]
        lea esi, ds:[eax+8]
        mov ecx, 0x12
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+4], 0
        rep movsd
        mov ecx, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [ebx], ecx
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        pop esi
        je public_6627fba
        push eax
        call dword ptr ds : [public_662906c]
        push eax
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_6629070]
        add esp, 8
        public_6627fba : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6627f70)
    }
}

#undef public_6627fba
