#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf8f49 _public_6cf8f49
#define public_6cf8f4b _public_6cf8f4b

PROC_DECLARE(0x6cf8ed0, internal_6cf8ed0, public_6cf8ed0);
extern "C" NAKED register_t __cdecl internal_6cf8ed0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi], 0
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
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cf8f4b
        push ecx
        mov ebx, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf8f49
        mov edx, dword ptr ds : [eax]
        push edi
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 
        public_6cf8f49 : nop
        mov eax, ebx
        public_6cf8f4b : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6cf8ed0)
    }
}

#undef public_6cf8f49
#undef public_6cf8f4b
