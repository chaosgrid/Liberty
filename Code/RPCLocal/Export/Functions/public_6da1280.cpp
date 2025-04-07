#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1280);
CLANG_FORWARD_PROC_SYMBOL(public_6da17e0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1a00);
CLANG_FORWARD_PROC_SYMBOL(public_6da1dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6da2140);
CLANG_FORWARD_PROC_SYMBOL(public_6da21b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da129e _public_6da129e
#define public_6da12a0 _public_6da12a0
#define public_6da12d0 _public_6da12d0
#define public_6da12f8 _public_6da12f8
#define public_6da131d _public_6da131d
#define public_6da1321 _public_6da1321
#define public_6da1341 _public_6da1341

PROC_DECLARE(0x6da1280, internal_6da1280, public_6da1280);
extern "C" NAKED register_t __cdecl internal_6da1280()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6dbbf60]
        mov al, 1
        test al, cl
        jne public_6da129e
        or cl, al
        mov byte ptr ds : [public_6dbbf60], cl
        mov ecx, offset public_6dbbf4c
        jmp public_6da12a0
        public_6da129e : nop
        ret 
        nop 
        public_6da12a0 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6da131d
        mov ecx, eax
        cmp eax, ecx
        jne public_6da131d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6da12f8
        nop 
        lea esp, ss:[esp]
        public_6da12d0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6da1dd0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0x10]
        call public_6da21b0
        push ebx
        call public_6db1dc2
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6da12d0
        public_6da12f8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6da17e0
        jmp public_6da1341
        public_6da131d : nop
        cmp eax, edi
        je public_6da1341
        public_6da1321 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6da2140
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6da1a00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6da1321
        public_6da1341 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6db1dc2
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6db1dc2
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6da1280)
    }
}

#undef public_6da129e
#undef public_6da12a0
#undef public_6da12d0
#undef public_6da12f8
#undef public_6da131d
#undef public_6da1321
#undef public_6da1341
