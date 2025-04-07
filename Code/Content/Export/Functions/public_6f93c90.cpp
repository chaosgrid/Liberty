#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93c90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f93ca2 _public_6f93ca2
#define public_6f93cc1 _public_6f93cc1

PROC_DECLARE(0x6f93c90, internal_6f93c90, public_6f93c90);
extern "C" NAKED register_t __cdecl internal_6f93c90()
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
        je public_6f93cc1
        public_6f93ca2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f93c90
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f93ca2
        public_6f93cc1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f93c90)
    }
}

#undef public_6f93ca2
#undef public_6f93cc1
