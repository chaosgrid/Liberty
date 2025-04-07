#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632de70);
CLANG_FORWARD_JUMP_SYMBOL(public_639748c);

PROC_DECLARE(0x632dcb0, internal_632dcb0, public_632dcb0);
extern "C" NAKED register_t __cdecl internal_632dcb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639748c @0x632dcb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639748c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi+0x22C], eax
        mov dword ptr ds : [esi+0x230], eax
        mov byte ptr ds : [esi+0x234], al
        mov byte ptr ds : [esi+0x235], al
        mov byte ptr ds : [esi+0x236], al
        mov byte ptr ds : [esi+0x237], al
        mov byte ptr ds : [esi+0x238], al
        mov byte ptr ds : [esi+0x239], al
        mov byte ptr ds : [esi+0x23A], al
        mov byte ptr ds : [esi+0x23B], al
        mov byte ptr ds : [esi+0x23C], al
        mov byte ptr ds : [esi+0x23D], al
        mov byte ptr ds : [esi+0x23E], al
        mov byte ptr ds : [esi+0x23F], al
        mov byte ptr ds : [esi+0x240], al
        mov byte ptr ds : [esi+0x241], al
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [esi+0x244], eax
        mov dword ptr ds : [esi+0x248], eax
        mov byte ptr ds : [esi+0x24C], al
        mov byte ptr ds : [esi+0x24D], al
        mov byte ptr ds : [esi+0x24E], al
        mov byte ptr ds : [esi+0x24F], al
        mov byte ptr ds : [esi+0x250], al
        mov byte ptr ds : [esi+0x251], al
        mov byte ptr ds : [esi+0x252], al
        mov byte ptr ds : [esi+0x253], al
        mov byte ptr ds : [esi+0x254], al
        mov byte ptr ds : [esi+0x255], al
        mov byte ptr ds : [esi+0x256], al
        mov byte ptr ds : [esi+0x257], al
        mov byte ptr ds : [esi+0x258], al
        mov byte ptr ds : [esi+0x259], al
        mov byte ptr ss : [esp+0x10], 1
        call public_632de70
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x632dcb0)
    }
}
