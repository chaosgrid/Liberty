#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4eb0);

PROC_DECLARE(0x4c4eb0, internal_4c4eb0, public_4c4eb0);
extern "C" NAKED register_t __cdecl internal_4c4eb0()
{
    __asm
    {
        sub esp, 0x80
        mov ecx, dword ptr ds : [public_61226c]
        mov eax, dword ptr ss : [esp+0x8C]
        mov edx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [public_673390], eax
        mov dword ptr ss : [esp], ecx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [public_673354]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [edx]
        xor eax, eax
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov byte ptr ss : [esp+8], al
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x2C], eax
        push 0x34
        lea eax, ss:[esp+4]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        mov eax, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0xC], 2
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x120]
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4c4eb0)
    }
}
