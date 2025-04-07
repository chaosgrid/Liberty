#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f72a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f72c30);

#define public_6f72c48 _public_6f72c48
#define public_6f72c53 _public_6f72c53
#define public_6f72c55 _public_6f72c55
#define public_6f72c62 _public_6f72c62
#define public_6f72c6e _public_6f72c6e
#define public_6f72c75 _public_6f72c75
#define public_6f72c86 _public_6f72c86
#define public_6f72c8b _public_6f72c8b

PROC_DECLARE(0x6f72c30, internal_6f72c30, public_6f72c30);
extern "C" NAKED register_t __cdecl internal_6f72c30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xBC]
        mov ecx, dword ptr ds : [esi+0xC0]
        cmp eax, ecx
        push edi
        je public_6f72c53
        mov edx, dword ptr ss : [esp+0xC]
        public_6f72c48 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f72c8b
        add eax, 4
        cmp eax, ecx
        jne public_6f72c48
        public_6f72c53 : nop
        mov edx, ecx
        public_6f72c55 : nop
        cmp edx, ecx
        je public_6f72c75
        lea eax, ds:[edx+4]
        cmp eax, ecx
        je public_6f72c6e
        sub edx, eax
        public_6f72c62 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_6f72c62
        public_6f72c6e : nop
        add dword ptr ds : [esi+0xC0], 0xFFFFFFFC
        public_6f72c75 : nop
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f72c86
        mov ecx, esi
        call public_6f72a80
        public_6f72c86 : nop
        pop edi
        pop esi
        ret 4
        public_6f72c8b : nop
        mov edx, eax
        jmp public_6f72c55
        UNREACHABLE_TRAP(0x6f72c30)
    }
}

#undef public_6f72c48
#undef public_6f72c53
#undef public_6f72c55
#undef public_6f72c62
#undef public_6f72c6e
#undef public_6f72c75
#undef public_6f72c86
#undef public_6f72c8b
