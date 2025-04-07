#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_1000a418);
CLANG_FORWARD_PROC_SYMBOL(public_1000a46a);

#define public_1000385c _public_1000385c
#define public_10003872 _public_10003872
#define public_10003887 _public_10003887
#define public_10003896 _public_10003896
#define public_100038a6 _public_100038a6
#define public_100038b0 _public_100038b0
#define public_100038c0 _public_100038c0
#define public_100038e0 _public_100038e0
#define public_100038f0 _public_100038f0
#define public_10003910 _public_10003910
#define public_10003920 _public_10003920

PROC_DECLARE(0x10003840, internal_10003840, public_10003840);
extern "C" NAKED register_t __cdecl internal_10003840()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        jne public_1000385c
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0xFFFFFFFE
        mov eax, dword ptr ds : [public_1000e1b0]
        pop ebx
        ret 8
        public_1000385c : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        jne public_10003872
        mov eax, offset public_1000b133
        pop ebx
        ret 8
        public_10003872 : nop
        cmp eax, 0xFFFFFFFF
        push ebp
        push esi
        push edi
        je public_10003887
        mov ebp, dword ptr ds : [ebx+0x18]
        test ebp, ebp
        je public_10003887
        cmp byte ptr ss : [ebp], 0
        jne public_10003896
        public_10003887 : nop
        mov edx, dword ptr ds : [ebx+0x38]
        shl edx, 2
        mov eax, offset public_1000e1a8
        sub eax, edx
        mov ebp, dword ptr ds : [eax]
        public_10003896 : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test eax, eax
        je public_100038a6
        push eax
        call public_1000a418
        add esp, 4
        public_100038a6 : nop
        mov eax, dword ptr ds : [ebx+0x54]
        lea edx, ds:[eax+1]
        lea esp, ss:[esp]
        public_100038b0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        jne public_100038b0
        sub eax, edx
        mov edx, eax
        mov eax, ebp
        lea esi, ds:[eax+1]
        public_100038c0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        jne public_100038c0
        sub eax, esi
        lea ecx, ds:[eax+edx+3]
        push ecx
        call public_1000a46a
        mov ecx, dword ptr ds : [ebx+0x54]
        add esp, 4
        mov dword ptr ds : [ebx+0x50], eax
        mov edx, eax
        mov edi, edi
        public_100038e0 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_100038e0
        mov edi, dword ptr ds : [ebx+0x50]
        dec edi
        mov edi, edi
        public_100038f0 : nop
        mov al, byte ptr ds : [edi+1]
        inc edi
        test al, al
        jne public_100038f0
        mov dx, word ptr ds : [public_1000b130]
        mov word ptr ds : [edi], dx
        mov al, byte ptr ds : [public_1000b132]
        mov byte ptr ds : [edi+2], al
        mov eax, ebp
        mov esi, ebp
        mov edi, edi
        public_10003910 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        jne public_10003910
        mov edi, dword ptr ds : [ebx+0x50]
        sub eax, esi
        dec edi
        lea ecx, ds:[ecx]
        public_10003920 : nop
        mov cl, byte ptr ds : [edi+1]
        inc edi
        test cl, cl
        jne public_10003920
        mov ecx, eax
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+0x50]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x10003840)
    }
}

#undef public_1000385c
#undef public_10003872
#undef public_10003887
#undef public_10003896
#undef public_100038a6
#undef public_100038b0
#undef public_100038c0
#undef public_100038e0
#undef public_100038f0
#undef public_10003910
#undef public_10003920
