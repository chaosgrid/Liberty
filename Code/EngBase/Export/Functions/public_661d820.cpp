#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d820);
CLANG_FORWARD_PROC_SYMBOL(public_6628266);

#define public_661d85c _public_661d85c
#define public_661d866 _public_661d866
#define public_661d872 _public_661d872
#define public_661d899 _public_661d899
#define public_661d8a5 _public_661d8a5
#define public_661d8b5 _public_661d8b5
#define public_661d8b7 _public_661d8b7
#define public_661d8c1 _public_661d8c1

PROC_DECLARE(0x661d820, internal_661d820, public_661d820);
extern "C" NAKED register_t __cdecl internal_661d820()
{
    __asm
    {
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_66291e0]
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [ecx+4]
        fnstsw ax
        push edi
        and eax, 0x4100
        jne public_661d866
        fld dword ptr ss : [esp+0x14]
        fdiv dword ptr ds : [ecx+8]
        dec esi
        mov dword ptr ss : [esp+8], esi
        call public_6628266
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        cmp esi, eax
        lea eax, ss:[esp+8]
        jb public_661d85c
        lea eax, ss:[esp+0x14]
        public_661d85c : nop
        mov eax, dword ptr ds : [eax]
        pop edi
        pop esi
        add esp, 8
        ret 4
        public_661d866 : nop
        xor edi, edi
        dec esi
        mov edx, esi
        shr edx, 1
        test esi, esi
        jbe public_661d8c1
        push ebp
        public_661d872 : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x100
        jne public_661d899
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ecx+8]
        jmp public_661d8a5
        public_661d899 : nop
        mov eax, dword ptr ds : [ecx+0x14]
        mov ebp, dword ptr ds : [ecx+0x10]
        imul eax, edx
        fld dword ptr ds : [eax+ebp]
        public_661d8a5 : nop
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jp public_661d8b5
        lea edi, ds:[edx+1]
        jmp public_661d8b7
        public_661d8b5 : nop
        mov esi, edx
        public_661d8b7 : nop
        lea edx, ds:[esi+edi]
        shr edx, 1
        cmp edi, esi
        jb public_661d872
        pop ebp
        public_661d8c1 : nop
        pop edi
        mov eax, edx
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x661d820)
    }
}

#undef public_661d85c
#undef public_661d866
#undef public_661d872
#undef public_661d899
#undef public_661d8a5
#undef public_661d8b5
#undef public_661d8b7
#undef public_661d8c1
