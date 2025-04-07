#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf4397 _public_6bf4397
#define public_6bf43b6 _public_6bf43b6
#define public_6bf43e9 _public_6bf43e9

PROC_DECLARE(0x6bf4350, internal_6bf4350, public_6bf4350);
extern "C" NAKED register_t __cdecl internal_6bf4350()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[esi+0x10]
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [edi+0xC], 0
        mov eax, dword ptr ds : [esi+0x14]
        push edi
        push eax
        lea ebx, ds:[esi+0x18]
        push ebx
        mov ecx, esi
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6bf4397
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf4397 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push edi
        push ecx
        push ebx
        mov ecx, esi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6bf43b6
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf43b6 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi]
        add ebx, edx
        mov esi, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], ebx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jbe public_6bf43e9
        mov dword ptr ds : [ecx+0x10], edi
        public_6bf43e9 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bf4350)
    }
}

#undef public_6bf4397
#undef public_6bf43b6
#undef public_6bf43e9
