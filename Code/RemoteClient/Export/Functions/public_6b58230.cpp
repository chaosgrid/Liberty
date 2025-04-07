#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b5828c _public_6b5828c

PROC_DECLARE(0x6b58230, internal_6b58230, public_6b58230);
extern "C" NAKED register_t __cdecl internal_6b58230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x74], ecx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x70], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+0x78], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ebx+0x7C], edx
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        mov dword ptr ds : [ebx+0x80], eax
        jbe public_6b5828c
        push esi
        shl eax, 2
        push edi
        push eax
        call public_6b6a134
        mov ecx, dword ptr ds : [ebx+0x80]
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ds : [ebx+0x84], eax
        mov esi, eax
        mov edi, eax
        rep movsd
        add esp, 4
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        public_6b5828c : nop
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b58230)
    }
}

#undef public_6b5828c
