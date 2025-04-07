#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d15ec2 _public_6d15ec2
#define public_6d15ee1 _public_6d15ee1

PROC_DECLARE(0x6d15eb0, internal_6d15eb0, public_6d15eb0);
extern "C" NAKED register_t __cdecl internal_6d15eb0()
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
        je public_6d15ee1
        public_6d15ec2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6d15eb0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6d15ec2
        public_6d15ee1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d15eb0)
    }
}

#undef public_6d15ec2
#undef public_6d15ee1
