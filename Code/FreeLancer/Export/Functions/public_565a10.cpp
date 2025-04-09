#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_565a10);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1fc8);

#define public_565c07 _public_565c07
#define public_565c31 _public_565c31
#define public_565d7b _public_565d7b

PROC_DECLARE(0x565a10, internal_565a10, public_565a10);
extern "C" NAKED register_t __cdecl internal_565a10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c1fc8 @0x565a18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1fc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x70
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x14]
        xor ebx, ebx
        cmp eax, ebx
        je public_565d7b
        push esi
        push edi
        call public_4225e0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x60]
        push edx
        push 0x16
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], 0x16
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x58], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x94], ebx
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        push 8
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x94], 1
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        push 7
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], 7
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x94], 2
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov byte ptr ss : [esp+0x88], 3
        lea edx, ss:[esp+0x30]
        push edx
        push 0x13
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], 0x13
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push 5
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push 0x14
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0x14
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x94], 4
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push 6
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push 0x1B
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0x1B
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x94], 5
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov byte ptr ss : [esp+0x88], 6
        mov esi, offset public_5e2558
        mov eax, 1
        public_565c07 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push ebx
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_565c07
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5e2590
        mov eax, 1
        public_565c31 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_565c31
        mov eax, dword ptr ds : [public_610850]
        mov ecx, dword ptr ds : [public_610854]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ss : [ebp+0x14]
        push 0x3F800000
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x68], 0x3F800000
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        mov dword ptr ss : [esp+0x70], 0x3F800000
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x64]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        mov byte ptr ss : [esp+0x94], 5
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        mov byte ptr ss : [esp+0x94], 4
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push eax
        mov byte ptr ss : [esp+0x94], 3
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        push eax
        mov byte ptr ss : [esp+0x94], 2
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        push eax
        mov byte ptr ss : [esp+0x94], 1
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        push eax
        mov byte ptr ss : [esp+0x94], bl
        call dword ptr ds : [ecx+0xF0]
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x88], 0xFFFFFFFF
        call public_405840
        pop edi
        pop esi
        public_565d7b : nop
        mov ecx, dword ptr ss : [esp+0x78]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 
        UNREACHABLE_TRAP(0x565a10)
    }
}

#undef public_565c07
#undef public_565c31
#undef public_565d7b
