#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b94c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b9509 _public_62b9509

PROC_DECLARE(0x62b94c0, internal_62b94c0, public_62b94c0);
extern "C" NAKED register_t __cdecl internal_62b94c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 0xFFFFFFFF
        je public_62b9509
        mov ecx, dword ptr ds : [public_6399038]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        public_62b9509 : nop
        push esi
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62b94c0)
    }
}

#undef public_62b9509
