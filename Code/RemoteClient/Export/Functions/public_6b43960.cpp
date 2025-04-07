#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b439a9 _public_6b439a9
#define public_6b439c1 _public_6b439c1
#define public_6b439d1 _public_6b439d1
#define public_6b439f6 _public_6b439f6
#define public_6b43a06 _public_6b43a06
#define public_6b43a30 _public_6b43a30
#define public_6b43a40 _public_6b43a40
#define public_6b43a5a _public_6b43a5a
#define public_6b43a85 _public_6b43a85
#define public_6b43a9c _public_6b43a9c
#define public_6b43aa3 _public_6b43aa3
#define public_6b43aba _public_6b43aba
#define public_6b43ac3 _public_6b43ac3
#define public_6b43af6 _public_6b43af6

PROC_DECLARE(0x6b43960, internal_6b43960, public_6b43960);
extern "C" NAKED register_t __cdecl internal_6b43960()
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
        push edi
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
        je public_6b439a9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b439a9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6b439c1
        mov dword ptr ds : [ebx+0xC], edi
        public_6b439c1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b439d1
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b439d1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        jbe public_6b43a30
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b439f6
        mov dword ptr ds : [ebx+0xC], edi
        public_6b439f6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b43a06
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b43a06 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x20]
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
        mov edi, 0x16
        public_6b43a30 : nop
        cmp word ptr ss : [ebp+0x30], 0
        jbe public_6b43aa3
        mov eax, dword ptr ss : [ebp+0x2C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6b43aa3
        public_6b43a40 : nop
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_6b43a9c
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6b43a5a
        mov dword ptr ds : [ebx+0xC], edi
        public_6b43a5a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b43aba
        mov edx, dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [ebp+0x18]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6b43a85
        mov dword ptr ds : [ebx+0xC], edi
        public_6b43a85 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b43aba
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6b43a9c : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ss : [ebp+0x2C]
        jne public_6b43a40
        public_6b43aa3 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b43ac3
        public_6b43aba : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b43ac3 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [ebx]
        add edi, edx
        mov dword ptr ds : [ecx+0x18], edi
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        mov esi, ebp
        jbe public_6b43af6
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b43af6 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b43960)
    }
}

#undef public_6b439a9
#undef public_6b439c1
#undef public_6b439d1
#undef public_6b439f6
#undef public_6b43a06
#undef public_6b43a30
#undef public_6b43a40
#undef public_6b43a5a
#undef public_6b43a85
#undef public_6b43a9c
#undef public_6b43aa3
#undef public_6b43aba
#undef public_6b43ac3
#undef public_6b43af6
