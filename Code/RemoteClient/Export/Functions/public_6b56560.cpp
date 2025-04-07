#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b565a9 _public_6b565a9
#define public_6b565cd _public_6b565cd
#define public_6b565e0 _public_6b565e0
#define public_6b56603 _public_6b56603
#define public_6b56616 _public_6b56616
#define public_6b56659 _public_6b56659
#define public_6b5668a _public_6b5668a

PROC_DECLARE(0x6b56560, internal_6b56560, public_6b56560);
extern "C" NAKED register_t __cdecl internal_6b56560()
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
        je public_6b565a9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b565a9 : nop
        xor eax, eax
        or ecx, 0xFFFFFFFF
        lea edx, ss:[ebp+0x20]
        mov edi, edx
        repne scasb
        mov eax, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        not ecx
        add eax, 2
        dec ecx
        cmp eax, edi
        mov dword ptr ds : [ebx], eax
        jbe public_6b565cd
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b565cd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b565e0
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b565e0 : nop
        mov eax, dword ptr ds : [esi]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ds : [ebx+4]
        xor eax, eax
        mov ax, cx
        mov ecx, dword ptr ds : [ebx]
        add ecx, eax
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6b56603
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b56603 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6b56616
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b56616 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, eax
        mov esi, edx
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp+0x14]
        add ecx, eax
        push ebx
        lea eax, ss:[ebp+0x18]
        push edx
        mov dword ptr ds : [eax], ecx
        push eax
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b56659
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b56659 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
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
        jbe public_6b5668a
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b5668a : nop
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
        UNREACHABLE_TRAP(0x6b56560)
    }
}

#undef public_6b565a9
#undef public_6b565cd
#undef public_6b565e0
#undef public_6b56603
#undef public_6b56616
#undef public_6b56659
#undef public_6b5668a
