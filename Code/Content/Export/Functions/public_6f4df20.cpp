#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4cf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4df20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4df32 _public_6f4df32
#define public_6f4df59 _public_6f4df59

PROC_DECLARE(0x6f4df20, internal_6f4df20, public_6f4df20);
extern "C" NAKED register_t __cdecl internal_6f4df20()
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
        je public_6f4df59
        public_6f4df32 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f4df20
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f4cf10
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f4df32
        public_6f4df59 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f4df20)
    }
}

#undef public_6f4df32
#undef public_6f4df59
