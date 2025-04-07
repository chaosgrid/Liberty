#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a00);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);

#define public_6d55307 _public_6d55307
#define public_6d55360 _public_6d55360
#define public_6d55383 _public_6d55383
#define public_6d553a0 _public_6d553a0
#define public_6d553a4 _public_6d553a4
#define public_6d553ac _public_6d553ac
#define public_6d553b2 _public_6d553b2

PROC_DECLARE(0x6d552d0, internal_6d552d0, public_6d552d0);
extern "C" NAKED register_t __cdecl internal_6d552d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push ebx
        mov ecx, offset public_6d90260
        mov dword ptr ds : [edi], 0
        xor esi, esi
        call public_6ce1a00
        test al, al
        je public_6d55307
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+ecx-0x1B4]
        public_6d55307 : nop
        test esi, 0x3FFFFFFF
        je public_6d553b2
        push esi
        call dword ptr ds : [public_6d64950]
        mov ecx, eax
        call dword ptr ds : [public_6d6494c]
        test eax, eax
        je public_6d553b2
        fld dword ptr ds : [public_6d6ae78]
        fmul dword ptr ds : [eax+0x58]
        fstp dword ptr ds : [edi]
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        lea ebx, ds:[edx+eax-0x1A0]
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d553ac
        push ebp
        mov ebp, dword ptr ds : [public_6d64984]
        lea esp, ss:[esp]
        public_6d55360 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, 0x3FFFFFFF
        je public_6d553a4
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d553a4
        mov cl, byte ptr ds : [eax+0x70]
        test cl, cl
        je public_6d55383
        fild dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [eax+0x58]
        jmp public_6d553a0
        public_6d55383 : nop
        fld dword ptr ds : [esi+0x18]
        fmul dword ptr ds : [eax+0x58]
        call public_6d60150
        imul eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6d6ae7c]
        public_6d553a0 : nop
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        public_6d553a4 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+4]
        jne public_6d55360
        pop ebp
        public_6d553ac : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6d553b2 : nop
        pop edi
        pop esi
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d552d0)
    }
}

#undef public_6d55307
#undef public_6d55360
#undef public_6d55383
#undef public_6d553a0
#undef public_6d553a4
#undef public_6d553ac
#undef public_6d553b2
