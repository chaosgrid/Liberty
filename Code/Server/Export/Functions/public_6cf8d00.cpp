#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf8d81 _public_6cf8d81
#define public_6cf8d88 _public_6cf8d88
#define public_6cf8d91 _public_6cf8d91
#define public_6cf8d93 _public_6cf8d93

PROC_DECLARE(0x6cf8d00, internal_6cf8d00, public_6cf8d00);
extern "C" NAKED register_t __cdecl internal_6cf8d00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ebx], 0
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        push edi
        mov eax, 0xFFFFFFFC
        je public_6cf8d93
        push ecx
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf8d88
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_6cf8d81
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_6cf8d81
        mov ecx, eax
        mov edi, 0xFFFFFFFD
        call dword ptr ds : [public_6d644b0]
        mov esi, eax
        mov ecx, esi
        call dword ptr ds : [public_6d641a4]
        test al, al
        jne public_6cf8d91
        mov esi, dword ptr ds : [esi]
        push esi
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf8d91
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        pop edi
        mov dword ptr ds : [ebx], eax
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6cf8d81 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 
        public_6cf8d88 : nop
        pop edi
        pop esi
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 
        public_6cf8d91 : nop
        mov eax, edi
        public_6cf8d93 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6cf8d00)
    }
}

#undef public_6cf8d81
#undef public_6cf8d88
#undef public_6cf8d91
#undef public_6cf8d93
