#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec5b82 _public_6ec5b82
#define public_6ec5bb6 _public_6ec5bb6
#define public_6ec5bbf _public_6ec5bbf
#define public_6ec5bc6 _public_6ec5bc6

PROC_DECLARE(0x6ec5b70, internal_6ec5b70, public_6ec5b70);
extern "C" NAKED register_t __cdecl internal_6ec5b70()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_6ec5bc6
        public_6ec5b82 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6ec5b70
        cmp dword ptr ds : [public_6ed57e0], 0x7FFFFFFF
        mov esi, dword ptr ds : [esi]
        jge public_6ec5bb6
        mov ecx, dword ptr ds : [public_6ed57d4]
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [public_6ed57e0]
        inc eax
        mov dword ptr ds : [public_6ed57d4], edi
        mov dword ptr ds : [public_6ed57e0], eax
        jmp public_6ec5bbf
        public_6ec5bb6 : nop
        push edi
        call public_6ed0c50
        add esp, 4
        public_6ec5bbf : nop
        cmp esi, dword ptr ds : [ebx+8]
        mov edi, esi
        jne public_6ec5b82
        public_6ec5bc6 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec5b70)
    }
}

#undef public_6ec5b82
#undef public_6ec5bb6
#undef public_6ec5bbf
#undef public_6ec5bc6
