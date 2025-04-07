#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9d20);
CLANG_FORWARD_PROC_SYMBOL(public_6eca710);
CLANG_FORWARD_PROC_SYMBOL(public_6ecad20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb180);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb560);

#define public_6ec9281 _public_6ec9281
#define public_6ec92e1 _public_6ec92e1
#define public_6ec92fd _public_6ec92fd
#define public_6ec9321 _public_6ec9321
#define public_6ec9325 _public_6ec9325
#define public_6ec9345 _public_6ec9345

PROC_DECLARE(0x6ec9270, internal_6ec9270, public_6ec9270);
extern "C" NAKED register_t __cdecl internal_6ec9270()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, 2
        jb public_6ec9281
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6ec9281 : nop
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+esi*4+0x68]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6ec9345
        mov ebx, dword ptr ss : [esp+0x18]
        push ebx
        push esi
        push eax
        mov ecx, edi
        call public_6ec9d20
        test bl, bl
        je public_6ec9345
        mov eax, dword ptr ds : [edi+esi*4+0x68]
        mov dword ptr ds : [eax+0x1C], 0
        mov esi, dword ptr ds : [edi+esi*4+0x68]
        mov edi, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi]
        add esi, 8
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6ec9321
        mov ecx, eax
        cmp eax, ecx
        jne public_6ec9321
        mov eax, dword ptr ds : [esi+8]
        push ebp
        mov ebp, dword ptr ds : [edi+4]
        cmp ebp, eax
        mov edi, ebp
        je public_6ec92fd
        public_6ec92e1 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_6ecb180
        mov edi, dword ptr ds : [edi]
        lea ecx, ss:[ebp+0x10]
        call public_6eca710
        cmp edi, dword ptr ds : [esi+8]
        mov ebp, edi
        jne public_6ec92e1
        public_6ec92fd : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        pop ebp
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        pop ebx
        mov dword ptr ds : [esi+8], esi
        xor eax, eax
        pop esi
        ret 0xC
        public_6ec9321 : nop
        cmp eax, edi
        je public_6ec9345
        public_6ec9325 : nop
        lea ecx, ss:[esp+0x14]
        mov ebx, eax
        call public_6ecb560
        push ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6ecad20
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        jne public_6ec9325
        public_6ec9345 : nop
        pop edi
        pop ebx
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ec9270)
    }
}

#undef public_6ec9281
#undef public_6ec92e1
#undef public_6ec92fd
#undef public_6ec9321
#undef public_6ec9325
#undef public_6ec9345
