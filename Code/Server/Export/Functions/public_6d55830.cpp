#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5c050);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63a08);

#define public_6d55902 _public_6d55902
#define public_6d5592a _public_6d5592a
#define public_6d55939 _public_6d55939
#define public_6d5594d _public_6d5594d

PROC_DECLARE(0x6d55830, internal_6d55830, public_6d55830);
extern "C" NAKED register_t __cdecl internal_6d55830()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d63a08 @0x6d55838*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63a08
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [esi]
        xor ebx, ebx
        cmp ecx, ebx
        mov eax, 0xFFFFFFFE
        jbe public_6d5594d
        mov edx, dword ptr ds : [public_6d90264]
        dec ecx
        cmp ecx, edx
        jae public_6d5594d
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], ebx
        je public_6d5594d
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], bl
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], bl
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [public_6d64788]
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jne public_6d55902
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        lea eax, ds:[ecx+edx-0x418]
        mov byte ptr ds : [eax+0x340], 1
        public_6d55902 : nop
        cmp byte ptr ss : [esp+0x40], bl
        lea edx, ss:[esp+8]
        push edx
        je public_6d5592a
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov ecx, dword ptr ds : [eax+ecx-0x14]
        cmp ecx, ebx
        je public_6d5592a
        call public_6d5c050
        jmp public_6d55939
        public_6d5592a : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x118]
        public_6d55939 : nop
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [public_6d64694]
        mov eax, ebx
        public_6d5594d : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6d55830)
    }
}

#undef public_6d55902
#undef public_6d5592a
#undef public_6d55939
#undef public_6d5594d
