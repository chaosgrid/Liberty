#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6be3229 _public_6be3229
#define public_6be3241 _public_6be3241
#define public_6be3251 _public_6be3251
#define public_6be3270 _public_6be3270
#define public_6be3280 _public_6be3280
#define public_6be329f _public_6be329f
#define public_6be32af _public_6be32af
#define public_6be32cd _public_6be32cd
#define public_6be32dd _public_6be32dd
#define public_6be32fa _public_6be32fa
#define public_6be330a _public_6be330a
#define public_6be332f _public_6be332f
#define public_6be333f _public_6be333f
#define public_6be3369 _public_6be3369
#define public_6be3389 _public_6be3389
#define public_6be33ba _public_6be33ba

PROC_DECLARE(0x6be31e0, internal_6be31e0, public_6be31e0);
extern "C" NAKED register_t __cdecl internal_6be31e0()
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
        call public_6bebe50
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6be3229
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6be3229 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6be3241
        mov dword ptr ds : [ebx+0xC], edi
        public_6be3241 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be3251
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be3251 : nop
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
        jbe public_6be3270
        mov dword ptr ds : [ebx+0xC], edi
        public_6be3270 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be3280
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be3280 : nop
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
        jbe public_6be329f
        mov dword ptr ds : [ebx+0xC], edi
        public_6be329f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be32af
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be32af : nop
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
        jbe public_6be32cd
        mov dword ptr ds : [ebx+0xC], edi
        public_6be32cd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be32dd
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be32dd : nop
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
        jbe public_6be32fa
        mov dword ptr ds : [ebx+0xC], edi
        public_6be32fa : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be330a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be330a : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        jbe public_6be3369
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6be332f
        mov dword ptr ds : [ebx+0xC], edi
        public_6be332f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be333f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be333f : nop
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
        public_6be3369 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6be3389
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be3389 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6be33ba
        mov dword ptr ds : [ecx+0x10], ebx
        public_6be33ba : nop
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
        UNREACHABLE_TRAP(0x6be31e0)
    }
}

#undef public_6be3229
#undef public_6be3241
#undef public_6be3251
#undef public_6be3270
#undef public_6be3280
#undef public_6be329f
#undef public_6be32af
#undef public_6be32cd
#undef public_6be32dd
#undef public_6be32fa
#undef public_6be330a
#undef public_6be332f
#undef public_6be333f
#undef public_6be3369
#undef public_6be3389
#undef public_6be33ba
