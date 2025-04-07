#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15720);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eda0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61b0b);

#define public_6d11f48 _public_6d11f48
#define public_6d11f4a _public_6d11f4a
#define public_6d11fd0 _public_6d11fd0
#define public_6d11fe1 _public_6d11fe1
#define public_6d1203e _public_6d1203e
#define public_6d12048 _public_6d12048
#define public_6d1205e _public_6d1205e
#define public_6d12061 _public_6d12061
#define public_6d12066 _public_6d12066
#define public_6d12072 _public_6d12072
#define public_6d12074 _public_6d12074
#define public_6d1208c _public_6d1208c
#define public_6d12096 _public_6d12096

PROC_DECLARE(0x6d11ee0, internal_6d11ee0, public_6d11ee0);
extern "C" NAKED register_t __cdecl internal_6d11ee0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61b0b @0x6d11ee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61b0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, offset public_6d8e328
        mov dword ptr ss : [esp+0x10], esi
        call public_6d15720
        push 0x70
        mov ebx, eax
        call public_6d60012
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x54], edi
        je public_6d11f48
        lea ecx, ss:[ebp+0xC]
        mov dword ptr ss : [ebp], offset public_6d68384
        mov dword ptr ss : [ebp+4], edi
        mov byte ptr ss : [ebp+8], 0
        call dword ptr ds : [public_6d64758]
        mov dword ptr ss : [ebp], offset public_6d68374
        jmp public_6d11f4a
        public_6d11f48 : nop
        xor ebp, ebp
        public_6d11f4a : nop
        mov dword ptr ss : [ebp+0xC], ebx
        mov ebx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [ebp+0x10], ebx
        imul ebx, 0x418
        mov ecx, dword ptr ds : [esi+4]
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x14], ecx
        mov dword ptr ss : [ebp+0x18], edi
        mov dword ptr ss : [ebp+0x1C], eax
        mov edx, dword ptr ds : [public_6d90260]
        lea esi, ds:[ebx+edx-0x418]
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], eax
        call public_6d4eda0
        push eax
        lea eax, ss:[ebp+0x20]
        push eax
        call dword ptr ds : [public_6d64754]
        add esi, 0x2E4
        mov ecx, 0xD
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp+0x30], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [ebp+0x38], eax
        xor edi, edi
        add esp, 8
        xor eax, eax
        cmp ecx, edi
        mov dword ptr ss : [ebp+0x34], edx
        mov dword ptr ss : [ebp+0x60], ecx
        jle public_6d11fe1
        lea ecx, ss:[ebp+0x40]
        mov edi, edi
        public_6d11fd0 : nop
        mov edx, dword ptr ss : [esp+eax*4+0x28]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [ebp+0x60]
        inc eax
        add ecx, 4
        cmp eax, edx
        jl public_6d11fd0
        public_6d11fe1 : nop
        lea eax, ss:[ebp+0x64]
/*FIXUP push offset public_6d6834c @0x6d11fe4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6834c
        push eax
        call dword ptr ds : [public_6d64750]
        mov dword ptr ss : [ebp+0x68], 0xFFFFFFFF
        mov ecx, dword ptr ds : [public_6d90260]
        lea edx, ds:[ebx+ecx-0x154]
        push edx
        call dword ptr ds : [public_6d643b4]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+0x6C], eax
        mov eax, 1
        mov dword ptr ss : [ebp+0x24], edi
        mov dword ptr ss : [ebp+0x28], eax
        mov dword ptr ss : [ebp+0x2C], edi
        mov dword ptr ss : [ebp+4], edi
        mov byte ptr ss : [ebp+8], al
        mov al, byte ptr ds : [ebx+0x1C]
        add esp, 0xC
        test al, al
        je public_6d1203e
        mov eax, dword ptr ds : [ebx+0x20]
        cmp eax, edi
        je public_6d1203e
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x20], ecx
        jmp public_6d12048
        public_6d1203e : nop
        push 0xC
        call public_6d60012
        add esp, 4
        public_6d12048 : nop
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+8], ebp
        mov ecx, dword ptr ds : [ebx+0x18]
        cmp ecx, edi
        je public_6d1205e
        mov dword ptr ds : [ecx], eax
        jmp public_6d12061
        public_6d1205e : nop
        mov dword ptr ds : [ebx+0x14], eax
        public_6d12061 : nop
        mov dword ptr ds : [ebx+0x18], eax
        xor esi, esi
        public_6d12066 : nop
        cmp esi, edi
        jne public_6d12072
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [eax+4]
        jmp public_6d12074
        public_6d12072 : nop
        mov esi, dword ptr ds : [esi]
        public_6d12074 : nop
        cmp esi, edi
        je public_6d12096
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov ecx, dword ptr ss : [ebp+4]
        je public_6d1208c
        cmp ecx, edi
        je public_6d1208c
        cmp ecx, eax
        jne public_6d12066
        public_6d1208c : nop
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx]
        jmp public_6d12066
        public_6d12096 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+8], 0
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x6d11ee0)
    }
}

#undef public_6d11f48
#undef public_6d11f4a
#undef public_6d11fd0
#undef public_6d11fe1
#undef public_6d1203e
#undef public_6d12048
#undef public_6d1205e
#undef public_6d12061
#undef public_6d12066
#undef public_6d12072
#undef public_6d12074
#undef public_6d1208c
#undef public_6d12096
