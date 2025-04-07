#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e820);
CLANG_FORWARD_PROC_SYMBOL(public_6f50d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f50f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f50fe0);

#define public_6f50d6b _public_6f50d6b
#define public_6f50d73 _public_6f50d73
#define public_6f50da5 _public_6f50da5
#define public_6f50ded _public_6f50ded
#define public_6f50e10 _public_6f50e10
#define public_6f50e19 _public_6f50e19
#define public_6f50e5f _public_6f50e5f
#define public_6f50e7d _public_6f50e7d
#define public_6f50e90 _public_6f50e90
#define public_6f50eae _public_6f50eae
#define public_6f50ec9 _public_6f50ec9
#define public_6f50edc _public_6f50edc
#define public_6f50ef7 _public_6f50ef7
#define public_6f50f0b _public_6f50f0b
#define public_6f50f4b _public_6f50f4b
#define public_6f50f59 _public_6f50f59
#define public_6f50f71 _public_6f50f71

PROC_DECLARE(0x6f50d50, internal_6f50d50, public_6f50d50);
extern "C" NAKED register_t __cdecl internal_6f50d50()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebx, ebp
        push esi
        push edi
        jge public_6f50f71
        mov esi, dword ptr ss : [esp+0x18]
        jmp public_6f50d73
        public_6f50d6b : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f50d73 : nop
        push ebx
        push esi
        call public_6f4e820
        add esp, 8
        push eax
        push ebp
        push esi
        call public_6f4e820
        add esp, 8
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_6f50fe0
        add esp, 0xC
        test eax, eax
        je public_6f50da5
        push ebp
        push ebx
        push esi
        call public_6f50f80
        add esp, 0xC
        public_6f50da5 : nop
        mov eax, ebp
        sub eax, ebx
        cmp eax, 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6f50f71
        lea eax, ds:[ebx+ebp]
        cdq 
        sub eax, edx
        mov edi, eax
        sar edi, 1
        push edi
        push esi
        call public_6f4e820
        push ebx
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call public_6f4e820
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        push edx
        call public_6f50fe0
        add esp, 0x1C
        test eax, eax
        je public_6f50ded
        push edi
        push ebx
        jmp public_6f50e10
        public_6f50ded : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ebp
        push esi
        call public_6f4e820
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        push eax
        push ecx
        call public_6f50fe0
        add esp, 0xC
        test eax, eax
        je public_6f50e19
        push ebp
        push edi
        public_6f50e10 : nop
        push esi
        call public_6f50f80
        add esp, 0xC
        public_6f50e19 : nop
        cmp dword ptr ss : [esp+0x10], 2
        je public_6f50f71
        mov eax, dword ptr ds : [public_6f61e28]
        mov ebx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10]
        push edi
        push esi
        mov dword ptr ds : [eax], edx
        call public_6f4e820
        mov edx, dword ptr ds : [eax]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        dec ebp
        push ebp
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        push edi
        push esi
        mov dword ptr ds : [ecx+0xC], eax
        call public_6f50f80
        mov edi, dword ptr ss : [esp+0x30]
        add esp, 0x14
        public_6f50e5f : nop
        push ebx
        inc edi
        push edi
        push esi
        call public_6f4e820
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        push eax
        push ecx
        call public_6f50fe0
        add esp, 0xC
        test eax, eax
        je public_6f50eae
        public_6f50e7d : nop
        cmp edi, dword ptr ss : [esp+0x20]
        jle public_6f50e90
/*FIXUP push offset public_6f60e18 @0x6f50e83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60e18
        call public_6f4c7f0
        add esp, 4
        public_6f50e90 : nop
        push ebx
        inc edi
        push edi
        push esi
        call public_6f4e820
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 8
        push eax
        push edx
        call public_6f50fe0
        add esp, 0xC
        test eax, eax
        jne public_6f50e7d
        public_6f50eae : nop
        dec ebp
        push ebp
        push esi
        call public_6f4e820
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push ebx
        push eax
        call public_6f50fe0
        add esp, 0x14
        test eax, eax
        je public_6f50ef7
        public_6f50ec9 : nop
        cmp ebp, dword ptr ss : [esp+0x1C]
        jge public_6f50edc
/*FIXUP push offset public_6f60e18 @0x6f50ecf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60e18
        call public_6f4c7f0
        add esp, 4
        public_6f50edc : nop
        dec ebp
        push ebp
        push esi
        call public_6f4e820
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ebx
        push ecx
        call public_6f50fe0
        add esp, 0x14
        test eax, eax
        jne public_6f50ec9
        public_6f50ef7 : nop
        cmp ebp, edi
        jl public_6f50f0b
        push ebp
        push edi
        push esi
        call public_6f50f80
        add esp, 0xC
        jmp public_6f50e5f
        public_6f50f0b : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edi
        lea eax, ds:[edx-1]
        push eax
        push esi
        call public_6f50f80
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x28]
        add ecx, 0xFFFFFFF0
        mov dword ptr ds : [eax], ecx
        mov eax, ebx
        mov ecx, edi
        sub eax, edi
        sub ecx, ebp
        add esp, 0xC
        cmp ecx, eax
        jge public_6f50f4b
        dec edi
        lea edx, ds:[edi+2]
        mov eax, ebp
        mov dword ptr ss : [esp+0x1C], edx
        mov ebp, edx
        jmp public_6f50f59
        public_6f50f4b : nop
        lea eax, ds:[edi+1]
        lea ecx, ds:[eax-2]
        mov edi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        mov ebx, ecx
        public_6f50f59 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push edi
        push eax
        push esi
        call public_6f50d50
        add esp, 0x10
        cmp ebp, ebx
        jl public_6f50d6b
        public_6f50f71 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f50d50)
    }
}

#undef public_6f50d6b
#undef public_6f50d73
#undef public_6f50da5
#undef public_6f50ded
#undef public_6f50e10
#undef public_6f50e19
#undef public_6f50e5f
#undef public_6f50e7d
#undef public_6f50e90
#undef public_6f50eae
#undef public_6f50ec9
#undef public_6f50edc
#undef public_6f50ef7
#undef public_6f50f0b
#undef public_6f50f4b
#undef public_6f50f59
#undef public_6f50f71
