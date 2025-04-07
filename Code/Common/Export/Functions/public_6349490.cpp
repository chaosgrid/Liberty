#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349400);
CLANG_FORWARD_PROC_SYMBOL(public_6349460);
CLANG_FORWARD_PROC_SYMBOL(public_6349490);
CLANG_FORWARD_PROC_SYMBOL(public_634b480);

#define public_6349494 _public_6349494
#define public_634949a _public_634949a
#define public_63494bf _public_63494bf
#define public_63494e6 _public_63494e6

PROC_DECLARE(0x6349490, internal_6349490, public_6349490);
extern "C" NAKED register_t __cdecl internal_6349490()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        public_6349494 : nop
        xor esi, esi
        mov si, word ptr ds : [edi+0xE]
        public_634949a : nop
        dec esi
        test esi, esi
        jl public_63494bf
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx+0x60]
        shl edx, 0x18
        cmp edx, 0x8000000
        jl public_634949a
        call public_634b480
        cmp eax, 1
        je public_6349494
        jmp public_634949a
        public_63494bf : nop
        cmp byte ptr ds : [edi], 8
        jne public_63494e6
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+8]
        push edi
        call public_6349460
        mov eax, dword ptr ds : [edi]
        and eax, 0xFFFFFF01
        or eax, 1
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+8]
        push edi
        call public_6349400
        public_63494e6 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6349490)
    }
}

#undef public_6349494
#undef public_634949a
#undef public_63494bf
#undef public_63494e6
