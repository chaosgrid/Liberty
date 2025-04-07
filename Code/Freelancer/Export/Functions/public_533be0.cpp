#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_533be0);
CLANG_FORWARD_PROC_SYMBOL(public_53a880);

#define public_533c08 _public_533c08
#define public_533c2b _public_533c2b
#define public_533c2d _public_533c2d
#define public_533c5b _public_533c5b
#define public_533c68 _public_533c68
#define public_533c80 _public_533c80
#define public_533ca7 _public_533ca7
#define public_533ca9 _public_533ca9
#define public_533cc7 _public_533cc7
#define public_533cea _public_533cea
#define public_533cec _public_533cec

PROC_DECLARE(0x533be0, internal_533be0, public_533be0);
extern "C" NAKED register_t __cdecl internal_533be0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x10], esi
        call dword ptr ds : [public_5c6944]
        mov edi, dword ptr ds : [public_5c64f0]
        mov ebx, dword ptr ds : [public_5c6570]
        mov ebp, 0x100
        public_533c08 : nop
        test esi, esi
        je public_533c2b
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_533c2b
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_533c2b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_533c2d
        public_533c2b : nop
        xor eax, eax
        public_533c2d : nop
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[eax+0xE4]
        call edi
        mov esi, eax
        test esi, esi
        je public_533c68
        push esi
        call ebx
        add esp, 4
        test eax, eax
        je public_533c5b
        cmp dword ptr ds : [esi+0x14], ebp
        je public_533c5b
        mov eax, dword ptr ds : [esi]
        push 2
        mov ecx, esi
        call dword ptr ds : [eax+0x88]
        public_533c5b : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        mov esi, dword ptr ss : [esp+0x10]
        jmp public_533c08
        public_533c68 : nop
        mov esi, dword ptr ds : [public_5c6584]
        mov edi, dword ptr ds : [public_5c6960]
        mov byte ptr ss : [esp+0x14], 1
        mov ebx, 3
        mov edi, edi
        public_533c80 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        test ebp, ebp
        je public_533ca7
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_533ca7
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_533ca7
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_533ca9
        public_533ca7 : nop
        xor eax, eax
        public_533ca9 : nop
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[eax+0x144]
        call esi
        test eax, eax
        je public_533cc7
        cmp dword ptr ds : [eax+0x14], ebx
        je public_533c80
        push 1
        mov ecx, eax
        call edi
        jmp public_533c80
        public_533cc7 : nop
        test ebp, ebp
        je public_533cea
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_533cea
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_533cea
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_533cec
        public_533cea : nop
        xor eax, eax
        public_533cec : nop
        lea ecx, ds:[eax+0x144]
        call dword ptr ds : [public_5c695c]
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        mov ecx, ebp
        call public_53a880
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x533be0)
    }
}

#undef public_533c08
#undef public_533c2b
#undef public_533c2d
#undef public_533c5b
#undef public_533c68
#undef public_533c80
#undef public_533ca7
#undef public_533ca9
#undef public_533cc7
#undef public_533cea
#undef public_533cec
