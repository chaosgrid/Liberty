#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf910);
CLANG_FORWARD_PROC_SYMBOL(public_6ad98e1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9ad4);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9b3b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9bc0);

#define public_6ad9ae7 _public_6ad9ae7
#define public_6ad9afd _public_6ad9afd
#define public_6ad9b33 _public_6ad9b33

PROC_DECLARE(0x6ad9ad4, internal_6ad9ad4, public_6ad9ad4);
extern "C" NAKED register_t __cdecl internal_6ad9ad4()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+8], esi
        jae public_6ad9ae7
        call public_6ad98e1
        public_6ad9ae7 : nop
        mov ecx, edi
        call public_6ad9bc0
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x14]
        sub eax, esi
        cmp eax, ebx
        jae public_6ad9afd
        mov ebx, eax
        public_6ad9afd : nop
        test ebx, ebx
        jbe public_6ad9b33
        mov ecx, dword ptr ds : [edi+4]
        sub eax, ebx
        add ecx, esi
        push eax
        lea eax, ds:[ecx+ebx]
        push eax
        push ecx
        call public_6acf910
        mov esi, dword ptr ds : [edi+8]
        add esp, 0xC
        sub esi, ebx
        mov ecx, edi
        push 0
        push esi
        call public_6ad9b3b
        test al, al
        je public_6ad9b33
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], esi
        and byte ptr ds : [esi+eax], 0
        public_6ad9b33 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ad9ad4)
    }
}

#undef public_6ad9ae7
#undef public_6ad9afd
#undef public_6ad9b33
