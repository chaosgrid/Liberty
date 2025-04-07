#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6296f40);
CLANG_FORWARD_PROC_SYMBOL(public_62992b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393830);

PROC_DECLARE(0x6296f40, internal_6296f40, public_6296f40);
extern "C" NAKED register_t __cdecl internal_6296f40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov edx, dword ptr ss : [esp+8]
        push 0xFFFFFFFF
/*FIXUP push public_6393830 @0x6296f4c*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393830
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], esp
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push edx
        push eax
        push 0x80
        mov ecx, esi
        call public_62992b0
        xor eax, eax
        mov dword ptr ds : [esi+0x1F8], eax
        mov dword ptr ds : [esi+0x1FC], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x204], eax
        mov dword ptr ds : [esi+0x208], eax
        mov byte ptr ds : [esi+0x20C], al
        mov dl, 1
        mov byte ptr ds : [esi+0x200], dl
        mov ecx, offset public_639d200
        mov dword ptr ds : [esi+0x1F4], ecx
        mov dword ptr ds : [esi+0x214], eax
        mov dword ptr ds : [esi+0x218], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x21C], dl
        mov dword ptr ds : [esi+0x220], eax
        mov dword ptr ds : [esi+0x224], eax
        mov byte ptr ds : [esi+0x228], al
        mov dword ptr ds : [esi+0x210], ecx
        mov dword ptr ds : [esi+0x250], eax
        mov dword ptr ds : [esi+0x254], eax
        mov cx, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [esi+0x258], cx
        mov dword ptr ds : [esi+0x25C], eax
        mov dword ptr ds : [esi+0x260], eax
        mov dword ptr ds : [esi+0x264], eax
        mov dword ptr ds : [esi+0x268], 0x7F7FFFFF
        mov dword ptr ds : [esi], offset public_639d13c
        mov ecx, 0x3F800000
        mov dword ptr ds : [esi+0x24C], ecx
        mov dword ptr ds : [esi+0x23C], ecx
        mov dword ptr ds : [esi+0x22C], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [esi+0x248], eax
        mov dword ptr ds : [esi+0x244], eax
        mov dword ptr ds : [esi+0x240], eax
        mov dword ptr ds : [esi+0x238], eax
        mov dword ptr ds : [esi+0x234], eax
        mov dword ptr ds : [esi+0x230], eax
        mov dword ptr ds : [esi+0x26C], eax
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x6296f40)
    }
}
