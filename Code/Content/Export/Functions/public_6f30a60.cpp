#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f30f40);
CLANG_FORWARD_PROC_SYMBOL(public_6f310f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f30aca _public_6f30aca
#define public_6f30ae8 _public_6f30ae8
#define public_6f30b10 _public_6f30b10
#define public_6f30b1b _public_6f30b1b
#define public_6f30b30 _public_6f30b30
#define public_6f30b3c _public_6f30b3c
#define public_6f30b48 _public_6f30b48

PROC_DECLARE(0x6f30a60, internal_6f30a60, public_6f30a60);
extern "C" NAKED register_t __cdecl internal_6f30a60()
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
        mov al, byte ptr ss : [ebp+0x21]
        test al, al
        jne public_6f30ae8
        mov al, byte ptr ss : [ebp+0x20]
        push edi
        push 0x24
        mov byte ptr ss : [esp+0x14], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x20], dl
        mov byte ptr ds : [edi+0x21], 0
        call public_6f310f0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_6f30aca
        mov ebx, edi
        public_6f30aca : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_6f30f40
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_6f30f40
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_6f30ae8 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6f30b48
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_6f30b1b
        mov edi, edi
        public_6f30b10 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f30b10
        public_6f30b1b : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x21]
        test dl, dl
        jne public_6f30b3c
        lea ecx, ds:[ecx]
        public_6f30b30 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x21]
        test dl, dl
        je public_6f30b30
        public_6f30b3c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6f30b48 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f30a60)
    }
}

#undef public_6f30aca
#undef public_6f30ae8
#undef public_6f30b10
#undef public_6f30b1b
#undef public_6f30b30
#undef public_6f30b3c
#undef public_6f30b48
