#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee93f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec680);
CLANG_FORWARD_PROC_SYMBOL(public_6eeca70);
CLANG_FORWARD_PROC_SYMBOL(public_6f931c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabcfe);

#define public_6ee9439 _public_6ee9439
#define public_6ee948c _public_6ee948c
#define public_6ee94a4 _public_6ee94a4
#define public_6ee94a6 _public_6ee94a6
#define public_6ee94bf _public_6ee94bf
#define public_6ee9512 _public_6ee9512
#define public_6ee952a _public_6ee952a
#define public_6ee952c _public_6ee952c
#define public_6ee9541 _public_6ee9541
#define public_6ee9594 _public_6ee9594
#define public_6ee95e3 _public_6ee95e3
#define public_6ee95e5 _public_6ee95e5
#define public_6ee95fd _public_6ee95fd
#define public_6ee9601 _public_6ee9601

PROC_DECLARE(0x6ee93f0, internal_6ee93f0, public_6ee93f0);
extern "C" NAKED register_t __cdecl internal_6ee93f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fabcfe @0x6ee93f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabcfe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [esi]
        xor ebx, ebx
        sub eax, ebx
        push edi
        je public_6ee9541
        dec eax
        je public_6ee94bf
        dec eax
        je public_6ee9439
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        public_6ee9439 : nop
        mov edi, dword ptr ds : [public_6fcf0e4]
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fcf0e0
        call public_6eeca70
        cmp dword ptr ss : [esp+0x10], edi
        je public_6ee948c
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x20], ecx
        push eax
        mov ecx, offset public_6fcf0e0
        mov dword ptr ss : [esp+0x28], ebx
        call public_6f931c0
        mov eax, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+0x10]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        public_6ee948c : nop
        push 4
        call public_6fa912a
        add esp, 4
        cmp eax, ebx
        je public_6ee94a4
        mov dword ptr ds : [eax], offset public_6fb74ac
        mov edi, eax
        jmp public_6ee94a6
        public_6ee94a4 : nop
        xor edi, edi
        public_6ee94a6 : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], ebx
        push eax
        jmp public_6ee9601
        public_6ee94bf : nop
        mov edi, dword ptr ds : [public_6fcf0e4]
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_6fcf0e0
        call public_6eeca70
        cmp dword ptr ss : [esp+0x14], edi
        je public_6ee9512
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, offset public_6fcf0e0
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], ebx
        call public_6f931c0
        mov eax, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+0x10]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        public_6ee9512 : nop
        push 4
        call public_6fa912a
        add esp, 4
        cmp eax, ebx
        je public_6ee952a
        mov dword ptr ds : [eax], offset public_6fb74a0
        mov edi, eax
        jmp public_6ee952c
        public_6ee952a : nop
        xor edi, edi
        public_6ee952c : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        jmp public_6ee95fd
        public_6ee9541 : nop
        mov edi, dword ptr ds : [public_6fcf0e4]
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_6fcf0e0
        call public_6eeca70
        cmp dword ptr ss : [esp+0x18], edi
        je public_6ee9594
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, offset public_6fcf0e0
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        call public_6f931c0
        mov eax, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+0x10]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        public_6ee9594 : nop
        push 0x24
        call public_6fa912a
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x44], ebx
        je public_6ee95e3
        mov dword ptr ds : [edi], offset public_6fb7494
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x12]
        push ecx
        lea ecx, ds:[edi+4]
        mov byte ptr ss : [esp+0x4C], 1
        call public_6eec4e0
        lea edx, ss:[esp+0xF]
        push edx
        lea ecx, ds:[edi+0x18]
        mov byte ptr ss : [esp+0x48], 2
        call public_6eec680
        mov dword ptr ds : [edi], offset public_6fb7488
        jmp public_6ee95e5
        public_6ee95e3 : nop
        xor edi, edi
        public_6ee95e5 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], eax
        push edx
        public_6ee95fd : nop
        mov dword ptr ss : [esp+0x28], ebx
        public_6ee9601 : nop
        mov ecx, offset public_6fcf0e0
        call public_6f931c0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+0x10], edi
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x6ee93f0)
    }
}

#undef public_6ee9439
#undef public_6ee948c
#undef public_6ee94a4
#undef public_6ee94a6
#undef public_6ee94bf
#undef public_6ee9512
#undef public_6ee952a
#undef public_6ee952c
#undef public_6ee9541
#undef public_6ee9594
#undef public_6ee95e3
#undef public_6ee95e5
#undef public_6ee95fd
#undef public_6ee9601
