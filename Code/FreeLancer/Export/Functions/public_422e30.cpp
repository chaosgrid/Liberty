#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422c70);
CLANG_FORWARD_PROC_SYMBOL(public_422e30);

#define public_422e60 _public_422e60
#define public_422e79 _public_422e79
#define public_422e7d _public_422e7d
#define public_422e98 _public_422e98
#define public_422f56 _public_422f56
#define public_422f9b _public_422f9b
#define public_422f9d _public_422f9d

PROC_DECLARE(0x422e30, internal_422e30, public_422e30);
extern "C" NAKED register_t __cdecl internal_422e30()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        push esi
        push edi
        push 0xFFFFFFFF
        push 1
        push ebp
        mov edi, ecx
        mov ecx, dword ptr ds : [eax]
        xor bl, bl
        push eax
        mov byte ptr ss : [esp+0x23], bl
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_422e98
        nop 
        public_422e60 : nop
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        push esi
        mov ecx, edi
        call public_422e30
        test al, al
        je public_422e79
        mov bl, 1
        mov byte ptr ss : [esp+0x13], bl
        jmp public_422e7d
        public_422e79 : nop
        mov bl, byte ptr ss : [esp+0x13]
        public_422e7d : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_422e60
        public_422e98 : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x40]
        push edx
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov ecx, dword ptr ss : [esp+0x3C]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ds:[edi+0xC]
        push eax
        push edi
        call public_422c70
        fcom qword ptr ds : [public_5c75e8]
        add esp, 0x1C
        fnstsw ax
        test ah, 0x41
        jne public_422f9b
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x28]
        fxch st(3)
        fchs 
        fstp dword ptr ss : [esp+0x3C]
        fxch st(2)
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fxch st(3)
        fstp st(1)
        fstp st(0)
        fstp st(0)
        fcomp dword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 0x41
        jp public_422f9d
        mov ecx, dword ptr ds : [edi+0x54]
        test ecx, ecx
        je public_422f56
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [edi+0x58]
        fnstsw ax
        test ah, 5
        jp public_422f9d
        public_422f56 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edi+0x58], edx
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edi+0x5C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+0x68]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x24]
        inc ecx
        mov dword ptr ds : [edi+0x54], ecx
        pop edi
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x24]
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], edx
        mov al, 1
        pop ebx
        add esp, 0x28
        ret 8
        public_422f9b : nop
        fstp st(0)
        public_422f9d : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x422e30)
    }
}

#undef public_422e60
#undef public_422e79
#undef public_422e7d
#undef public_422e98
#undef public_422f56
#undef public_422f9b
#undef public_422f9d
