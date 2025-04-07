#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a180);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5a879 _public_6b5a879
#define public_6b5a8af _public_6b5a8af
#define public_6b5a8e0 _public_6b5a8e0
#define public_6b5a8ec _public_6b5a8ec

PROC_DECLARE(0x6b5a830, internal_6b5a830, public_6b5a830);
extern "C" NAKED register_t __cdecl internal_6b5a830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x10]
        mov dword ptr ds : [edi+4], ebp
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [edi+0xC], 0
        mov edx, dword ptr ds : [esi+0x14]
        push edi
        push edx
        lea ebx, ds:[esi+0x18]
        push ebx
        mov ecx, esi
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6b5a879
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5a879 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ebp
        push ecx
        mov ecx, esi
        call public_6b3a180
        test eax, eax
        jne public_6b5a8ec
        mov edx, dword ptr ds : [esi+0x14]
        push edi
        push edx
        push ebx
        mov ecx, esi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6b5a8af
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5a8af : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [edi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jbe public_6b5a8e0
        mov dword ptr ds : [ecx+0x10], edi
        public_6b5a8e0 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6b5a8ec : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b5a830)
    }
}

#undef public_6b5a879
#undef public_6b5a8af
#undef public_6b5a8e0
#undef public_6b5a8ec
