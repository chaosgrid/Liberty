#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5960b2 _public_5960b2
#define public_5960d7 _public_5960d7
#define public_596117 _public_596117
#define public_596119 _public_596119
#define public_596129 _public_596129
#define public_59613a _public_59613a

PROC_DECLARE(0x596050, internal_596050, public_596050);
extern "C" NAKED register_t __cdecl internal_596050()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        call public_5a17b0
        lea eax, ss:[esp+0x1C]
        push eax
        call public_59da70
        fld dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], eax
        fdiv dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_67d9fc]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], edx
        add esp, 4
        test eax, eax
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        jne public_5960b2
        call public_5b73e0
        mov dword ptr ds : [public_67d9fc], eax
        public_5960b2 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ds:[esi+0x3DC]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ds : [esi+0x3A4]
        cmp ecx, dword ptr ds : [esi+0x3A8]
        je public_596129
        public_5960d7 : nop
        mov edx, dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 1
        jne public_596117
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [edx+8]
        fnstsw ax
        test ah, 0x41
        jp public_596117
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x41
        jp public_596117
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [edx+0xC]
        fnstsw ax
        test ah, 1
        jne public_596117
        mov eax, 1
        jmp public_596119
        public_596117 : nop
        xor eax, eax
        public_596119 : nop
        mov byte ptr ds : [edx+0x10], al
        mov eax, dword ptr ds : [esi+0x3A8]
        add ecx, 4
        cmp ecx, eax
        jne public_5960d7
        public_596129 : nop
        mov al, byte ptr ds : [esi+0x3D4]
        test al, al
        je public_59613a
        mov byte ptr ds : [esi+0x39C], 1
        public_59613a : nop
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x596050)
    }
}

#undef public_5960b2
#undef public_5960d7
#undef public_596117
#undef public_596119
#undef public_596129
#undef public_59613a
