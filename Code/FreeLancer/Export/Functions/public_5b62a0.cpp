#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402180);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5687e0);
CLANG_FORWARD_PROC_SYMBOL(public_568810);
CLANG_FORWARD_PROC_SYMBOL(public_5ad350);
CLANG_FORWARD_PROC_SYMBOL(public_5ad620);
CLANG_FORWARD_PROC_SYMBOL(public_5b62a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b6600);
CLANG_FORWARD_PROC_SYMBOL(public_5b6630);
CLANG_FORWARD_PROC_SYMBOL(public_5b6640);
CLANG_FORWARD_PROC_SYMBOL(public_5b6c70);
CLANG_FORWARD_PROC_SYMBOL(public_5b6d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b6e80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5a47);

#define public_5b6348 _public_5b6348
#define public_5b63fe _public_5b63fe
#define public_5b6416 _public_5b6416
#define public_5b655e _public_5b655e
#define public_5b6576 _public_5b6576
#define public_5b658b _public_5b658b
#define public_5b659e _public_5b659e
#define public_5b65b0 _public_5b65b0
#define public_5b65ba _public_5b65ba

PROC_DECLARE(0x5b62a0, internal_5b62a0, public_5b62a0);
extern "C" NAKED register_t __cdecl internal_5b62a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c5a47 @0x5b62a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5a47
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x2184
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        lea esi, ds:[ecx+4]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push edi
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_5b6e80
        mov eax, dword ptr ds : [public_6143b0]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0x20019
        xor ebx, ebx
        push ebx
        push eax
        mov edi, 1
        push 0x80000001
        mov dword ptr ss : [esp+0x21AC], ebx
        mov dword ptr ss : [esp+0x3C], 0x80000001
        mov dword ptr ss : [esp+0x38], edi
        call dword ptr ds : [public_5c6008]
        test eax, eax
        jne public_5b65ba
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+edx*4+0x28], eax
        mov edx, dword ptr ss : [esp+0x24]
        inc edx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], edx
        je public_5b65ba
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], edi
        public_5b6348 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x198]
/*FIXUP push offset public_5e7184 @0x5b6354*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7184
        push ecx
        call public_402180
        add esp, 0xC
        lea ecx, ss:[esp+0x28]
        mov edi, eax
        call public_5b6630
        cmp eax, ebx
        je public_5b65b0
        cmp dword ptr ss : [esp+0x28], 0x20
        jae public_5b65b0
        lea edx, ss:[esp+0x24]
        push edx
        push 0x20019
        push ebx
        push edi
        push eax
        call dword ptr ds : [public_5c6008]
        test eax, eax
        jne public_5b65b0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+ecx*4+0x2C], eax
        mov edx, dword ptr ss : [esp+0x28]
        inc edx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], edx
        je public_5b65b0
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0xE0]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        push ebx
/*FIXUP push offset public_5d511c @0x5b63cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d511c
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x24], 0x20
        call public_5b6630
        push eax
        call dword ptr ds : [public_5c6010]
        cmp eax, ebx
        jne public_5b6416
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, 4
        jne public_5b63fe
        mov ebp, dword ptr ss : [esp+0xDC]
        jmp public_5b6416
        public_5b63fe : nop
        cmp eax, 1
        jne public_5b6416
        lea edx, ss:[esp+0xDC]
        push edx
        call dword ptr ds : [public_5c70c4]
        add esp, 4
        mov ebp, eax
        public_5b6416 : nop
        lea ecx, ss:[esp+0x120]
        mov dword ptr ss : [esp+0x10], ebp
        call public_5b6600
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x174]
        mov byte ptr ss : [esp+0x21A4], 1
        call public_5b6d30
        push eax
        lea ecx, ss:[esp+0xB8]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x21A4], 2
        call public_5b6c70
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x170]
        mov byte ptr ss : [esp+0x219C], 1
        call public_5ad620
        lea ecx, ss:[esp+0x120]
        mov byte ptr ss : [esp+0x219C], bl
        call public_5ad620
/*FIXUP push offset public_5e717c @0x5b6481*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e717c
        add edi, 0x10
        lea edx, ss:[esp+0x2C]
        push edi
        push edx
        call public_5b6640
        add esp, 0xC
        lea ecx, ss:[esp+0xFC]
        mov dword ptr ss : [esp+0x10], ebp
        call public_5b6600
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14C]
        mov byte ptr ss : [esp+0x21A4], 3
        call public_5b6d30
        push eax
        lea ecx, ss:[esp+0xB0]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x21A4], 4
        call public_5b6c70
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x148]
        mov byte ptr ss : [esp+0x219C], 3
        call public_5ad620
        lea ecx, ss:[esp+0xFC]
        mov byte ptr ss : [esp+0x219C], bl
        call public_5ad620
/*FIXUP push offset public_5e7170 @0x5b6502*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7170
        add edi, 0x20
        lea edx, ss:[esp+0x2C]
        push edi
        push edx
        call public_5b6640
        add esp, 0xC
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        push ebx
/*FIXUP push offset public_5e7168 @0x5b652b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7168
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x24], 0x20
        call public_5b6630
        push eax
        call dword ptr ds : [public_5c6010]
        test eax, eax
        jne public_5b658b
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, 4
        jne public_5b655e
        mov edi, dword ptr ss : [esp+0xBC]
        jmp public_5b6576
        public_5b655e : nop
        cmp eax, 1
        jne public_5b658b
        lea eax, ss:[esp+0xBC]
        push eax
        call dword ptr ds : [public_5c70c4]
        add esp, 4
        mov edi, eax
        public_5b6576 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], ebp
        call public_5ad350
        mov dword ptr ds : [eax+0x20], edi
        jmp public_5b659e
        public_5b658b : nop
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebp
        call public_5ad350
        mov dword ptr ds : [eax+0x20], ebx
        public_5b659e : nop
        lea ecx, ss:[esp+0x28]
        call public_568810
        inc dword ptr ss : [esp+0x14]
        jmp public_5b6348
        public_5b65b0 : nop
        lea ecx, ss:[esp+0x28]
        call public_568810
        pop ebp
        public_5b65ba : nop
        lea ecx, ss:[esp+0x24]
        call public_5687e0
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x2198], 0xFFFFFFFF
        call public_5687e0
        mov ecx, dword ptr ss : [esp+0x2190]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2190
        ret 
        UNREACHABLE_TRAP(0x5b62a0)
    }
}

#undef public_5b6348
#undef public_5b63fe
#undef public_5b6416
#undef public_5b655e
#undef public_5b6576
#undef public_5b658b
#undef public_5b659e
#undef public_5b65b0
#undef public_5b65ba
