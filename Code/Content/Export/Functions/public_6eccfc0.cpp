#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f66ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab008);

#define public_6ecd03d _public_6ecd03d
#define public_6ecd090 _public_6ecd090
#define public_6ecd0d8 _public_6ecd0d8
#define public_6ecd0f3 _public_6ecd0f3
#define public_6ecd0ff _public_6ecd0ff

PROC_DECLARE(0x6eccfc0, internal_6eccfc0, public_6eccfc0);
extern "C" NAKED register_t __cdecl internal_6eccfc0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fab008 @0x6eccfc8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab008
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecd0ff
        mov cl, byte ptr ss : [esp+7]
        push ebx
        push ebp
        push esi
        push 0xC
        mov byte ptr ss : [esp+0x20], cl
        call public_6fa912a
        mov esi, eax
        mov dword ptr ds : [esi], esi
        mov dword ptr ds : [esi+4], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], ebp
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x18], eax
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x38], ebp
        call public_6fa912a
        add esp, 8
        cmp ebx, ebp
        mov dword ptr ds : [eax], esi
        mov ecx, ebx
        jne public_6ecd03d
        mov ecx, eax
        public_6ecd03d : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 8
        push eax
        call public_6eb6740
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edi+4]
        add esp, 8
        inc edx
        mov dword ptr ss : [esp+0x24], edx
        lea edx, ds:[edi+0xC]
        push edx
        call public_6f15710
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov ebp, eax
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], ebp
        jne public_6ecd090
        mov ebx, eax
        public_6ecd090 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x18]
        push ecx
        add eax, 8
        push eax
        call public_6eb6740
        mov ebp, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [edi+0x40]
        push 0
        push edx
        lea eax, ss:[esp+0x2C]
        inc ebp
        push eax
        mov dword ptr ss : [esp+0x38], ebp
        call public_6f66ec0
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax]
        add esp, 0x14
        cmp esi, eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov edi, eax
        je public_6ecd0f3
        public_6ecd0d8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6ecfe80
        cmp esi, edi
        jne public_6ecd0d8
        mov eax, dword ptr ss : [esp+0x20]
        public_6ecd0f3 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        pop esi
        pop ebp
        pop ebx
        public_6ecd0ff : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov al, 1
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6eccfc0)
    }
}

#undef public_6ecd03d
#undef public_6ecd090
#undef public_6ecd0d8
#undef public_6ecd0f3
#undef public_6ecd0ff
