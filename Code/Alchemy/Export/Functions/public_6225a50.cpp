#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225a50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6225a92 _public_6225a92
#define public_6225aa3 _public_6225aa3
#define public_6225aac _public_6225aac
#define public_6225ab5 _public_6225ab5
#define public_6225ad0 _public_6225ad0
#define public_6225ae7 _public_6225ae7
#define public_6225afc _public_6225afc

PROC_DECLARE(0x6225a50, internal_6225a50, public_6225a50);
extern "C" NAKED register_t __cdecl internal_6225a50()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        test esi, esi
        je public_6225ad0
        mov edx, dword ptr ds : [ebx+8]
        cmp esi, edx
        je public_6225afc
        push edi
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x10]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jl public_6225ab5
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6225a92
        test edx, edx
        je public_6225a92
        push edx
        call public_62460e0
        add esp, 4
        public_6225a92 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [ebx+4], 1
        inc eax
        jne public_6225aa3
        xor eax, eax
        jmp public_6225aac
        public_6225aa3 : nop
        push eax
        call public_624612c
        add esp, 4
        public_6225aac : nop
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [ebx+0x10], eax
        public_6225ab5 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edi, dword ptr ds : [ebx+8]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6225ad0 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6225ae7
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6225ae7
        push eax
        call public_62460e0
        add esp, 4
        public_6225ae7 : nop
        mov dword ptr ds : [ebx+8], 0
        mov dword ptr ds : [ebx+0x10], 0
        mov dword ptr ds : [ebx+0xC], 0
        public_6225afc : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6225a50)
    }
}

#undef public_6225a92
#undef public_6225aa3
#undef public_6225aac
#undef public_6225ab5
#undef public_6225ad0
#undef public_6225ae7
#undef public_6225afc
