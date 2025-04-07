#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612a00);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6612a10 _public_6612a10
#define public_6612a2a _public_6612a2a
#define public_6612a33 _public_6612a33
#define public_6612a3a _public_6612a3a
#define public_6612a46 _public_6612a46
#define public_6612a54 _public_6612a54

PROC_DECLARE(0x6612a00, internal_6612a00, public_6612a00);
extern "C" NAKED register_t __cdecl internal_6612a00()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+0xC]
        mov ebp, dword ptr ds : [ebx+0x10]
        cmp edi, ebp
        jae public_6612a3a
        public_6612a10 : nop
        mov esi, dword ptr ds : [edi]
        test esi, esi
        je public_6612a33
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6612a2a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], 0
        public_6612a2a : nop
        push esi
        call public_66281d0
        add esp, 4
        public_6612a33 : nop
        add edi, 4
        cmp edi, ebp
        jb public_6612a10
        public_6612a3a : nop
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, edx
        cmp eax, edx
        je public_6612a54
        public_6612a46 : nop
        mov esi, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx], esi
        add ecx, 4
        cmp eax, edx
        jne public_6612a46
        public_6612a54 : nop
        pop edi
        mov dword ptr ds : [ebx+0x10], ecx
        pop esi
        mov dword ptr ds : [ebx+0x18], 0
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6612a00)
    }
}

#undef public_6612a10
#undef public_6612a2a
#undef public_6612a33
#undef public_6612a3a
#undef public_6612a46
#undef public_6612a54
