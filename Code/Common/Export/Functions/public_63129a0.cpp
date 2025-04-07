#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63129a0);

#define public_6312a0e _public_6312a0e
#define public_6312a34 _public_6312a34

PROC_DECLARE(0x63129a0, internal_63129a0, public_63129a0);
extern "C" NAKED register_t __cdecl internal_63129a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        mov ebx, ecx
        je public_6312a0e
        push esi
        call dword ptr ds : [public_6399238]
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        mov edi, dword ptr ds : [ebx+8]
        add edx, 0xFFFFFFFC
        mov dword ptr ds : [ebx+0xC], edx
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, 4
        add edi, ecx
        add edx, ecx
        add eax, eax
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [ebx+0x10], edx
        je public_6312a34
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ebx+0x10]
        add esi, eax
        sub edx, eax
        pop edi
        mov dword ptr ds : [ebx+8], esi
        add ecx, eax
        pop esi
        mov dword ptr ds : [ebx+0x10], ecx
        mov dword ptr ds : [ebx+0xC], edx
        pop ebx
        ret 4
        public_6312a0e : nop
        mov ecx, dword ptr ds : [ebx+8]
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [ecx], eax
        mov esi, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ebx+0x10]
        mov ecx, 4
        add esi, ecx
        add edx, 0xFFFFFFFC
        add eax, ecx
        mov dword ptr ds : [ebx+0x10], eax
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], edx
        public_6312a34 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63129a0)
    }
}

#undef public_6312a0e
#undef public_6312a34
