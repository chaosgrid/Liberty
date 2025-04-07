#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb9cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_JUMP_SYMBOL(public_6faafe9);

#define public_6eb9daa _public_6eb9daa

PROC_DECLARE(0x6eb9cd0, internal_6eb9cd0, public_6eb9cd0);
extern "C" NAKED register_t __cdecl internal_6eb9cd0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faafe9 @0x6eb9cd8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faafe9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0xC]
        push edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eb9daa
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [edi]
        jne public_6eb9daa
        mov ecx, dword ptr ds : [esi+8]
        call public_6f487c0
        cmp eax, dword ptr ds : [esi+4]
        jne public_6eb9daa
        push ebx
        xor ebx, ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
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
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov edx, dword ptr ds : [esi+0x2E8]
        push edx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [public_6fb303c]
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_6fb3038]
        push 1
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push edi
        call dword ptr ds : [public_6fb369c]
        add esp, 0x10
        lea ecx, ss:[esp+0xC]
        mov byte ptr ds : [esi+0x19], 1
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        pop ebx
        public_6eb9daa : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6eb9cd0)
    }
}

#undef public_6eb9daa
