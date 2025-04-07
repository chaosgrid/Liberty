#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6711480);
CLANG_FORWARD_PROC_SYMBOL(public_67169dc);

#define public_671149b _public_671149b
#define public_67114b5 _public_67114b5
#define public_67114cb _public_67114cb
#define public_67114ce _public_67114ce

PROC_DECLARE(0x6711480, internal_6711480, public_6711480);
extern "C" NAKED register_t __cdecl internal_6711480()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        test ebp, ebp
        je public_67114ce
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        jne public_671149b
        mov eax, dword ptr ds : [edi]
        push 0
        push ebp
        call dword ptr ds : [eax+0x2C]
        public_671149b : nop
        push ebx
        push esi
        mov esi, dword ptr ds : [edi+8]
        push 0xC
        mov ebx, dword ptr ds : [esi+4]
        call public_67169dc
        add esp, 4
        mov dword ptr ds : [eax], esi
        test ebx, ebx
        jne public_67114b5
        mov ebx, eax
        public_67114b5 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        pop esi
        pop ebx
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_67114cb
        mov dword ptr ds : [eax], ebp
        public_67114cb : nop
        inc dword ptr ds : [edi+0xC]
        public_67114ce : nop
        mov eax, ebp
        pop edi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6711480)
    }
}

#undef public_671149b
#undef public_67114b5
#undef public_67114cb
#undef public_67114ce
