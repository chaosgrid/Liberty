#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f430);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf1c8);

#define public_6f4f49d _public_6f4f49d
#define public_6f4f4fe _public_6f4f4fe
#define public_6f4f504 _public_6f4f504
#define public_6f4f566 _public_6f4f566
#define public_6f4f575 _public_6f4f575
#define public_6f4f5d7 _public_6f4f5d7
#define public_6f4f5e7 _public_6f4f5e7
#define public_6f4f5f4 _public_6f4f5f4
#define public_6f4f5ff _public_6f4f5ff

PROC_DECLARE(0x6f4f430, internal_6f4f430, public_6f4f430);
extern "C" NAKED register_t __cdecl internal_6f4f430()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf1c8 @0x6f4f432*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf1c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        xor ebp, ebp
        mov esi, ecx
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], edi
        mov eax, dword ptr ds : [esi+0xB4]
        cmp eax, edi
        mov dword ptr ss : [esp+0x2C], edi
        je public_6f4f4fe
        mov ecx, dword ptr ds : [esi+0xB8]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov ebx, edx
        je public_6f4f4fe
        test ebx, ebx
        mov eax, ebx
        jge public_6f4f49d
        xor eax, eax
        public_6f4f49d : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        push edi
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6eed270
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[edi+ebx*4]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x20], edx
        call public_6fa3db0
        lea ebp, ds:[edi+eax*4]
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x18], edi
        public_6f4f4fe : nop
        mov ebx, dword ptr ss : [esp+0x34]
        xor ecx, ecx
        public_6f4f504 : nop
        mov eax, dword ptr ds : [esi+0xB4]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f4f575
        mov edx, dword ptr ds : [esi+0xB8]
        sub edx, eax
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        jae public_6f4f575
        mov edi, dword ptr ds : [esi+0xB4]
        imul ecx, 0x34
        lea edx, ss:[esp+0x34]
        push edx
        add ecx, edi
        push ecx
        call dword ptr ds : [public_6fb35f4]
        mov eax, dword ptr ss : [esp+0x3C]
        add esp, 8
        cmp ebx, eax
        jne public_6f4f566
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6f937c0
        public_6f4f566 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        inc ecx
        jmp public_6f4f504
        public_6f4f575 : nop
        test edi, edi
        je public_6f4f5f4
        sub ebp, edi
        mov ebx, ebp
        sar ebx, 2
        test ebx, ebx
        je public_6f4f5f4
        call dword ptr ds : [public_6fb3370]
        imul eax, ebx
        mov edi, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ds : [esi+0xB4]
        mov ecx, dword ptr ss : [esp+0x38]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov eax, dword ptr ds : [edi+eax*4]
        imul eax, 0x34
        mov edx, dword ptr ds : [eax+ebp]
        add eax, ebp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        mov edx, dword ptr ds : [eax+0x30]
        xor esi, esi
        test edx, edx
        mov dword ptr ds : [ecx+0x30], edx
        jle public_6f4f5e7
        lea edx, ds:[ecx+0x10]
        sub eax, ecx
        public_6f4f5d7 : nop
        mov ebx, dword ptr ds : [eax+edx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+0x30]
        inc esi
        add edx, 4
        cmp esi, ebx
        jl public_6f4f5d7
        public_6f4f5e7 : nop
        push edi
        call public_6fa8fe0
        add esp, 4
        mov al, 1
        jmp public_6f4f5ff
        public_6f4f5f4 : nop
        push edi
        call public_6fa8fe0
        add esp, 4
        xor al, al
        public_6f4f5ff : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6f4f430)
    }
}

#undef public_6f4f49d
#undef public_6f4f4fe
#undef public_6f4f504
#undef public_6f4f566
#undef public_6f4f575
#undef public_6f4f5d7
#undef public_6f4f5e7
#undef public_6f4f5f4
#undef public_6f4f5ff
