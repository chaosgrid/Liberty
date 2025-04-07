#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf8ff5 _public_6cf8ff5
#define public_6cf8ff7 _public_6cf8ff7

PROC_DECLARE(0x6cf8f60, internal_6cf8f60, public_6cf8f60);
extern "C" NAKED register_t __cdecl internal_6cf8f60()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ebx], 0
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cf8ff7
        push ecx
        mov ebp, 0xFFFFFFFE
        call public_6d00670
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cf8ff5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x140]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 
        public_6cf8ff5 : nop
        mov eax, ebp
        public_6cf8ff7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6cf8f60)
    }
}

#undef public_6cf8ff5
#undef public_6cf8ff7
