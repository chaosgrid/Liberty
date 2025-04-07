#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630f660);

PROC_DECLARE(0x630f660, internal_630f660, public_630f660);
extern "C" NAKED register_t __cdecl internal_630f660()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push ebx
        mov byte ptr ds : [esi], al
        call dword ptr ds : [public_63991b8]
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov byte ptr ds : [esi+0x28], bl
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x142C], ebx
        mov dword ptr ds : [esi+0x1430], ebx
        mov dword ptr ds : [esi+0x1434], ebx
        mov dword ptr ds : [esi+0x1438], eax
        mov dword ptr ds : [esi+0x143C], ebx
        mov dword ptr ds : [esi+0x1440], ebx
        mov dword ptr ds : [esi+0x1444], ebx
        mov dword ptr ds : [esi+0x1448], ebx
        mov dword ptr ds : [esi+0x144C], ebx
        mov dword ptr ds : [esi+0x1450], ebx
        mov dword ptr ds : [esi+0x1454], ebx
        mov dword ptr ds : [esi+0x145C], ebx
        mov byte ptr ds : [esi+0x1428], cl
        mov byte ptr ds : [esi+0x1564], bl
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x630f660)
    }
}
