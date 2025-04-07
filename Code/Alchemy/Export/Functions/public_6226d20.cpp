#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226d20);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6226d76 _public_6226d76
#define public_6226d87 _public_6226d87
#define public_6226d90 _public_6226d90
#define public_6226d99 _public_6226d99
#define public_6226db1 _public_6226db1
#define public_6226dc8 _public_6226dc8
#define public_6226ddd _public_6226ddd
#define public_6226df3 _public_6226df3

PROC_DECLARE(0x6226d20, internal_6226d20, public_6226d20);
extern "C" NAKED register_t __cdecl internal_6226d20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        lea ebx, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0x18DADCA8
        jne public_6226df3
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_6226db1
        mov edx, dword ptr ds : [ebx+0x70]
        cmp esi, edx
        je public_6226ddd
        push edi
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x78]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x74], ecx
        jl public_6226d99
        mov eax, dword ptr ds : [ebx+0x6C]
        test eax, eax
        je public_6226d76
        test edx, edx
        je public_6226d76
        push edx
        call public_62460e0
        add esp, 4
        public_6226d76 : nop
        mov eax, dword ptr ds : [ebx+0x74]
        mov dword ptr ds : [ebx+0x6C], 1
        inc eax
        jne public_6226d87
        xor eax, eax
        jmp public_6226d90
        public_6226d87 : nop
        push eax
        call public_624612c
        add esp, 4
        public_6226d90 : nop
        mov ecx, dword ptr ds : [ebx+0x74]
        mov dword ptr ds : [ebx+0x70], eax
        mov dword ptr ds : [ebx+0x78], ecx
        public_6226d99 : nop
        mov ecx, dword ptr ds : [ebx+0x74]
        mov edi, dword ptr ds : [ebx+0x70]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        jmp public_6226ddd
        public_6226db1 : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        test eax, eax
        je public_6226dc8
        mov eax, dword ptr ds : [ebx+0x70]
        test eax, eax
        je public_6226dc8
        push eax
        call public_62460e0
        add esp, 4
        public_6226dc8 : nop
        mov dword ptr ds : [ebx+0x70], 0
        mov dword ptr ds : [ebx+0x78], 0
        mov dword ptr ds : [ebx+0x74], 0
        public_6226ddd : nop
        mov eax, dword ptr ds : [ebx+0x70]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x64], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 0xC
        public_6226df3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push eax
        push ebx
        call public_623f9e0
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6226d20)
    }
}

#undef public_6226d76
#undef public_6226d87
#undef public_6226d90
#undef public_6226d99
#undef public_6226db1
#undef public_6226dc8
#undef public_6226ddd
#undef public_6226df3
