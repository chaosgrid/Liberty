#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334770);

#define public_6334786 _public_6334786
#define public_633479d _public_633479d
#define public_63347b7 _public_63347b7

PROC_DECLARE(0x6334770, internal_6334770, public_6334770);
extern "C" NAKED register_t __cdecl internal_6334770()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        or ebx, 0xFFFFFFFF
        xor esi, esi
        test eax, eax
        jle public_63347b7
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        public_6334786 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+esi*4]
        push ebp
        push ecx
        call dword ptr ds : [public_63991e4]
        add esp, 8
        test eax, eax
        jne public_633479d
        mov ebx, esi
        public_633479d : nop
        mov eax, dword ptr ds : [edi+4]
        inc esi
        cmp esi, eax
        jl public_6334786
        cmp ebx, 0xFFFFFFFF
        pop ebp
        je public_63347b7
        mov edx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edx+ebx*4]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_63347b7 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6334770)
    }
}

#undef public_6334786
#undef public_633479d
#undef public_63347b7
