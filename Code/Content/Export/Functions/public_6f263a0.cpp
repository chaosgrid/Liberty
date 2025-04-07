#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f33ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f68630);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f263d8 _public_6f263d8
#define public_6f263f6 _public_6f263f6
#define public_6f2640d _public_6f2640d
#define public_6f26440 _public_6f26440

PROC_DECLARE(0x6f263a0, internal_6f263a0, public_6f263a0);
extern "C" NAKED register_t __cdecl internal_6f263a0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x180]
        test eax, eax
        lea ebp, ds:[ebx+0x180]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        je public_6f263f6
        push edi
        mov ecx, esi
        xor edi, edi
        call public_6eea860
        test eax, eax
        je public_6f263d8
        mov ecx, dword ptr ds : [esi+0x170]
        push ecx
        push ebp
        mov ecx, eax
        call public_6f73ac0
        mov edi, eax
        public_6f263d8 : nop
        mov dword ptr ds : [ebx+0x168], edi
        test edi, 0x3FFFFFFF
        pop edi
        jne public_6f263f6
        mov ecx, esi
        call public_6f57b00
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6f263f6 : nop
        mov eax, dword ptr ds : [ebx+0x114]
        test eax, eax
        jne public_6f2640d
        mov ecx, esi
        call public_6f57c80
        mov dword ptr ds : [ebx+0x114], eax
        public_6f2640d : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        je public_6f26440
        mov ecx, esi
        call public_6f33e80
        test al, al
        jne public_6f26440
        mov ecx, esi
        call public_6f33ff0
        test al, al
        jne public_6f26440
        mov ecx, dword ptr ds : [public_6fb8e24]
        push ecx
        push esi
        mov ecx, offset public_6fd1bd8
        call public_6f68630
        public_6f26440 : nop
        add ebx, 0x10C
        push ebx
        mov ecx, esi
        call public_6f57c60
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f263a0)
    }
}

#undef public_6f263d8
#undef public_6f263f6
#undef public_6f2640d
#undef public_6f26440
