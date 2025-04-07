#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6344cf0);
CLANG_FORWARD_PROC_SYMBOL(public_634b030);
CLANG_FORWARD_PROC_SYMBOL(public_634cf60);
CLANG_FORWARD_PROC_SYMBOL(public_6356280);
CLANG_FORWARD_PROC_SYMBOL(public_6356bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6358680);
CLANG_FORWARD_PROC_SYMBOL(public_6358d60);
CLANG_FORWARD_PROC_SYMBOL(public_6358f40);
CLANG_FORWARD_PROC_SYMBOL(public_6359560);
CLANG_FORWARD_JUMP_SYMBOL(public_6398148);

#define public_63586d0 _public_63586d0
#define public_63586d6 _public_63586d6
#define public_63588d5 _public_63588d5
#define public_63588d7 _public_63588d7
#define public_6358acd _public_6358acd
#define public_6358ae7 _public_6358ae7

PROC_DECLARE(0x6358680, internal_6358680, public_6358680);
extern "C" NAKED register_t __cdecl internal_6358680()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398148 @0x6358682*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398148
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        mov eax, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ds : [eax+0x78]
        mov ecx, dword ptr ss : [esp+0x94]
        mov ecx, dword ptr ds : [ecx+0x98]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax+0x98]
        shl edx, 0x18
        cmp edx, 0x8000000
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jl public_63586d0
        mov eax, dword ptr ss : [ebp+0x15C]
        jmp public_63586d6
        public_63586d0 : nop
        mov eax, dword ptr ds : [ecx+0x15C]
        public_63586d6 : nop
        mov esi, dword ptr ss : [esp+0x9C]
        push 1
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_6356bc0
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, eax
        mov ebx, dword ptr ds : [edi+0x40]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x20], edi
        call public_6356280
        mov ebp, eax
        mov eax, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax+0xF8]
        mov edx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [eax+0xFC]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [ebp+0x1C], ecx
        mov dword ptr ss : [ebp+0x20], eax
        mov esi, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [ecx+0x18]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x44], edx
        call public_6359560
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+0x30]
        mov esi, dword ptr ds : [edx+0x98]
        fld dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [ebx+0x34]
        fld dword ptr ds : [esi+0x94]
        mov edi, dword ptr ds : [eax+0x98]
        fmul dword ptr ds : [esi+0x14]
        fld dword ptr ds : [esi+0x98]
        fmul dword ptr ds : [esi+0x18]
        fld dword ptr ds : [esi+0x9C]
        fmul dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [esi+0xAC]
        fmul dword ptr ds : [esi+0xAC]
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [esi+0xA8]
        faddp 
        fld dword ptr ds : [esi+0xA4]
        fmul dword ptr ds : [esi+0xA4]
        faddp 
        fmul st, st(4)
        fmul dword ptr ds : [public_63a5460]
        fxch 
        fmul dword ptr ds : [esi+0x9C]
        fxch st(2)
        fmul dword ptr ds : [esi+0x98]
        faddp st(2), st
        fxch st(2)
        fmul dword ptr ds : [esi+0x94]
        faddp 
        fmul dword ptr ds : [public_63a5460]
        faddp 
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fld dword ptr ds : [edi+0x20]
        fld dword ptr ds : [edi+0x94]
        fmul dword ptr ds : [edi+0x14]
        fld dword ptr ds : [edi+0x98]
        fmul dword ptr ds : [edi+0x18]
        fld dword ptr ds : [edi+0x9C]
        fmul dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edi+0xAC]
        mov edx, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edi+0xAC]
        push ecx
        fld dword ptr ds : [edi+0xA8]
        push edx
        fmul dword ptr ds : [edi+0xA8]
        lea eax, ss:[esp+0x4C]
        push eax
        mov ecx, ebx
        faddp 
        fld dword ptr ds : [edi+0xA4]
        fmul dword ptr ds : [edi+0xA4]
        faddp 
        fmul st, st(4)
        fmul dword ptr ds : [public_63a5460]
        fxch 
        fmul dword ptr ds : [edi+0x9C]
        fxch st(2)
        fmul dword ptr ds : [edi+0x98]
        faddp st(2), st
        fxch st(2)
        fmul dword ptr ds : [edi+0x94]
        faddp 
        fmul dword ptr ds : [public_63a5460]
        faddp 
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        call public_6358d60
        fld dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x18]
        fld dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x20]
        mov edx, ecx
        fld st(1)
        mov dword ptr ss : [esp+0x14], ecx
        mov cl, byte ptr ds : [eax]
        fstp dword ptr ss : [esp+0x58]
        test cl, 0xC
        fstp dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x60], edx
        je public_63588d5
        fmul dword ptr ds : [public_63a5498]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ss : [esp+0x5C], ecx
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x60], edx
        jmp public_63588d7
        public_63588d5 : nop
        fstp st(0)
        public_63588d7 : nop
        push 0
        lea ecx, ss:[esp+0x74]
        call public_6344cf0
        push 0
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x98], 0
        call public_6344cf0
        push 0
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0x98], 1
        call public_6344cf0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x9C]
        push eax
        push ebp
        push ecx
        push edx
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0xA4], 2
        call public_6358f40
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x94], 4
        call public_63449d0
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0x94], 3
        call public_63449d0
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x94], 0xFFFFFFFF
        call public_63449d0
        fld dword ptr ds : [esi+0x94]
        fmul dword ptr ds : [esi+0x14]
        fld dword ptr ds : [esi+0x98]
        fmul dword ptr ds : [esi+0x18]
        fld dword ptr ds : [esi+0x9C]
        fmul dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [esi+0xAC]
        fmul dword ptr ds : [esi+0xAC]
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [esi+0xA8]
        faddp 
        fld dword ptr ds : [esi+0xA4]
        fmul dword ptr ds : [esi+0xA4]
        faddp 
        fmul dword ptr ds : [esi+0x20]
        fmul dword ptr ds : [public_63a5460]
        fxch st(2)
        fmul dword ptr ds : [esi+0x98]
        fxch 
        fmul dword ptr ds : [esi+0x9C]
        faddp 
        fxch st(2)
        fmul dword ptr ds : [esi+0x94]
        faddp st(2), st
        fxch 
        fmul dword ptr ds : [public_63a5460]
        faddp 
        fld dword ptr ds : [edi+0x94]
        fmul dword ptr ds : [edi+0x14]
        fld dword ptr ds : [edi+0x98]
        fmul dword ptr ds : [edi+0x18]
        fld dword ptr ds : [edi+0x9C]
        fmul dword ptr ds : [edi+0x1C]
        fld dword ptr ds : [edi+0xAC]
        fmul dword ptr ds : [edi+0xAC]
        fld dword ptr ds : [edi+0xA8]
        fmul dword ptr ds : [edi+0xA8]
        mov esi, dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0x4C]
        push eax
        faddp 
        mov ecx, esi
        fld dword ptr ds : [edi+0xA4]
        fmul dword ptr ds : [edi+0xA4]
        faddp 
        fmul dword ptr ds : [edi+0x20]
        fmul dword ptr ds : [public_63a5460]
        fxch st(2)
        fmul dword ptr ds : [edi+0x98]
        fxch 
        fmul dword ptr ds : [edi+0x9C]
        faddp 
        fxch st(2)
        fmul dword ptr ds : [edi+0x94]
        faddp st(2), st
        fxch 
        fmul dword ptr ds : [public_63a5460]
        faddp 
        fstp dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [ebx+0x48]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ds : [ebx+0x4C]
        fld dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x54], esi
        fsub dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x58], ebx
        fadd dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x5C]
        fstp dword ptr ds : [ebx+0x10]
        fld dword ptr ss : [esp+0x60]
        fstp dword ptr ds : [ebx+0x14]
        fld dword ptr ss : [esp+0x64]
        fstp dword ptr ds : [ebx+0x18]
        call public_634cf60
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ds : [eax+0x78]
        mov edi, 0x2000
        test edi, ecx
        je public_6358acd
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        call public_634b030
        public_6358acd : nop
        mov eax, dword ptr ss : [esp+0xA4]
        test dword ptr ds : [eax+0x78], edi
        je public_6358ae7
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        call public_634b030
        public_6358ae7 : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x6358680)
    }
}

#undef public_63586d0
#undef public_63586d6
#undef public_63588d5
#undef public_63588d7
#undef public_6358acd
#undef public_6358ae7
