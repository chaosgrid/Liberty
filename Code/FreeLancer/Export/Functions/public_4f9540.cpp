#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f9540);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf4a9);

PROC_DECLARE(0x4f9540, internal_4f9540, public_4f9540);
extern "C" NAKED register_t __cdecl internal_4f9540()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bf4a9 @0x4f9548*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf4a9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        mov dword ptr fs : [0], esp
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x30], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x40], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x58], 1
        mov dword ptr ds : [eax+0x5C], edx
        mov dword ptr ds : [eax+0x68], ecx
        mov dword ptr ds : [eax+0x64], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax+0x6C], ecx
        mov dword ptr ds : [eax+0x70], ecx
        mov ecx, 0xBF800000
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [eax+0x7C], ecx
        mov dword ptr ds : [eax+0x74], 0x42480000
        mov dword ptr ds : [eax+0x80], 0x3DCCCCCD
        mov dword ptr ds : [eax], offset public_5d9dac
        inc dword ptr ds : [public_674f58]
        mov ecx, dword ptr ss : [esp]
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x4f9540)
    }
}
