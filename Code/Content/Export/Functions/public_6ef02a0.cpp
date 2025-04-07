#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c6f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabf19);

#define public_6ef0356 _public_6ef0356

PROC_DECLARE(0x6ef02a0, internal_6ef02a0, public_6ef02a0);
extern "C" NAKED register_t __cdecl internal_6ef02a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabf19 @0x6ef02a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabf19
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        xor ebx, ebx
        push esi
        push edi
        mov esi, ecx
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
        mov edi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi]
        push edi
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [eax+0xB4]
        push eax
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_6fb303c]
        mov ecx, dword ptr ds : [esi+0x200]
        cmp ecx, ebx
        je public_6ef0356
        mov eax, dword ptr ds : [esi+0x204]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebx
        je public_6ef0356
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+0xC]
        push 1
        push 2
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x3C], eax
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        call dword ptr ds : [public_6fb369c]
        add esp, 0x10
        public_6ef0356 : nop
        push edi
        mov ecx, esi
        call public_6f4c6f0
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6ef02a0)
    }
}

#undef public_6ef0356
