#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e790);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_41e7b5 _public_41e7b5
#define public_41e7d0 _public_41e7d0
#define public_41e7f7 _public_41e7f7
#define public_41e860 _public_41e860
#define public_41e86a _public_41e86a
#define public_41e86c _public_41e86c

PROC_DECLARE(0x41e790, internal_41e790, public_41e790);
extern "C" NAKED register_t __cdecl internal_41e790()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        xor al, al
        cmp ecx, ebx
        je public_41e86c
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_41e7b5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_41e7b5 : nop
        mov cl, byte ptr ds : [esi+0x14]
        push ebp
        mov ebp, dword ptr ds : [esi+4]
        and cl, 0xF3
        push edi
        mov byte ptr ds : [esi+0x14], cl
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_41e7f7
        lea ebx, ds:[ebx]
        public_41e7d0 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [esi+8], ecx
        jne public_41e7d0
        public_41e7f7 : nop
        xor eax, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+0x10]
        push 1
        mov dword ptr ss : [esp+0x18], 0x14
        mov dword ptr ss : [esp+0x1C], 0x10
        mov dword ptr ss : [esp+0x28], ebx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        pop edi
        pop ebp
        jl public_41e86a
        mov eax, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        mov bl, 1
        mov dword ptr ds : [esi+0x24], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0x24]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0x28], 0
        je public_41e860
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi+0x28], eax
        public_41e860 : nop
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x14
        ret 4
        public_41e86a : nop
        xor al, al
        public_41e86c : nop
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x41e790)
    }
}

#undef public_41e7b5
#undef public_41e7d0
#undef public_41e7f7
#undef public_41e860
#undef public_41e86a
#undef public_41e86c
