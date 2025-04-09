#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_52f9e7 _public_52f9e7
#define public_52f9fb _public_52f9fb
#define public_52fa04 _public_52fa04

PROC_DECLARE(0x52f9a0, internal_52f9a0, public_52f9a0);
extern "C" NAKED register_t __cdecl internal_52f9a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_52fa04
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test al, al
        jne public_52fa04
        mov esi, dword ptr ds : [edi+4]
        mov ebx, dword ptr ss : [esp+0x10]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6904]
        test eax, eax
        je public_52fa04
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_52f9e7
        add eax, 0xFFFFFF64
        test eax, eax
        je public_52f9e7
        mov eax, dword ptr ds : [eax+0xF0]
        sub eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jg public_52fa04
        public_52f9e7 : nop
        call public_54baf0
        cmp dword ptr ds : [edi+8], eax
        je public_52f9fb
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_52fa04
        public_52f9fb : nop
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6900]
        public_52fa04 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x52f9a0)
    }
}

#undef public_52f9e7
#undef public_52f9fb
#undef public_52fa04
