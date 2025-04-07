#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4176c0);
CLANG_FORWARD_PROC_SYMBOL(public_417730);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_5a2240 _public_5a2240
#define public_5a2250 _public_5a2250
#define public_5a2255 _public_5a2255
#define public_5a225c _public_5a225c
#define public_5a2354 _public_5a2354
#define public_5a2356 _public_5a2356

PROC_DECLARE(0x5a2230, internal_5a2230, public_5a2230);
extern "C" NAKED register_t __cdecl internal_5a2230()
{
    __asm
    {
        sub esp, 0x1C
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_5a225c
        push esi
        mov edi, edi
        public_5a2240 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov esi, dword ptr ds : [ecx+8]
        je public_5a2250
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_5a2255
        public_5a2250 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_5a2255 : nop
        test esi, esi
        mov ecx, esi
        jne public_5a2240
        pop esi
        public_5a225c : nop
        call public_42d680
        fld st(0)
        fadd dword ptr ds : [edi+0x890]
        lea eax, ds:[edi+0x60]
        fstp dword ptr ds : [edi+0x890]
        fadd dword ptr ds : [edi+0x894]
        fstp dword ptr ds : [edi+0x894]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        call public_417730
        mov ecx, dword ptr ds : [edi+0x898]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+0x89C]
        push edx
        push eax
        push ecx
        call public_4176c0
        mov dword ptr ds : [edi+0x7C], 0xFFFFFFFF
        fild dword ptr ds : [public_616840]
        mov dword ptr ss : [esp+0x14], eax
        add esp, 0x10
        fcom dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+8], edx
        fnstsw ax
        test ah, 1
        jne public_5a2354
        fld dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0xC]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_5a2356
        fild dword ptr ds : [public_616844]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        jne public_5a2354
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x10]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_5a2356
        mov ecx, dword ptr ds : [edi+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        fild dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+4], eax
        fsub dword ptr ss : [esp+0x10]
        fidiv dword ptr ss : [esp+4]
        call public_5b7ec0
        test eax, eax
        jl public_5a2356
        cmp eax, dword ptr ds : [edi+0x8A4]
        jge public_5a2356
        mov ecx, dword ptr ds : [edi+0x88C]
        add ecx, eax
        mov dword ptr ds : [edi+0x7C], ecx
        pop edi
        add esp, 0x1C
        ret 
        public_5a2354 : nop
        fstp st(0)
        public_5a2356 : nop
        pop edi
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x5a2230)
    }
}

#undef public_5a2240
#undef public_5a2250
#undef public_5a2255
#undef public_5a225c
#undef public_5a2354
#undef public_5a2356
