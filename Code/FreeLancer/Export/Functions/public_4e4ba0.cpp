#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e4ba0);
CLANG_FORWARD_PROC_SYMBOL(public_4e4dd0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);

#define public_4e4bd4 _public_4e4bd4
#define public_4e4c16 _public_4e4c16
#define public_4e4c32 _public_4e4c32
#define public_4e4c4b _public_4e4c4b
#define public_4e4c53 _public_4e4c53
#define public_4e4c88 _public_4e4c88
#define public_4e4c8e _public_4e4c8e
#define public_4e4c90 _public_4e4c90
#define public_4e4caf _public_4e4caf

PROC_DECLARE(0x4e4ba0, internal_4e4ba0, public_4e4ba0);
extern "C" NAKED register_t __cdecl internal_4e4ba0()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push esi
        push edi
        mov esi, ecx
        lea edi, ds:[esi+0x560]
        push edi
        call public_4e4dd0
        cmp dword ptr ds : [esi+0x578], eax
        je public_4e4bd4
        push edi
        mov ecx, esi
        call public_4e4dd0
        mov dword ptr ds : [esi+0x578], eax
        mov dword ptr ds : [esi+0x574], 0
        public_4e4bd4 : nop
        mov ecx, dword ptr ds : [esi+0x578]
        xor ebx, ebx
        cmp ecx, ebx
        jle public_4e4caf
        mov eax, dword ptr ds : [esi+0x398]
        cmp eax, ebx
        je public_4e4caf
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_4e4caf
        mov edx, dword ptr ds : [esi+0x574]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x574], edx
        jl public_4e4c16
        mov dword ptr ds : [esi+0x574], ebx
        public_4e4c16 : nop
        push ebp
        mov ebp, dword ptr ds : [esi+0x574]
        push edi
        mov ecx, esi
        call public_4e4dd0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_4e4c4b
        public_4e4c32 : nop
        cmp ebp, ebx
        je public_4e4c88
        lea ecx, ss:[esp+0x10]
        call public_52afa0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+4]
        inc ebx
        cmp eax, ecx
        jne public_4e4c32
        public_4e4c4b : nop
        mov eax, dword ptr ds : [public_5c6368]
        mov bx, word ptr ds : [eax]
        public_4e4c53 : nop
        mov ecx, dword ptr ds : [public_5c6368]
        cmp bx, word ptr ds : [ecx]
        pop ebp
        je public_4e4caf
        mov esi, dword ptr ds : [esi+0x398]
        xor eax, eax
        test esi, esi
        mov ecx, 0xA
        lea edi, ss:[esp+0x10]
        rep stosd
        mov byte ptr ss : [esp+0x36], 1
        mov dword ptr ss : [esp+0x10], 0x1C
        je public_4e4c8e
        lea ecx, ds:[esi-8]
        jmp public_4e4c90
        public_4e4c88 : nop
        mov bx, word ptr ds : [eax+0xC]
        jmp public_4e4c53
        public_4e4c8e : nop
        xor ecx, ecx
        public_4e4c90 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x20], eax
        xor eax, eax
        mov ax, bx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x28], eax
        call public_54bcb0
        add esp, 4
        public_4e4caf : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x4e4ba0)
    }
}

#undef public_4e4bd4
#undef public_4e4c16
#undef public_4e4c32
#undef public_4e4c4b
#undef public_4e4c53
#undef public_4e4c88
#undef public_4e4c8e
#undef public_4e4c90
#undef public_4e4caf
