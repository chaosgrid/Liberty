#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9e0);

#define public_6f7a7d0 _public_6f7a7d0
#define public_6f7a7e3 _public_6f7a7e3
#define public_6f7a7e6 _public_6f7a7e6
#define public_6f7a7ea _public_6f7a7ea
#define public_6f7a823 _public_6f7a823
#define public_6f7a830 _public_6f7a830
#define public_6f7a838 _public_6f7a838
#define public_6f7a85c _public_6f7a85c

PROC_DECLARE(0x6f7a7b0, internal_6f7a7b0, public_6f7a7b0);
extern "C" NAKED register_t __cdecl internal_6f7a7b0()
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
        je public_6f7a7ea
        lea esp, ss:[esp]
        public_6f7a7d0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_6f7a7e3
        mov esi, dword ptr ds : [esi]
        jmp public_6f7a7e6
        public_6f7a7e3 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f7a7e6 : nop
        cmp esi, ecx
        jne public_6f7a7d0
        public_6f7a7ea : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6f7a838
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f7a830
        cmp edi, dword ptr ds : [edx]
        jne public_6f7a823
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6f7c9e0
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
        public_6f7a823 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f00610
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f7a830 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_6f7a85c
        public_6f7a838 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6f7c9e0
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
        public_6f7a85c : nop
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
        UNREACHABLE_TRAP(0x6f7a7b0)
    }
}

#undef public_6f7a7d0
#undef public_6f7a7e3
#undef public_6f7a7e6
#undef public_6f7a7ea
#undef public_6f7a823
#undef public_6f7a830
#undef public_6f7a838
#undef public_6f7a85c
