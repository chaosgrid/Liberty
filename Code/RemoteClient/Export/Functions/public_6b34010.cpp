#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b3cd50);

#define public_6b340a2 _public_6b340a2
#define public_6b340b4 _public_6b340b4

PROC_DECLARE(0x6b34010, internal_6b34010, public_6b34010);
extern "C" NAKED register_t __cdecl internal_6b34010()
{
    __asm
    {
        push ecx
        push ebx
        lea eax, ss:[esp+4]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0x2E
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b340b4
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+0x20], ecx
        movzx eax, word ptr ds : [esi+2]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x30], eax
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ds : [edx+0x34]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ecx+0x24], eax
        mov dl, byte ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax+0x38], dl
        mov cl, byte ptr ds : [esi+0x18]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [edx+0x39], cl
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x2C], eax
        mov ecx, esi
        call dword ptr ds : [public_6b6b08c]
        test al, al
        jne public_6b340a2
        mov esi, dword ptr ds : [esi+8]
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        call public_6b3cd50
        pop edi
        public_6b340a2 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x24]
        pop esi
        public_6b340b4 : nop
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b34010)
    }
}

#undef public_6b340a2
#undef public_6b340b4
