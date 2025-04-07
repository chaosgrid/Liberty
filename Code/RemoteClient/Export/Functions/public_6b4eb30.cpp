#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4eb30);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4eb4f _public_6b4eb4f
#define public_6b4eb7c _public_6b4eb7c
#define public_6b4eba2 _public_6b4eba2
#define public_6b4ebb8 _public_6b4ebb8
#define public_6b4ebe2 _public_6b4ebe2

PROC_DECLARE(0x6b4eb30, internal_6b4eb30, public_6b4eb30);
extern "C" NAKED register_t __cdecl internal_6b4eb30()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add edx, 4
        push esi
        mov eax, edx
        cmp eax, ecx
        push edi
        mov dword ptr ds : [ebx+0x10], edx
        mov esi, 0x17
        jbe public_6b4eb4f
        mov dword ptr ds : [ebx+0x1C], esi
        public_6b4eb4f : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4ebe2
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ebx+0x14]
        add edx, ecx
        cmp edx, eax
        jbe public_6b4eb7c
        mov dword ptr ds : [ebx+0x1C], esi
        public_6b4eb7c : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4ebe2
        mov eax, dword ptr ds : [edi]
        push eax
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ds : [edi+4], eax
        jne public_6b4eba2
        mov dword ptr ds : [edi], eax
        pop edi
        pop esi
        mov eax, 5
        pop ebx
        ret 4
        public_6b4eba2 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ebx+0x10]
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], edx
        jbe public_6b4ebb8
        mov dword ptr ds : [ebx+0x1C], esi
        public_6b4ebb8 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4ebe2
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ebx+0x18]
        mov edi, dword ptr ds : [edi+4]
        mov ecx, eax
        push ebp
        mov ebp, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        add edx, eax
        rep movsb
        mov dword ptr ds : [ebx+0x18], edx
        xor eax, eax
        pop ebp
        public_6b4ebe2 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b4eb30)
    }
}

#undef public_6b4eb4f
#undef public_6b4eb7c
#undef public_6b4eba2
#undef public_6b4ebb8
#undef public_6b4ebe2
