#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4a5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d53360);
CLANG_FORWARD_PROC_SYMBOL(public_6d55bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62e6d);

#define public_6d45509 _public_6d45509
#define public_6d4551b _public_6d4551b
#define public_6d45530 _public_6d45530
#define public_6d45561 _public_6d45561
#define public_6d45653 _public_6d45653

PROC_DECLARE(0x6d453f0, internal_6d453f0, public_6d453f0);
extern "C" NAKED register_t __cdecl internal_6d453f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62e6d @0x6d453f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62e6d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB0
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xCC]
        xor ebx, ebx
        cmp ebp, ebx
        push edi
        jbe public_6d45653
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ss:[ebp-1]
        cmp eax, ecx
        jae public_6d45653
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        cmp dword ptr ds : [eax+ecx+0x348], ebx
        je public_6d45653
        mov eax, dword ptr ss : [esp+0xCC]
        mov edi, ebp
        imul edi, 0x418
        push ebp
        push eax
        lea ecx, ds:[edi+ecx-0x418]
        call public_6d4a5d0
        test al, al
        je public_6d45653
        lea ecx, ss:[esp+0x5C]
        call public_6d55bc0
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0xC4], ebx
        call public_6d55bc0
        mov dword ptr ss : [esp+0x54], ebx
        mov byte ptr ss : [esp+0x58], bl
        mov word ptr ss : [esp+0x8C], bx
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, dword ptr ds : [edi+ecx-0x100]
        mov dword ptr ss : [esp+0xC4], 1
        mov dword ptr ss : [esp+0x44], eax
        call dword ptr ds : [public_6d64848]
        shl eax, 3
        push eax
        call public_6d60012
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        mov dword ptr ss : [esp+0x68], eax
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [public_6d64844]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x24
        cmp eax, ebx
        jne public_6d45509
        mov word ptr ss : [esp+0x8C], bx
        jmp public_6d4551b
        public_6d45509 : nop
        push eax
        lea ecx, ss:[esp+0x90]
        push ecx
        call dword ptr ds : [public_6d64bcc]
        add esp, 8
        public_6d4551b : nop
        push esi
        push ebx
        mov ecx, offset public_6d90260
        call public_6d53360
        mov esi, eax
        cmp esi, ebx
        je public_6d45561
        lea ecx, ds:[ecx]
        public_6d45530 : nop
        mov eax, dword ptr ds : [esi+0x348]
        mov edx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, dword ptr ds : [public_6d8fb14]
        push eax
        call dword ptr ds : [edx+0x108]
        push esi
        mov ecx, offset public_6d90260
        call public_6d53360
        mov esi, eax
        cmp esi, ebx
        jne public_6d45530
        public_6d45561 : nop
        mov edx, dword ptr ds : [public_6d90260]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov eax, dword ptr ds : [edi+edx-0x38]
        push ecx
        push 0x3B
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x28], ebx
        call public_6d43650
        fld qword ptr ds : [public_6d8fb28]
        mov edx, dword ptr ss : [esp+0x50]
        fadd qword ptr ds : [public_6d8fb20]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov dword ptr ss : [esp+0x40], edx
        add esp, 8
        fstp qword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x38]
        push edx
        push ebp
        call dword ptr ds : [eax+0x38]
        mov eax, dword ptr ds : [public_6d90260]
        push ebx
        lea ecx, ss:[esp+0x18]
        or esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], esi
        mov eax, dword ptr ds : [edi+eax-0x100]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_6d643b8]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push edx
        mov edx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [edi+edx-0x34]
        push edx
        push ebp
        call dword ptr ds : [eax+0x1D0]
        mov eax, dword ptr ss : [esp+0x58]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov edi, dword ptr ds : [public_6d64694]
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0xC8], 2
        call edi
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0xC8], esi
        call edi
        pop esi
        public_6d45653 : nop
        mov ecx, dword ptr ss : [esp+0xBC]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xBC
        ret 8
        UNREACHABLE_TRAP(0x6d453f0)
    }
}

#undef public_6d45509
#undef public_6d4551b
#undef public_6d45530
#undef public_6d45561
#undef public_6d45653
