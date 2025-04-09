#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_595db0);

#define public_5798cf _public_5798cf
#define public_5798e7 _public_5798e7
#define public_5798eb _public_5798eb
#define public_57994a _public_57994a
#define public_579963 _public_579963

PROC_DECLARE(0x5798b0, internal_5798b0, public_5798b0);
extern "C" NAKED register_t __cdecl internal_5798b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+0x360]
        xor cl, cl
        cmp eax, edx
        je public_5798cf
        test eax, eax
        jl public_5798cf
        mov dword ptr ds : [esi+0x360], eax
        mov cl, 1
        public_5798cf : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x364]
        je public_5798e7
        test eax, eax
        jl public_5798e7
        mov dword ptr ds : [esi+0x364], eax
        jmp public_5798eb
        public_5798e7 : nop
        test cl, cl
        je public_579963
        public_5798eb : nop
        mov eax, dword ptr ds : [esi+0x364]
        push ebp
        push edi
        mov edi, dword ptr ds : [esi+0x360]
        neg eax
        lea ebp, ds:[esi+0x384]
        push eax
        mov ecx, ebp
        neg edi
        call dword ptr ds : [public_5c6c1c]
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6c18]
        mov dl, byte ptr ds : [esi+0x400]
        mov ecx, dword ptr ds : [esi+0x3F0]
        xor eax, eax
        test dl, dl
        setne al
        test ecx, ecx
        pop edi
        mov byte ptr ds : [esi+0x400], al
        pop ebp
        mov byte ptr ds : [esi+0x401], 1
        je public_57994a
        fild dword ptr ds : [esi+0x364]
        push ecx
        fstp dword ptr ss : [esp]
        call public_595db0
        public_57994a : nop
        mov ecx, dword ptr ds : [esi+0x3F4]
        test ecx, ecx
        je public_579963
        fild dword ptr ds : [esi+0x360]
        push ecx
        fstp dword ptr ss : [esp]
        call public_595db0
        public_579963 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5798b0)
    }
}

#undef public_5798cf
#undef public_5798e7
#undef public_5798eb
#undef public_57994a
#undef public_579963
