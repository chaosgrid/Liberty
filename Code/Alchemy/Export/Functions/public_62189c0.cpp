#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62189c0);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6218a04 _public_6218a04
#define public_6218a15 _public_6218a15
#define public_6218a1e _public_6218a1e
#define public_6218a27 _public_6218a27
#define public_6218a3f _public_6218a3f
#define public_6218a56 _public_6218a56
#define public_6218a6b _public_6218a6b

PROC_DECLARE(0x62189c0, internal_62189c0, public_62189c0);
extern "C" NAKED register_t __cdecl internal_62189c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6218a3f
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_6218a6b
        push edi
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x44]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x40], ecx
        jl public_6218a27
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6218a04
        test edx, edx
        je public_6218a04
        push edx
        call public_62460e0
        add esp, 4
        public_6218a04 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_6218a15
        xor eax, eax
        jmp public_6218a1e
        public_6218a15 : nop
        push eax
        call public_624612c
        add esp, 4
        public_6218a1e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_6218a27 : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edi, dword ptr ds : [ebx+0x3C]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        jmp public_6218a6b
        public_6218a3f : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6218a56
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_6218a56
        push eax
        call public_62460e0
        add esp, 4
        public_6218a56 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_6218a6b : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62189c0)
    }
}

#undef public_6218a04
#undef public_6218a15
#undef public_6218a1e
#undef public_6218a27
#undef public_6218a3f
#undef public_6218a56
#undef public_6218a6b
