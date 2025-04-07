#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e670);

#define public_6cf4c24 _public_6cf4c24
#define public_6cf4c3e _public_6cf4c3e
#define public_6cf4c40 _public_6cf4c40
#define public_6cf4c70 _public_6cf4c70
#define public_6cf4c8a _public_6cf4c8a
#define public_6cf4c8c _public_6cf4c8c
#define public_6cf4ca1 _public_6cf4ca1
#define public_6cf4ca3 _public_6cf4ca3
#define public_6cf4cb5 _public_6cf4cb5
#define public_6cf4cd0 _public_6cf4cd0
#define public_6cf4cd2 _public_6cf4cd2
#define public_6cf4cdd _public_6cf4cdd
#define public_6cf4cf9 _public_6cf4cf9
#define public_6cf4d06 _public_6cf4d06
#define public_6cf4d32 _public_6cf4d32
#define public_6cf4d34 _public_6cf4d34

PROC_DECLARE(0x6cf4c10, internal_6cf4c10, public_6cf4c10);
extern "C" NAKED register_t __cdecl internal_6cf4c10()
{
    __asm
    {
        cmp dword ptr ss : [esp+0xC], 0xFFFFFFFF
        push ebx
        push ebp
        push edi
        mov ebp, ecx
        jne public_6cf4c24
        mov dword ptr ss : [esp+0x18], 0
        public_6cf4c24 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_6cf4c3e
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        je public_6cf4c40
        public_6cf4c3e : nop
        xor ecx, ecx
        public_6cf4c40 : nop
        mov ecx, dword ptr ds : [ecx+0x88]
        mov edx, dword ptr ds : [ecx+0x90]
        test edx, edx
        je public_6cf4d34
        xor bl, bl
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov edi, dword ptr ss : [esp+0x10]
        je public_6cf4c70
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jne public_6cf4d06
        public_6cf4c70 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        push esi
        je public_6cf4c8a
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        jne public_6cf4c8a
        mov esi, eax
        jmp public_6cf4c8c
        public_6cf4c8a : nop
        xor esi, esi
        public_6cf4c8c : nop
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        lea ecx, ds:[esi+0xF0]
        je public_6cf4ca1
        add eax, 0xFFFFFFF8
        jmp public_6cf4ca3
        public_6cf4ca1 : nop
        xor eax, eax
        public_6cf4ca3 : nop
        cmp eax, edi
        jne public_6cf4cb5
        mov ax, word ptr ds : [esi+0xF8]
        cmp ax, word ptr ss : [esp+0x18]
        je public_6cf4cf9
        public_6cf4cb5 : nop
        mov edx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [edx+0x90]
        test eax, eax
        mov bl, 1
        je public_6cf4cdd
        test edi, edi
        je public_6cf4cd0
        lea eax, ds:[edi+8]
        jmp public_6cf4cd2
        public_6cf4cd0 : nop
        xor eax, eax
        public_6cf4cd2 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_6cf4cdd
        push eax
        call dword ptr ds : [public_6d6447c]
        public_6cf4cdd : nop
        mov eax, dword ptr ds : [esi+0x88]
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        je public_6cf4cf9
        mov cx, word ptr ss : [esp+0x18]
        mov word ptr ds : [esi+0xF8], cx
        public_6cf4cf9 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        pop esi
        jne public_6cf4d06
        test bl, bl
        je public_6cf4d32
        public_6cf4d06 : nop
        mov edx, dword ptr ss : [ebp-4]
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [public_6d6402c]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x24]
        push edi
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6d0e670
        public_6cf4d32 : nop
        xor eax, eax
        public_6cf4d34 : nop
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6cf4c10)
    }
}

#undef public_6cf4c24
#undef public_6cf4c3e
#undef public_6cf4c40
#undef public_6cf4c70
#undef public_6cf4c8a
#undef public_6cf4c8c
#undef public_6cf4ca1
#undef public_6cf4ca3
#undef public_6cf4cb5
#undef public_6cf4cd0
#undef public_6cf4cd2
#undef public_6cf4cdd
#undef public_6cf4cf9
#undef public_6cf4d06
#undef public_6cf4d32
#undef public_6cf4d34
