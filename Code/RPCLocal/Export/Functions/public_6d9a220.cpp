#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d9a269 _public_6d9a269
#define public_6d9a281 _public_6d9a281
#define public_6d9a291 _public_6d9a291
#define public_6d9a2b0 _public_6d9a2b0
#define public_6d9a2c0 _public_6d9a2c0
#define public_6d9a2df _public_6d9a2df
#define public_6d9a2ef _public_6d9a2ef
#define public_6d9a30d _public_6d9a30d
#define public_6d9a31d _public_6d9a31d
#define public_6d9a33a _public_6d9a33a
#define public_6d9a34a _public_6d9a34a
#define public_6d9a36f _public_6d9a36f
#define public_6d9a37f _public_6d9a37f
#define public_6d9a3a9 _public_6d9a3a9
#define public_6d9a3c9 _public_6d9a3c9
#define public_6d9a3fa _public_6d9a3fa

PROC_DECLARE(0x6d9a220, internal_6d9a220, public_6d9a220);
extern "C" NAKED register_t __cdecl internal_6d9a220()
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
        call public_6da1380
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d9a269
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d9a269 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6d9a281
        mov dword ptr ds : [ebx+0xC], edi
        public_6d9a281 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d9a291
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9a291 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d9a2b0
        mov dword ptr ds : [ebx+0xC], edi
        public_6d9a2b0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d9a2c0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9a2c0 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d9a2df
        mov dword ptr ds : [ebx+0xC], edi
        public_6d9a2df : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d9a2ef
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9a2ef : nop
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
        jbe public_6d9a30d
        mov dword ptr ds : [ebx+0xC], edi
        public_6d9a30d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d9a31d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9a31d : nop
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
        jbe public_6d9a33a
        mov dword ptr ds : [ebx+0xC], edi
        public_6d9a33a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d9a34a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9a34a : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        jbe public_6d9a3a9
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d9a36f
        mov dword ptr ds : [ebx+0xC], edi
        public_6d9a36f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d9a37f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9a37f : nop
        mov eax, dword ptr ss : [ebp+0x24]
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
        public_6d9a3a9 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d9a3c9
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9a3c9 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
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
        jbe public_6d9a3fa
        mov dword ptr ds : [ecx+0x10], ebx
        public_6d9a3fa : nop
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
        UNREACHABLE_TRAP(0x6d9a220)
    }
}

#undef public_6d9a269
#undef public_6d9a281
#undef public_6d9a291
#undef public_6d9a2b0
#undef public_6d9a2c0
#undef public_6d9a2df
#undef public_6d9a2ef
#undef public_6d9a30d
#undef public_6d9a31d
#undef public_6d9a33a
#undef public_6d9a34a
#undef public_6d9a36f
#undef public_6d9a37f
#undef public_6d9a3a9
#undef public_6d9a3c9
#undef public_6d9a3fa
