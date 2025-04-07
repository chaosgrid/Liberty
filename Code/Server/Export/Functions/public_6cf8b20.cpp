#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf8b92 _public_6cf8b92
#define public_6cf8b94 _public_6cf8b94

PROC_DECLARE(0x6cf8b20, internal_6cf8b20, public_6cf8b20);
extern "C" NAKED register_t __cdecl internal_6cf8b20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0xC
        test ecx, 0x3FFFFFFF
        push esi
        push edi
        mov eax, 0xFFFFFFFC
        je public_6cf8b94
        push ecx
        mov edi, 0xFFFFFFFE
        call public_6d00670
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cf8b92
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 
        public_6cf8b92 : nop
        mov eax, edi
        public_6cf8b94 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6cf8b20)
    }
}

#undef public_6cf8b92
#undef public_6cf8b94
