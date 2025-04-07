#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26000);
CLANG_FORWARD_PROC_SYMBOL(public_6c26200);

#define public_6c22c67 _public_6c22c67
#define public_6c22c82 _public_6c22c82
#define public_6c22c94 _public_6c22c94
#define public_6c22ca6 _public_6c22ca6
#define public_6c22cb8 _public_6c22cb8
#define public_6c22cca _public_6c22cca
#define public_6c22ce1 _public_6c22ce1
#define public_6c22cf7 _public_6c22cf7
#define public_6c22d0f _public_6c22d0f
#define public_6c22d27 _public_6c22d27
#define public_6c22d39 _public_6c22d39
#define public_6c22d43 _public_6c22d43

PROC_DECLARE(0x6c22c50, internal_6c22c50, public_6c22c50);
extern "C" NAKED register_t __cdecl internal_6c22c50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1E8]
        cmp eax, dword ptr ds : [esi+0x14]
        jne public_6c22c67
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c22c67 : nop
        mov eax, dword ptr ds : [esi+0x1EC]
        test eax, eax
        je public_6c22d43
        test al, 1
        je public_6c22c82
        push 1
        mov ecx, esi
        call public_6c26000
        public_6c22c82 : nop
        test byte ptr ds : [esi+0x1EC], 8
        je public_6c22c94
        push 8
        mov ecx, esi
        call public_6c26000
        public_6c22c94 : nop
        test byte ptr ds : [esi+0x1EC], 2
        je public_6c22ca6
        push 2
        mov ecx, esi
        call public_6c26000
        public_6c22ca6 : nop
        test byte ptr ds : [esi+0x1EC], 4
        je public_6c22cb8
        push 4
        mov ecx, esi
        call public_6c26000
        public_6c22cb8 : nop
        test byte ptr ds : [esi+0x1EC], 0x10
        je public_6c22cca
        push 0x10
        mov ecx, esi
        call public_6c26000
        public_6c22cca : nop
        mov eax, dword ptr ds : [esi+0x1EC]
        test ah, 0x40
        je public_6c22ce1
        push 0x4000
        mov ecx, esi
        call public_6c26000
        public_6c22ce1 : nop
        mov eax, dword ptr ds : [esi+0x1EC]
        test ah, ah
        jns public_6c22cf7
        push 0x8000
        mov ecx, esi
        call public_6c26000
        public_6c22cf7 : nop
        test dword ptr ds : [esi+0x1EC], 0x10000
        je public_6c22d0f
        push 0x10000
        mov ecx, esi
        call public_6c26000
        public_6c22d0f : nop
        test dword ptr ds : [esi+0x1EC], 0x20000
        je public_6c22d27
        push 0x20000
        mov ecx, esi
        call public_6c26000
        public_6c22d27 : nop
        mov eax, dword ptr ds : [esi+0x1EC]
        test ah, 1
        je public_6c22d39
        mov ecx, esi
        call public_6c26200
        public_6c22d39 : nop
        mov dword ptr ds : [esi+0x1EC], 0
        public_6c22d43 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c22c50)
    }
}

#undef public_6c22c67
#undef public_6c22c82
#undef public_6c22c94
#undef public_6c22ca6
#undef public_6c22cb8
#undef public_6c22cca
#undef public_6c22ce1
#undef public_6c22cf7
#undef public_6c22d0f
#undef public_6c22d27
#undef public_6c22d39
#undef public_6c22d43
