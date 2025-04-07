#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d39a0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d4350);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cc3);
CLANG_FORWARD_PROC_SYMBOL(public_65d6e7a);

#define public_65d39b8 _public_65d39b8
#define public_65d39c7 _public_65d39c7
#define public_65d39d8 _public_65d39d8
#define public_65d39ef _public_65d39ef
#define public_65d3a1c _public_65d3a1c
#define public_65d3a33 _public_65d3a33
#define public_65d3a38 _public_65d3a38
#define public_65d3a40 _public_65d3a40
#define public_65d3a4c _public_65d3a4c
#define public_65d3a75 _public_65d3a75

PROC_DECLARE(0x65d39a0, internal_65d39a0, public_65d39a0);
extern "C" NAKED register_t __cdecl internal_65d39a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        cmp dword ptr ds : [edi+8], esi
        jae public_65d39b8
        call public_65d6e7a
        public_65d39b8 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, esi
        mov esi, dword ptr ss : [esp+0x1C]
        cmp eax, esi
        jae public_65d39c7
        mov esi, eax
        public_65d39c7 : nop
        mov edx, dword ptr ds : [ebx+8]
        or eax, 0xFFFFFFFF
        sub eax, edx
        cmp eax, esi
        ja public_65d39d8
        call public_65d6cc3
        public_65d39d8 : nop
        test esi, esi
        jbe public_65d3a75
        mov ebp, dword ptr ds : [ebx+8]
        add ebp, esi
        cmp ebp, 0xFFFFFFFD
        jbe public_65d39ef
        call public_65d6cc3
        public_65d39ef : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_65d3a1c
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_65d3a1c
        cmp cl, 0xFF
        je public_65d3a1c
        test ebp, ebp
        jne public_65d3a38
        dec cl
        push ebp
        mov byte ptr ds : [eax-1], cl
        mov ecx, ebx
        call public_65d3b40
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 0xC
        public_65d3a1c : nop
        test ebp, ebp
        jne public_65d3a33
        test eax, eax
        je public_65d3a75
        mov dword ptr ds : [ebx+8], ebp
        pop edi
        mov byte ptr ds : [eax], 0
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 0xC
        public_65d3a33 : nop
        cmp dword ptr ds : [ebx+0xC], ebp
        jae public_65d3a40
        public_65d3a38 : nop
        mov ecx, ebx
        push ebp
        call public_65d4350
        public_65d3a40 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_65d3a4c
        mov eax, offset public_65e13a4
        public_65d3a4c : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [ebx+8]
        mov ecx, esi
        lea esi, ds:[eax+edx]
        mov eax, dword ptr ds : [ebx+4]
        add edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [ecx+ebp], 0
        public_65d3a75 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65d39a0)
    }
}

#undef public_65d39b8
#undef public_65d39c7
#undef public_65d39d8
#undef public_65d39ef
#undef public_65d3a1c
#undef public_65d3a33
#undef public_65d3a38
#undef public_65d3a40
#undef public_65d3a4c
#undef public_65d3a75
