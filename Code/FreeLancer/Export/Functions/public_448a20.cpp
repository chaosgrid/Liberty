#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_447c30);
CLANG_FORWARD_PROC_SYMBOL(public_448a20);

#define public_448a57 _public_448a57
#define public_448a58 _public_448a58

PROC_DECLARE(0x448a20, internal_448a20, public_448a20);
extern "C" NAKED register_t __cdecl internal_448a20()
{
    __asm
    {
        mov dl, byte ptr ds : [public_668ab0]
        xor al, al
        test dl, dl
        je public_448a58
        mov edx, dword ptr ds : [ecx+0x14]
        cmp edx, 0xFFFFFFFF
        je public_448a58
        push esi
        mov esi, dword ptr ds : [ecx+4]
        shl edx, 4
        mov ecx, dword ptr ds : [edx+esi+4]
        add edx, esi
        mov esi, dword ptr ds : [ecx+0x38]
        test esi, esi
        je public_448a57
        mov ecx, dword ptr ds : [edx+8]
        test ecx, ecx
        je public_448a57
        push esi
        call public_447c30
        mov al, 1
        public_448a57 : nop
        pop esi
        public_448a58 : nop
        ret 
        UNREACHABLE_TRAP(0x448a20)
    }
}

#undef public_448a57
#undef public_448a58
