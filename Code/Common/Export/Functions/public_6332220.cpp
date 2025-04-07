#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6332220);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6332234 _public_6332234
#define public_633225e _public_633225e
#define public_6332278 _public_6332278

PROC_DECLARE(0x6332220, internal_6332220, public_6332220);
extern "C" NAKED register_t __cdecl internal_6332220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov ebx, ecx
        je public_6332278
        push ebp
        push esi
        xor ebp, ebp
        public_6332234 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        je public_633225e
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        public_633225e : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp edi, eax
        mov dword ptr ds : [ebx+8], ecx
        jne public_6332234
        pop esi
        pop ebp
        public_6332278 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6332220)
    }
}

#undef public_6332234
#undef public_633225e
#undef public_6332278
