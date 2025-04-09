#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_459060);
CLANG_FORWARD_PROC_SYMBOL(public_459b00);
CLANG_FORWARD_PROC_SYMBOL(public_459d70);
CLANG_FORWARD_PROC_SYMBOL(public_46dba0);
CLANG_FORWARD_PROC_SYMBOL(public_46e8c0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba198);

#define public_459091 _public_459091
#define public_459098 _public_459098
#define public_4590aa _public_4590aa
#define public_4590bd _public_4590bd
#define public_4590c5 _public_4590c5
#define public_4590cf _public_4590cf
#define public_4590d4 _public_4590d4
#define public_4590d6 _public_4590d6
#define public_4590dc _public_4590dc
#define public_459118 _public_459118
#define public_459120 _public_459120
#define public_459144 _public_459144
#define public_4591a5 _public_4591a5
#define public_4591b0 _public_4591b0
#define public_4591d4 _public_4591d4

PROC_DECLARE(0x459060, internal_459060, public_459060);
extern "C" NAKED register_t __cdecl internal_459060()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba198 @0x459062*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba198
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp edi, eax
        mov dword ptr ss : [esp+0x28], ebx
        je public_4590dc
        push ebp
        public_459091 : nop
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, ebx
        je public_4590aa
        public_459098 : nop
        mov ebp, dword ptr ds : [eax+8]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp ebp, ebx
        mov eax, ebp
        jne public_459098
        public_4590aa : nop
        mov eax, dword ptr ds : [edi+8]
        cmp byte ptr ds : [eax+0x1D], bl
        jne public_4590bd
        push eax
        call public_46e8c0
        add esp, 4
        jmp public_4590d4
        public_4590bd : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_4590cf
        public_4590c5 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_4590c5
        public_4590cf : nop
        cmp dword ptr ds : [edi+8], eax
        je public_4590d6
        public_4590d4 : nop
        mov edi, eax
        public_4590d6 : nop
        cmp edi, dword ptr ds : [esi+4]
        jne public_459091
        pop ebp
        public_4590dc : nop
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_459118
        mov ecx, eax
        cmp eax, ecx
        jne public_459118
        cmp edi, edi
        jne public_459118
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_459d70
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_459144
        public_459118 : nop
        cmp eax, edi
        je public_459144
        lea esp, ss:[esp]
        public_459120 : nop
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_459b00
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_46dba0
        cmp dword ptr ss : [esp+0xC], edi
        jne public_459120
        public_459144 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebx
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], ecx
        je public_4591a5
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [eax]
        jne public_4591a5
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_4591a5
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, esi
        call public_459d70
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_53e430
        jmp public_4591d4
        public_4591a5 : nop
        cmp ecx, edi
        je public_4591d4
        lea esp, ss:[esp]
        public_4591b0 : nop
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_459b00
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_46dba0
        cmp dword ptr ss : [esp+0xC], edi
        jne public_4591b0
        public_4591d4 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x459060)
    }
}

#undef public_459091
#undef public_459098
#undef public_4590aa
#undef public_4590bd
#undef public_4590c5
#undef public_4590cf
#undef public_4590d4
#undef public_4590d6
#undef public_4590dc
#undef public_459118
#undef public_459120
#undef public_459144
#undef public_4591a5
#undef public_4591b0
#undef public_4591d4
