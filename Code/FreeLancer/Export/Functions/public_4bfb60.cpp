#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bfb60);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);

PROC_DECLARE(0x4bfb60, internal_4bfb60, public_4bfb60);
extern "C" NAKED register_t __cdecl internal_4bfb60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59f860
        mov dword ptr ds : [esi+0x32C], offset public_5cbed8
        xor eax, eax
        mov dword ptr ds : [esi], offset public_5d62ac
        mov dword ptr ds : [esi+0x7C], offset public_5d629c
        mov dword ptr ds : [esi+0x32C], offset public_5d6294
        mov dword ptr ds : [public_6724b4], esi
        mov dword ptr ds : [esi+0x330], eax
        mov dword ptr ds : [esi+0x334], eax
        mov dword ptr ds : [esi+0x338], eax
        mov dword ptr ds : [esi+0x424], eax
        mov dword ptr ds : [esi+0x428], eax
        mov dword ptr ds : [esi+0x3A0], eax
        mov dword ptr ds : [esi+0x3A4], eax
        mov dword ptr ds : [esi+0x3A8], eax
        mov dword ptr ds : [esi+0x398], eax
        mov dword ptr ds : [esi+0x39C], eax
        mov dword ptr ds : [esi+0x430], eax
        mov dword ptr ds : [esi+0x3B4], eax
        mov dword ptr ds : [esi+0x3B8], eax
        mov dword ptr ds : [esi+0x3BC], eax
        mov dword ptr ds : [esi+0x3D8], eax
        mov dword ptr ds : [esi+0x3DC], eax
        mov dword ptr ds : [esi+0x3E0], eax
        mov dword ptr ds : [esi+0x3C0], eax
        mov dword ptr ds : [esi+0x3C4], eax
        mov dword ptr ds : [esi+0x3E8], eax
        mov dword ptr ds : [esi+0x3EC], eax
        mov dword ptr ds : [esi+0x3F0], eax
        mov dword ptr ds : [esi+0x3F4], eax
        mov byte ptr ds : [esi+0x418], al
        mov byte ptr ds : [esi+0x419], al
        mov dword ptr ds : [esi+0x410], eax
        mov dword ptr ds : [esi+0x414], eax
        mov dword ptr ds : [esi+0x3AC], eax
        mov dword ptr ds : [esi+0x3B0], eax
        mov dword ptr ds : [esi+0x390], eax
        mov dword ptr ds : [esi+0x33C], eax
        mov dword ptr ds : [esi+0x344], eax
        mov dword ptr ds : [esi+0x348], eax
        mov dword ptr ds : [esi+0x34C], eax
        mov dword ptr ds : [esi+0x350], eax
        mov dword ptr ds : [esi+0x354], eax
        mov dword ptr ds : [esi+0x358], eax
        mov dword ptr ds : [esi+0x364], eax
        mov byte ptr ds : [esi+0x360], al
        mov dword ptr ds : [esi+0x41C], eax
        mov dword ptr ds : [esi+0x420], eax
        mov dword ptr ds : [esi+0x368], eax
        mov dword ptr ds : [esi+0x36C], eax
        mov dword ptr ds : [esi+0x370], eax
        mov dword ptr ds : [esi+0x374], eax
        mov dword ptr ds : [esi+0x378], eax
        mov dword ptr ds : [esi+0x37C], eax
        mov dword ptr ds : [esi+0x380], eax
        mov dword ptr ds : [esi+0x384], eax
        mov dword ptr ds : [esi+0x388], eax
        mov dword ptr ds : [esi+0x38C], eax
        mov dword ptr ds : [esi+0x340], eax
        mov byte ptr ds : [esi+0x434], al
        mov byte ptr ds : [esi+0x435], al
        mov dword ptr ds : [esi+0x3C8], eax
        mov dword ptr ds : [esi+0x3CC], eax
        mov dword ptr ds : [esi+0x3F8], eax
        mov dword ptr ds : [esi+0x3FC], eax
        mov dword ptr ds : [esi+0x3D0], eax
        mov dword ptr ds : [esi+0x3D4], eax
        mov dword ptr ds : [esi+0x400], eax
        mov dword ptr ds : [esi+0x404], eax
        mov dword ptr ds : [esi+0x408], eax
        mov dword ptr ds : [esi+0x40C], eax
        mov dword ptr ds : [esi+0x42C], 0xFFFFFFFF
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4bfb60)
    }
}
