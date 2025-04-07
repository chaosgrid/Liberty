#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0dd50);

#define public_6d0dd68 _public_6d0dd68
#define public_6d0dd72 _public_6d0dd72
#define public_6d0dd7b _public_6d0dd7b
#define public_6d0dd7d _public_6d0dd7d
#define public_6d0dda5 _public_6d0dda5
#define public_6d0ddbc _public_6d0ddbc
#define public_6d0ddbe _public_6d0ddbe
#define public_6d0ddd4 _public_6d0ddd4

PROC_DECLARE(0x6d0dd50, internal_6d0dd50, public_6d0dd50);
extern "C" NAKED register_t __cdecl internal_6d0dd50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        xor eax, eax
        test ecx, ecx
        push edi
        je public_6d0dd68
        cmp ecx, ebp
        jne public_6d0ddd4
        public_6d0dd68 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edx]
        mov bl, byte ptr ss : [esp+0x24]
        public_6d0dd72 : nop
        test esi, esi
        jne public_6d0dd7b
        mov esi, dword ptr ss : [ebp+4]
        jmp public_6d0dd7d
        public_6d0dd7b : nop
        mov esi, dword ptr ds : [esi]
        public_6d0dd7d : nop
        test esi, esi
        je public_6d0ddbc
        test bl, bl
        mov edi, dword ptr ds : [esi+8]
        je public_6d0dda5
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x88]
        test eax, eax
        jne public_6d0dd72
        mov edx, dword ptr ss : [esp+0x14]
        test dword ptr ss : [esp+0x24], edx
        je public_6d0dd72
        public_6d0dda5 : nop
        test edi, edi
        je public_6d0ddbe
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr ds : [ecx], ebp
        pop ebp
        pop ebx
        ret 
        public_6d0ddbc : nop
        xor edi, edi
        public_6d0ddbe : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], 0
        mov dword ptr ds : [eax], 0
        mov eax, edi
        public_6d0ddd4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d0dd50)
    }
}

#undef public_6d0dd68
#undef public_6d0dd72
#undef public_6d0dd7b
#undef public_6d0dd7d
#undef public_6d0dda5
#undef public_6d0ddbc
#undef public_6d0ddbe
#undef public_6d0ddd4
