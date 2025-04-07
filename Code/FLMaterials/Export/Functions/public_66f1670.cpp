#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66f16ac _public_66f16ac
#define public_66f16d7 _public_66f16d7

PROC_DECLARE(0x66f1670, internal_66f1670, public_66f1670);
extern "C" NAKED register_t __cdecl internal_66f1670()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        call public_6700710
        mov ebx, dword ptr ss : [esp+0x14]
        add esp, 4
        xor eax, eax
        test ebx, ebx
        mov dword ptr ss : [ebp+0x14], 0
        je public_66f16d7
        push esi
        or ecx, 0xFFFFFFFF
        push edi
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        inc esi
        cmp esi, 0x40
        jbe public_66f16ac
        mov esi, 0x40
        public_66f16ac : nop
        push esi
        call public_6700810
        push esi
        push ebx
        push eax
        mov dword ptr ss : [ebp+0x14], eax
        call dword ptr ds : [public_6701034]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov byte ptr ds : [esi+ecx-1], 0
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        call dword ptr ds : [public_6701060]
        add esp, 0x14
        pop edi
        xor eax, eax
        pop esi
        public_66f16d7 : nop
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66f1670)
    }
}

#undef public_66f16ac
#undef public_66f16d7
