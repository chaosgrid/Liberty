#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f140);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_51b500);
CLANG_FORWARD_PROC_SYMBOL(public_549bc0);
CLANG_FORWARD_PROC_SYMBOL(public_5552e0);

#define public_549bea _public_549bea
#define public_549bf6 _public_549bf6
#define public_549c1b _public_549c1b
#define public_549c51 _public_549c51
#define public_549c56 _public_549c56
#define public_549c98 _public_549c98
#define public_549c9a _public_549c9a
#define public_549cbe _public_549cbe
#define public_549ce0 _public_549ce0
#define public_549d28 _public_549d28
#define public_549d44 _public_549d44
#define public_549da8 _public_549da8
#define public_549e07 _public_549e07
#define public_549e18 _public_549e18

PROC_DECLARE(0x549bc0, internal_549bc0, public_549bc0);
extern "C" NAKED register_t __cdecl internal_549bc0()
{
    __asm
    {
        sub esp, 0xB8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xBA0]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC4]
        cmp eax, ebp
        jne public_549bea
        mov cl, byte ptr ss : [esp+0xC8]
        test cl, cl
        je public_549e18
        public_549bea : nop
        test eax, eax
        je public_549bf6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        jmp public_549c1b
        public_549bf6 : nop
        lea ecx, ss:[esp+0x20]
        call public_4215b0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        lea eax, ss:[esp+0x20]
        public_549c1b : nop
        push esi
        push edi
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x68]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0xBA0]
        xor esi, esi
        cmp ecx, esi
        mov byte ptr ss : [esp+0x13], 0
        je public_549c51
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x68]
        push esi
        mov dword ptr ds : [ebx+0xBA0], esi
        call public_40f140
        add esp, 4
        jmp public_549c56
        public_549c51 : nop
        mov byte ptr ss : [esp+0x13], 1
        public_549c56 : nop
        cmp ebp, esi
        je public_549d28
        mov ecx, dword ptr ds : [public_67eca0]
        lea eax, ss:[esp+0x58]
        push eax
        push ecx
        call dword ptr ds : [public_5c72d8]
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x64]
        dec edx
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_679744]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], edx
        je public_549c98
        add eax, 0xFFFFFFF8
        jmp public_549c9a
        public_549c98 : nop
        xor eax, eax
        public_549c9a : nop
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x58]
        cmp dword ptr ss : [esp+0x20], esi
        jle public_549cbe
        cmp dword ptr ss : [esp+0x24], esi
        jle public_549cbe
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x64]
        jmp public_549ce0
        public_549cbe : nop
        mov edx, dword ptr ds : [public_610850]
        mov eax, dword ptr ds : [public_610854]
        dec edx
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x64]
        public_549ce0 : nop
        mov edx, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebp
        call dword ptr ds : [edx+0xC]
        push eax
        call public_5552e0
        mov al, byte ptr ss : [esp+0x1C]
        mov cl, byte ptr ss : [esp+0x1D]
        mov dl, byte ptr ss : [esp+0x1E]
        mov byte ptr ss : [ebp+0xE9], al
        mov al, byte ptr ss : [ebp+0xE8]
        mov byte ptr ss : [ebp+0xEA], cl
        or al, 3
        add esp, 8
        mov ecx, ebp
        mov byte ptr ss : [ebp+0xEB], dl
        mov byte ptr ss : [ebp+0xE8], al
        call public_51b500
        public_549d28 : nop
        push ebp
        mov dword ptr ds : [ebx+0xBA0], ebp
        call public_40f140
        add esp, 4
        cmp ebp, esi
        je public_549d44
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+0x10]
        jmp public_549da8
        public_549d44 : nop
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        lea eax, ss:[esp+0x28]
        public_549da8 : nop
        fld dword ptr ss : [esp+0x70]
        mov esi, eax
        fld dword ptr ss : [esp+0x7C]
        mov ecx, 0xC
        fld dword ptr ss : [esp+0x88]
        lea edi, ss:[esp+0x98]
        rep movsd
        fld dword ptr ss : [esp+0xA0]
        fld dword ptr ss : [esp+0xAC]
        fld dword ptr ss : [esp+0xB8]
        fmul st, st(3)
        fxch 
        fmul st, st(4)
        faddp 
        fxch 
        fmul st, st(4)
        pop edi
        faddp 
        fcomp dword ptr ds : [public_61402c]
        pop esi
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jnp public_549e07
        mov al, byte ptr ss : [esp+0xB]
        test al, al
        je public_549e18
        public_549e07 : nop
        mov eax, dword ptr ds : [ebx+0xBA0]
        test eax, eax
        je public_549e18
        mov byte ptr ds : [eax+0xBC], 1
        public_549e18 : nop
        pop ebp
        pop ebx
        add esp, 0xB8
        ret 8
        UNREACHABLE_TRAP(0x549bc0)
    }
}

#undef public_549bea
#undef public_549bf6
#undef public_549c1b
#undef public_549c51
#undef public_549c56
#undef public_549c98
#undef public_549c9a
#undef public_549cbe
#undef public_549ce0
#undef public_549d28
#undef public_549d44
#undef public_549da8
#undef public_549e07
#undef public_549e18
