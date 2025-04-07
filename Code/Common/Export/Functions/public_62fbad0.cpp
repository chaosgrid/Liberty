#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ba00);
CLANG_FORWARD_PROC_SYMBOL(public_62fbad0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd060);

#define public_62fbaf0 _public_62fbaf0
#define public_62fbb03 _public_62fbb03
#define public_62fbb06 _public_62fbb06
#define public_62fbb0a _public_62fbb0a
#define public_62fbb43 _public_62fbb43
#define public_62fbb50 _public_62fbb50
#define public_62fbb58 _public_62fbb58
#define public_62fbb7c _public_62fbb7c

PROC_DECLARE(0x62fbad0, internal_62fbad0, public_62fbad0);
extern "C" NAKED register_t __cdecl internal_62fbad0()
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
        je public_62fbb0a
        lea esp, ss:[esp]
        public_62fbaf0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_62fbb03
        mov esi, dword ptr ds : [esi]
        jmp public_62fbb06
        public_62fbb03 : nop
        mov esi, dword ptr ds : [esi+8]
        public_62fbb06 : nop
        cmp esi, ecx
        jne public_62fbaf0
        public_62fbb0a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_62fbb58
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_62fbb50
        cmp edi, dword ptr ds : [edx]
        jne public_62fbb43
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_62fd060
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
        public_62fbb43 : nop
        lea ecx, ss:[esp+0x1C]
        call public_626ba00
        mov ecx, dword ptr ss : [esp+0x1C]
        public_62fbb50 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_62fbb7c
        public_62fbb58 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_62fd060
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
        public_62fbb7c : nop
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
        UNREACHABLE_TRAP(0x62fbad0)
    }
}

#undef public_62fbaf0
#undef public_62fbb03
#undef public_62fbb06
#undef public_62fbb0a
#undef public_62fbb43
#undef public_62fbb50
#undef public_62fbb58
#undef public_62fbb7c
