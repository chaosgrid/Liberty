#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1000);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1190);

#define public_6ac1026 _public_6ac1026
#define public_6ac1031 _public_6ac1031
#define public_6ac104a _public_6ac104a

PROC_DECLARE(0x6ac1000, internal_6ac1000, public_6ac1000);
extern "C" NAKED register_t __cdecl internal_6ac1000()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp ebp, 1
        jne public_6ac1026
        mov esi, dword ptr ds : [ebx]
        push esi
        push 0xFFFFFFEB
        push edi
        call dword ptr ds : [public_6ada174]
        mov dword ptr ds : [esi+4], edi
        jmp public_6ac1031
        public_6ac1026 : nop
        push 0xFFFFFFEB
        push edi
        call dword ptr ds : [public_6ada178]
        mov esi, eax
        public_6ac1031 : nop
        test esi, esi
        push ebx
        je public_6ac104a
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        push eax
        push ebp
        call public_6ac1190
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        public_6ac104a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push ebp
        push edi
        call dword ptr ds : [public_6ada170]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac1000)
    }
}

#undef public_6ac1026
#undef public_6ac1031
#undef public_6ac104a
