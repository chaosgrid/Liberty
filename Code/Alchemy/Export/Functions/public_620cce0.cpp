#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a1f0);
CLANG_FORWARD_PROC_SYMBOL(public_620a880);
CLANG_FORWARD_PROC_SYMBOL(public_620cce0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620cd08 _public_620cd08
#define public_620cd14 _public_620cd14
#define public_620cd1e _public_620cd1e
#define public_620cd24 _public_620cd24
#define public_620cd4c _public_620cd4c
#define public_620cd5c _public_620cd5c

PROC_DECLARE(0x620cce0, internal_620cce0, public_620cce0);
extern "C" NAKED register_t __cdecl internal_620cce0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        lea esi, ds:[ecx+8]
        test eax, eax
        mov dword ptr ds : [esi], offset public_624bc34
        je public_620cd5c
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        inc edi
        jns public_620cd24
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jg public_620cd08
        push 0
        mov ecx, esi
        call public_620a1f0
        public_620cd08 : nop
        mov eax, dword ptr ds : [esi+4]
        test edi, edi
        lea eax, ds:[eax+edi*8]
        jge public_620cd24
        neg edi
        public_620cd14 : nop
        test eax, eax
        je public_620cd1e
        mov dword ptr ds : [eax], 0
        public_620cd1e : nop
        add eax, 8
        dec edi
        jne public_620cd14
        public_620cd24 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        test eax, eax
        pop edi
        je public_620cd4c
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push 0
        push ecx
        call public_620a880
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_620cd4c : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_620cd5c
        push esi
        call public_62460e0
        add esp, 4
        public_620cd5c : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x620cce0)
    }
}

#undef public_620cd08
#undef public_620cd14
#undef public_620cd1e
#undef public_620cd24
#undef public_620cd4c
#undef public_620cd5c
