#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b52869 _public_6b52869
#define public_6b52881 _public_6b52881
#define public_6b52891 _public_6b52891
#define public_6b528b0 _public_6b528b0
#define public_6b528c0 _public_6b528c0
#define public_6b528df _public_6b528df
#define public_6b528ef _public_6b528ef
#define public_6b5290d _public_6b5290d
#define public_6b5291d _public_6b5291d
#define public_6b5293a _public_6b5293a
#define public_6b5294a _public_6b5294a
#define public_6b5296f _public_6b5296f
#define public_6b5297f _public_6b5297f
#define public_6b529a9 _public_6b529a9
#define public_6b529c9 _public_6b529c9
#define public_6b529fa _public_6b529fa

PROC_DECLARE(0x6b52820, internal_6b52820, public_6b52820);
extern "C" NAKED register_t __cdecl internal_6b52820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6b4e740
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b52869
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b52869 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6b52881
        mov dword ptr ds : [ebx+0xC], edi
        public_6b52881 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b52891
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b52891 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b528b0
        mov dword ptr ds : [ebx+0xC], edi
        public_6b528b0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b528c0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b528c0 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b528df
        mov dword ptr ds : [ebx+0xC], edi
        public_6b528df : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b528ef
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b528ef : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ss : [ebp+0x2C]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b5290d
        mov dword ptr ds : [ebx+0xC], edi
        public_6b5290d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b5291d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b5291d : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x30]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b5293a
        mov dword ptr ds : [ebx+0xC], edi
        public_6b5293a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b5294a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b5294a : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x28]
        test eax, eax
        jbe public_6b529a9
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b5296f
        mov dword ptr ds : [ebx+0xC], edi
        public_6b5296f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b5297f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b5297f : nop
        mov eax, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x34]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x16
        public_6b529a9 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b529c9
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b529c9 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6b529fa
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b529fa : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b52820)
    }
}

#undef public_6b52869
#undef public_6b52881
#undef public_6b52891
#undef public_6b528b0
#undef public_6b528c0
#undef public_6b528df
#undef public_6b528ef
#undef public_6b5290d
#undef public_6b5291d
#undef public_6b5293a
#undef public_6b5294a
#undef public_6b5296f
#undef public_6b5297f
#undef public_6b529a9
#undef public_6b529c9
#undef public_6b529fa
