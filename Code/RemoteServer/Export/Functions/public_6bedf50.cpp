#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bed880);
CLANG_FORWARD_PROC_SYMBOL(public_6bedf50);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bedf62 _public_6bedf62
#define public_6bedf89 _public_6bedf89

PROC_DECLARE(0x6bedf50, internal_6bedf50, public_6bedf50);
extern "C" NAKED register_t __cdecl internal_6bedf50()
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
        je public_6bedf89
        public_6bedf62 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6bedf50
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6bed880
        push edi
        call public_6c09aaa
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6bedf62
        public_6bedf89 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bedf50)
    }
}

#undef public_6bedf62
#undef public_6bedf89
