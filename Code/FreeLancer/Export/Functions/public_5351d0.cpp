#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5351d0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_5351f5 _public_5351f5
#define public_5351fa _public_5351fa
#define public_535210 _public_535210
#define public_535228 _public_535228
#define public_53522a _public_53522a
#define public_53528a _public_53528a
#define public_53528c _public_53528c
#define public_5352d0 _public_5352d0
#define public_5352df _public_5352df
#define public_5352ee _public_5352ee
#define public_5352f6 _public_5352f6
#define public_535312 _public_535312
#define public_53531e _public_53531e

PROC_DECLARE(0x5351d0, internal_5351d0, public_5351d0);
extern "C" NAKED register_t __cdecl internal_5351d0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        push edi
        mov edi, ecx
        xor ebx, ebx
        cmp esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], edi
        je public_5351f5
        call public_54bb00
        cmp esi, eax
        mov byte ptr ss : [esp+0x34], bl
        jne public_5351fa
        public_5351f5 : nop
        mov byte ptr ss : [esp+0x34], 1
        public_5351fa : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_535210
        mov al, byte ptr ss : [esp+0x34]
        test al, al
        je public_53531e
        public_535210 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_535228
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_53522a
        public_535228 : nop
        xor eax, eax
        public_53522a : nop
        mov ebx, dword ptr ss : [esp+0x28]
        xor edx, edx
        mov dx, word ptr ds : [ebx]
        lea ecx, ds:[eax+0xE4]
        push edx
        call dword ptr ds : [public_5c6574]
        mov esi, eax
        test esi, esi
        je public_5352df
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_5352df
        push esi
        call dword ptr ds : [public_5c6544]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_5352d0
        mov esi, dword ptr ss : [esp+0x2C]
        test esi, esi
        je public_53528a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_53528a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_53528c
        public_53528a : nop
        xor eax, eax
        public_53528c : nop
        mov ebp, dword ptr ss : [esp+0x30]
        push ebp
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c653c]
        test al, al
        je public_535312
        mov al, byte ptr ss : [esp+0x34]
        test al, al
        je public_535312
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx-4]
        lea ecx, ds:[edx-4]
        call dword ptr ds : [eax+0x20]
        test esi, esi
        mov cx, word ptr ds : [ebx]
        mov dword ptr ss : [esp+0x14], eax
        mov word ptr ss : [esp+0x18], cx
        je public_5352ee
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_5352f6
        public_5352d0 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        add esp, 0x14
        ret 0x10
        public_5352df : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        add esp, 0x14
        ret 0x10
        public_5352ee : nop
        mov dword ptr ss : [esp+0x1C], 0
        public_5352f6 : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ds : [public_673344]
        mov word ptr ss : [esp+0x24], bp
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x10]
        public_535312 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 0x10
        public_53531e : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x14
        ret 0x10
        UNREACHABLE_TRAP(0x5351d0)
    }
}

#undef public_5351f5
#undef public_5351fa
#undef public_535210
#undef public_535228
#undef public_53522a
#undef public_53528a
#undef public_53528c
#undef public_5352d0
#undef public_5352df
#undef public_5352ee
#undef public_5352f6
#undef public_535312
#undef public_53531e
