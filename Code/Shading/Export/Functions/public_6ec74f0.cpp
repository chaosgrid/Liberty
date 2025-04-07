#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec74f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec7b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ec7da0);

#define public_6ec7510 _public_6ec7510
#define public_6ec7523 _public_6ec7523
#define public_6ec7526 _public_6ec7526
#define public_6ec752a _public_6ec752a
#define public_6ec7563 _public_6ec7563
#define public_6ec7570 _public_6ec7570
#define public_6ec7578 _public_6ec7578
#define public_6ec759c _public_6ec759c

PROC_DECLARE(0x6ec74f0, internal_6ec74f0, public_6ec74f0);
extern "C" NAKED register_t __cdecl internal_6ec74f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_6ec752a
        lea esp, ss:[esp]
        public_6ec7510 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_6ec7523
        mov esi, dword ptr ds : [esi]
        jmp public_6ec7526
        public_6ec7523 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6ec7526 : nop
        cmp esi, ecx
        jne public_6ec7510
        public_6ec752a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6ec7578
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6ec7570
        cmp edi, dword ptr ds : [edx]
        jne public_6ec7563
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6ec7b20
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6ec7563 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6ec7da0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6ec7570 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_6ec759c
        public_6ec7578 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6ec7b20
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6ec759c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec74f0)
    }
}

#undef public_6ec7510
#undef public_6ec7523
#undef public_6ec7526
#undef public_6ec752a
#undef public_6ec7563
#undef public_6ec7570
#undef public_6ec7578
#undef public_6ec759c
