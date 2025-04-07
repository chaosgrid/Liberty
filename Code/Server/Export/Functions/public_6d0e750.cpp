#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e750);

#define public_6d0e762 _public_6d0e762
#define public_6d0e785 _public_6d0e785
#define public_6d0e78d _public_6d0e78d

PROC_DECLARE(0x6d0e750, internal_6d0e750, public_6d0e750);
extern "C" NAKED register_t __cdecl internal_6d0e750()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0e78d
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6d0e762 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        lea ecx, ds:[esi+8]
        call public_6cf7370
        test al, al
        je public_6d0e785
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push edi
        lea eax, ds:[esi+0x40]
        push eax
        call dword ptr ds : [edx+0x15C]
        public_6d0e785 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d0e762
        pop edi
        public_6d0e78d : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d0e750)
    }
}

#undef public_6d0e762
#undef public_6d0e785
#undef public_6d0e78d
