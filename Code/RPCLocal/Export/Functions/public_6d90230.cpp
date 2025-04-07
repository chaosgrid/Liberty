#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d90230);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d90244 _public_6d90244
#define public_6d9026b _public_6d9026b

PROC_DECLARE(0x6d90230, internal_6d90230, public_6d90230);
extern "C" NAKED register_t __cdecl internal_6d90230()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_6db3cb0
        mov ebx, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6d9026b
        public_6d90244 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [edi+0x2C]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x2C], ecx
        jne public_6d90244
        public_6d9026b : nop
        mov eax, dword ptr ds : [edi+0x28]
        push eax
        call public_6db1dc2
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x2C], eax
        mov ecx, edi
        pop edi
        pop esi
        pop ebx
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d90230)
    }
}

#undef public_6d90244
#undef public_6d9026b
