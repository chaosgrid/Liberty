#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62b4c10 _public_62b4c10
#define public_62b4c5d _public_62b4c5d
#define public_62b4c79 _public_62b4c79
#define public_62b4c7b _public_62b4c7b
#define public_62b4ce7 _public_62b4ce7
#define public_62b4cf8 _public_62b4cf8
#define public_62b4d03 _public_62b4d03

PROC_DECLARE(0x62b4bf0, internal_62b4bf0, public_62b4bf0);
extern "C" NAKED register_t __cdecl internal_62b4bf0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x1D4]
        cmp esi, dword ptr ds : [edi+0x1D8]
        lea ebx, ds:[edi+8]
        je public_62b4cf8
        lea ecx, ds:[ecx]
        public_62b4c10 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b4ce7
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b4ce7
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xAC]
        mov eax, dword ptr ds : [public_63fc460]
        test eax, eax
        jne public_62b4c5d
        call public_6391cf0
        mov dword ptr ds : [public_63fc460], eax
        public_62b4c5d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push ebx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b4c79
        lea ecx, ds:[eax-8]
        jmp public_62b4c7b
        public_62b4c79 : nop
        xor ecx, ecx
        public_62b4c7b : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x1C]
        mov edx, 0x5F3759DF
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x24]
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
        fst dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0xC], edx
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_62b4d03
        public_62b4ce7 : nop
        mov eax, dword ptr ds : [edi+0x1D8]
        add esi, 8
        cmp esi, eax
        jne public_62b4c10
        public_62b4cf8 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 4
        public_62b4d03 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x62b4bf0)
    }
}

#undef public_62b4c10
#undef public_62b4c5d
#undef public_62b4c79
#undef public_62b4c7b
#undef public_62b4ce7
#undef public_62b4cf8
#undef public_62b4d03
