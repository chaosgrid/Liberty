#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);

#define public_6ed6573 _public_6ed6573
#define public_6ed659a _public_6ed659a
#define public_6ed65a4 _public_6ed65a4
#define public_6ed65ac _public_6ed65ac

PROC_DECLARE(0x6ed6560, internal_6ed6560, public_6ed6560);
extern "C" NAKED register_t __cdecl internal_6ed6560()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x38]
        push edi
        mov edi, dword ptr ds : [esi+0x34]
        cmp edi, eax
        je public_6ed65a4
        mov ebx, dword ptr ss : [esp+0x10]
        public_6ed6573 : nop
        push ebx
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6ed659a
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, dword ptr ds : [edi]
        jne public_6ed659a
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [ebx+8]
        jne public_6ed659a
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [edx-4]
        cmp eax, dword ptr ds : [ebx+0xC]
        je public_6ed65ac
        public_6ed659a : nop
        mov eax, dword ptr ds : [esi+0x38]
        add edi, 4
        cmp edi, eax
        jne public_6ed6573
        public_6ed65a4 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_6ed65ac : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ed6560)
    }
}

#undef public_6ed6573
#undef public_6ed659a
#undef public_6ed65a4
#undef public_6ed65ac
