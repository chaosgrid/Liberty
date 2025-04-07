#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30830);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7e40);

#define public_6f7a775 _public_6f7a775
#define public_6f7a787 _public_6f7a787
#define public_6f7a790 _public_6f7a790
#define public_6f7a79e _public_6f7a79e

PROC_DECLARE(0x6f7a760, internal_6f7a760, public_6f7a760);
extern "C" NAKED register_t __cdecl internal_6f7a760()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, ebx
        je public_6f7a787
        public_6f7a775 : nop
        push edi
        mov ecx, esi
        call public_6fa7e40
        add edi, 0x5C
        add esi, 0x5C
        cmp edi, ebx
        jne public_6f7a775
        public_6f7a787 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, esi
        je public_6f7a79e
        public_6f7a790 : nop
        mov ecx, edi
        call public_6f30830
        add edi, 0x5C
        cmp edi, ebx
        jne public_6f7a790
        public_6f7a79e : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ss : [ebp+8], esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f7a760)
    }
}

#undef public_6f7a775
#undef public_6f7a787
#undef public_6f7a790
#undef public_6f7a79e
