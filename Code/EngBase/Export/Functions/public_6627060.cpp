#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627060);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6627084 _public_6627084
#define public_66270d5 _public_66270d5

PROC_DECLARE(0x6627060, internal_6627060, public_6627060);
extern "C" NAKED register_t __cdecl internal_6627060()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        push 0x58
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], ecx
        call public_66281dc
        mov ebx, eax
        add esp, 4
        test edi, edi
        mov dword ptr ds : [ebx], esi
        jne public_6627084
        mov edi, ebx
        public_6627084 : nop
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [esi+4], ebx
        mov eax, dword ptr ds : [ebx+4]
        lea ebp, ds:[ebx+8]
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        je public_66270d5
        mov eax, dword ptr ss : [esp+0x20]
        lea edi, ss:[ebp+8]
        mov ecx, 0x12
        mov dword ptr ss : [ebp], 0
        lea esi, ds:[eax+8]
        mov dword ptr ss : [ebp+4], 0
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp], ecx
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_66270d5
        push eax
        call dword ptr ds : [public_662906c]
        push eax
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6629070]
        add esp, 8
        public_66270d5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6627060)
    }
}

#undef public_6627084
#undef public_66270d5
