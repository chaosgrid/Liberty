#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_6240450);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6240494 _public_6240494
#define public_62404a5 _public_62404a5
#define public_62404ae _public_62404ae
#define public_62404b7 _public_62404b7
#define public_62404cf _public_62404cf
#define public_62404e6 _public_62404e6
#define public_62404fb _public_62404fb

PROC_DECLARE(0x6240450, internal_6240450, public_6240450);
extern "C" NAKED register_t __cdecl internal_6240450()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_62404cf
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_62404fb
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
        jl public_62404b7
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6240494
        test edx, edx
        je public_6240494
        push edx
        call public_62460e0
        add esp, 4
        public_6240494 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_62404a5
        xor eax, eax
        jmp public_62404ae
        public_62404a5 : nop
        push eax
        call public_624612c
        add esp, 4
        public_62404ae : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_62404b7 : nop
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
        jmp public_62404fb
        public_62404cf : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_62404e6
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_62404e6
        push eax
        call public_62460e0
        add esp, 4
        public_62404e6 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_62404fb : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6240450)
    }
}

#undef public_6240494
#undef public_62404a5
#undef public_62404ae
#undef public_62404b7
#undef public_62404cf
#undef public_62404e6
#undef public_62404fb
