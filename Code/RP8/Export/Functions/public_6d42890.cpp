#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42890);

#define public_6d428bc _public_6d428bc
#define public_6d428cc _public_6d428cc
#define public_6d428db _public_6d428db
#define public_6d428e5 _public_6d428e5
#define public_6d428f5 _public_6d428f5

PROC_DECLARE(0x6d42890, internal_6d42890, public_6d42890);
extern "C" NAKED register_t __cdecl internal_6d42890()
{
    __asm
    {
        push ebp
        mov ebp, esp
        xor eax, eax
        cmp dword ptr ss : [ebp+8], eax
        je public_6d428f5
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        je public_6d428f5
        test byte ptr ds : [ecx+8], 0x10
        je public_6d428f5
        cmp byte ptr ds : [ecx+0x19], 3
        jne public_6d428cc
        mov edx, dword ptr ss : [ebp+0x10]
        test edx, edx
        je public_6d428bc
        mov eax, dword ptr ds : [ecx+0x30]
        push 0x10
        mov dword ptr ds : [edx], eax
        pop eax
        public_6d428bc : nop
        mov edx, dword ptr ss : [ebp+0x18]
        test edx, edx
        je public_6d428e5
        push esi
        lea esi, ds:[ecx+0x34]
        mov dword ptr ds : [edx], esi
        pop esi
        jmp public_6d428e5
        public_6d428cc : nop
        mov edx, dword ptr ss : [ebp+0x18]
        test edx, edx
        je public_6d428db
        lea eax, ds:[ecx+0x34]
        push 0x10
        mov dword ptr ds : [edx], eax
        pop eax
        public_6d428db : nop
        mov edx, dword ptr ss : [ebp+0x10]
        test edx, edx
        je public_6d428e5
        and dword ptr ds : [edx], 0
        public_6d428e5 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        test edx, edx
        je public_6d428f5
        movzx ecx, word ptr ds : [ecx+0x16]
        mov dword ptr ds : [edx], ecx
        or eax, 0x10
        public_6d428f5 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d42890)
    }
}

#undef public_6d428bc
#undef public_6d428cc
#undef public_6d428db
#undef public_6d428e5
#undef public_6d428f5
