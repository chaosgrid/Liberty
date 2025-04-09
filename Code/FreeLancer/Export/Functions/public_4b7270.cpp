#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477cf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd2a0);

#define public_4b7310 _public_4b7310
#define public_4b7326 _public_4b7326
#define public_4b732a _public_4b732a
#define public_4b732c _public_4b732c
#define public_4b7370 _public_4b7370

PROC_DECLARE(0x4b7270, internal_4b7270, public_4b7270);
extern "C" NAKED register_t __cdecl internal_4b7270()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd2a0 @0x4b7272*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd2a0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        push edi
        push 0x984
        mov dword ptr ss : [esp+0xC], ecx
        call public_5b7e84
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], edi
        xor esi, esi
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_4b732a
        push ebx
        push ebp
        mov ecx, edi
        call public_477cf0
        mov dword ptr ds : [edi+0x974], offset public_5cbed8
        mov al, byte ptr ss : [esp+0x30]
        lea ebx, ds:[edi+0x978]
        push 0x28
        mov byte ptr ss : [esp+0x28], 2
        mov byte ptr ds : [ebx], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [edi], offset public_5d561c
        mov dword ptr ds : [edi+0x7C], offset public_5d560c
        mov dword ptr ds : [edi+0x974], offset public_5d5604
        mov ebp, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        mov byte ptr ss : [esp+0x24], 3
        je public_4b7326
        lea ebx, ds:[ebx]
        public_4b7310 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c6188]
        cmp esi, ebp
        jne public_4b7310
        public_4b7326 : nop
        pop ebp
        pop ebx
        jmp public_4b732c
        public_4b732a : nop
        xor edi, edi
        public_4b732c : nop
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        add edx, 0xC
        mov dword ptr ds : [edi+0x10], edx
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_4b7370
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        public_4b7370 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x4b7270)
    }
}

#undef public_4b7310
#undef public_4b7326
#undef public_4b732a
#undef public_4b732c
#undef public_4b7370
