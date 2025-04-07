#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236730);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6236774 _public_6236774
#define public_6236785 _public_6236785
#define public_623678e _public_623678e
#define public_6236797 _public_6236797
#define public_62367af _public_62367af
#define public_62367c6 _public_62367c6
#define public_62367db _public_62367db

PROC_DECLARE(0x6236730, internal_6236730, public_6236730);
extern "C" NAKED register_t __cdecl internal_6236730()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_62367af
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_62367db
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
        jl public_6236797
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6236774
        test edx, edx
        je public_6236774
        push edx
        call public_62460e0
        add esp, 4
        public_6236774 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_6236785
        xor eax, eax
        jmp public_623678e
        public_6236785 : nop
        push eax
        call public_624612c
        add esp, 4
        public_623678e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_6236797 : nop
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
        jmp public_62367db
        public_62367af : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_62367c6
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_62367c6
        push eax
        call public_62460e0
        add esp, 4
        public_62367c6 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_62367db : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6236730)
    }
}

#undef public_6236774
#undef public_6236785
#undef public_623678e
#undef public_6236797
#undef public_62367af
#undef public_62367c6
#undef public_62367db
