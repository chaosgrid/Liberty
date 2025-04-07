#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285770);
CLANG_FORWARD_PROC_SYMBOL(public_6288970);
CLANG_FORWARD_PROC_SYMBOL(public_6289370);

#define public_62b7847 _public_62b7847
#define public_62b786c _public_62b786c
#define public_62b78f7 _public_62b78f7
#define public_62b7905 _public_62b7905
#define public_62b7915 _public_62b7915

PROC_DECLARE(0x62b7780, internal_62b7780, public_62b7780);
extern "C" NAKED register_t __cdecl internal_62b7780()
{
    __asm
    {
        sub esp, 0x138
        mov edx, dword ptr ds : [public_63fc0ec]
        mov eax, dword ptr ds : [public_63eb360]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_63fc0e8]
        push edi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x14], ecx
        push 0x18
        lea ecx, ss:[esp+0x2E]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [esi+0xB0]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_63fc0f0]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], 2
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], 1
        mov byte ptr ss : [esp+0x3E], bl
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov byte ptr ss : [esp+0x36], bl
        call dword ptr ds : [public_639927c]
        mov edi, dword ptr ss : [esp+0x158]
        fld dword ptr ds : [edi+8]
        add esp, 0xC
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62b7847
        mov byte ptr ss : [esp+0x28], bl
        mov dword ptr ss : [esp+0x10], 0x5368D4A5
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], ebx
        jmp public_62b786c
        public_62b7847 : nop
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], 0x49742400
        mov dword ptr ss : [esp+0x14], 0x49742400
        mov dword ptr ss : [esp+0x18], 0x49742400
        mov dword ptr ss : [esp+0x1C], 0x49742400
        public_62b786c : nop
        mov eax, dword ptr ds : [esi+0x88]
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [esi+0xAC]
        mov dword ptr ss : [esp+0x24], 1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x88]
        mov dword ptr ss : [esp+0x20], eax
        mov edx, dword ptr ds : [ecx+0xC]
        lea eax, ss:[esp+0x44]
        push eax
        push ebx
        push ebx
        push ebx
        push edx
        call dword ptr ds : [public_6399348]
        lea eax, ss:[esp+0x58]
/*FIXUP push offset public_639e848 @0x62b78b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e848
        push eax
        call dword ptr ds : [public_63991e4]
        add esp, 0x1C
        test eax, eax
        jne public_62b78f7
        mov ecx, dword ptr ds : [esi+0x88]
        fld dword ptr ds : [ecx+0x98]
        fst dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62b7905
        mov eax, dword ptr ss : [esp+0x40]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        push esi
        call public_6289370
        add esp, 0xC
        jmp public_62b7905
        public_62b78f7 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        call public_6288970
        add esp, 8
        public_62b7905 : nop
        cmp byte ptr ss : [esp+0x28], bl
        jne public_62b7915
        push edi
        push esi
        call public_6285770
        add esp, 8
        public_62b7915 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x138
        ret 8
        UNREACHABLE_TRAP(0x62b7780)
    }
}

#undef public_62b7847
#undef public_62b786c
#undef public_62b78f7
#undef public_62b7905
#undef public_62b7915
