#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb9760);
CLANG_FORWARD_PROC_SYMBOL(public_6f0fda0);
CLANG_FORWARD_PROC_SYMBOL(public_6f171a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49090);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_JUMP_SYMBOL(public_6faafe9);

#define public_6eb97b4 _public_6eb97b4
#define public_6eb9849 _public_6eb9849

PROC_DECLARE(0x6eb9760, internal_6eb9760, public_6eb9760);
extern "C" NAKED register_t __cdecl internal_6eb9760()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faafe9 @0x6eb9768*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faafe9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2E8]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_6eb9849
        lea edi, ds:[esi+0xC]
        push edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eb9849
        cmp dword ptr ds : [esi+0x2E8], 1
        jne public_6eb97b4
        mov dword ptr ds : [esi+0x2E8], 0x4CF
        public_6eb97b4 : nop
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
        mov eax, dword ptr ds : [esi+0x2E8]
        push eax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [public_6fb303c]
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_6fb3038]
        push 1
        push 1
        lea ecx, ss:[esp+0x14]
        push ecx
        push edi
        call dword ptr ds : [public_6fb369c]
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0x10
        push 7
        call public_6f49090
        mov ecx, esi
        call public_6f171a0
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        public_6eb9849 : nop
        mov ecx, esi
        call public_6f0fda0
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6eb9760)
    }
}

#undef public_6eb97b4
#undef public_6eb9849
