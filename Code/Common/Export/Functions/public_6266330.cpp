#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a5e0);
CLANG_FORWARD_PROC_SYMBOL(public_626b560);
CLANG_FORWARD_PROC_SYMBOL(public_626c230);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392648);

#define public_6266396 _public_6266396
#define public_62663a4 _public_62663a4
#define public_62663af _public_62663af
#define public_62663b7 _public_62663b7
#define public_62663c3 _public_62663c3
#define public_62663e3 _public_62663e3
#define public_62663f7 _public_62663f7
#define public_6266434 _public_6266434
#define public_6266440 _public_6266440
#define public_626646a _public_626646a

PROC_DECLARE(0x6266330, internal_6266330, public_6266330);
extern "C" NAKED register_t __cdecl internal_6266330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392648 @0x6266332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x20]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov dword ptr ss : [esp+0x1C], esi
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        push ebp
        push ebp
        push ebp
        mov dword ptr ss : [esp+0x34], ebp
        call public_626c230
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        mov edi, eax
        push edi
        mov ecx, esi
        call public_628f050
        mov ebx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, ebp
        jne public_6266396
        xor edx, edx
        mov dword ptr ss : [esp+0x10], edx
        jmp public_62663a4
        public_6266396 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x10], eax
        mov edx, eax
        public_62663a4 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        jne public_62663af
        xor eax, eax
        jmp public_62663b7
        public_62663af : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_62663b7 : nop
        cmp eax, edx
        jae public_6266434
        cmp edx, ebp
        mov eax, edx
        jge public_62663c3
        xor eax, eax
        public_62663c3 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6391d9c
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_62663f7
        public_62663e3 : nop
        push edi
        push ebx
        call public_62bee40
        add edi, 8
        add esp, 8
        add ebx, 8
        cmp edi, ebp
        jne public_62663e3
        public_62663f7 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_628f050
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_626a5e0
        mov ebx, dword ptr ss : [esp+0x30]
        lea edx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        public_6266434 : nop
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        je public_626646a
        lea esp, ss:[esp]
        public_6266440 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 0x3F800000
        call public_626b560
        mov eax, dword ptr ds : [ebx+8]
        add edi, 4
        cmp edi, eax
        jne public_6266440
        public_626646a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6266330)
    }
}

#undef public_6266396
#undef public_62663a4
#undef public_62663af
#undef public_62663b7
#undef public_62663c3
#undef public_62663e3
#undef public_62663f7
#undef public_6266434
#undef public_6266440
#undef public_626646a
