#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c3f81 _public_65c3f81
#define public_65c3f9e _public_65c3f9e
#define public_65c3fb5 _public_65c3fb5
#define public_65c3fc6 _public_65c3fc6

PROC_DECLARE(0x65c3f30, internal_65c3f30, public_65c3f30);
extern "C" NAKED register_t __cdecl internal_65c3f30()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx], offset public_65c7460
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push esi
        mov dword ptr ds : [ebx+0xC], edx
        mov al, byte ptr ss : [ebp+0x14]
        push edi
        push 0xC
        mov byte ptr ds : [ebx+0x14], al
        call public_65c6a66
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+0x18], eax
        mov dword ptr ds : [ebx+0x1C], 0
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_65c3fc6
        public_65c3f81 : nop
        mov ecx, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x1C], ecx
        call public_65c6a66
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_65c3f9e
        mov ecx, eax
        public_65c3f9e : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_65c3fb5
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        public_65c3fb5 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0x1C], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_65c3f81
        public_65c3fc6 : nop
        lea esi, ss:[ebp+0x20]
        lea edi, ds:[ebx+0x20]
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0x38], edx
        mov dword ptr ds : [ebx+0x10], offset public_65c74b4
        mov eax, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ebx+0x3C], eax
        mov ecx, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [ebx+0x40], ecx
        lea edx, ss:[ebp+0x44]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x44]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x50], eax
        mov ecx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [ebx+0x58], ecx
        mov edx, dword ptr ss : [ebp+0x5C]
        pop edi
        mov dword ptr ds : [ebx+0x5C], edx
        mov al, byte ptr ss : [ebp+0x60]
        pop esi
        mov byte ptr ds : [ebx+0x60], al
        pop ebp
        mov dword ptr ds : [ebx], offset public_65c74bc
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x65c3f30)
    }
}

#undef public_65c3f81
#undef public_65c3f9e
#undef public_65c3fb5
#undef public_65c3fc6
