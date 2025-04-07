#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620a7f3 _public_620a7f3
#define public_620a80a _public_620a80a
#define public_620a817 _public_620a817
#define public_620a81d _public_620a81d
#define public_620a82b _public_620a82b
#define public_620a83c _public_620a83c
#define public_620a850 _public_620a850
#define public_620a85a _public_620a85a
#define public_620a86c _public_620a86c
#define public_620a872 _public_620a872

PROC_DECLARE(0x620a7a0, internal_620a7a0, public_620a7a0);
extern "C" NAKED register_t __cdecl internal_620a7a0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], edi
        mov ebx, dword ptr ds : [edi+0xC]
        inc ebx
        cmp ebp, ebx
        jle public_620a850
        mov edx, dword ptr ds : [edi+0x10]
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], edx
        jg public_620a81d
        je public_620a81d
        mov esi, dword ptr ds : [edi+4]
        lea ecx, ds:[ebp*8]
        xor eax, eax
        mov dword ptr ss : [esp+0x14], esi
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], eax
        je public_620a7f3
        push ecx
        call public_624612c
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        public_620a7f3 : nop
        test esi, esi
        je public_620a817
        test eax, eax
        je public_620a80a
        lea ecx, ds:[edx+edx]
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        public_620a80a : nop
        push esi
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        public_620a817 : nop
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+0x10], ebp
        public_620a81d : nop
        mov eax, dword ptr ds : [edi+4]
        cmp ebx, ebp
        lea eax, ds:[eax+ebx*8]
        jge public_620a872
        mov ecx, ebp
        sub ecx, ebx
        public_620a82b : nop
        test eax, eax
        je public_620a83c
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        public_620a83c : nop
        add eax, 8
        dec ecx
        jne public_620a82b
        dec ebp
        mov dword ptr ds : [edi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        public_620a850 : nop
        jge public_620a872
        mov esi, dword ptr ds : [edi+4]
        add esi, 4
        sub ebx, ebp
        public_620a85a : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_620a86c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620a86c : nop
        add esi, 8
        dec ebx
        jne public_620a85a
        public_620a872 : nop
        dec ebp
        mov dword ptr ds : [edi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x620a7a0)
    }
}

#undef public_620a7f3
#undef public_620a80a
#undef public_620a817
#undef public_620a81d
#undef public_620a82b
#undef public_620a83c
#undef public_620a850
#undef public_620a85a
#undef public_620a86c
#undef public_620a872
