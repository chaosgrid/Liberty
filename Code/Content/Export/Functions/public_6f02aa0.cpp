#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02aa0);

#define public_6f02ab5 _public_6f02ab5
#define public_6f02ac4 _public_6f02ac4
#define public_6f02ad0 _public_6f02ad0
#define public_6f02ad9 _public_6f02ad9
#define public_6f02afb _public_6f02afb
#define public_6f02b02 _public_6f02b02

PROC_DECLARE(0x6f02aa0, internal_6f02aa0, public_6f02aa0);
extern "C" NAKED register_t __cdecl internal_6f02aa0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+8], ebx
        jae public_6f02ab5
        call dword ptr ds : [public_6fb32e4]
        public_6f02ab5 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x18]
        sub eax, ebx
        cmp eax, esi
        jae public_6f02ac4
        mov esi, eax
        public_6f02ac4 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        cmp esi, ebp
        mov ecx, esi
        jb public_6f02ad0
        mov ecx, ebp
        public_6f02ad0 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6f02ad9
        add eax, ebx
        public_6f02ad9 : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [public_6fb3348]
        add esp, 0xC
        test eax, eax
        jne public_6f02b02
        cmp esi, ebp
        jae public_6f02afb
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x10
        public_6f02afb : nop
        xor eax, eax
        cmp esi, ebp
        setne al
        public_6f02b02 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f02aa0)
    }
}

#undef public_6f02ab5
#undef public_6f02ac4
#undef public_6f02ad0
#undef public_6f02ad9
#undef public_6f02afb
#undef public_6f02b02
