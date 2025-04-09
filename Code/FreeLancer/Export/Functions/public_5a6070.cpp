#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_5a60c8 _public_5a60c8
#define public_5a60ca _public_5a60ca
#define public_5a60d8 _public_5a60d8
#define public_5a60f0 _public_5a60f0

PROC_DECLARE(0x5a6070, internal_5a6070, public_5a6070);
extern "C" NAKED register_t __cdecl internal_5a6070()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6724b4]
        test eax, eax
        je public_5a60f0
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, 1
        cmp eax, esi
        jne public_5a60d8
        mov eax, dword ptr ds : [public_673378]
        push esi
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_5a60d8
        mov edx, dword ptr ds : [eax+0x1C]
        xor ecx, ecx
        cmp edx, esi
        setne cl
        dec ecx
        and ecx, eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_5a60c8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_5a60c8
        mov esi, eax
        jmp public_5a60ca
        public_5a60c8 : nop
        xor esi, esi
        public_5a60ca : nop
        call public_4c4060
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6a6c]
        public_5a60d8 : nop
        mov ecx, dword ptr ds : [public_6724b4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0xEF02
        call dword ptr ds : [edx+0xA8]
        pop esi
        public_5a60f0 : nop
        mov byte ptr ds : [public_674b00], 0
        ret 8
        UNREACHABLE_TRAP(0x5a6070)
    }
}

#undef public_5a60c8
#undef public_5a60ca
#undef public_5a60d8
#undef public_5a60f0
