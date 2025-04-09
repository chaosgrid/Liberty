#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421050);
CLANG_FORWARD_PROC_SYMBOL(public_421070);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_59f360);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_59f39e _public_59f39e
#define public_59f3d8 _public_59f3d8
#define public_59f3fd _public_59f3fd
#define public_59f3ff _public_59f3ff
#define public_59f420 _public_59f420
#define public_59f439 _public_59f439
#define public_59f43f _public_59f43f
#define public_59f481 _public_59f481
#define public_59f4e6 _public_59f4e6
#define public_59f4f6 _public_59f4f6
#define public_59f4fb _public_59f4fb
#define public_59f501 _public_59f501

PROC_DECLARE(0x59f360, internal_59f360, public_59f360);
extern "C" NAKED register_t __cdecl internal_59f360()
{
    __asm
    {
        sub esp, 0x60
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_42d680
        fld dword ptr ss : [ebp+0xE4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_59f3fd
        mov al, byte ptr ss : [ebp+0xDC]
        fmul dword ptr ss : [ebp+0xE4]
        test al, al
        je public_59f39e
        fadd dword ptr ss : [ebp+0xE0]
        fstp dword ptr ss : [ebp+0xE0]
        jmp public_59f3ff
        public_59f39e : nop
        fld dword ptr ss : [ebp+0xE0]
        fcomp dword ptr ds : [public_5da41c]
        fnstsw ax
        fadd st(0), st
        test ah, 0x41
        jne public_59f3d8
        fadd dword ptr ss : [ebp+0xE0]
        fst dword ptr ss : [ebp+0xE0]
        fcomp dword ptr ds : [public_5e1734]
        fnstsw ax
        test ah, 0x41
        jne public_59f3ff
        mov dword ptr ss : [ebp+0xE0], 0
        jmp public_59f3ff
        public_59f3d8 : nop
        fsubr dword ptr ss : [ebp+0xE0]
        fst dword ptr ss : [ebp+0xE0]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_59f3ff
        mov dword ptr ss : [ebp+0xE0], 0
        jmp public_59f3ff
        public_59f3fd : nop
        fstp st(0)
        public_59f3ff : nop
        fld dword ptr ss : [ebp+0xE0]
        fcomp dword ptr ds : [public_5ca23c]
        fld dword ptr ss : [ebp+0xE0]
        fnstsw ax
        test ah, 1
        jne public_59f420
        fsub dword ptr ds : [public_5ca23c]
        jmp public_59f439
        public_59f420 : nop
        fcomp dword ptr ds : [public_5e1730]
        fnstsw ax
        test ah, 0x41
        jp public_59f43f
        fld dword ptr ss : [ebp+0xE0]
        fadd dword ptr ds : [public_5ca23c]
        public_59f439 : nop
        fstp dword ptr ss : [ebp+0xE0]
        public_59f43f : nop
        fld dword ptr ss : [ebp+0xE0]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [public_5c63fc]
        mov esi, eax
        mov eax, dword ptr ds : [public_67dd10]
        add esp, 8
        test eax, eax
        jne public_59f481
        call public_5b73e0
        mov dword ptr ds : [public_67dd10], eax
        public_59f481 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ss:[ebp+0xAC]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        lea edx, ss:[ebp+0xD0]
        mov eax, dword ptr ds : [edx]
        mov ecx, 9
        lea esi, ss:[esp+0x18]
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ecx
        lea eax, ss:[ebp+0x3C]
        mov edi, eax
        mov dword ptr ss : [esp+0x68], edx
        mov ecx, 0xC
        lea esi, ss:[esp+0x3C]
        rep movsd
        lea esi, ss:[ebp+0x7C]
        push eax
        mov ecx, esi
        call public_421050
        mov ecx, esi
        call public_421070
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        je public_59f501
        public_59f4e6 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov esi, dword ptr ds : [ecx+8]
        je public_59f4f6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_59f4fb
        public_59f4f6 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_59f4fb : nop
        test esi, esi
        mov ecx, esi
        jne public_59f4e6
        public_59f501 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x59f360)
    }
}

#undef public_59f39e
#undef public_59f3d8
#undef public_59f3fd
#undef public_59f3ff
#undef public_59f420
#undef public_59f439
#undef public_59f43f
#undef public_59f481
#undef public_59f4e6
#undef public_59f4f6
#undef public_59f4fb
#undef public_59f501
