#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d9ca0);

#define public_4d9cb4 _public_4d9cb4
#define public_4d9cc9 _public_4d9cc9
#define public_4d9cd1 _public_4d9cd1
#define public_4d9cda _public_4d9cda

PROC_DECLARE(0x4d9ca0, internal_4d9ca0, public_4d9ca0);
extern "C" NAKED register_t __cdecl internal_4d9ca0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        xor edi, edi
        test ebx, ebx
        jbe public_4d9cd1
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, ecx
        public_4d9cb4 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4d9cc9
        push eax
        push ebp
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_4d9cda
        public_4d9cc9 : nop
        inc edi
        add esi, 8
        cmp edi, ebx
        jb public_4d9cb4
        public_4d9cd1 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0xC
        public_4d9cda : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], eax
        mov al, 1
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4d9ca0)
    }
}

#undef public_4d9cb4
#undef public_4d9cc9
#undef public_4d9cd1
#undef public_4d9cda
