#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9d1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9d200 _public_6d9d200
#define public_6d9d227 _public_6d9d227

PROC_DECLARE(0x6d9d1f0, internal_6d9d1f0, public_6d9d1f0);
extern "C" NAKED register_t __cdecl internal_6d9d1f0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x2C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6d9d227
        mov edi, edi
        public_6d9d200 : nop
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
        mov ecx, dword ptr ds : [edi+0x30]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x30], ecx
        jne public_6d9d200
        public_6d9d227 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        push eax
        call public_6db1dc2
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x30], eax
        mov ecx, edi
        pop edi
        pop esi
        pop ebx
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9d1f0)
    }
}

#undef public_6d9d200
#undef public_6d9d227
