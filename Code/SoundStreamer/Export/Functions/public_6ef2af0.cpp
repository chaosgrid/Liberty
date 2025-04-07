#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2af0);

PROC_DECLARE(0x6ef2af0, internal_6ef2af0, public_6ef2af0);
extern "C" NAKED register_t __cdecl internal_6ef2af0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x20]
        xor ebx, ebx
        push eax
        mov byte ptr ds : [esi+0x1C], bl
        call dword ptr ds : [public_6efc03c]
        mov cl, byte ptr ss : [esp+0xB]
        mov dl, byte ptr ss : [esp+0xB]
        push ebx
        push ebx
        mov byte ptr ds : [esi+0x38], cl
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        push ebx
        push ebx
        mov byte ptr ds : [esi+0x48], dl
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        call dword ptr ds : [public_6efc038]
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi], offset public_6efc1a4
        mov dword ptr ds : [esi+4], offset public_6efc194
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef2af0)
    }
}
