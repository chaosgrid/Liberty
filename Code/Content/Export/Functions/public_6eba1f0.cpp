#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eba1f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab032);

#define public_6eba333 _public_6eba333

PROC_DECLARE(0x6eba1f0, internal_6eba1f0, public_6eba1f0);
extern "C" NAKED register_t __cdecl internal_6eba1f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fab032 @0x6eba1f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab032
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x2CD]
        xor ebx, ebx
        cmp al, bl
        je public_6eba333
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [esi+0x2D0]
        jne public_6eba333
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [esi+0xC]
        jne public_6eba333
        push ebp
        push edi
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov edi, dword ptr ds : [public_6fb303c]
        push 0x54C4
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x4C], ebx
        call edi
        mov ebp, dword ptr ds : [public_6fb3038]
        lea ecx, ss:[esp+0x28]
        call ebp
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        push 0x54C5
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x4C], 1
        call edi
        lea ecx, ss:[esp+0x10]
        call ebp
        mov edx, dword ptr ds : [esi+0xC]
        push 5
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3644]
        mov byte ptr ds : [esi+0x2CC], 1
        mov esi, dword ptr ds : [public_6fb3034]
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x48], bl
        call esi
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call esi
        pop edi
        pop ebp
        public_6eba333 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6eba1f0)
    }
}

#undef public_6eba333
