#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8440);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbd70);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

PROC_DECLARE(0x6ec8440, internal_6ec8440, public_6ec8440);
extern "C" NAKED register_t __cdecl internal_6ec8440()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+4]
        mov ecx, edi
        mov dword ptr ds : [esi], offset public_6ed2d00
        call public_6ecbd70
        mov al, byte ptr ss : [esp+0xB]
        push 0x14
        mov byte ptr ds : [esi+0x54], al
        call public_6ed0c5c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x58], eax
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [edi], offset public_6ed2c90
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x84], eax
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+0x8C], eax
        mov dword ptr ds : [esi+0x70], eax
        mov dword ptr ds : [esi+0x74], eax
        mov dword ptr ds : [esi+0x78], eax
        mov dword ptr ds : [esi+0x7C], eax
        pop edi
        mov dword ptr ds : [esi], offset public_6ed2c40
        mov dword ptr ds : [esi+8], offset public_6ed2c2c
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ec8440)
    }
}
