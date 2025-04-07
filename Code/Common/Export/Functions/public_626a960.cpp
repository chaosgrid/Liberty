#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a960);
CLANG_FORWARD_PROC_SYMBOL(public_626b2d0);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626a9ca _public_626a9ca
#define public_626a9e8 _public_626a9e8
#define public_626aa10 _public_626aa10
#define public_626aa1b _public_626aa1b
#define public_626aa30 _public_626aa30
#define public_626aa3c _public_626aa3c
#define public_626aa48 _public_626aa48

PROC_DECLARE(0x626a960, internal_626a960, public_626a960);
extern "C" NAKED register_t __cdecl internal_626a960()
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
        mov al, byte ptr ss : [ebp+0x15]
        test al, al
        jne public_626a9e8
        mov al, byte ptr ss : [ebp+0x14]
        push edi
        push 0x18
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
        mov byte ptr ds : [edi+0x14], dl
        mov byte ptr ds : [edi+0x15], 0
        call public_62bee40
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_626a9ca
        mov ebx, edi
        public_626a9ca : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_626b2d0
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_626b2d0
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_626a9e8 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_626aa48
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_626aa1b
        mov edi, edi
        public_626aa10 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_626aa10
        public_626aa1b : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_626aa3c
        lea ecx, ds:[ecx]
        public_626aa30 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_626aa30
        public_626aa3c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_626aa48 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x626a960)
    }
}

#undef public_626a9ca
#undef public_626a9e8
#undef public_626aa10
#undef public_626aa1b
#undef public_626aa30
#undef public_626aa3c
#undef public_626aa48
