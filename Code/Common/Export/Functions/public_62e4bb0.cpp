#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e4660);
CLANG_FORWARD_PROC_SYMBOL(public_62e4bb0);

#define public_62e4bf1 _public_62e4bf1
#define public_62e4c05 _public_62e4c05
#define public_62e4c10 _public_62e4c10
#define public_62e4c3f _public_62e4c3f
#define public_62e4cbf _public_62e4cbf
#define public_62e4ce5 _public_62e4ce5
#define public_62e4cef _public_62e4cef

PROC_DECLARE(0x62e4bb0, internal_62e4bb0, public_62e4bb0);
extern "C" NAKED register_t __cdecl internal_62e4bb0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [eax+0x88]
        mov esi, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62e4bf1
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+8]
        push eax
        call dword ptr ds : [edx+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62e4bf1 : nop
        test dword ptr ds : [esi+8], 0x30000
        mov eax, dword ptr ss : [esp+8]
        je public_62e4c05
        test eax, 0x30000
        jne public_62e4c10
        public_62e4c05 : nop
        test eax, 0x207
        je public_62e4ce5
        public_62e4c10 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x2C]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62e4c3f
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e4c3f : nop
        fld dword ptr ds : [esi+0xC]
        lea eax, ds:[esi+0xC]
        fsub dword ptr ss : [esp+0xC]
        mov edx, 0x5F3759DF
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x20], edx
        fld dword ptr ss : [esp+0x20]
        mov cl, byte ptr ds : [esi+0x7E]
        test cl, cl
        fmul dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        jne public_62e4cbf
        mov ecx, dword ptr ds : [esi+0x84]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e4cbf : nop
        fld dword ptr ds : [esi+0x18]
        fadd dword ptr ss : [esp+0x1C]
        fsubr dword ptr ss : [esp+0x20]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e4cef
        pop edi
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        pop esi
        add esp, 0x10
        ret 
        public_62e4ce5 : nop
        push edi
        push esi
        call public_62e4660
        add esp, 8
        public_62e4cef : nop
        pop edi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62e4bb0)
    }
}

#undef public_62e4bf1
#undef public_62e4c05
#undef public_62e4c10
#undef public_62e4c3f
#undef public_62e4cbf
#undef public_62e4ce5
#undef public_62e4cef
