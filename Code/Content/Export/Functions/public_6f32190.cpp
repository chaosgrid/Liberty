#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32190);
CLANG_FORWARD_JUMP_SYMBOL(public_6faea42);

PROC_DECLARE(0x6f32190, internal_6f32190, public_6f32190);
extern "C" NAKED register_t __cdecl internal_6f32190()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faea42 @0x6f32192*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faea42
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov byte ptr ss : [esp+0x2E], bl
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov dword ptr ss : [esp+0x40], ebx
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
        lea eax, ss:[esp+8]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        add ecx, 8
        push ecx
        mov byte ptr ss : [esp+0x4C], 1
        call dword ptr ds : [public_6fb34fc]
        add esp, 0xC
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [esp+0x48]
        mov esi, dword ptr ds : [public_6fb3034]
        lea eax, ds:[eax+eax*4]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        inc eax
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+8]
        mov byte ptr ss : [esp+0x40], bl
        call esi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call esi
        mov ecx, dword ptr ss : [esp+0x38]
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6f32190)
    }
}
