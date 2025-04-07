#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a310);
CLANG_FORWARD_PROC_SYMBOL(public_620a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_620cd60);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620cd88 _public_620cd88
#define public_620cd94 _public_620cd94
#define public_620cd9e _public_620cd9e
#define public_620cda4 _public_620cda4
#define public_620cdcc _public_620cdcc
#define public_620cddc _public_620cddc

PROC_DECLARE(0x620cd60, internal_620cd60, public_620cd60);
extern "C" NAKED register_t __cdecl internal_620cd60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        lea esi, ds:[ecx+8]
        test eax, eax
        mov dword ptr ds : [esi], offset public_624bc94
        je public_620cddc
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        inc edi
        jns public_620cda4
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jg public_620cd88
        push 0
        mov ecx, esi
        call public_620a310
        public_620cd88 : nop
        mov eax, dword ptr ds : [esi+4]
        test edi, edi
        lea eax, ds:[eax+edi*8]
        jge public_620cda4
        neg edi
        public_620cd94 : nop
        test eax, eax
        je public_620cd9e
        mov dword ptr ds : [eax], 0
        public_620cd9e : nop
        add eax, 8
        dec edi
        jne public_620cd94
        public_620cda4 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        test eax, eax
        pop edi
        je public_620cdcc
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push 0
        push ecx
        call public_620a8d0
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_620cdcc : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_620cddc
        push esi
        call public_62460e0
        add esp, 4
        public_620cddc : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x620cd60)
    }
}

#undef public_620cd88
#undef public_620cd94
#undef public_620cd9e
#undef public_620cda4
#undef public_620cdcc
#undef public_620cddc
