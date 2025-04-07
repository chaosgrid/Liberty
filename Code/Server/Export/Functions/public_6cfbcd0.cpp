#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfbd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cfbcf6 _public_6cfbcf6
#define public_6cfbd01 _public_6cfbd01
#define public_6cfbd2c _public_6cfbd2c
#define public_6cfbd51 _public_6cfbd51

PROC_DECLARE(0x6cfbcd0, internal_6cfbcd0, public_6cfbcd0);
extern "C" NAKED register_t __cdecl internal_6cfbcd0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d8d928]
        test cl, cl
        push esi
        push edi
        mov eax, 0xFFFFFFFB
        jne public_6cfbd51
        mov ecx, dword ptr ds : [public_6d8d8f8]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov eax, 0xFFFFFFFE
        je public_6cfbd51
        mov edx, dword ptr ss : [esp+0xC]
        public_6cfbcf6 : nop
        cmp dword ptr ds : [esi+8], edx
        je public_6cfbd01
        mov esi, dword ptr ds : [esi]
        cmp esi, ecx
        jne public_6cfbcf6
        public_6cfbd01 : nop
        cmp esi, ecx
        je public_6cfbd51
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x20]
        push ecx
        call dword ptr ds : [public_6d64440]
        mov edi, dword ptr ds : [esi+8]
        add esp, 4
        test edi, edi
        je public_6cfbd2c
        mov ecx, edi
        call public_6cfbd60
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6cfbd2c : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [public_6d8d8fc]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_6d8d8fc], eax
        xor eax, eax
        public_6cfbd51 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfbcd0)
    }
}

#undef public_6cfbcf6
#undef public_6cfbd01
#undef public_6cfbd2c
#undef public_6cfbd51
