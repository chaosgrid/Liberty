#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc10);
CLANG_FORWARD_PROC_SYMBOL(public_42cc30);
CLANG_FORWARD_PROC_SYMBOL(public_4a3ff0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcb84);

PROC_DECLARE(0x4a3ff0, internal_4a3ff0, public_4a3ff0);
extern "C" NAKED register_t __cdecl internal_4a3ff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcb84 @0x4a3ff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcb84
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_59f860
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x32C], offset public_5cbed8
        lea edi, ds:[esi+0x564]
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 1
        call public_42cc10
        lea ecx, ds:[esi+0x668]
        mov byte ptr ss : [esp+0x18], 2
        call dword ptr ds : [public_5c6030]
        mov ecx, edi
        mov dword ptr ds : [esi], offset public_5d3fdc
        mov dword ptr ds : [esi+0x7C], offset public_5d3fd0
        mov dword ptr ds : [esi+0x32C], offset public_5d3fc8
        mov dword ptr ds : [esi+0x33C], ebx
        mov dword ptr ds : [esi+0x340], ebx
        mov dword ptr ds : [esi+0x578], ebx
        mov dword ptr ds : [esi+0x57C], ebx
        mov dword ptr ds : [esi+0x580], ebx
        mov dword ptr ds : [esi+0x584], ebx
        mov dword ptr ds : [esi+0x588], ebx
        mov dword ptr ds : [esi+0x58C], ebx
        mov dword ptr ds : [esi+0x590], ebx
        mov dword ptr ds : [esi+0x660], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x664], ebx
        mov dword ptr ds : [esi+0x344], ebx
        mov dword ptr ds : [esi+0x348], ebx
        mov dword ptr ds : [esi+0x34C], ebx
        mov dword ptr ds : [esi+0x350], ebx
        mov dword ptr ds : [esi+0x354], ebx
        mov dword ptr ds : [esi+0x560], ebx
        call public_42cc30
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0x66C], bl
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4a3ff0)
    }
}
