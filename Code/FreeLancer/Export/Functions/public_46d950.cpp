#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d950);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46d962 _public_46d962
#define public_46d981 _public_46d981

PROC_DECLARE(0x46d950, internal_46d950, public_46d950);
extern "C" NAKED register_t __cdecl internal_46d950()
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
        je public_46d981
        public_46d962 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_46d950
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_46d962
        public_46d981 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x46d950)
    }
}

#undef public_46d962
#undef public_46d981
