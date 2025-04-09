#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e27e0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4e281c _public_4e281c
#define public_4e281e _public_4e281e
#define public_4e284c _public_4e284c
#define public_4e284e _public_4e284e
#define public_4e28c5 _public_4e28c5
#define public_4e28d7 _public_4e28d7
#define public_4e2908 _public_4e2908
#define public_4e2946 _public_4e2946
#define public_4e295a _public_4e295a

PROC_DECLARE(0x4e27e0, internal_4e27e0, public_4e27e0);
extern "C" NAKED register_t __cdecl internal_4e27e0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x398]
        test eax, eax
        push esi
        push edi
        je public_4e281c
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e281c
        add eax, 0xC
        test eax, eax
        je public_4e281c
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e281c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4e281c
        mov edi, eax
        jmp public_4e281e
        public_4e281c : nop
        xor edi, edi
        public_4e281e : nop
        mov dword ptr ss : [esp+0xC], 0x497423F0
        call public_54baf0
        test edi, edi
        mov esi, eax
        je public_4e28c5
        test esi, esi
        je public_4e28c5
        mov eax, dword ptr ds : [ebx+0x398]
        test eax, eax
        je public_4e284c
        lea ecx, ds:[eax-8]
        jmp public_4e284e
        public_4e284c : nop
        xor ecx, ecx
        public_4e284e : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], edx
        fsub dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x24]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5d8d08]
        fnstsw ax
        test ah, 0x41
        jne public_4e2908
        public_4e28c5 : nop
        mov al, byte ptr ds : [public_674b00]
        test al, al
        jne public_4e28d7
        mov eax, dword ptr ds : [public_6724b4]
        test eax, eax
        je public_4e2908
        public_4e28d7 : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x158]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        call dword ptr ds : [edx+0x140]
        mov byte ptr ds : [public_674b00], 0
        public_4e2908 : nop
        mov ecx, dword ptr ds : [ebx+0x510]
        xor dl, dl
        test ecx, ecx
        je public_4e295a
        mov eax, dword ptr ds : [public_6724b4]
        test eax, eax
        jne public_4e2946
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5d8d08]
        fnstsw ax
        test ah, 0x41
        jp public_4e2946
        test edi, edi
        je public_4e2946
        mov eax, dword ptr ds : [edi+0xB4]
        test eax, eax
        je public_4e2946
        cmp eax, dword ptr ds : [public_673344]
        je public_4e2946
        mov dl, 1
        public_4e2946 : nop
        mov eax, dword ptr ds : [ecx]
        xor ebx, ebx
        test dl, dl
        sete bl
        push 0
        push ebx
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4e295a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4e27e0)
    }
}

#undef public_4e281c
#undef public_4e281e
#undef public_4e284c
#undef public_4e284e
#undef public_4e28c5
#undef public_4e28d7
#undef public_4e2908
#undef public_4e2946
#undef public_4e295a
