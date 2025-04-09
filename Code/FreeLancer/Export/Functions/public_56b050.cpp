#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56b050);
CLANG_FORWARD_PROC_SYMBOL(public_591ae0);
CLANG_FORWARD_PROC_SYMBOL(public_591e30);
CLANG_FORWARD_PROC_SYMBOL(public_594580);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2904);

PROC_DECLARE(0x56b050, internal_56b050, public_56b050);
extern "C" NAKED register_t __cdecl internal_56b050()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c2904 @0x56b052*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2904
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x8C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], esi
        call public_594580
        push eax
        mov ecx, esi
        call public_591ae0
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ebx
        call public_591e30
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov al, byte ptr ss : [esp+0xF]
        mov byte ptr ds : [esi+0x118], bl
        push 0xC
        mov byte ptr ss : [esp+0x20], 0x10
        mov byte ptr ds : [esi+0x31C], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x320], eax
        mov dword ptr ds : [esi+0x324], ebx
        mov cl, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ss : [esp+0x24], 0x11
        mov byte ptr ds : [esi+0x328], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x32C], eax
        mov dword ptr ds : [esi+0x330], ebx
        mov dl, byte ptr ss : [esp+0x17]
        push 0xC
        mov byte ptr ss : [esp+0x28], 0x12
        mov byte ptr ds : [esi+0x334], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x338], eax
        mov dword ptr ds : [esi+0x33C], ebx
        mov al, byte ptr ss : [esp+0x1B]
        mov byte ptr ss : [esp+0x28], 0x13
        mov byte ptr ds : [esi+0x340], al
        push 0xC
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x344], eax
        mov dword ptr ds : [esi+0x348], ebx
        mov cl, byte ptr ss : [esp+0x1F]
        push 0xC
        mov byte ptr ss : [esp+0x30], 0x14
        mov byte ptr ds : [esi+0x34C], cl
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x23]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x350], eax
        mov dword ptr ds : [esi+0x354], ebx
        mov dword ptr ds : [esi+0x35C], ebx
        mov dword ptr ds : [esi+0x360], ebx
        mov dword ptr ds : [esi+0x364], ebx
        mov byte ptr ds : [esi+0x358], dl
        add esp, 0x14
        mov byte ptr ds : [esi+0x368], bl
        mov byte ptr ds : [esi+0x369], bl
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0x108], ebx
        mov byte ptr ds : [esi+0x110], bl
        pop edi
        mov dword ptr ds : [esi], offset public_5e2a84
        mov dword ptr ds : [esi+0x7C], offset public_5e2a6c
        mov dword ptr ds : [esi+0x80], offset public_5e2a64
        mov dword ptr ds : [esi+0x10C], 0x3FF00000
        mov dword ptr ds : [esi+0x114], 0xFFFFFFFF
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x56b050)
    }
}
