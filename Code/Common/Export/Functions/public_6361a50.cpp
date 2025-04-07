#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);

#define public_6361a68 _public_6361a68
#define public_6361a74 _public_6361a74
#define public_6361a89 _public_6361a89
#define public_6361a99 _public_6361a99

PROC_DECLARE(0x6361a50, internal_6361a50, public_6361a50);
extern "C" NAKED register_t __cdecl internal_6361a50()
{
    __asm
    {
        push esi
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x1A]
        lea esi, ds:[ecx+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        dec eax
        js public_6361a74
        mov ecx, dword ptr ds : [esi+4]
        lea ecx, ds:[ecx+eax*4]
        public_6361a68 : nop
        cmp dword ptr ds : [ecx], edi
        je public_6361a74
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_6361a68
        public_6361a74 : nop
        cmp eax, 0xFFFFFFFF
        jne public_6361a99
        mov dx, word ptr ds : [esi+2]
        cmp dx, word ptr ds : [esi]
        jb public_6361a89
        mov ecx, esi
        call public_63441a0
        public_6361a89 : nop
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        mov dword ptr ds : [ecx+eax*4], edi
        inc word ptr ds : [esi+2]
        public_6361a99 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6361a50)
    }
}

#undef public_6361a68
#undef public_6361a74
#undef public_6361a89
#undef public_6361a99
