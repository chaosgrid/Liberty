#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_522480);
CLANG_FORWARD_PROC_SYMBOL(public_526960);
CLANG_FORWARD_PROC_SYMBOL(public_526bd0);
CLANG_FORWARD_PROC_SYMBOL(public_527400);
CLANG_FORWARD_PROC_SYMBOL(public_527440);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c012b);

#define public_5224b2 _public_5224b2
#define public_5224d2 _public_5224d2
#define public_5224e0 _public_5224e0
#define public_5224ea _public_5224ea
#define public_5224ef _public_5224ef
#define public_5224f1 _public_5224f1
#define public_5224f5 _public_5224f5
#define public_522557 _public_522557
#define public_522560 _public_522560
#define public_522584 _public_522584

PROC_DECLARE(0x522480, internal_522480, public_522480);
extern "C" NAKED register_t __cdecl internal_522480()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c012b @0x522482*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c012b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        lea ebp, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ds : [edi]
        xor ebx, ebx
        cmp esi, edi
        mov dword ptr ss : [esp+0x2C], ebx
        je public_5224f5
        public_5224b2 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x15C]
        mov eax, dword ptr ds : [esi+8]
        cmp byte ptr ds : [eax+0x15], bl
        jne public_5224d2
        push eax
        call public_527440
        add esp, 4
        jmp public_5224ef
        public_5224d2 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_5224ea
        lea ebx, ds:[ebx]
        public_5224e0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_5224e0
        public_5224ea : nop
        cmp dword ptr ds : [esi+8], eax
        je public_5224f1
        public_5224ef : nop
        mov esi, eax
        public_5224f1 : nop
        cmp esi, edi
        jne public_5224b2
        public_5224f5 : nop
        mov eax, dword ptr ss : [ebp+0x40]
        mov ecx, dword ptr ss : [ebp+0x4C]
        cmp ecx, ebx
        lea esi, ss:[ebp+0x3C]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        je public_522557
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_53e430
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ecx]
        jne public_522557
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_522557
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov ecx, esi
        call public_527400
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_53e430
        jmp public_522584
        public_522557 : nop
        cmp eax, edi
        je public_522584
        nop 
        lea esp, ss:[esp]
        public_522560 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_526960
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_46c8c0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_522560
        public_522584 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call public_526bd0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x522480)
    }
}

#undef public_5224b2
#undef public_5224d2
#undef public_5224e0
#undef public_5224ea
#undef public_5224ef
#undef public_5224f1
#undef public_5224f5
#undef public_522557
#undef public_522560
#undef public_522584
