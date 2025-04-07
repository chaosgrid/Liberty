#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24b40);

#define public_6f24ba7 _public_6f24ba7
#define public_6f24bc1 _public_6f24bc1
#define public_6f24bcb _public_6f24bcb
#define public_6f24bd6 _public_6f24bd6
#define public_6f24c10 _public_6f24c10

PROC_DECLARE(0x6f24b40, internal_6f24b40, public_6f24b40);
extern "C" NAKED register_t __cdecl internal_6f24b40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x54]
        sub esp, 0x10
        test al, 1
        push esi
        je public_6f24ba7
        fild dword ptr ds : [ecx+0x58]
        lea edx, ds:[ecx+0x84]
        mov dword ptr ss : [esp+0x10], 0x3F800000
        or eax, 0x800
        fmul dword ptr ds : [public_6f5a1e8]
        fstp dword ptr ss : [esp+4]
        mov esi, dword ptr ss : [esp+4]
        fild dword ptr ds : [ecx+0x5C]
        fmul dword ptr ds : [public_6f5a1e8]
        fstp dword ptr ss : [esp+8]
        fild dword ptr ds : [ecx+0x60]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+4], esi
        fmul dword ptr ds : [public_6f5a1e8]
        mov dword ptr ds : [ecx+0x54], eax
        fstp dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0xC], esi
        public_6f24ba7 : nop
        mov eax, dword ptr ds : [ecx+0x54]
        xor esi, esi
        test al, 0x20
        je public_6f24bd6
        cmp dword ptr ds : [ecx+0x7C], esi
        je public_6f24bc1
        mov dword ptr ds : [ecx+0x80], 3
        jmp public_6f24bcb
        public_6f24bc1 : nop
        mov dword ptr ds : [ecx+0x80], 2
        public_6f24bcb : nop
        and eax, 0xFFFFFFDF
        or eax, 0x100
        mov dword ptr ds : [ecx+0x54], eax
        public_6f24bd6 : nop
        mov edx, dword ptr ds : [ecx+0x54]
        test dl, 8
        je public_6f24c10
        fld dword ptr ds : [ecx+0xE4]
        fcomp dword ptr ds : [public_6f5a1d4]
        fnstsw ax
        test ah, 5
        jp public_6f24c10
        or edx, 0x100
        mov dword ptr ds : [ecx+0x80], 1
        mov dword ptr ds : [ecx+0xE4], esi
        mov dword ptr ds : [ecx+0xE0], esi
        mov dword ptr ds : [ecx+0x54], edx
        public_6f24c10 : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f24b40)
    }
}

#undef public_6f24ba7
#undef public_6f24bc1
#undef public_6f24bcb
#undef public_6f24bd6
#undef public_6f24c10
