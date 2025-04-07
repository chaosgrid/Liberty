#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ed90);
CLANG_FORWARD_PROC_SYMBOL(public_44f310);
CLANG_FORWARD_PROC_SYMBOL(public_44f410);
CLANG_FORWARD_PROC_SYMBOL(public_44f720);

#define public_44f7dd _public_44f7dd

PROC_DECLARE(0x44f720, internal_44f720, public_44f720);
extern "C" NAKED register_t __cdecl internal_44f720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+0x10]
        push ebx
        mov ebx, dword ptr ds : [public_5c60cc]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x3C], eax
        mov al, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x50], ecx
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi+0x55], al
        mov al, byte ptr ss : [esp+0x30]
        mov byte ptr ds : [esi+0x56], cl
        mov cl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [esi+0x54], dl
        mov edx, dword ptr ss : [esp+0x24]
        mov byte ptr ds : [esi+0x5C], al
        mov eax, dword ptr ss : [esp+0x2C]
        push edi
        mov byte ptr ds : [esi+0x5D], cl
        mov dword ptr ds : [esi+0x58], edx
        mov dl, byte ptr ss : [esp+0x38]
        push eax
        lea ecx, ds:[esi+0xA0]
        push ecx
        mov byte ptr ds : [esi+0x5E], 0
        mov byte ptr ds : [esi+0x60], dl
        call ebx
        lea edi, ds:[esi+0xA4]
        push edi
        call dword ptr ds : [public_5c60c8]
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0x3C]
        add esp, 0x14
        test eax, eax
        je public_44f7dd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x44]
        mov ecx, esi
        mov dword ptr ds : [esi+0x40], eax
        call public_44ed90
        mov ecx, esi
        call public_44f310
        mov ecx, esi
        call public_44f410
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x54]
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [ecx+0x58]
        mov esi, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x68]
        public_44f7dd : nop
        pop edi
        pop esi
        pop ebx
        ret 0x2C
        UNREACHABLE_TRAP(0x44f720)
    }
}

#undef public_44f7dd
