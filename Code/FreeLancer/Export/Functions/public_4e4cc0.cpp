#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e4cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4e4dd0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);

#define public_4e4cf4 _public_4e4cf4
#define public_4e4d2a _public_4e4d2a
#define public_4e4d48 _public_4e4d48
#define public_4e4d61 _public_4e4d61
#define public_4e4d69 _public_4e4d69
#define public_4e4d9e _public_4e4d9e
#define public_4e4da4 _public_4e4da4
#define public_4e4da6 _public_4e4da6
#define public_4e4dc5 _public_4e4dc5

PROC_DECLARE(0x4e4cc0, internal_4e4cc0, public_4e4cc0);
extern "C" NAKED register_t __cdecl internal_4e4cc0()
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
        je public_4e4cf4
        push edi
        mov ecx, esi
        call public_4e4dd0
        mov dword ptr ds : [esi+0x578], eax
        mov dword ptr ds : [esi+0x574], 0
        public_4e4cf4 : nop
        mov ecx, dword ptr ds : [esi+0x578]
        test ecx, ecx
        jle public_4e4dc5
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e4dc5
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e4dc5
        dec dword ptr ds : [esi+0x574]
        jns public_4e4d2a
        dec ecx
        mov dword ptr ds : [esi+0x574], ecx
        public_4e4d2a : nop
        push ebp
        mov ebp, dword ptr ds : [esi+0x574]
        push edi
        mov ecx, esi
        call public_4e4dd0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_4e4d61
        public_4e4d48 : nop
        cmp ebp, ebx
        je public_4e4d9e
        lea ecx, ss:[esp+0x10]
        call public_52afa0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+4]
        inc ebx
        cmp eax, ecx
        jne public_4e4d48
        public_4e4d61 : nop
        mov eax, dword ptr ds : [public_5c6368]
        mov bx, word ptr ds : [eax]
        public_4e4d69 : nop
        mov ecx, dword ptr ds : [public_5c6368]
        cmp bx, word ptr ds : [ecx]
        pop ebp
        je public_4e4dc5
        mov esi, dword ptr ds : [esi+0x398]
        xor eax, eax
        test esi, esi
        mov ecx, 0xA
        lea edi, ss:[esp+0x10]
        rep stosd
        mov byte ptr ss : [esp+0x36], 1
        mov dword ptr ss : [esp+0x10], 0x1C
        je public_4e4da4
        lea ecx, ds:[esi-8]
        jmp public_4e4da6
        public_4e4d9e : nop
        mov bx, word ptr ds : [eax+0xC]
        jmp public_4e4d69
        public_4e4da4 : nop
        xor ecx, ecx
        public_4e4da6 : nop
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
        public_4e4dc5 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x4e4cc0)
    }
}

#undef public_4e4cf4
#undef public_4e4d2a
#undef public_4e4d48
#undef public_4e4d61
#undef public_4e4d69
#undef public_4e4d9e
#undef public_4e4da4
#undef public_4e4da6
#undef public_4e4dc5
