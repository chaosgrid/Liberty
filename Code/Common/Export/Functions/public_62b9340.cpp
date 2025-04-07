#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9340);
CLANG_FORWARD_PROC_SYMBOL(public_62bab30);
CLANG_FORWARD_PROC_SYMBOL(public_62bac10);
CLANG_FORWARD_PROC_SYMBOL(public_62bb4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62b93f7 _public_62b93f7
#define public_62b9414 _public_62b9414
#define public_62b9440 _public_62b9440
#define public_62b944b _public_62b944b
#define public_62b9460 _public_62b9460
#define public_62b946c _public_62b946c
#define public_62b9478 _public_62b9478

PROC_DECLARE(0x62b9340, internal_62b9340, public_62b9340);
extern "C" NAKED register_t __cdecl internal_62b9340()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0xC]
        push 0x50
        mov byte ptr ds : [esi+0xC], dl
        call public_6391d9c
        mov byte ptr ds : [eax+0x4D], 0
        xor ebp, ebp
        mov dword ptr ds : [eax+4], ebp
        mov cl, 1
        mov byte ptr ds : [eax+0x4C], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x4D], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x50
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x4C], 0
        mov byte ptr ds : [eax+0x4D], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov edx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov cl, byte ptr ss : [ebp+0x4D]
        add esp, 8
        test cl, cl
        jne public_62b9414
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x4C]
        mov ecx, esi
        push edx
        push eax
        call public_62bac10
        mov ebx, eax
        lea eax, ss:[ebp+0xC]
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_62bb4b0
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, eax
        jne public_62b93f7
        mov dword ptr ss : [esp+0x14], ebx
        public_62b93f7 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push edx
        mov ecx, esi
        call public_62bab30
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        mov ecx, esi
        call public_62bab30
        mov dword ptr ds : [ebx+8], eax
        public_62b9414 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_62b9478
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        jne public_62b944b
        lea ebx, ds:[ebx]
        public_62b9440 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        je public_62b9440
        public_62b944b : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        jne public_62b946c
        lea ecx, ds:[ecx]
        public_62b9460 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        je public_62b9460
        public_62b946c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        ret 4
        public_62b9478 : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62b9340)
    }
}

#undef public_62b93f7
#undef public_62b9414
#undef public_62b9440
#undef public_62b944b
#undef public_62b9460
#undef public_62b946c
#undef public_62b9478
