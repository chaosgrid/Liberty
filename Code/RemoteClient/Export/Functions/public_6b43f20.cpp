#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b43f67 _public_6b43f67
#define public_6b43f7e _public_6b43f7e
#define public_6b43f90 _public_6b43f90
#define public_6b43fb3 _public_6b43fb3
#define public_6b43fc5 _public_6b43fc5
#define public_6b43fee _public_6b43fee
#define public_6b44000 _public_6b44000
#define public_6b44027 _public_6b44027
#define public_6b44049 _public_6b44049
#define public_6b4407a _public_6b4407a

PROC_DECLARE(0x6b43f20, internal_6b43f20, public_6b43f20);
extern "C" NAKED register_t __cdecl internal_6b43f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6b4e740
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b43f67
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b43f67 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b43f7e
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b43f7e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b43f90
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b43f90 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b43fb3
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b43fb3 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b43fc5
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b43fc5 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        jbe public_6b44027
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b43fee
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b43fee : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b44000
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b44000 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        push edi
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x38]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        pop edi
        public_6b44027 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b44049
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b44049 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6b4407a
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b4407a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b43f20)
    }
}

#undef public_6b43f67
#undef public_6b43f7e
#undef public_6b43f90
#undef public_6b43fb3
#undef public_6b43fc5
#undef public_6b43fee
#undef public_6b44000
#undef public_6b44027
#undef public_6b44049
#undef public_6b4407a
