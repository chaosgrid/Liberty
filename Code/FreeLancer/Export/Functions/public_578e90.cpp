#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578f70);

#define public_578eee _public_578eee
#define public_578f38 _public_578f38
#define public_578f3e _public_578f3e

PROC_DECLARE(0x578e90, internal_578e90, public_578e90);
extern "C" NAKED register_t __cdecl internal_578e90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x23]
        test al, al
        jne public_578f3e
        call dword ptr ds : [public_5c6c08]
        mov cl, byte ptr ds : [public_67c3e0]
        test cl, cl
        jne public_578eee
        sub eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+8], eax
        lea eax, ss:[esp+8]
        sbb edx, ecx
        push eax
        mov dword ptr ss : [esp+0x10], edx
        call dword ptr ds : [public_5c6c0c]
        fcomp qword ptr ds : [public_5ca228]
        add esp, 4
        fnstsw ax
        test ah, 0x41
        jne public_578f3e
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_578eee : nop
        sub eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+8], eax
        lea eax, ss:[esp+8]
        sbb edx, ecx
        push eax
        mov dword ptr ss : [esp+0x10], edx
        call dword ptr ds : [public_5c6c0c]
        fst dword ptr ss : [esp+0xC]
        fabs 
        add esp, 4
        fld dword ptr ds : [public_615108]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_578f38
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, esi
        call public_578f70
        inc dword ptr ds : [public_67c3f4]
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_578f38 : nop
        inc dword ptr ds : [public_67c3f8]
        public_578f3e : nop
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x578e90)
    }
}

#undef public_578eee
#undef public_578f38
#undef public_578f3e
