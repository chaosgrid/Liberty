#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620da30);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620da74 _public_620da74
#define public_620da85 _public_620da85
#define public_620da8e _public_620da8e
#define public_620da97 _public_620da97
#define public_620daaf _public_620daaf
#define public_620dac6 _public_620dac6
#define public_620dadb _public_620dadb

PROC_DECLARE(0x620da30, internal_620da30, public_620da30);
extern "C" NAKED register_t __cdecl internal_620da30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_620daaf
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_620dadb
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
        jl public_620da97
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_620da74
        test edx, edx
        je public_620da74
        push edx
        call public_62460e0
        add esp, 4
        public_620da74 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_620da85
        xor eax, eax
        jmp public_620da8e
        public_620da85 : nop
        push eax
        call public_624612c
        add esp, 4
        public_620da8e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_620da97 : nop
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
        jmp public_620dadb
        public_620daaf : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_620dac6
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_620dac6
        push eax
        call public_62460e0
        add esp, 4
        public_620dac6 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_620dadb : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x620da30)
    }
}

#undef public_620da74
#undef public_620da85
#undef public_620da8e
#undef public_620da97
#undef public_620daaf
#undef public_620dac6
#undef public_620dadb
