#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f26460);
CLANG_FORWARD_JUMP_SYMBOL(public_6faebf8);

#define public_6f34d3b _public_6f34d3b
#define public_6f34d5e _public_6f34d5e
#define public_6f34d8f _public_6f34d8f
#define public_6f34de9 _public_6f34de9
#define public_6f34e1b _public_6f34e1b
#define public_6f34e73 _public_6f34e73
#define public_6f34e84 _public_6f34e84
#define public_6f34e9d _public_6f34e9d

PROC_DECLARE(0x6f34ce0, internal_6f34ce0, public_6f34ce0);
extern "C" NAKED register_t __cdecl internal_6f34ce0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faebf8 @0x6f34ce8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faebf8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        xor bl, bl
        test eax, eax
        push edi
        je public_6f34d8f
        dec eax
        je public_6f34d5e
        dec eax
        je public_6f34d3b
        dec eax
        jne public_6f34e9d
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [eax], 2
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [ecx], eax
        mov bl, 1
        jmp public_6f34e9d
        public_6f34d3b : nop
        mov edx, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [edx], 1
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [eax], edx
        mov bl, 1
        jmp public_6f34e9d
        public_6f34d5e : nop
        mov ecx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [ecx], 3
        lea edx, ds:[esi+0x1C]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [ecx], eax
        mov bl, 1
        jmp public_6f34e9d
        public_6f34d8f : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6f34e9d
        mov ebp, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x78]
        mov edi, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        mov eax, dword ptr ss : [esp+0x7C]
        push eax
        push edi
        call dword ptr ds : [edx+0x30]
        mov bl, al
        test bl, bl
        je public_6f34e9d
        mov eax, dword ptr ds : [edi]
        xor edi, edi
        cmp eax, edi
        jle public_6f34e1b
        cmp eax, 2
        jle public_6f34de9
        cmp eax, 3
        jne public_6f34e1b
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6f34e1b
        public_6f34de9 : nop
        mov eax, dword ptr ss : [esp+0x78]
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        push ecx
        call dword ptr ds : [public_6fb3664]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        public_6f34e1b : nop
        mov dword ptr ss : [esp+0x7C], edi
        lea edx, ss:[esp+0x7C]
        push edx
        push 5
        mov dword ptr ss : [esp+0x68], edi
        call public_6f24870
        mov eax, dword ptr ds : [public_6fb9570]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edi
        push edi
        push edi
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x90]
        lea edx, ss:[esp+0x24]
        push edx
        call public_6f26460
        mov ecx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [esi-8]
        cmp eax, ecx
        mov edi, ecx
        je public_6f34e84
        test eax, eax
        je public_6f34e73
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [esi-8], 0
        public_6f34e73 : nop
        test edi, edi
        mov dword ptr ds : [esi-8], edi
        je public_6f34e84
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x7C]
        public_6f34e84 : nop
        test ecx, ecx
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        je public_6f34e9d
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x7C], 0
        public_6f34e9d : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [esi-0x170]
        mov dword ptr ss : [esp+0x2C], ecx
        lea ecx, ds:[esi-0x174]
        mov dword ptr ss : [esp+0x28], eax
        call public_6eea860
        mov edx, dword ptr ds : [eax+0x48]
        lea eax, ss:[esp+0x28]
        push eax
        push 0x1004
/*FIXUP push offset public_6fd1c74 @0x6f34ec7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x3C], edx
        call public_6f24070
        mov ecx, dword ptr ss : [esp+0x64]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 0x18
        UNREACHABLE_TRAP(0x6f34ce0)
    }
}

#undef public_6f34d3b
#undef public_6f34d5e
#undef public_6f34d8f
#undef public_6f34de9
#undef public_6f34e1b
#undef public_6f34e73
#undef public_6f34e84
#undef public_6f34e9d
