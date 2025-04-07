#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfc30);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f32480);
CLANG_FORWARD_PROC_SYMBOL(public_6f32910);
CLANG_FORWARD_PROC_SYMBOL(public_6f35640);
CLANG_FORWARD_PROC_SYMBOL(public_6f35890);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faec18);

#define public_6f35917 _public_6f35917
#define public_6f35942 _public_6f35942
#define public_6f35950 _public_6f35950
#define public_6f35960 _public_6f35960
#define public_6f3597e _public_6f3597e
#define public_6f35980 _public_6f35980
#define public_6f359a7 _public_6f359a7
#define public_6f359ae _public_6f359ae
#define public_6f359d7 _public_6f359d7
#define public_6f359d9 _public_6f359d9
#define public_6f359e6 _public_6f359e6
#define public_6f35a0c _public_6f35a0c
#define public_6f35a18 _public_6f35a18
#define public_6f35a21 _public_6f35a21
#define public_6f35a39 _public_6f35a39
#define public_6f35a50 _public_6f35a50
#define public_6f35a62 _public_6f35a62
#define public_6f35aac _public_6f35aac
#define public_6f35b01 _public_6f35b01

PROC_DECLARE(0x6f35890, internal_6f35890, public_6f35890);
extern "C" NAKED register_t __cdecl internal_6f35890()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faec18 @0x6f35892*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faec18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov al, byte ptr ss : [esp+0x28]
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        push esi
        push edi
        xor edi, edi
        push edi
        push edi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x20], al
        call public_6f93790
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edi
        lea ecx, ss:[esp+0x34]
        push ecx
        mov dword ptr ss : [esp+0x30], edi
        call public_6f50650
        add esp, 4
        cmp eax, edi
        je public_6f35a0c
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], edx
        call public_6ecfec0
        lea eax, ss:[esp+0x10]
        push eax
        call public_6f50650
        mov edi, eax
        mov esi, dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [edi+0x50]
        add esp, 4
        cmp esi, eax
        je public_6f35950
        mov ebp, dword ptr ss : [esp+0x38]
/*FIXUP public_6f35917 : nop
        push offset public_6fd0830 @0x6f35917*/
  FIXUP public_6f35917 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push esi
        call public_6f32480
        push eax
        push ebp
        mov dword ptr ss : [esp+0x48], eax
        call public_6f35640
        add esp, 0x10
        test al, al
        je public_6f35942
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6ecfc30
        public_6f35942 : nop
        mov eax, dword ptr ds : [edi+0x50]
        add esi, 4
        cmp esi, eax
        jne public_6f35917
        mov ebp, dword ptr ss : [esp+0x3C]
        public_6f35950 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f359e6
        push ebx
        nop 
        public_6f35960 : nop
        test ebp, ebp
        mov bl, 1
        jle public_6f359d7
        mov ecx, dword ptr ds : [esi+8]
        call public_6f32910
        mov edi, eax
        lea eax, ss:[ebp-1]
        cmp edi, eax
        jl public_6f3597e
        lea eax, ss:[ebp+1]
        cmp edi, eax
        jle public_6f35980
        public_6f3597e : nop
        xor bl, bl
        public_6f35980 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_6f359a7
        call public_6f32910
        mov ecx, ebp
        sub ecx, eax
        mov eax, ecx
        cdq 
        mov ecx, eax
        xor ecx, edx
        mov eax, ebp
        sub eax, edi
        sub ecx, edx
        cdq 
        xor eax, edx
        sub eax, edx
        cmp eax, ecx
        jge public_6f359ae
        public_6f359a7 : nop
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], edx
        public_6f359ae : nop
        test bl, bl
        jne public_6f359d7
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 4
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        mov esi, edi
        jmp public_6f359d9
        public_6f359d7 : nop
        mov esi, dword ptr ds : [esi]
        public_6f359d9 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp esi, eax
        jne public_6f35960
        pop ebx
        public_6f359e6 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        xor edi, edi
        cmp ecx, edi
        je public_6f35a0c
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, edi
        jne public_6f35a18
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6f1e390
        public_6f35a0c : nop
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, edi
        je public_6f35aac
        public_6f35a18 : nop
        dec esi
        cmp esi, edi
        jne public_6f35a21
        xor esi, esi
        jmp public_6f35a39
        public_6f35a21 : nop
        call dword ptr ds : [public_6fb3370]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov esi, eax
        sar esi, 0xF
        public_6f35a39 : nop
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f1df30
        cmp esi, edi
        jbe public_6f35a62
        nop 
        lea esp, ss:[esp]
        public_6f35a50 : nop
        push edi
        lea edx, ss:[esp+0x3C]
        push edx
        lea ecx, ss:[esp+0x44]
        call public_6f68e30
        dec esi
        jne public_6f35a50
        public_6f35a62 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        je public_6f35aac
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        public_6f35aac : nop
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, edi
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6f35b01
        lea edx, ss:[esp+0x3C]
        push edx
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        public_6f35b01 : nop
        lea edx, ss:[esp+0x10]
        push edx
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f35890)
    }
}

#undef public_6f35917
#undef public_6f35942
#undef public_6f35950
#undef public_6f35960
#undef public_6f3597e
#undef public_6f35980
#undef public_6f359a7
#undef public_6f359ae
#undef public_6f359d7
#undef public_6f359d9
#undef public_6f359e6
#undef public_6f35a0c
#undef public_6f35a18
#undef public_6f35a21
#undef public_6f35a39
#undef public_6f35a50
#undef public_6f35a62
#undef public_6f35aac
#undef public_6f35b01
