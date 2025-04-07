#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f47a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f48070);
CLANG_FORWARD_PROC_SYMBOL(public_6f49440);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

#define public_6ea6c80 _public_6ea6c80
#define public_6ea6cb6 _public_6ea6cb6
#define public_6ea6cf1 _public_6ea6cf1
#define public_6ea6cf6 _public_6ea6cf6

PROC_DECLARE(0x6ea6c70, internal_6ea6c70, public_6ea6c70);
extern "C" NAKED register_t __cdecl internal_6ea6c70()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, offset public_6fb4264
        lea edx, ds:[edi+0x19]
        sub edx, eax
        nop 
        public_6ea6c80 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6ea6c80
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call dword ptr ds : [public_6fb3610]
        mov ebx, dword ptr ss : [esp+0x18]
        lea esi, ds:[edi+0xC]
        push esi
        mov dword ptr ds : [edi+0x10], ebx
        call public_6f49b00
        add esp, 8
        test eax, eax
        je public_6ea6cb6
        push 1
        push ebx
        mov ecx, eax
        call public_6f47a30
        public_6ea6cb6 : nop
        push esi
        call public_6f49b00
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        je public_6ea6cf6
        cmp ebx, 0x2A
        je public_6ea6cf1
        call public_6f48070
        fadd dword ptr ds : [ebx*4+public_6fced28]
        fst dword ptr ds : [edi+0x14]
        call public_6fa9130
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3624]
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6ea6cf1 : nop
        call public_6f49440
        public_6ea6cf6 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ea6c70)
    }
}

#undef public_6ea6c80
#undef public_6ea6cb6
#undef public_6ea6cf1
#undef public_6ea6cf6
