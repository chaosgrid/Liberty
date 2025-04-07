#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5a90);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6ce3d0a _public_6ce3d0a
#define public_6ce3d28 _public_6ce3d28
#define public_6ce3d50 _public_6ce3d50
#define public_6ce3d5b _public_6ce3d5b
#define public_6ce3d70 _public_6ce3d70
#define public_6ce3d7c _public_6ce3d7c
#define public_6ce3d88 _public_6ce3d88

PROC_DECLARE(0x6ce3ca0, internal_6ce3ca0, public_6ce3ca0);
extern "C" NAKED register_t __cdecl internal_6ce3ca0()
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
        jne public_6ce3d28
        mov al, byte ptr ss : [ebp+0x20]
        push edi
        push 0x24
        mov byte ptr ss : [esp+0x14], al
        call public_6d60012
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
        call public_6ce5a90
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_6ce3d0a
        mov ebx, edi
        public_6ce3d0a : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_6ce4ab0
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_6ce4ab0
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_6ce3d28 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6ce3d88
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_6ce3d5b
        mov edi, edi
        public_6ce3d50 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6ce3d50
        public_6ce3d5b : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x21]
        test dl, dl
        jne public_6ce3d7c
        lea ecx, ds:[ecx]
        public_6ce3d70 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x21]
        test dl, dl
        je public_6ce3d70
        public_6ce3d7c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6ce3d88 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ce3ca0)
    }
}

#undef public_6ce3d0a
#undef public_6ce3d28
#undef public_6ce3d50
#undef public_6ce3d5b
#undef public_6ce3d70
#undef public_6ce3d7c
#undef public_6ce3d88
