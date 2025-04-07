#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a7b0);
CLANG_FORWARD_PROC_SYMBOL(public_626b190);
CLANG_FORWARD_PROC_SYMBOL(public_6341030);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626a81a _public_626a81a
#define public_626a838 _public_626a838
#define public_626a860 _public_626a860
#define public_626a86b _public_626a86b
#define public_626a880 _public_626a880
#define public_626a88c _public_626a88c
#define public_626a898 _public_626a898

PROC_DECLARE(0x626a7b0, internal_626a7b0, public_626a7b0);
extern "C" NAKED register_t __cdecl internal_626a7b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ss : [ebp+0x2D]
        test al, al
        jne public_626a838
        mov al, byte ptr ss : [ebp+0x2C]
        push edi
        push 0x30
        mov byte ptr ss : [esp+0x14], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x2C], dl
        mov byte ptr ds : [edi+0x2D], 0
        call public_6341030
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_626a81a
        mov ebx, edi
        public_626a81a : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_626b190
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_626b190
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_626a838 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_626a898
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        jne public_626a86b
        mov edi, edi
        public_626a860 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_626a860
        public_626a86b : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x2D]
        test dl, dl
        jne public_626a88c
        lea ecx, ds:[ecx]
        public_626a880 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x2D]
        test dl, dl
        je public_626a880
        public_626a88c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_626a898 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x626a7b0)
    }
}

#undef public_626a81a
#undef public_626a838
#undef public_626a860
#undef public_626a86b
#undef public_626a880
#undef public_626a88c
#undef public_626a898
