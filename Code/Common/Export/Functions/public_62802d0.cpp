#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62802d0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352140);
CLANG_FORWARD_PROC_SYMBOL(public_6369e70);
CLANG_FORWARD_PROC_SYMBOL(public_6369f20);
CLANG_FORWARD_PROC_SYMBOL(public_636a050);
CLANG_FORWARD_PROC_SYMBOL(public_636a0b0);
CLANG_FORWARD_PROC_SYMBOL(public_636c9a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6392e56);

#define public_6280386 _public_6280386
#define public_62803ca _public_62803ca
#define public_6280518 _public_6280518

PROC_DECLARE(0x62802d0, internal_62802d0, public_62802d0);
extern "C" NAKED register_t __cdecl internal_62802d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6392e56 @0x62802d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392e56
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_63fc030]
        mov dword ptr fs : [0], esp
        sub esp, 0x108
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        jne public_6280518
        lea ecx, ss:[esp+0x78]
        call public_6369e70
        mov dword ptr ss : [esp+0x114], ebx
        mov word ptr ss : [esp+4], bx
        mov word ptr ss : [esp+6], bx
        mov dword ptr ss : [esp+8], ebx
        lea ecx, ss:[esp+4]
        mov byte ptr ss : [esp+0x114], 1
        mov dword ptr ss : [esp+0x28], 0xBF000000
        mov dword ptr ss : [esp+0x2C], 0xBF000000
        mov dword ptr ss : [esp+0x30], 0x3F000000
        call public_63441a0
        movzx eax, word ptr ss : [esp+6]
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x28]
        mov dword ptr ds : [edx+eax*4], ecx
        mov ax, word ptr ss : [esp+6]
        inc ax
        cmp ax, word ptr ss : [esp+4]
        mov word ptr ss : [esp+6], ax
        mov dword ptr ss : [esp+0x38], 0x3F000000
        mov dword ptr ss : [esp+0x3C], 0xBF000000
        mov dword ptr ss : [esp+0x40], 0x3F000000
        jb public_6280386
        lea ecx, ss:[esp+4]
        call public_63441a0
        public_6280386 : nop
        movzx eax, word ptr ss : [esp+6]
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x38]
        mov dword ptr ds : [edx+eax*4], ecx
        mov ax, word ptr ss : [esp+6]
        inc ax
        cmp ax, word ptr ss : [esp+4]
        mov word ptr ss : [esp+6], ax
        mov dword ptr ss : [esp+0x48], 0x3F000000
        mov dword ptr ss : [esp+0x4C], 0x3F000000
        mov dword ptr ss : [esp+0x50], 0x3F000000
        jb public_62803ca
        lea ecx, ss:[esp+4]
        call public_63441a0
        public_62803ca : nop
        movzx eax, word ptr ss : [esp+6]
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x48]
        mov dword ptr ds : [edx+eax*4], ecx
        inc word ptr ss : [esp+6]
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x58], 0xBF000000
        mov dword ptr ss : [esp+0x5C], 0x3F000000
        mov dword ptr ss : [esp+0x60], 0x3F000000
        call public_6352140
        movzx eax, word ptr ss : [esp+6]
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x58]
        mov dword ptr ds : [edx+eax*4], ecx
        inc word ptr ss : [esp+6]
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0xBF000000
        call public_6352140
        movzx eax, word ptr ss : [esp+6]
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x68]
        mov dword ptr ds : [edx+eax*4], ecx
        inc word ptr ss : [esp+6]
        lea eax, ss:[esp+4]
        push eax
        call public_636c9a0
        add esp, 4
        push eax
        lea ecx, ss:[esp+0x7C]
        call public_636a050
        lea ecx, ss:[esp+0x18]
        mov eax, 1
        push ecx
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], eax
        call public_636a0b0
        mov dword ptr ss : [esp+0x14], 0xBF000000
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_63fc030], eax
        mov dword ptr ss : [esp+0xC], 0xBF000000
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0xBF000000
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_63fc03c], ecx
        mov dword ptr ss : [esp+0x14], 0x3F000000
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_63fc034], edx
        mov dword ptr ds : [public_63fc038], eax
        mov dword ptr ss : [esp+0xC], 0x3F000000
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0x3F000000
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_63fc048], ecx
        lea ecx, ss:[esp+4]
        mov dword ptr ds : [public_63fc040], edx
        mov dword ptr ds : [public_63fc044], eax
        mov byte ptr ss : [esp+0x114], bl
        call public_63449d0
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x114], 0xFFFFFFFF
        call public_6369f20
        public_6280518 : nop
        mov ecx, dword ptr ss : [esp+0x10C]
        mov eax, offset public_63fc02c
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x62802d0)
    }
}

#undef public_6280386
#undef public_62803ca
#undef public_6280518
