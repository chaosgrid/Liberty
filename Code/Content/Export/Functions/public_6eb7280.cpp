#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7280);

#define public_6eb7297 _public_6eb7297
#define public_6eb72a7 _public_6eb72a7
#define public_6eb72b8 _public_6eb72b8
#define public_6eb72cc _public_6eb72cc
#define public_6eb72f6 _public_6eb72f6

PROC_DECLARE(0x6eb7280, internal_6eb7280, public_6eb7280);
extern "C" NAKED register_t __cdecl internal_6eb7280()
{
    __asm
    {
        fld dword ptr ds : [public_6fb4650]
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        or edi, 0xFFFFFFFF
        or ebx, 0xFFFFFFFF
        xor edx, edx
        lea esi, ss:[ebp+0x14]
        public_6eb7297 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, dword ptr ss : [esp+0x14]
        je public_6eb72f6
        xor ecx, ecx
        cmp eax, ecx
        jne public_6eb72a7
        mov ebx, edx
        public_6eb72a7 : nop
        fcom dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_6eb72b8
        fstp st(0)
        mov edi, edx
        fld dword ptr ds : [esi+0xC]
        public_6eb72b8 : nop
        inc edx
        add esi, 0x18
        cmp edx, 8
        jl public_6eb7297
        cmp ebx, 0xFFFFFFFF
        fstp st(0)
        mov eax, ebx
        jne public_6eb72cc
        mov eax, edi
        public_6eb72cc : nop
        lea edx, ds:[eax+eax*2]
        lea eax, ss:[ebp+edx*8+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x14], cl
        mov byte ptr ds : [eax+0x15], cl
        mov al, 1
        pop ebx
        ret 8
        public_6eb72f6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        fstp st(0)
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb7280)
    }
}

#undef public_6eb7297
#undef public_6eb72a7
#undef public_6eb72b8
#undef public_6eb72cc
#undef public_6eb72f6
