#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b38ca0 _public_6b38ca0
#define public_6b38cb2 _public_6b38cb2
#define public_6b38cb8 _public_6b38cb8
#define public_6b38ce7 _public_6b38ce7
#define public_6b38cf0 _public_6b38cf0
#define public_6b38d05 _public_6b38d05
#define public_6b38d1c _public_6b38d1c
#define public_6b38d31 _public_6b38d31
#define public_6b38d60 _public_6b38d60

PROC_DECLARE(0x6b38c60, internal_6b38c60, public_6b38c60);
extern "C" NAKED register_t __cdecl internal_6b38c60()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx+4]
        push ebx
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp+8], ecx
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        lea ecx, ds:[edx+0x14]
        lea eax, ss:[ebp+0x14]
        cmp eax, ecx
        push esi
        push edi
        je public_6b38d31
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b38cb2
        lea ecx, ds:[ecx]
        public_6b38ca0 : nop
        cmp ebx, ecx
        je public_6b38cb2
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6b38ca0
        public_6b38cb2 : nop
        cmp eax, esi
        mov edi, eax
        je public_6b38ce7
        public_6b38cb8 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6b6a092
        mov ecx, dword ptr ss : [ebp+0x1C]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+0x1C], ecx
        jne public_6b38cb8
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6b38ce7 : nop
        cmp ebx, ecx
        je public_6b38d31
        nop 
        lea esp, ss:[esp]
        public_6b38cf0 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6b38d05
        mov edi, eax
        public_6b38d05 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b38d1c
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6b38d1c : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+0x1C], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6b38cf0
        mov edx, dword ptr ss : [esp+0x18]
        public_6b38d31 : nop
        lea esi, ds:[edx+0x20]
        lea edi, ss:[ebp+0x20]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [edx+0x38]
        mov dword ptr ss : [ebp+0x38], eax
        mov ecx, dword ptr ds : [edx+0x3C]
        mov dword ptr ss : [ebp+0x3C], ecx
        mov eax, dword ptr ds : [edx+0x40]
        mov ecx, edx
        mov dword ptr ss : [ebp+0x40], eax
        lea eax, ss:[ebp+0x44]
        sub ecx, ebp
        mov esi, 3
        lea esp, ss:[esp]
        public_6b38d60 : nop
        mov edi, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], edi
        add eax, 4
        dec esi
        jne public_6b38d60
        mov ecx, dword ptr ds : [edx+0x50]
        mov dword ptr ss : [ebp+0x50], ecx
        mov eax, dword ptr ds : [edx+0x58]
        mov dword ptr ss : [ebp+0x58], eax
        mov ecx, dword ptr ds : [edx+0x5C]
        pop edi
        mov dword ptr ss : [ebp+0x5C], ecx
        mov dl, byte ptr ds : [edx+0x60]
        pop esi
        mov byte ptr ss : [ebp+0x60], dl
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b38c60)
    }
}

#undef public_6b38ca0
#undef public_6b38cb2
#undef public_6b38cb8
#undef public_6b38ce7
#undef public_6b38cf0
#undef public_6b38d05
#undef public_6b38d1c
#undef public_6b38d31
#undef public_6b38d60
