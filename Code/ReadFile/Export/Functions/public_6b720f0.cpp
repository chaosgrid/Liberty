#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b721f0);

#define public_6b72110 _public_6b72110
#define public_6b72115 _public_6b72115
#define public_6b7211c _public_6b7211c
#define public_6b7212a _public_6b7212a
#define public_6b7213d _public_6b7213d
#define public_6b7213e _public_6b7213e
#define public_6b72144 _public_6b72144
#define public_6b72154 _public_6b72154
#define public_6b72166 _public_6b72166
#define public_6b7216f _public_6b7216f
#define public_6b7218b _public_6b7218b
#define public_6b721d3 _public_6b721d3

PROC_DECLARE(0x6b720f0, internal_6b720f0, public_6b720f0);
extern "C" NAKED register_t __cdecl internal_6b720f0()
{
    __asm
    {
        sub esp, 0x108
        mov eax, dword ptr ss : [esp+0x110]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], edi
        jne public_6b72110
        mov eax, dword ptr ds : [edi+0xC]
        jmp public_6b72115
        public_6b72110 : nop
        cmp eax, 0xFFFFFFFF
        je public_6b7211c
        public_6b72115 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_6b7212a
        public_6b7211c : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6b721d3
        public_6b7212a : nop
        mov esi, dword ptr ss : [esp+0x11C]
        mov cl, byte ptr ds : [esi]
        cmp cl, 0x5C
        je public_6b7213d
        cmp cl, 0x2F
        jne public_6b7213e
        public_6b7213d : nop
        inc esi
        public_6b7213e : nop
        mov cl, byte ptr ds : [esi]
        test cl, cl
        je public_6b7216f
        public_6b72144 : nop
        mov edx, dword ptr ds : [eax]
        shr edx, 0x1F
        test dl, 1
        je public_6b721d3
        mov ebp, esi
        public_6b72154 : nop
        cmp cl, 0x5C
        je public_6b7218b
        cmp cl, 0x2F
        je public_6b7218b
        mov cl, byte ptr ss : [ebp+1]
        inc ebp
        test cl, cl
        jne public_6b72154
        public_6b72166 : nop
        push eax
        push esi
        mov ecx, edi
        call public_6b721f0
        public_6b7216f : nop
        test eax, eax
        je public_6b721d3
        mov eax, dword ptr ds : [eax]
        pop edi
        shr eax, 0x1F
        and eax, 1
        pop esi
        pop ebp
        pop ebx
        shl eax, 4
        add esp, 0x108
        ret 8
        public_6b7218b : nop
        cmp byte ptr ss : [ebp], 0
        je public_6b72166
        mov edx, ebp
        lea edi, ss:[esp+0x14]
        sub edx, esi
        push eax
        mov ecx, edx
        lea eax, ss:[esp+0x18]
        mov ebx, ecx
        push eax
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x18]
        mov byte ptr ss : [esp+edx+0x1C], 0
        mov ecx, edi
        call public_6b721f0
        test eax, eax
        je public_6b721d3
        mov cl, byte ptr ss : [ebp+1]
        lea esi, ss:[ebp+1]
        test cl, cl
        jne public_6b72144
        jmp public_6b7216f
        public_6b721d3 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x108
        ret 8
        UNREACHABLE_TRAP(0x6b720f0)
    }
}

#undef public_6b72110
#undef public_6b72115
#undef public_6b7211c
#undef public_6b7212a
#undef public_6b7213d
#undef public_6b7213e
#undef public_6b72144
#undef public_6b72154
#undef public_6b72166
#undef public_6b7216f
#undef public_6b7218b
#undef public_6b721d3
