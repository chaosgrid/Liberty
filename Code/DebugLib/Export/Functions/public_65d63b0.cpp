#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6340);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d63c3 _public_65d63c3
#define public_65d63ce _public_65d63ce
#define public_65d63d6 _public_65d63d6

PROC_DECLARE(0x65d63b0, internal_65d63b0, public_65d63b0);
extern "C" NAKED register_t __cdecl internal_65d63b0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65d63ce
        mov ecx, dword ptr ss : [esp+0x10]
        public_65d63c3 : nop
        cmp dword ptr ds : [esi+0x10], ecx
        je public_65d63d6
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_65d63c3
        public_65d63ce : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_65d63d6 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_65d6340
        push esi
        call public_65d6cb8
        mov eax, dword ptr ds : [edi+0x1C]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x1C], eax
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x65d63b0)
    }
}

#undef public_65d63c3
#undef public_65d63ce
#undef public_65d63d6
