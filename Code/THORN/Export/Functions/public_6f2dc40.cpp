#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d490);
CLANG_FORWARD_PROC_SYMBOL(public_6f2dc40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f2dc52 _public_6f2dc52
#define public_6f2dc79 _public_6f2dc79

PROC_DECLARE(0x6f2dc40, internal_6f2dc40, public_6f2dc40);
extern "C" NAKED register_t __cdecl internal_6f2dc40()
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
        je public_6f2dc79
        public_6f2dc52 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f2dc40
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f2d490
        push edi
        call public_6f57e26
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f2dc52
        public_6f2dc79 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f2dc40)
    }
}

#undef public_6f2dc52
#undef public_6f2dc79
