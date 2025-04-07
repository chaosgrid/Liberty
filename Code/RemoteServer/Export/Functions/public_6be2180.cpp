#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be2180);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be2192 _public_6be2192
#define public_6be21b1 _public_6be21b1

PROC_DECLARE(0x6be2180, internal_6be2180, public_6be2180);
extern "C" NAKED register_t __cdecl internal_6be2180()
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
        je public_6be21b1
        public_6be2192 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6be2180
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6c09aaa
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6be2192
        public_6be21b1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6be2180)
    }
}

#undef public_6be2192
#undef public_6be21b1
