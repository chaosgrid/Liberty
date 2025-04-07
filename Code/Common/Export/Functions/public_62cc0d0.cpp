#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6200);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);

#define public_62cc120 _public_62cc120
#define public_62cc128 _public_62cc128
#define public_62cc192 _public_62cc192
#define public_62cc194 _public_62cc194
#define public_62cc1b3 _public_62cc1b3
#define public_62cc1b5 _public_62cc1b5
#define public_62cc1f1 _public_62cc1f1
#define public_62cc242 _public_62cc242
#define public_62cc26c _public_62cc26c
#define public_62cc293 _public_62cc293
#define public_62cc299 _public_62cc299
#define public_62cc2d2 _public_62cc2d2
#define public_62cc2d4 _public_62cc2d4
#define public_62cc2fe _public_62cc2fe
#define public_62cc32c _public_62cc32c
#define public_62cc398 _public_62cc398
#define public_62cc39d _public_62cc39d

PROC_DECLARE(0x62cc0d0, internal_62cc0d0, public_62cc0d0);
extern "C" NAKED register_t __cdecl internal_62cc0d0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x14]
        xor ebx, ebx
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], ebx
        mov eax, dword ptr ds : [ecx]
        push edx
        mov dword ptr ss : [esp+0x2C], edi
        call dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        cmp eax, ebx
        je public_62cc120
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62cc120
        mov edx, dword ptr ds : [eax+0x1B4]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edx
        jmp public_62cc128
        public_62cc120 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        public_62cc128 : nop
        cmp dword ptr ss : [esp+0x14], ebx
        je public_62cc398
        mov ecx, dword ptr ds : [edi+0x14]
        lea edx, ss:[esp+0x13]
        mov byte ptr ss : [esp+0x13], bl
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x134]
        cmp byte ptr ss : [esp+0x13], bl
        jne public_62cc398
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        mov ebp, dword ptr ds : [edi+0x14]
        mov esi, eax
        je public_62cc398
        call public_6303220
        test al, al
        jne public_62cc1f1
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x150]
        cmp eax, ebx
        je public_62cc192
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62cc192
        mov edi, eax
        jmp public_62cc194
        public_62cc192 : nop
        xor edi, edi
        public_62cc194 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_62cc1b3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_62cc1b5
        public_62cc1b3 : nop
        xor eax, eax
        public_62cc1b5 : nop
        cmp edi, ebx
        je public_62cc1f1
        cmp eax, ebx
        je public_62cc1f1
        cmp byte ptr ds : [edi+0x2BD], bl
        je public_62cc1f1
        cmp byte ptr ds : [eax+0x2BD], bl
        je public_62cc1f1
        mov ecx, dword ptr ds : [edi+0x1B4]
        cmp ecx, ebx
        je public_62cc398
        mov eax, dword ptr ds : [eax+0x1B4]
        cmp eax, ebx
        je public_62cc398
        cmp ecx, eax
        jne public_62cc398
        public_62cc1f1 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x88]
        test eax, eax
        jne public_62cc398
        mov eax, dword ptr ss : [esp+0x24]
        test eax, 0x7F0000
        je public_62cc398
        test eax, 0x200000
        jne public_62cc398
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x148]
        cmp eax, 0x11
        je public_62cc398
        cmp eax, 8
        je public_62cc398
        mov dword ptr ss : [esp+0x18], ebx
        public_62cc242 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0xB8]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        jne public_62cc26c
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xB0]
        mov eax, dword ptr ss : [esp+0x18]
        public_62cc26c : nop
        cmp eax, esi
        je public_62cc299
        cmp eax, ebx
        je public_62cc293
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, esi
        je public_62cc398
        mov eax, dword ptr ss : [esp+0x18]
        public_62cc293 : nop
        cmp eax, ebx
        mov esi, eax
        jne public_62cc242
        public_62cc299 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_62e6200
        add esp, 4
        test eax, 0x7F0000
        je public_62cc398
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_62cc2d2
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_62cc2d4
        public_62cc2d2 : nop
        xor eax, eax
        public_62cc2d4 : nop
        cmp dword ptr ss : [esp+0x1C], ebx
        je public_62cc2fe
        cmp eax, ebx
        je public_62cc2fe
        cmp byte ptr ds : [eax+0x2BD], bl
        je public_62cc2fe
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, ebx
        je public_62cc398
        cmp dword ptr ds : [eax+0x1B4], ecx
        jne public_62cc398
        public_62cc2fe : nop
        mov edi, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [edi+0x24]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        cmp al, bl
        jne public_62cc32c
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62cc32c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi+0xC]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x14]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ds : [public_639fbd8]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jp public_62cc398
        mov edx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x68]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_639f540]
        fnstsw ax
        test ah, 0x41
        mov eax, 1
        je public_62cc39d
        public_62cc398 : nop
        mov eax, 2
        public_62cc39d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x62cc0d0)
    }
}

#undef public_62cc120
#undef public_62cc128
#undef public_62cc192
#undef public_62cc194
#undef public_62cc1b3
#undef public_62cc1b5
#undef public_62cc1f1
#undef public_62cc242
#undef public_62cc26c
#undef public_62cc293
#undef public_62cc299
#undef public_62cc2d2
#undef public_62cc2d4
#undef public_62cc2fe
#undef public_62cc32c
#undef public_62cc398
#undef public_62cc39d
