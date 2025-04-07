#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71730);

#define public_6b71660 _public_6b71660
#define public_6b71665 _public_6b71665
#define public_6b7166c _public_6b7166c
#define public_6b7167a _public_6b7167a
#define public_6b7168d _public_6b7168d
#define public_6b7168e _public_6b7168e
#define public_6b71694 _public_6b71694
#define public_6b7169c _public_6b7169c
#define public_6b716ae _public_6b716ae
#define public_6b716b7 _public_6b716b7
#define public_6b716d2 _public_6b716d2
#define public_6b71716 _public_6b71716

PROC_DECLARE(0x6b71640, internal_6b71640, public_6b71640);
extern "C" NAKED register_t __cdecl internal_6b71640()
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
        jne public_6b71660
        mov eax, dword ptr ds : [edi+8]
        jmp public_6b71665
        public_6b71660 : nop
        cmp eax, 0xFFFFFFFF
        je public_6b7166c
        public_6b71665 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_6b7167a
        public_6b7166c : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6b71716
        public_6b7167a : nop
        mov esi, dword ptr ss : [esp+0x11C]
        mov cl, byte ptr ds : [esi]
        cmp cl, 0x5C
        je public_6b7168d
        cmp cl, 0x2F
        jne public_6b7168e
        public_6b7168d : nop
        inc esi
        public_6b7168e : nop
        mov cl, byte ptr ds : [esi]
        test cl, cl
        je public_6b716b7
        public_6b71694 : nop
        test byte ptr ds : [eax+8], 0x10
        je public_6b71716
        mov ebp, esi
        public_6b7169c : nop
        cmp cl, 0x5C
        je public_6b716d2
        cmp cl, 0x2F
        je public_6b716d2
        mov cl, byte ptr ss : [ebp+1]
        inc ebp
        test cl, cl
        jne public_6b7169c
        public_6b716ae : nop
        push eax
        push esi
        mov ecx, edi
        call public_6b71730
        public_6b716b7 : nop
        test eax, eax
        je public_6b71716
        xor ecx, ecx
        pop edi
        mov cl, byte ptr ds : [eax+8]
        pop esi
        mov eax, ecx
        pop ebp
        and eax, 0x10
        pop ebx
        add esp, 0x108
        ret 8
        public_6b716d2 : nop
        cmp byte ptr ss : [ebp], 0
        je public_6b716ae
        mov edx, ebp
        lea edi, ss:[esp+0x14]
        sub edx, esi
        push eax
        mov ecx, edx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+edx+0x18], 0
        lea edx, ss:[esp+0x18]
        mov ecx, edi
        push edx
        call public_6b71730
        test eax, eax
        je public_6b71716
        mov cl, byte ptr ss : [ebp+1]
        lea esi, ss:[ebp+1]
        test cl, cl
        jne public_6b71694
        jmp public_6b716b7
        public_6b71716 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x108
        ret 8
        UNREACHABLE_TRAP(0x6b71640)
    }
}

#undef public_6b71660
#undef public_6b71665
#undef public_6b7166c
#undef public_6b7167a
#undef public_6b7168d
#undef public_6b7168e
#undef public_6b71694
#undef public_6b7169c
#undef public_6b716ae
#undef public_6b716b7
#undef public_6b716d2
#undef public_6b71716
