#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f828d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f82992);

#define public_6f82a59 _public_6f82a59
#define public_6f82a63 _public_6f82a63
#define public_6f82a75 _public_6f82a75
#define public_6f82a7f _public_6f82a7f
#define public_6f82a81 _public_6f82a81
#define public_6f82a85 _public_6f82a85
#define public_6f82aa1 _public_6f82aa1
#define public_6f82aaa _public_6f82aaa
#define public_6f82ab9 _public_6f82ab9
#define public_6f82ad0 _public_6f82ad0
#define public_6f82ad3 _public_6f82ad3

PROC_DECLARE(0x6f82a3d, internal_6f82a3d, public_6f82a3d);
extern "C" NAKED register_t __cdecl internal_6f82a3d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test esi, esi
        jne public_6f82a59
        cmp dword ptr ds : [public_6f84620], 0
        jmp public_6f82a7f
        public_6f82a59 : nop
        cmp esi, 1
        je public_6f82a63
        cmp esi, 2
        jne public_6f82a85
        public_6f82a63 : nop
        mov eax, dword ptr ds : [public_6f84630]
        test eax, eax
        je public_6f82a75
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6f82a81
        public_6f82a75 : nop
        push edi
        push esi
        push ebx
        call public_6f82992
        test eax, eax
        public_6f82a7f : nop
        jne public_6f82a85
        public_6f82a81 : nop
        xor eax, eax
        jmp public_6f82ad3
        public_6f82a85 : nop
        push edi
        push esi
        push ebx
        call public_6f828d0
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6f82aa1
        test eax, eax
        jne public_6f82ad0
        push edi
        push eax
        push ebx
        call public_6f82992
        public_6f82aa1 : nop
        test esi, esi
        je public_6f82aaa
        cmp esi, 3
        jne public_6f82ad0
        public_6f82aaa : nop
        push edi
        push esi
        push ebx
        call public_6f82992
        test eax, eax
        jne public_6f82ab9
        and dword ptr ss : [ebp+0xC], eax
        public_6f82ab9 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6f82ad0
        mov eax, dword ptr ds : [public_6f84630]
        test eax, eax
        je public_6f82ad0
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6f82ad0 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6f82ad3 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6f82a3d)
    }
}

#undef public_6f82a59
#undef public_6f82a63
#undef public_6f82a75
#undef public_6f82a7f
#undef public_6f82a81
#undef public_6f82a85
#undef public_6f82aa1
#undef public_6f82aaa
#undef public_6f82ab9
#undef public_6f82ad0
#undef public_6f82ad3
