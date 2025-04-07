#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_464dc0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb014);

PROC_DECLARE(0x464dc0, internal_464dc0, public_464dc0);
extern "C" NAKED register_t __cdecl internal_464dc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb014 @0x464dc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb014
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_59f860
        mov al, byte ptr ss : [esp+0xB]
        xor edi, edi
        push 0xC
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [esi+0x334], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x338], eax
        mov dword ptr ds : [esi+0x33C], edi
        mov cl, byte ptr ss : [esp+0xF]
        push 0xC
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+0x340], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x344], eax
        mov dword ptr ds : [esi+0x348], edi
        mov dl, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [esi+0x34C], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x350], eax
        mov dword ptr ds : [esi+0x354], edi
        mov al, byte ptr ss : [esp+0x17]
        push 0xC
        mov byte ptr ss : [esp+0x28], 3
        mov byte ptr ds : [esi+0x358], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 0x10
        mov dword ptr ds : [esi+0x35C], eax
        mov dword ptr ds : [esi+0x360], edi
        mov ecx, dword ptr ds : [public_5c62c4]
        mov edx, dword ptr ds : [public_5c62dc]
        push ecx
        push edx
        push 4
        push 0xC
        lea eax, ds:[esi+0x364]
        push eax
        mov byte ptr ss : [esp+0x2C], 4
        call public_5b7fba
        mov dword ptr ds : [esi+0x3B4], edi
        mov dword ptr ds : [esi+0x3CC], edi
        mov dword ptr ds : [esi+0x3B0], edi
        mov dword ptr ds : [esi+0x3BC], edi
        mov dword ptr ds : [esi+0x3B8], edi
        mov dword ptr ds : [esi+0x3C0], edi
        mov dword ptr ds : [esi+0x3C4], edi
        mov dword ptr ds : [esi+0x3C8], edi
        mov dword ptr ds : [esi+0x32C], edi
        mov dword ptr ds : [esi+0x330], edi
        lea ecx, ds:[esi+0x3AC]
        mov dword ptr ds : [esi], offset public_5cfac4
        mov dword ptr ds : [esi+0x7C], offset public_5cfab8
        mov dword ptr ds : [esi+0x3A8], 1
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x464dc0)
    }
}
