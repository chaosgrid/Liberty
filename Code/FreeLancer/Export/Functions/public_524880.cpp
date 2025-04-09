#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_524880);
CLANG_FORWARD_PROC_SYMBOL(public_54feb0);
CLANG_FORWARD_PROC_SYMBOL(public_550000);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_524919 _public_524919
#define public_52493b _public_52493b
#define public_524973 _public_524973
#define public_524986 _public_524986
#define public_5249a4 _public_5249a4
#define public_5249ac _public_5249ac
#define public_524a00 _public_524a00
#define public_524a12 _public_524a12
#define public_524a21 _public_524a21

PROC_DECLARE(0x524880, internal_524880, public_524880);
extern "C" NAKED register_t __cdecl internal_524880()
{
    __asm
    {
        sub esp, 8
        fld dword ptr ds : [public_5c75dc]
        push ebp
        fsub dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        push edi
        fst dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5db53c]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x230], eax
        mov al, byte ptr ds : [esi+0x2C]
        test al, al
        je public_524a21
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_524a21
        fild dword ptr ds : [esi+0x24]
        fmul dword ptr ss : [esp+0xC]
        call public_5b7ec0
        mov dword ptr ds : [edi+0x48], eax
        mov al, byte ptr ds : [esi+0x198]
        test al, al
        je public_524919
        fild dword ptr ds : [esi+0x24]
        push ecx
        lea edi, ds:[esi+0x19C]
        fmul dword ptr ds : [esi+0x230]
        fstp dword ptr ss : [esp+0x10]
        fild dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c9804]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, edi
        call public_54feb0
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov ecx, edi
        call public_550000
        public_524919 : nop
        mov eax, dword ptr ds : [esi+0xDC]
        test eax, eax
        je public_52493b
        fild dword ptr ds : [esi+0x24]
        fmul dword ptr ds : [esi+0x230]
        fmul dword ptr ds : [public_5c9804]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x14]
        fstp st(0)
        public_52493b : nop
        mov ebp, dword ptr ds : [esi+0x224]
        mov esi, dword ptr ds : [esi+0x228]
        cmp ebp, esi
        mov dword ptr ss : [esp+0xC], esi
        je public_524a21
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x10]
        public_524973 : nop
        mov esi, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_5249ac
        mov eax, dword ptr ds : [esi+0x14]
        xor edi, edi
        test eax, eax
        jle public_5249ac
        public_524986 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+edi*4]
        test ecx, ecx
        je public_5249a4
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x15C]
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+edi*4], 0
        public_5249a4 : nop
        mov eax, dword ptr ds : [esi+0x14]
        inc edi
        cmp edi, eax
        jl public_524986
        public_5249ac : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        call public_5b7e1d
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        fst dword ptr ds : [esi+0xE0]
        fild dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0xE4], edx
        fmul st, st(1)
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        fstp st(0)
        mov dword ptr ds : [esi+0x14], eax
        shl eax, 2
        push eax
        call public_5b7e84
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0xC], eax
        add esp, 8
        xor eax, eax
        test ecx, ecx
        jle public_524a12
        lea ecx, ds:[ecx]
        public_524a00 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+eax*4], 0
        mov ecx, dword ptr ds : [esi+0x14]
        inc eax
        cmp eax, ecx
        jl public_524a00
        public_524a12 : nop
        mov eax, dword ptr ss : [esp+0xC]
        add ebp, 4
        cmp ebp, eax
        jne public_524973
        public_524a21 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x524880)
    }
}

#undef public_524919
#undef public_52493b
#undef public_524973
#undef public_524986
#undef public_5249a4
#undef public_5249ac
#undef public_524a00
#undef public_524a12
#undef public_524a21
