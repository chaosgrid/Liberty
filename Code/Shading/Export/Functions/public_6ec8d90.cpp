#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8560);
CLANG_FORWARD_PROC_SYMBOL(public_6ec8d90);
CLANG_FORWARD_PROC_SYMBOL(public_6eca5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eca780);
CLANG_FORWARD_PROC_SYMBOL(public_6eca7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecad20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb180);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc270);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec8db6 _public_6ec8db6
#define public_6ec8e22 _public_6ec8e22
#define public_6ec8e26 _public_6ec8e26
#define public_6ec8e4c _public_6ec8e4c
#define public_6ec8e50 _public_6ec8e50
#define public_6ec8e66 _public_6ec8e66
#define public_6ec8e90 _public_6ec8e90
#define public_6ec8ec3 _public_6ec8ec3

PROC_DECLARE(0x6ec8d90, internal_6ec8d90, public_6ec8d90);
extern "C" NAKED register_t __cdecl internal_6ec8d90()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [esp+0x1C], esi
        call public_6ecc270
        lea eax, ds:[esi+0x68]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 2
        xor ebp, ebp
        public_6ec8db6 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ecx]
        cmp ebx, ebp
        je public_6ec8e66
        mov edi, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ebx+0x18]
        cmp eax, ebp
        mov ecx, dword ptr ds : [edi]
        lea esi, ds:[ebx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ec8e22
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_6eca7e0
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ec8e22
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ec8e22
        mov eax, dword ptr ds : [eax+4]
        push eax
        mov ecx, esi
        call public_6ecb180
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_6eca7e0
        jmp public_6ec8e50
        public_6ec8e22 : nop
        cmp ecx, edi
        je public_6ec8e4c
        public_6ec8e26 : nop
        push ebp
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6eca780
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, esi
        call public_6ecad20
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        jne public_6ec8e26
        public_6ec8e4c : nop
        mov dword ptr ss : [esp+0x20], ecx
        public_6ec8e50 : nop
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [esi+8], ebp
        call public_6ed0c50
        mov esi, dword ptr ss : [esp+0x20]
        add esp, 4
        public_6ec8e66 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        add ecx, 4
        dec eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6ec8db6
        mov ecx, esi
        call public_6eca5d0
        mov ebx, dword ptr ds : [esi+0x58]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6ec8ec3
        public_6ec8e90 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_6ec8560
        push esi
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0x5C]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [eax+0x5C], ecx
        jne public_6ec8e90
        public_6ec8ec3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6ec8d90)
    }
}

#undef public_6ec8db6
#undef public_6ec8e22
#undef public_6ec8e26
#undef public_6ec8e4c
#undef public_6ec8e50
#undef public_6ec8e66
#undef public_6ec8e90
#undef public_6ec8ec3
