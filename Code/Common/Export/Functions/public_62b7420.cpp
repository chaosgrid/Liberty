#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dc80);
CLANG_FORWARD_PROC_SYMBOL(public_62a9190);
CLANG_FORWARD_PROC_SYMBOL(public_62aad30);
CLANG_FORWARD_PROC_SYMBOL(public_62b7420);
CLANG_FORWARD_PROC_SYMBOL(public_62b94c0);
CLANG_FORWARD_PROC_SYMBOL(public_6320ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63947f4);

#define public_62b7460 _public_62b7460
#define public_62b7471 _public_62b7471
#define public_62b747b _public_62b747b
#define public_62b74b3 _public_62b74b3
#define public_62b74d0 _public_62b74d0
#define public_62b74e5 _public_62b74e5
#define public_62b7535 _public_62b7535

PROC_DECLARE(0x62b7420, internal_62b7420, public_62b7420);
extern "C" NAKED register_t __cdecl internal_62b7420()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63947f4 @0x62b7422*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63947f4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_639d3c4
        mov eax, dword ptr ds : [edi+0x1D0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], 2
        je public_62b747b
        lea ebx, ds:[ebx]
        public_62b7460 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 0xFFFFFFFF
        je public_62b7471
        push eax
        call public_627dc80
        add esp, 4
        public_62b7471 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x1D0]
        jne public_62b7460
        public_62b747b : nop
        mov eax, dword ptr ds : [edi+0x1C0]
        push eax
        call public_627dc80
        add esp, 4
        mov ecx, edi
        call public_62aad30
        mov eax, dword ptr ds : [edi+0xE0]
        test ah, 2
        je public_62b74b3
        mov eax, dword ptr ds : [edi+0x104]
        lea ecx, ss:[esp+8]
        push ecx
        mov dword ptr ss : [esp+0xC], eax
        call public_6320ae0
        add esp, 4
        public_62b74b3 : nop
        push ebx
        lea ebx, ds:[edi+0x1CC]
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        mov byte ptr ss : [esp+0x20], 1
        je public_62b74e5
        lea ebx, ds:[ebx]
        public_62b74d0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebx
        call public_62b94c0
        cmp esi, ebp
        jne public_62b74d0
        public_62b74e5 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ss : [esp+0x20], al
        mov eax, dword ptr ds : [edi+0x1C0]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        pop ebp
        pop ebx
        je public_62b7535
        mov ecx, dword ptr ds : [public_6399038]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [edi+0x1C0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [edi+0x1C0], esi
        public_62b7535 : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], esi
        call public_62a9190
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62b7420)
    }
}

#undef public_62b7460
#undef public_62b7471
#undef public_62b747b
#undef public_62b74b3
#undef public_62b74d0
#undef public_62b74e5
#undef public_62b7535
