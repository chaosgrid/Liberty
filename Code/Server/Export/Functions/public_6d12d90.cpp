#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d15de0);

#define public_6d12db3 _public_6d12db3
#define public_6d12dd5 _public_6d12dd5
#define public_6d12dd6 _public_6d12dd6
#define public_6d12dea _public_6d12dea

PROC_DECLARE(0x6d12d90, internal_6d12d90, public_6d12d90);
extern "C" NAKED register_t __cdecl internal_6d12d90()
{
    __asm
    {
        push ecx
        push ebp
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [eax]
        add edi, 0x10
        mov dword ptr ss : [esp+8], eax
        mov ecx, dword ptr ds : [edi+4]
        xor ebp, ebp
        cmp eax, ecx
        je public_6d12dea
        push ebx
        mov ebx, dword ptr ds : [public_6d64774]
        push esi
        public_6d12db3 : nop
        lea esi, ds:[eax+0x10]
        mov eax, dword ptr ds : [esi]
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d12dd6
        mov ecx, dword ptr ds : [eax+0x4C]
        test ecx, ecx
        jne public_6d12dd6
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_6d12dd5
        cmp esi, 2
        jne public_6d12dd6
        public_6d12dd5 : nop
        inc ebp
        public_6d12dd6 : nop
        lea ecx, ss:[esp+0x10]
        call public_6d15de0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [edi+4]
        jne public_6d12db3
        pop esi
        pop ebx
        public_6d12dea : nop
        pop edi
        mov eax, ebp
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d12d90)
    }
}

#undef public_6d12db3
#undef public_6d12dd5
#undef public_6d12dd6
#undef public_6d12dea
