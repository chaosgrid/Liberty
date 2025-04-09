#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_52a680);
CLANG_FORWARD_PROC_SYMBOL(public_532d40);
CLANG_FORWARD_PROC_SYMBOL(public_535980);
CLANG_FORWARD_PROC_SYMBOL(public_535a80);
CLANG_FORWARD_PROC_SYMBOL(public_535ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5394b0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0832);

#define public_532db0 _public_532db0
#define public_532dc2 _public_532dc2
#define public_532de2 _public_532de2
#define public_532e10 _public_532e10
#define public_532e14 _public_532e14
#define public_532e38 _public_532e38
#define public_532e59 _public_532e59
#define public_532e61 _public_532e61
#define public_532e85 _public_532e85
#define public_532ea1 _public_532ea1
#define public_532ec4 _public_532ec4
#define public_532eca _public_532eca
#define public_532edf _public_532edf

PROC_DECLARE(0x532d40, internal_532d40, public_532d40);
extern "C" NAKED register_t __cdecl internal_532d40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0832 @0x532d42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0832
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        lea esi, ss:[ebp-0xC]
        push edi
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ds : [esi], offset public_5de23c
        mov dword ptr ss : [ebp-8], offset public_5de1bc
        mov dword ptr ss : [ebp], offset public_5de1b0
        mov dword ptr ss : [ebp+0xA0], offset public_5de1a8
        lea eax, ss:[esp+0x10]
        lea edi, ds:[esi+0xB4]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], 3
        call public_53e430
        mov ecx, dword ptr ds : [esi+0xB8]
        mov eax, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        cmp eax, ecx
        je public_532de2
        lea ecx, ds:[ecx]
        public_532db0 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_532dc2
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        public_532dc2 : nop
        mov dword ptr ds : [eax+8], ebx
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov ecx, dword ptr ds : [esi+0xB8]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_532db0
        public_532de2 : nop
        mov ecx, edi
        call public_535980
        cmp esi, ebx
        je public_532e10
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_532e10
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_532e10
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        mov dword ptr ss : [esp+0x10], eax
        je public_532e14
        public_532e10 : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_532e14 : nop
        call public_52a680
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [edx+0x88]
        mov ecx, dword ptr ds : [eax+0x78]
        mov esi, dword ptr ds : [ecx]
        mov eax, ecx
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], eax
        je public_532e61
        public_532e38 : nop
        lea eax, ds:[esi+8]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_432240
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+0x10]
        cmp ecx, ebx
        je public_532e59
        call dword ptr ds : [public_5c68a8]
        public_532e59 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x18]
        jne public_532e38
        public_532e61 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x24]
        lea ecx, ds:[edx+0x144]
        push eax
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x18], ecx
        call dword ptr ds : [public_5c6584]
        mov edi, eax
        cmp edi, ebx
        je public_532edf
        public_532e85 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c6940]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        mov ecx, edi
        call dword ptr ds : [public_5c6940]
        mov edi, dword ptr ds : [eax+4]
        cmp esi, edi
        je public_532eca
        public_532ea1 : nop
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        call public_432240
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0x10]
        cmp ecx, ebx
        je public_532ec4
        call dword ptr ds : [public_5c68a8]
        public_532ec4 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_532ea1
        public_532eca : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_5c6584]
        mov edi, eax
        cmp edi, ebx
        jne public_532e85
        public_532edf : nop
        mov edi, dword ptr ss : [ebp+0xC4]
        lea ecx, ss:[esp+0x1C]
        lea esi, ss:[ebp+0xC0]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x38], 2
        call public_53e430
        mov edx, dword ptr ds : [eax]
        push edi
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_535ad0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ss : [ebp+0xB8]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ss:[ebp+0xB4]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x40], 1
        call public_535a80
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ss : [ebp+0xAC]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea esi, ss:[ebp+0xA8]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x40], bl
        call public_4a2f80
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_5394b0
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x532d40)
    }
}

#undef public_532db0
#undef public_532dc2
#undef public_532de2
#undef public_532e10
#undef public_532e14
#undef public_532e38
#undef public_532e59
#undef public_532e61
#undef public_532e85
#undef public_532ea1
#undef public_532ec4
#undef public_532eca
#undef public_532edf
