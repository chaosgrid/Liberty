#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a9c0);
CLANG_FORWARD_PROC_SYMBOL(public_57b700);

#define public_57b7a1 _public_57b7a1
#define public_57b7a6 _public_57b7a6

PROC_DECLARE(0x57b700, internal_57b700, public_57b700);
extern "C" NAKED register_t __cdecl internal_57b700()
{
    __asm
    {
        mov al, byte ptr ds : [public_67c484]
        sub esp, 0x30
        push ebx
        xor ebx, ebx
        cmp al, bl
        jne public_57b7a6
        push edi
        xor eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+8]
        rep stosd
        mov eax, dword ptr ds : [public_67eca4]
        push 0x7F05
        push ebx
        mov dword ptr ss : [esp+0x10], 0x30
        mov dword ptr ss : [esp+0x14], 0x20
        mov dword ptr ss : [esp+0x18], offset _public_57a9c0
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_5c7258]
        push 0x7F00
        push ebx
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [public_5c725c]
        mov ecx, dword ptr ds : [public_61516c]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], 6
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [public_5c7260]
        test ax, ax
        pop edi
        je public_57b7a1
        mov al, 1
        mov byte ptr ds : [public_67c484], al
        pop ebx
        add esp, 0x30
        ret 
        public_57b7a1 : nop
        mov al, byte ptr ds : [public_67c484]
        public_57b7a6 : nop
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x57b700)
    }
}

#undef public_57b7a1
#undef public_57b7a6
