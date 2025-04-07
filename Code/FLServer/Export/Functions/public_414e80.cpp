#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414600);
CLANG_FORWARD_PROC_SYMBOL(public_414e80);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_414e92 _public_414e92
#define public_414eb9 _public_414eb9

PROC_DECLARE(0x414e80, internal_414e80, public_414e80);
extern "C" NAKED register_t __cdecl internal_414e80()
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
        je public_414eb9
        public_414e92 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_414e80
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_414600
        push edi
        call public_418978
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_414e92
        public_414eb9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x414e80)
    }
}

#undef public_414e92
#undef public_414eb9
