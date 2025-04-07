#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44a3a0);
CLANG_FORWARD_PROC_SYMBOL(public_557630);
CLANG_FORWARD_PROC_SYMBOL(public_557810);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9bbb);

#define public_44a3e6 _public_44a3e6
#define public_44a3fb _public_44a3fb
#define public_44a406 _public_44a406
#define public_44a45e _public_44a45e
#define public_44a472 _public_44a472
#define public_44a4db _public_44a4db
#define public_44a4dd _public_44a4dd
#define public_44a525 _public_44a525
#define public_44a52b _public_44a52b

PROC_DECLARE(0x44a3a0, internal_44a3a0, public_44a3a0);
extern "C" NAKED register_t __cdecl internal_44a3a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9bbb @0x44a3a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9bbb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax+0x1A8]
        add eax, 0x1A4
        test ecx, ecx
        push edi
        je public_44a52b
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jle public_44a52b
        xor ebp, ebp
        public_44a3e6 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [ecx+0x1A8]
        test edx, edx
        mov dword ptr ss : [esp+0x1C], ebp
        jne public_44a3fb
        xor eax, eax
        jmp public_44a406
        public_44a3fb : nop
        mov eax, dword ptr ds : [ecx+0x1AC]
        sub eax, edx
        sar eax, 2
        public_44a406 : nop
        cmp ebp, eax
        jge public_44a52b
        mov ecx, dword ptr ds : [ecx+0x1A8]
        mov edi, dword ptr ds : [ecx+ebp*4]
        mov ecx, dword ptr ds : [edi+0xE28]
        test ecx, ecx
        jle public_44a525
        lea eax, ds:[ecx-1]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], 0
        fmul dword ptr ds : [edi+0x10]
        fadd dword ptr ds : [edi+0x18]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_44a45e
        fld dword ptr ds : [edi+0x10]
        fdiv dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        public_44a45e : nop
        xor ebx, ebx
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], ebx
        jle public_44a525
        lea ebp, ds:[edi+0xE2C]
        public_44a472 : nop
        push 0x7C
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x38], 0
        je public_44a4db
        mov ecx, dword ptr ds : [edi+0xC]
        fld dword ptr ds : [edi+0xC]
        fmul qword ptr ds : [public_5cbf58]
        mov edx, dword ptr ds : [edi+0x14]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        fild dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x34]
        fmul dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        fchs 
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        push edi
        mov ecx, eax
        call public_557630
        jmp public_44a4dd
        public_44a4db : nop
        xor eax, eax
        public_44a4dd : nop
        mov ecx, dword ptr ds : [esi+0x101C]
        mov dword ptr ds : [esi+ecx*4+0x81C], eax
        mov edx, dword ptr ds : [esi+0x101C]
        mov ecx, dword ptr ds : [esi+edx*4+0x81C]
        push ebp
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call public_557810
        inc dword ptr ds : [esi+0x101C]
        mov eax, dword ptr ds : [edi+0xE28]
        inc ebx
        add ebp, 0x30
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], ebx
        jl public_44a472
        mov ebp, dword ptr ss : [esp+0x1C]
        public_44a525 : nop
        inc ebp
        jmp public_44a3e6
        public_44a52b : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x44a3a0)
    }
}

#undef public_44a3e6
#undef public_44a3fb
#undef public_44a406
#undef public_44a45e
#undef public_44a472
#undef public_44a4db
#undef public_44a4dd
#undef public_44a525
#undef public_44a52b
