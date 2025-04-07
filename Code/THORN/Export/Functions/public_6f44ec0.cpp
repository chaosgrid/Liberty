#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41540);
CLANG_FORWARD_PROC_SYMBOL(public_6f415f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f416b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);

#define public_6f44f28 _public_6f44f28
#define public_6f44f78 _public_6f44f78
#define public_6f44fa6 _public_6f44fa6

PROC_DECLARE(0x6f44ec0, internal_6f44ec0, public_6f44ec0);
extern "C" NAKED register_t __cdecl internal_6f44ec0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        lea eax, ds:[edi+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6f4aa40
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [esi+4]
        je public_6f44fa6
        add edi, 0x18
        push edi
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f44fa6
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ds : [eax+0x10]
        push edi
        mov ecx, esi
        call public_6f415f0
        test al, al
        je public_6f44f28
        mov ecx, edi
        call public_6f416b0
        push esi
        mov ecx, edi
        call public_6f415f0
        public_6f44f28 : nop
        mov eax, dword ptr ds : [esi+0xE4]
        test eax, eax
        je public_6f44f78
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xEC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+0xE4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xF8]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi+0xE4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xF0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [esi+0xE4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xF4]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        public_6f44f78 : nop
        push ebx
        lea edx, ds:[esi+0xEC]
        push edx
        mov ecx, edi
        call public_6f41540
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi]
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        push eax
        mov ecx, edi
        call dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi]
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [ebx+0x10]
        pop ebx
        public_6f44fa6 : nop
        pop edi
        xor al, al
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f44ec0)
    }
}

#undef public_6f44f28
#undef public_6f44f78
#undef public_6f44fa6
