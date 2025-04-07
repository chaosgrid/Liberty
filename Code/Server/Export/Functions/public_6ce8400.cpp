#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b260);

#define public_6ce8422 _public_6ce8422
#define public_6ce8424 _public_6ce8424
#define public_6ce8495 _public_6ce8495
#define public_6ce8507 _public_6ce8507

PROC_DECLARE(0x6ce8400, internal_6ce8400, public_6ce8400);
extern "C" NAKED register_t __cdecl internal_6ce8400()
{
    __asm
    {
        sub esp, 0x20
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebp, ebp
        cmp eax, ebp
        push edi
        je public_6ce8422
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce8424
        public_6ce8422 : nop
        xor eax, eax
        public_6ce8424 : nop
        mov eax, dword ptr ds : [eax+0x88]
        lea edi, ds:[eax+0x24]
        mov ecx, edi
        call dword ptr ds : [public_6d641a4]
        test al, al
        jne public_6ce8507
        push edi
        call dword ptr ds : [public_6d641a0]
        mov edi, eax
        add esp, 4
        cmp edi, ebp
        je public_6ce8507
        fld dword ptr ds : [edi+4]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6ce8507
        fld dword ptr ds : [edi+8]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6ce8495
        fld dword ptr ds : [edi+0xC]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6ce8495
        fld dword ptr ds : [edi+0x10]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6ce8507
        public_6ce8495 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], ebp
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], 4
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], 4
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        push ecx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [public_6d64234]
        mov ecx, dword ptr ds : [esi+0x28]
        add esp, 4
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x2C], eax
        call public_6d0b260
        public_6ce8507 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6ce8400)
    }
}

#undef public_6ce8422
#undef public_6ce8424
#undef public_6ce8495
#undef public_6ce8507
