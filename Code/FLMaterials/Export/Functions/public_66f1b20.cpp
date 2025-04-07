#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1b20);

#define public_66f1b45 _public_66f1b45
#define public_66f1b70 _public_66f1b70
#define public_66f1b7a _public_66f1b7a

PROC_DECLARE(0x66f1b20, internal_66f1b20, public_66f1b20);
extern "C" NAKED register_t __cdecl internal_66f1b20()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6701018]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_66f1b45
        push eax
        push 0
        call ebp
        push eax
        call dword ptr ds : [public_6701014]
        mov dword ptr ds : [esi+4], 0
        public_66f1b45 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        je public_66f1b7a
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        push eax
        call ebp
        push eax
        call dword ptr ds : [public_670101c]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebx
        mov edx, eax
        pop edi
        lea esp, ss:[esp]
        public_66f1b70 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_66f1b70
        public_66f1b7a : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66f1b20)
    }
}

#undef public_66f1b45
#undef public_66f1b70
#undef public_66f1b7a
