#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5a3210);

PROC_DECLARE(0x5a3210, internal_5a3210, public_5a3210);
extern "C" NAKED register_t __cdecl internal_5a3210()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call public_59f860
        mov cl, byte ptr ss : [esp+7]
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x34C], eax
        mov dword ptr ds : [esi+0x33C], eax
        mov dword ptr ds : [esi+0x32C], eax
        xor eax, eax
        mov dword ptr ds : [esi+0x348], eax
        mov dword ptr ds : [esi+0x344], eax
        mov dword ptr ds : [esi+0x340], eax
        mov dword ptr ds : [esi+0x338], eax
        mov dword ptr ds : [esi+0x334], eax
        mov dword ptr ds : [esi+0x330], eax
        mov dword ptr ds : [esi+0x358], eax
        mov dword ptr ds : [esi+0x354], eax
        mov dword ptr ds : [esi+0x350], eax
        mov byte ptr ds : [esi+0x368], cl
        mov dword ptr ds : [esi+0x36C], eax
        mov dword ptr ds : [esi+0x370], eax
        mov dword ptr ds : [esi+0x374], eax
        mov byte ptr ds : [esi+0x37B], al
        mov byte ptr ds : [esi+0x37A], al
        mov byte ptr ds : [esi+0x379], al
        mov byte ptr ds : [esi+0x378], al
        mov cl, byte ptr ds : [esi+0x35D]
        mov dword ptr ds : [esi+0x380], eax
        mov byte ptr ds : [esi+0x37C], al
        and cl, 0xFE
        mov byte ptr ds : [esi+0x35E], al
        mov byte ptr ds : [esi+0x35F], al
        mov dword ptr ds : [esi+0x360], eax
        mov dword ptr ds : [esi], offset public_5e6084
        mov dword ptr ds : [esi+0x7C], offset public_5e6078
        mov byte ptr ds : [esi+0x35C], 0x60
        mov byte ptr ds : [esi+0x35D], cl
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5a3210)
    }
}
