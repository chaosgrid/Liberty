#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a850);

#define public_6d5c92d _public_6d5c92d
#define public_6d5c93c _public_6d5c93c
#define public_6d5c957 _public_6d5c957
#define public_6d5c9ab _public_6d5c9ab
#define public_6d5c9b1 _public_6d5c9b1
#define public_6d5c9b9 _public_6d5c9b9
#define public_6d5ca04 _public_6d5ca04
#define public_6d5cb15 _public_6d5cb15
#define public_6d5cb3b _public_6d5cb3b
#define public_6d5cb57 _public_6d5cb57
#define public_6d5cb76 _public_6d5cb76
#define public_6d5cb87 _public_6d5cb87
#define public_6d5cb9a _public_6d5cb9a

PROC_DECLARE(0x6d5c8d0, internal_6d5c8d0, public_6d5c8d0);
extern "C" NAKED register_t __cdecl internal_6d5c8d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xA0
        test eax, 0x3FFFFFFF
        push ebp
        push esi
        push edi
        je public_6d5c92d
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6d5c92d
        push eax
        call dword ptr ds : [public_6d644dc]
        mov esi, dword ptr ss : [esp+0xB8]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        sub eax, 0
        je public_6d5cb57
        dec eax
        je public_6d5c957
        dec eax
        jne public_6d5c92d
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, 0
        je public_6d5c93c
        dec eax
        jne public_6d5c92d
        mov eax, dword ptr ds : [edi+8]
        mov cl, byte ptr ds : [esi+0x10]
        mov byte ptr ds : [eax+0x11C0], cl
        public_6d5c92d : nop
        pop edi
        pop esi
        mov eax, 4
        pop ebp
        add esp, 0xA0
        ret 
        public_6d5c93c : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov al, byte ptr ds : [esi+0x10]
        pop edi
        pop esi
        mov byte ptr ds : [edx+0x245], al
        mov eax, 4
        pop ebp
        add esp, 0xA0
        ret 
        public_6d5c957 : nop
        mov ebp, dword ptr ds : [edi+0xC]
        lea ecx, ss:[esp+0x6C]
        call public_6d0a850
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 0
        mov dword ptr ss : [esp+0x98], 0
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x90], 0
        mov ecx, 1
        je public_6d5c9b1
        dec eax
        je public_6d5c9ab
        dec eax
        jne public_6d5c9b9
        mov ecx, ebp
        call dword ptr ds : [public_6d649ac]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0xA0
        ret 
        public_6d5c9ab : nop
        mov dword ptr ss : [esp+0x58], ecx
        jmp public_6d5c9b9
        public_6d5c9b1 : nop
        mov dword ptr ss : [esp+0x58], 0
        public_6d5c9b9 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, 0
        je public_6d5cb15
        dec eax
        je public_6d5ca04
        dec eax
        jne public_6d5cb3b
        mov edx, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x68], edx
        lea edx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xA8], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x58], 2
        call dword ptr ds : [public_6d649a8]
        pop edi
        pop esi
        mov eax, 4
        pop ebp
        add esp, 0xA0
        ret 
        public_6d5ca04 : nop
        fld dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x54], ecx
        fadd dword ptr ds : [esi+0x24]
        lea edi, ss:[esp+0x6C]
        fld dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x44], 0x3F800000
        fadd dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x34], 0x3F800000
        fld dword ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+0x24], 0x3F800000
        fadd dword ptr ds : [esi+0x38]
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        fstp dword ptr ss : [esp+0x20]
        fxch 
        mov dword ptr ss : [esp+0x30], 0
        fmul dword ptr ds : [public_6d6b9cc]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6d6b9cc]
        mov dword ptr ss : [esp+0x48], eax
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6d6b9cc]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, 0xC
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x50], edx
        fabs 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x28]
        mov eax, dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x10]
        fabs 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x2C]
        lea esi, ss:[esp+0x24]
        fsub dword ptr ss : [esp+0x14]
        rep movsd
        fabs 
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xA0], ecx
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xA4], edx
        lea edx, ss:[esp+0x54]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xA0], eax
        call dword ptr ds : [public_6d649a8]
        pop edi
        pop esi
        mov eax, 4
        pop ebp
        add esp, 0xA0
        ret 
        public_6d5cb15 : nop
        lea eax, ds:[esi+0x14]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x68], ecx
        public_6d5cb3b : nop
        lea edx, ss:[esp+0x54]
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_6d649a8]
        pop edi
        pop esi
        mov eax, 4
        pop ebp
        add esp, 0xA0
        ret 
        public_6d5cb57 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push 0
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d649a4]
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 0xFFFFFFFF
        je public_6d5cb76
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d649a0]
        public_6d5cb76 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, 0xFFFFFFFF
        je public_6d5cb87
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d6499c]
        public_6d5cb87 : nop
        mov al, byte ptr ds : [esi+0x18]
        test al, al
        je public_6d5cb9a
        add esi, 0x1C
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d64998]
        public_6d5cb9a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0xA0
        ret 
        UNREACHABLE_TRAP(0x6d5c8d0)
    }
}

#undef public_6d5c92d
#undef public_6d5c93c
#undef public_6d5c957
#undef public_6d5c9ab
#undef public_6d5c9b1
#undef public_6d5c9b9
#undef public_6d5ca04
#undef public_6d5cb15
#undef public_6d5cb3b
#undef public_6d5cb57
#undef public_6d5cb76
#undef public_6d5cb87
#undef public_6d5cb9a
