#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0958);

#define public_534e9b _public_534e9b
#define public_534ea0 _public_534ea0
#define public_534eb4 _public_534eb4
#define public_534ee6 _public_534ee6
#define public_534ee8 _public_534ee8
#define public_534f28 _public_534f28
#define public_534f2a _public_534f2a
#define public_534fb9 _public_534fb9
#define public_534fbd _public_534fbd
#define public_534fc4 _public_534fc4
#define public_534fcb _public_534fcb
#define public_534fcf _public_534fcf
#define public_534fd4 _public_534fd4

PROC_DECLARE(0x534e60, internal_534e60, public_534e60);
extern "C" NAKED register_t __cdecl internal_534e60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0958 @0x534e68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0958
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        xor ebx, ebx
        cmp esi, 0xFFFFFFFF
        push edi
        mov edi, ecx
        mov ebp, 0xFFFFFFFB
        je public_534e9b
        call public_54bb00
        cmp esi, eax
        mov byte ptr ss : [esp+0x40], bl
        jne public_534ea0
        public_534e9b : nop
        mov byte ptr ss : [esp+0x40], 1
        public_534ea0 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_534eb4
        cmp byte ptr ss : [esp+0x40], bl
        je public_534fcb
        public_534eb4 : nop
        mov ebp, dword ptr ss : [esp+0x3C]
        cmp ebp, ebx
        je public_534fc4
        add edi, 0xFFFFFFFC
        cmp edi, ebx
        je public_534ee6
        lea eax, ds:[edi+0xC]
        cmp eax, ebx
        je public_534ee6
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_534ee6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_534ee8
        public_534ee6 : nop
        xor eax, eax
        public_534ee8 : nop
        mov edx, dword ptr ss : [esp+0x38]
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        mov esi, eax
        cmp esi, ebx
        je public_534fbd
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_534f28
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_534f2a
        public_534f28 : nop
        xor eax, eax
        public_534f2a : nop
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c699c]
        cmp eax, ebx
        jne public_534fcf
        mov al, byte ptr ss : [esp+0x40]
        xor esi, esi
        cmp al, bl
        je public_534fb9
        mov dl, byte ptr ss : [esp+0x38]
        mov byte ptr ss : [esp+0x18], dl
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dx, word ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        mov word ptr ss : [esp+0x14], dx
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x38]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x44], eax
        call public_537260
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [public_673344]
        push edx
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_5b7e1d
        add esp, 4
        public_534fb9 : nop
        mov eax, esi
        jmp public_534fd4
        public_534fbd : nop
        mov eax, 0xFFFFFFFE
        jmp public_534fd4
        public_534fc4 : nop
        mov eax, 0xFFFFFFFC
        jmp public_534fd4
        public_534fcb : nop
        mov eax, ebp
        jmp public_534fd4
        public_534fcf : nop
        mov eax, 0xFFFFFFFB
        public_534fd4 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x534e60)
    }
}

#undef public_534e9b
#undef public_534ea0
#undef public_534eb4
#undef public_534ee6
#undef public_534ee8
#undef public_534f28
#undef public_534f2a
#undef public_534fb9
#undef public_534fbd
#undef public_534fc4
#undef public_534fcb
#undef public_534fcf
#undef public_534fd4
