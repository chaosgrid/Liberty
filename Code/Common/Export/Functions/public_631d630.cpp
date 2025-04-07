#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_631d680 _public_631d680
#define public_631d69d _public_631d69d
#define public_631d6e6 _public_631d6e6
#define public_631d6f7 _public_631d6f7

PROC_DECLARE(0x631d630, internal_631d630, public_631d630);
extern "C" NAKED register_t __cdecl internal_631d630()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+4]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov al, byte ptr ss : [ebp+0x10]
        push edi
        push 0x28
        mov byte ptr ds : [esi+0x10], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], 0
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_631d6f7
        nop 
        lea esp, ss:[esp]
        public_631d680 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push 0x28
        mov dword ptr ss : [esp+0x1C], ecx
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], ebx
        jne public_631d69d
        mov ecx, eax
        public_631d69d : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_631d6e6
        mov cl, byte ptr ds : [edi+8]
        mov byte ptr ds : [eax], cl
        mov dx, word ptr ds : [edi+0xA]
        mov word ptr ds : [eax+2], dx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax+8], edx
        mov cl, byte ptr ds : [edi+0x14]
        mov byte ptr ds : [eax+0xC], cl
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [eax+0x10], edx
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [eax+0x14], ecx
        mov dl, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [eax+0x18], dl
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax+0x1C], ecx
        public_631d6e6 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [esi+0x18], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_631d680
        public_631d6f7 : nop
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [esi+0x1C], edx
        mov al, byte ptr ss : [ebp+0x20]
        pop edi
        mov byte ptr ds : [esi+0x20], al
        mov dword ptr ds : [esi], offset public_63a3bfc
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x631d630)
    }
}

#undef public_631d680
#undef public_631d69d
#undef public_631d6e6
#undef public_631d6f7
