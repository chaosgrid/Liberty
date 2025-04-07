#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6becaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6becb02 _public_6becb02
#define public_6becb21 _public_6becb21

PROC_DECLARE(0x6becaf0, internal_6becaf0, public_6becaf0);
extern "C" NAKED register_t __cdecl internal_6becaf0()
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
        je public_6becb21
        public_6becb02 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6becaf0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6c09aaa
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6becb02
        public_6becb21 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6becaf0)
    }
}

#undef public_6becb02
#undef public_6becb21
