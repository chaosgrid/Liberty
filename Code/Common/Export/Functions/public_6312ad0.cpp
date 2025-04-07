#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312ad0);

#define public_6312b40 _public_6312b40
#define public_6312b66 _public_6312b66

PROC_DECLARE(0x6312ad0, internal_6312ad0, public_6312ad0);
extern "C" NAKED register_t __cdecl internal_6312ad0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        mov edx, ecx
        je public_6312b40
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], eax
        mov ebx, dword ptr ds : [edx+0xC]
        mov edi, dword ptr ds : [edx+8]
        add ebx, 0xFFFFFFFC
        mov dword ptr ds : [edx+0xC], ebx
        mov ebx, dword ptr ds : [edx+0x10]
        mov ecx, 4
        add edi, ecx
        add ebx, ecx
        test eax, eax
        mov dword ptr ds : [edx+8], edi
        mov dword ptr ds : [edx+0x10], ebx
        je public_6312b66
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [edx+0x10]
        add edi, eax
        sub esi, eax
        mov dword ptr ds : [edx+8], edi
        pop edi
        mov dword ptr ds : [edx+0xC], esi
        add ecx, eax
        pop esi
        mov dword ptr ds : [edx+0x10], ecx
        pop ebx
        ret 4
        public_6312b40 : nop
        mov ecx, dword ptr ds : [edx+8]
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [ecx], eax
        mov edi, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, 4
        add edi, ecx
        add esi, 0xFFFFFFFC
        add eax, ecx
        mov dword ptr ds : [edx+0x10], eax
        mov dword ptr ds : [edx+8], edi
        mov dword ptr ds : [edx+0xC], esi
        public_6312b66 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6312ad0)
    }
}

#undef public_6312b40
#undef public_6312b66
