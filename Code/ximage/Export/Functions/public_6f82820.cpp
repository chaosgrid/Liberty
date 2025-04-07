#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f82980);

#define public_6f82830 _public_6f82830
#define public_6f82860 _public_6f82860
#define public_6f82877 _public_6f82877
#define public_6f8287f _public_6f8287f
#define public_6f828a9 _public_6f828a9
#define public_6f828bd _public_6f828bd
#define public_6f828c8 _public_6f828c8

PROC_DECLARE(0x6f82820, internal_6f82820, public_6f82820);
extern "C" NAKED register_t __cdecl internal_6f82820()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        jbe public_6f82830
        dec eax
        mov dword ptr ds : [esi+0x44], eax
        public_6f82830 : nop
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        jne public_6f828c8
        mov dword ptr ds : [esi+0x44], 1
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        push edi
        mov dword ptr ds : [esi], offset public_6f83080
        je public_6f8287f
        mov eax, dword ptr ds : [esi+0x14]
        xor edi, edi
        test eax, eax
        jle public_6f8287f
        lea esp, ss:[esp]
        public_6f82860 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [eax+edi*4]
        test eax, eax
        je public_6f82877
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xB8]
        public_6f82877 : nop
        mov eax, dword ptr ds : [esi+0x14]
        inc edi
        cmp edi, eax
        jl public_6f82860
        public_6f8287f : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6f82980
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_6f82980
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        test eax, eax
        pop edi
        je public_6f828a9
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], 0
        public_6f828a9 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f828bd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_6f828bd : nop
        push esi
        call public_6f82980
        add esp, 4
        xor eax, eax
        public_6f828c8 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f82820)
    }
}

#undef public_6f82830
#undef public_6f82860
#undef public_6f82877
#undef public_6f8287f
#undef public_6f828a9
#undef public_6f828bd
#undef public_6f828c8
