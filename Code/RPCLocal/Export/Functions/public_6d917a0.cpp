#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d917a0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d917b4 _public_6d917b4
#define public_6d917c4 _public_6d917c4
#define public_6d917cb _public_6d917cb
#define public_6d917db _public_6d917db
#define public_6d917e4 _public_6d917e4
#define public_6d9180b _public_6d9180b

PROC_DECLARE(0x6d917a0, internal_6d917a0, public_6d917a0);
extern "C" NAKED register_t __cdecl internal_6d917a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        push edi
        mov dword ptr ds : [esi], offset public_6db3d30
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6d917cb
        public_6d917b4 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_6d917c4
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d917c4 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x2C]
        jne public_6d917b4
        public_6d917cb : nop
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6d917db
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d917db : nop
        mov ebx, dword ptr ds : [esi+0x2C]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6d9180b
        public_6d917e4 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [esi+0x30]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x30], ecx
        jne public_6d917e4
        public_6d9180b : nop
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_6db1dc2
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x2C], 0
        mov dword ptr ds : [esi+0x30], 0
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d917a0)
    }
}

#undef public_6d917b4
#undef public_6d917c4
#undef public_6d917cb
#undef public_6d917db
#undef public_6d917e4
#undef public_6d9180b
