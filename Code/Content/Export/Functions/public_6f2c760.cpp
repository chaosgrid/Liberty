#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2c760);
CLANG_FORWARD_PROC_SYMBOL(public_6f2dfd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ef80);

#define public_6f2c780 _public_6f2c780
#define public_6f2c793 _public_6f2c793
#define public_6f2c796 _public_6f2c796
#define public_6f2c79a _public_6f2c79a
#define public_6f2c7d3 _public_6f2c7d3
#define public_6f2c7e0 _public_6f2c7e0
#define public_6f2c7e8 _public_6f2c7e8
#define public_6f2c80c _public_6f2c80c

PROC_DECLARE(0x6f2c760, internal_6f2c760, public_6f2c760);
extern "C" NAKED register_t __cdecl internal_6f2c760()
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
        je public_6f2c79a
        lea esp, ss:[esp]
        public_6f2c780 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_6f2c793
        mov esi, dword ptr ds : [esi]
        jmp public_6f2c796
        public_6f2c793 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f2c796 : nop
        cmp esi, ecx
        jne public_6f2c780
        public_6f2c79a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6f2c7e8
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f2c7e0
        cmp edi, dword ptr ds : [edx]
        jne public_6f2c7d3
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6f2dfd0
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
        public_6f2c7d3 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f2ef80
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f2c7e0 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_6f2c80c
        public_6f2c7e8 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6f2dfd0
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
        public_6f2c80c : nop
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
        UNREACHABLE_TRAP(0x6f2c760)
    }
}

#undef public_6f2c780
#undef public_6f2c793
#undef public_6f2c796
#undef public_6f2c79a
#undef public_6f2c7d3
#undef public_6f2c7e0
#undef public_6f2c7e8
#undef public_6f2c80c
