#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf8b10 _public_6cf8b10
#define public_6cf8b12 _public_6cf8b12

PROC_DECLARE(0x6cf8a80, internal_6cf8a80, public_6cf8a80);
extern "C" NAKED register_t __cdecl internal_6cf8a80()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cf8b12
        push ecx
        mov ebx, 0xFFFFFFFE
        call public_6d00670
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cf8b10
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, eax
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 
        public_6cf8b10 : nop
        mov eax, ebx
        public_6cf8b12 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6cf8a80)
    }
}

#undef public_6cf8b10
#undef public_6cf8b12
