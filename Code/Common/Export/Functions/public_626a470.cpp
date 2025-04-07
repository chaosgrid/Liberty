#include "Common-PCH.h"


#define public_626a47d _public_626a47d
#define public_626a485 _public_626a485
#define public_626a494 _public_626a494
#define public_626a49c _public_626a49c
#define public_626a4b0 _public_626a4b0
#define public_626a4cd _public_626a4cd
#define public_626a4d1 _public_626a4d1
#define public_626a4db _public_626a4db

PROC_DECLARE(0x626a470, internal_626a470, public_626a470);
extern "C" NAKED register_t __cdecl internal_626a470()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        push esi
        push edi
        jne public_626a47d
        xor edi, edi
        jmp public_626a485
        public_626a47d : nop
        mov edi, dword ptr ds : [ecx+8]
        sub edi, eax
        sar edi, 5
        public_626a485 : nop
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_626a494
        xor esi, esi
        jmp public_626a49c
        public_626a494 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, edx
        sar esi, 5
        public_626a49c : nop
        cmp edi, esi
        jne public_626a4db
        mov esi, dword ptr ds : [ecx+8]
        cmp eax, esi
        je public_626a4d1
        sub edx, eax
        lea ecx, ds:[edx+eax+2]
        lea ecx, ds:[ecx]
        public_626a4b0 : nop
        mov dx, word ptr ds : [eax+2]
        cmp dx, word ptr ds : [ecx]
        jne public_626a4cd
        add eax, 0x20
        add ecx, 0x20
        cmp eax, esi
        jne public_626a4b0
        pop edi
        mov eax, 1
        pop esi
        ret 4
        public_626a4cd : nop
        cmp eax, esi
        jne public_626a4db
        public_626a4d1 : nop
        pop edi
        mov eax, 1
        pop esi
        ret 4
        public_626a4db : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626a470)
    }
}

#undef public_626a47d
#undef public_626a485
#undef public_626a494
#undef public_626a49c
#undef public_626a4b0
#undef public_626a4cd
#undef public_626a4d1
#undef public_626a4db
