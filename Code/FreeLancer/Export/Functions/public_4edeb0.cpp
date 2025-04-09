#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4edeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4edf47 _public_4edf47
#define public_4edfc7 _public_4edfc7
#define public_4edfe6 _public_4edfe6
#define public_4ee03c _public_4ee03c
#define public_4ee0bd _public_4ee0bd
#define public_4ee0ec _public_4ee0ec

PROC_DECLARE(0x4edeb0, internal_4edeb0, public_4edeb0);
extern "C" NAKED register_t __cdecl internal_4edeb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x20
        push ebx
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x30]
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ds : [public_5c6368]
        mov dx, word ptr ds : [ecx]
        push esi
        push edi
        mov word ptr ds : [eax], dx
        call public_54baf0
        test eax, eax
        je public_4ee0ec
        add eax, 0xC
        test eax, eax
        je public_4ee0ec
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_4ee0ec
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4ee0ec
        mov edx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [edx]
        test esi, esi
        je public_4ee0ec
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_4ee0ec
        mov ecx, dword ptr ds : [public_612434]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x368]
        xor bl, bl
        test ecx, ecx
        je public_4edf47
        call dword ptr ds : [public_5c64e4]
        fstp dword ptr ss : [esp+0x10]
        public_4edf47 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_612434]
        fnstsw ax
        test ah, 5
        jp public_4edfc7
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x64]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x2C]
        sub esp, 0xC
        fsub dword ptr ds : [edi+0x34]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [edi+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [edi+0x2C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fsub dword ptr ss : [esp+0x14]
        fabs 
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_4edfc7
        mov bl, 1
        jmp public_4ee03c
        public_4edfc7 : nop
        mov eax, dword ptr ds : [esi+0xE0]
        test eax, 0x20004000
        jne public_4ee03c
        test al, 7
        je public_4edfe6
        mov ecx, dword ptr ds : [esi+0xB0]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx], ecx
        jmp public_4ee03c
        public_4edfe6 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x64]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [edi+0x2C]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [edi+0x30]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [edi+0x34]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdiv st, st(1)
        fcomp dword ptr ds : [public_5d95ac]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_4ee03c
        mov edx, dword ptr ds : [esi+0xB0]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax], edx
        public_4ee03c : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        je public_4ee0ec
        mov eax, dword ptr ds : [esi+0x4C]
        mov edx, eax
        and edx, 0x103
        cmp edx, 0x103
        jne public_4ee0ec
        test bl, bl
        jne public_4ee0ec
        and eax, 0x303
        cmp eax, 0x303
        jne public_4ee0bd
        mov edi, dword ptr ds : [public_5c64e0]
        mov ecx, esi
        call edi
        mov ecx, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_4ee0bd
        mov ecx, esi
        call edi
        mov eax, dword ptr ds : [eax]
        push 2
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4ee0bd
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [public_5c6368]
        mov ax, word ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov word ptr ds : [ecx], ax
        public_4ee0bd : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0xF4]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov word ptr ds : [ecx], ax
        mov edx, dword ptr ds : [public_5c65ac]
        cmp ax, word ptr ds : [edx]
        jne public_4ee0ec
        mov eax, dword ptr ds : [public_5c6368]
        mov dx, word ptr ds : [eax]
        mov word ptr ds : [ecx], dx
        public_4ee0ec : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x4edeb0)
    }
}

#undef public_4edf47
#undef public_4edfc7
#undef public_4edfe6
#undef public_4ee03c
#undef public_4ee0bd
#undef public_4ee0ec
