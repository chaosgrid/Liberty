#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf4529 _public_6bf4529
#define public_6bf4541 _public_6bf4541
#define public_6bf456b _public_6bf456b
#define public_6bf4597 _public_6bf4597
#define public_6bf45e9 _public_6bf45e9
#define public_6bf461a _public_6bf461a
#define public_6bf4626 _public_6bf4626

PROC_DECLARE(0x6bf44e0, internal_6bf44e0, public_6bf44e0);
extern "C" NAKED register_t __cdecl internal_6bf44e0()
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
        call public_6bebe50
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bf4529
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf4529 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov eax, 0x16
        jbe public_6bf4541
        mov dword ptr ds : [ebx+0xC], eax
        public_6bf4541 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6bf4626
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [esi], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6bf456b
        mov dword ptr ds : [ebx+0xC], eax
        public_6bf456b : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6bf4626
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, ecx
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6bf4597
        mov dword ptr ds : [ebx+0xC], eax
        public_6bf4597 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6bf4626
        mov eax, dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x24]
        mov ecx, eax
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
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bf45e9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf45e9 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6bf461a
        mov dword ptr ds : [ecx+0x10], ebx
        public_6bf461a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6bf4626 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bf44e0)
    }
}

#undef public_6bf4529
#undef public_6bf4541
#undef public_6bf456b
#undef public_6bf4597
#undef public_6bf45e9
#undef public_6bf461a
#undef public_6bf4626
