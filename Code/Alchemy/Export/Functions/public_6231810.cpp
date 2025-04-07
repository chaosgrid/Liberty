#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231810);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6231854 _public_6231854
#define public_6231865 _public_6231865
#define public_623186e _public_623186e
#define public_6231877 _public_6231877
#define public_623188f _public_623188f
#define public_62318a6 _public_62318a6
#define public_62318bb _public_62318bb

PROC_DECLARE(0x6231810, internal_6231810, public_6231810);
extern "C" NAKED register_t __cdecl internal_6231810()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_623188f
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_62318bb
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
        jl public_6231877
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6231854
        test edx, edx
        je public_6231854
        push edx
        call public_62460e0
        add esp, 4
        public_6231854 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_6231865
        xor eax, eax
        jmp public_623186e
        public_6231865 : nop
        push eax
        call public_624612c
        add esp, 4
        public_623186e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_6231877 : nop
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
        jmp public_62318bb
        public_623188f : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_62318a6
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_62318a6
        push eax
        call public_62460e0
        add esp, 4
        public_62318a6 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_62318bb : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6231810)
    }
}

#undef public_6231854
#undef public_6231865
#undef public_623186e
#undef public_6231877
#undef public_623188f
#undef public_62318a6
#undef public_62318bb
