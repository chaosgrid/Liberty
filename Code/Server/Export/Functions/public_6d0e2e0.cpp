#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f680);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d616d8);

#define public_6d0e371 _public_6d0e371
#define public_6d0e378 _public_6d0e378
#define public_6d0e3bf _public_6d0e3bf
#define public_6d0e41e _public_6d0e41e
#define public_6d0e44d _public_6d0e44d
#define public_6d0e474 _public_6d0e474
#define public_6d0e478 _public_6d0e478
#define public_6d0e485 _public_6d0e485
#define public_6d0e4b0 _public_6d0e4b0
#define public_6d0e4b7 _public_6d0e4b7

PROC_DECLARE(0x6d0e2e0, internal_6d0e2e0, public_6d0e2e0);
extern "C" NAKED register_t __cdecl internal_6d0e2e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d616d8 @0x6d0e2e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d616d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0xF]
        mov ebp, ecx
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x1C], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x20], 0x7F7FFFFF
        call dword ptr ds : [public_6d646fc]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x20]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d0e478
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d0e371
        xor edi, edi
        jmp public_6d0e378
        public_6d0e371 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6d0e378 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d646f8]
        cmp edi, eax
        ja public_6d0e3bf
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push eax
        push ecx
        call public_6d0f680
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 0xC
        push ecx
        push eax
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d646f4]
        mov ecx, esi
        call dword ptr ds : [public_6d646f8]
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ds:[edx+eax*2]
        jmp public_6d0e474
        public_6d0e3bf : nop
        mov ecx, esi
        call dword ptr ds : [public_6d646f8]
        lea ecx, ss:[esp+0x20]
        mov edi, eax
        call dword ptr ds : [public_6d646f0]
        cmp edi, eax
        ja public_6d0e41e
        mov edi, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d646f8]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        lea edi, ds:[edi+eax*2]
        push edi
        push edx
        call public_6d0f680
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push ecx
        push edi
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d646ec]
        mov ecx, esi
        call dword ptr ds : [public_6d646f8]
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ds:[edx+eax*2]
        jmp public_6d0e474
        public_6d0e41e : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d646f4]
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [public_6d646f8]
        test eax, eax
        jge public_6d0e44d
        xor eax, eax
        public_6d0e44d : nop
        lea ecx, ds:[eax+eax]
        push ecx
        call public_6d60012
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        push eax
        push ecx
        push esi
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_6d646ec]
        mov dword ptr ss : [esp+0x2C], eax
        public_6d0e474 : nop
        mov dword ptr ss : [esp+0x28], eax
        public_6d0e478 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0e4b7
        mov edi, dword ptr ss : [esp+0x4C]
        public_6d0e485 : nop
        cmp dword ptr ds : [esi+0x40], edi
        je public_6d0e4b0
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edx]
        push eax
        lea ecx, ds:[esi+8]
        call public_6cf7370
        test al, al
        je public_6d0e4b0
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        push eax
        call dword ptr ds : [edx]
        public_6d0e4b0 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xC]
        jne public_6d0e485
        public_6d0e4b7 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 0x10
        UNREACHABLE_TRAP(0x6d0e2e0)
    }
}

#undef public_6d0e371
#undef public_6d0e378
#undef public_6d0e3bf
#undef public_6d0e41e
#undef public_6d0e44d
#undef public_6d0e474
#undef public_6d0e478
#undef public_6d0e485
#undef public_6d0e4b0
#undef public_6d0e4b7
