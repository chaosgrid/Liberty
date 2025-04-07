#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f33ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f68630);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f26078 _public_6f26078
#define public_6f26096 _public_6f26096
#define public_6f260c4 _public_6f260c4
#define public_6f260e2 _public_6f260e2
#define public_6f260f9 _public_6f260f9
#define public_6f2612c _public_6f2612c

PROC_DECLARE(0x6f26040, internal_6f26040, public_6f26040);
extern "C" NAKED register_t __cdecl internal_6f26040()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x180]
        test eax, eax
        lea ebx, ds:[edi+0x180]
        je public_6f26096
        mov ecx, esi
        xor ebp, ebp
        call public_6eea860
        test eax, eax
        je public_6f26078
        mov ecx, dword ptr ds : [esi+0x170]
        push ecx
        push ebx
        mov ecx, eax
        call public_6f73ac0
        mov ebp, eax
        public_6f26078 : nop
        test ebp, 0x3FFFFFFF
        mov dword ptr ds : [edi+0x128], ebp
        jne public_6f26096
        mov ecx, esi
        call public_6f57b00
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6f26096 : nop
        mov eax, dword ptr ds : [edi+0x1B4]
        test eax, eax
        lea ebx, ds:[edi+0x1B4]
        je public_6f260e2
        mov ecx, esi
        xor ebp, ebp
        call public_6eea860
        test eax, eax
        je public_6f260c4
        mov ecx, dword ptr ds : [esi+0x170]
        push ecx
        push ebx
        mov ecx, eax
        call public_6f73ac0
        mov ebp, eax
        public_6f260c4 : nop
        test ebp, 0x3FFFFFFF
        mov dword ptr ds : [edi+0x168], ebp
        jne public_6f260e2
        mov ecx, esi
        call public_6f57b00
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6f260e2 : nop
        mov eax, dword ptr ds : [edi+0x114]
        test eax, eax
        jne public_6f260f9
        mov ecx, esi
        call public_6f57c80
        mov dword ptr ds : [edi+0x114], eax
        public_6f260f9 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        je public_6f2612c
        mov ecx, esi
        call public_6f33e80
        test al, al
        jne public_6f2612c
        mov ecx, esi
        call public_6f33ff0
        test al, al
        jne public_6f2612c
        mov ecx, dword ptr ds : [public_6fb8e24]
        push ecx
        push esi
        mov ecx, offset public_6fd1bd8
        call public_6f68630
        public_6f2612c : nop
        add edi, 0x10C
        push edi
        mov ecx, esi
        call public_6f57c60
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f26040)
    }
}

#undef public_6f26078
#undef public_6f26096
#undef public_6f260c4
#undef public_6f260e2
#undef public_6f260f9
#undef public_6f2612c
