#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f244e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24710);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f24725 _public_6f24725
#define public_6f24737 _public_6f24737
#define public_6f24741 _public_6f24741
#define public_6f24760 _public_6f24760

PROC_DECLARE(0x6f24710, internal_6f24710, public_6f24710);
extern "C" NAKED register_t __cdecl internal_6f24710()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_6f24737
        public_6f24725 : nop
        push esi
        mov ecx, edi
        call public_6f244e0
        add esi, 0x10
        add edi, 0x10
        cmp esi, ebx
        jne public_6f24725
        public_6f24737 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp edi, ebx
        je public_6f24760
        lea esi, ds:[edi+4]
        public_6f24741 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6f57e26
        xor eax, eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        add esi, 0x10
        lea ecx, ds:[esi-4]
        add esp, 4
        cmp ecx, ebx
        jne public_6f24741
        public_6f24760 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f24710)
    }
}

#undef public_6f24725
#undef public_6f24737
#undef public_6f24741
#undef public_6f24760
