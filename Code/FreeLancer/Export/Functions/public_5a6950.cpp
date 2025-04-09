#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a6950);
CLANG_FORWARD_PROC_SYMBOL(public_5a76e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7bc0);

#define public_5a6970 _public_5a6970
#define public_5a6983 _public_5a6983
#define public_5a6986 _public_5a6986
#define public_5a698a _public_5a698a
#define public_5a69c3 _public_5a69c3
#define public_5a69d0 _public_5a69d0
#define public_5a69d8 _public_5a69d8
#define public_5a69fc _public_5a69fc

PROC_DECLARE(0x5a6950, internal_5a6950, public_5a6950);
extern "C" NAKED register_t __cdecl internal_5a6950()
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
        je public_5a698a
        lea esp, ss:[esp]
        public_5a6970 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_5a6983
        mov esi, dword ptr ds : [esi]
        jmp public_5a6986
        public_5a6983 : nop
        mov esi, dword ptr ds : [esi+8]
        public_5a6986 : nop
        cmp esi, ecx
        jne public_5a6970
        public_5a698a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_5a69d8
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_5a69d0
        cmp edi, dword ptr ds : [edx]
        jne public_5a69c3
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_5a76e0
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
        public_5a69c3 : nop
        lea ecx, ss:[esp+0x1C]
        call public_5a7bc0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_5a69d0 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_5a69fc
        public_5a69d8 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_5a76e0
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
        public_5a69fc : nop
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
        UNREACHABLE_TRAP(0x5a6950)
    }
}

#undef public_5a6970
#undef public_5a6983
#undef public_5a6986
#undef public_5a698a
#undef public_5a69c3
#undef public_5a69d0
#undef public_5a69d8
#undef public_5a69fc
