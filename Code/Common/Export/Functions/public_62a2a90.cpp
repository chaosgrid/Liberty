#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288970);

PROC_DECLARE(0x62a2a90, internal_62a2a90, public_62a2a90);
extern "C" NAKED register_t __cdecl internal_62a2a90()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ds : [public_63eb360]
        mov edx, dword ptr ds : [public_63fc0ec]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_63fc0e8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [public_63fc0f0]
        lea ecx, ss:[esp+0x26]
/*FIXUP push offset public_639dccc @0x62a2abb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dccc
        push ecx
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], 2
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], 1
        mov byte ptr ss : [esp+0x36], bl
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov byte ptr ss : [esp+0x2E], bl
        call dword ptr ds : [public_639931c]
        mov edx, dword ptr ss : [esp+0x50]
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        mov byte ptr ss : [esp+0x34], bl
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3727C5AC
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x2C], edx
        call public_6288970
        add esp, 0x10
        pop esi
        pop ebx
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x62a2a90)
    }
}
