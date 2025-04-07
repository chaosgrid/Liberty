#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427160);

#define public_427197 _public_427197

PROC_DECLARE(0x427160, internal_427160, public_427160);
extern "C" NAKED register_t __cdecl internal_427160()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        push edi
        mov ecx, 7
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+0x1C], 0
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_427197
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push ecx
        call dword ptr ds : [edx+0x34]
        public_427197 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+0x20], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+0x24], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0x28], edx
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [ebx+0x2C], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+0x30], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [ebx+0x34], edx
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ebx+0x38], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ebx+0x3C], ecx
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [ebx+0x40], edx
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [ebx+0x44], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x48], ecx
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x427160)
    }
}

#undef public_427197
