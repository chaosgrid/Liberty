#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6209c94 _public_6209c94
#define public_6209ca5 _public_6209ca5
#define public_6209cae _public_6209cae
#define public_6209cb7 _public_6209cb7
#define public_6209ccf _public_6209ccf
#define public_6209ce6 _public_6209ce6
#define public_6209cfb _public_6209cfb

PROC_DECLARE(0x6209c50, internal_6209c50, public_6209c50);
extern "C" NAKED register_t __cdecl internal_6209c50()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6209ccf
        mov edx, dword ptr ds : [ebx+0x38]
        cmp esi, edx
        je public_6209cfb
        push edi
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x40]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x3C], ecx
        jl public_6209cb7
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_6209c94
        test edx, edx
        je public_6209c94
        push edx
        call public_62460e0
        add esp, 4
        public_6209c94 : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [ebx+0x34], 1
        inc eax
        jne public_6209ca5
        xor eax, eax
        jmp public_6209cae
        public_6209ca5 : nop
        push eax
        call public_624612c
        add esp, 4
        public_6209cae : nop
        mov dword ptr ds : [ebx+0x38], eax
        mov eax, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [ebx+0x40], eax
        public_6209cb7 : nop
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov edi, dword ptr ds : [ebx+0x38]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        jmp public_6209cfb
        public_6209ccf : nop
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_6209ce6
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6209ce6
        push eax
        call public_62460e0
        add esp, 4
        public_6209ce6 : nop
        mov dword ptr ds : [ebx+0x38], 0
        mov dword ptr ds : [ebx+0x40], 0
        mov dword ptr ds : [ebx+0x3C], 0
        public_6209cfb : nop
        mov eax, dword ptr ds : [ebx+0x38]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x2C], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6209c50)
    }
}

#undef public_6209c94
#undef public_6209ca5
#undef public_6209cae
#undef public_6209cb7
#undef public_6209ccf
#undef public_6209ce6
#undef public_6209cfb
