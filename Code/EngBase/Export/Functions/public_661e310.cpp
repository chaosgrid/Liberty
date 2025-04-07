#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661e3d0);

#define public_661e345 _public_661e345
#define public_661e36c _public_661e36c
#define public_661e378 _public_661e378
#define public_661e3a5 _public_661e3a5
#define public_661e3ad _public_661e3ad
#define public_661e3af _public_661e3af
#define public_661e3bc _public_661e3bc

PROC_DECLARE(0x661e310, internal_661e310, public_661e310);
extern "C" NAKED register_t __cdecl internal_661e310()
{
    __asm
    {
        sub esp, 8
        or eax, 0xFFFFFFFF
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx], 0
        push edi
        cmp dword ptr ds : [esi+0xC], 8
        jne public_661e3bc
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        xor edi, edi
        mov dword ptr ss : [esp+0x28], eax
        test ecx, ecx
        jbe public_661e3bc
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        public_661e345 : nop
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x100
        jne public_661e36c
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], 0
        fild qword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+8]
        jmp public_661e378
        public_661e36c : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+0x10]
        imul eax, edi
        fld dword ptr ds : [eax+ecx]
        public_661e378 : nop
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x44
        jp public_661e3af
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x28]
        cmp eax, ecx
        jae public_661e3a5
        fld dword ptr ss : [esp+0x20]
        push edi
        mov ecx, esi
        fstp dword ptr ss : [ebp+eax*8]
        call public_661e3d0
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp+edx*8+4], eax
        jmp public_661e3ad
        public_661e3a5 : nop
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        public_661e3ad : nop
        inc dword ptr ds : [ebx]
        public_661e3af : nop
        mov eax, dword ptr ds : [esi+4]
        inc edi
        cmp edi, eax
        jb public_661e345
        mov eax, dword ptr ss : [esp+0x2C]
        pop ebp
        public_661e3bc : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x661e310)
    }
}

#undef public_661e345
#undef public_661e36c
#undef public_661e378
#undef public_661e3a5
#undef public_661e3ad
#undef public_661e3af
#undef public_661e3bc
