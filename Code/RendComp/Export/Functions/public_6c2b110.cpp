#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2b110);
CLANG_FORWARD_PROC_SYMBOL(public_6c2b230);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

PROC_DECLARE(0x6c2b110, internal_6c2b110, public_6c2b110);
extern "C" NAKED register_t __cdecl internal_6c2b110()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6c36384
        push edi
        mov dword ptr ds : [esi+4], offset public_6c361dc
        push 0xC
        mov byte ptr ds : [esi+0x2C], al
        call public_6c34eac
        mov cl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], 0
        push 0xC
        mov byte ptr ds : [esi+0x38], cl
        call public_6c34eac
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x3C], eax
        add esp, 8
        mov dword ptr ds : [esi+0x40], 0
        xor eax, eax
        mov dword ptr ds : [esi], offset public_6c36348
        mov dword ptr ds : [esi+4], offset public_6c36338
        mov ecx, 0x1C
        lea edi, ds:[esi+0x44]
        push 0xFFFFFFFF
        rep stosd
        push eax
        mov ecx, esi
        call public_6c2b230
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c2b110)
    }
}
