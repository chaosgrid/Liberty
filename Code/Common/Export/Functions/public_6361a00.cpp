#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);

#define public_6361a18 _public_6361a18
#define public_6361a24 _public_6361a24
#define public_6361a39 _public_6361a39
#define public_6361a49 _public_6361a49

PROC_DECLARE(0x6361a00, internal_6361a00, public_6361a00);
extern "C" NAKED register_t __cdecl internal_6361a00()
{
    __asm
    {
        push esi
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x12]
        lea esi, ds:[ecx+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        dec eax
        js public_6361a24
        mov ecx, dword ptr ds : [esi+4]
        lea ecx, ds:[ecx+eax*4]
        public_6361a18 : nop
        cmp dword ptr ds : [ecx], edi
        je public_6361a24
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_6361a18
        public_6361a24 : nop
        cmp eax, 0xFFFFFFFF
        jne public_6361a49
        mov dx, word ptr ds : [esi+2]
        cmp dx, word ptr ds : [esi]
        jb public_6361a39
        mov ecx, esi
        call public_63441a0
        public_6361a39 : nop
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        mov dword ptr ds : [ecx+eax*4], edi
        inc word ptr ds : [esi+2]
        public_6361a49 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6361a00)
    }
}

#undef public_6361a18
#undef public_6361a24
#undef public_6361a39
#undef public_6361a49
