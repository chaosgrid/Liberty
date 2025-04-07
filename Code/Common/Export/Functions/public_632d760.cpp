#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e1f0);
CLANG_FORWARD_JUMP_SYMBOL(public_639745e);

PROC_DECLARE(0x632d760, internal_632d760, public_632d760);
extern "C" NAKED register_t __cdecl internal_632d760()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639745e @0x632d762*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639745e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], ecx
        mov dl, byte ptr ss : [ebp+8]
        mov byte ptr ds : [ebx+8], dl
        mov al, byte ptr ss : [ebp+9]
        mov byte ptr ds : [ebx+9], al
        mov cl, byte ptr ss : [ebp+0xA]
        mov byte ptr ds : [ebx+0xA], cl
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x10], eax
        mov cl, byte ptr ss : [ebp+0x14]
        mov byte ptr ds : [ebx+0x14], cl
        push esi
        push edi
        lea esi, ss:[ebp+0x18]
        lea edi, ds:[ebx+0x18]
        mov ecx, 0x20
        rep movsd
        lea esi, ss:[ebp+0x98]
        lea edi, ds:[ebx+0x98]
        mov ecx, 0x20
        rep movsd
        mov edx, dword ptr ss : [ebp+0x118]
        mov dword ptr ds : [ebx+0x118], edx
        lea esi, ss:[ebp+0x11C]
        lea edi, ds:[ebx+0x11C]
        mov ecx, 0x20
        rep movsd
        lea esi, ss:[ebp+0x19C]
        lea edi, ds:[ebx+0x19C]
        mov ecx, 0x20
        rep movsd
        mov eax, dword ptr ss : [ebp+0x21C]
        mov dword ptr ds : [ebx+0x21C], eax
        mov ecx, dword ptr ss : [ebp+0x220]
        mov dword ptr ds : [ebx+0x220], ecx
        mov edx, dword ptr ss : [ebp+0x224]
        lea ecx, ss:[ebp+0x22C]
        mov dword ptr ds : [ebx+0x224], edx
        mov eax, dword ptr ss : [ebp+0x228]
        push ecx
        lea ecx, ds:[ebx+0x22C]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [ebx+0x228], eax
        call public_630e1f0
        lea edx, ss:[ebp+0x244]
        push edx
        lea ecx, ds:[ebx+0x244]
        mov dword ptr ss : [esp+0x20], 0
        call public_630e1f0
        mov eax, dword ptr ss : [ebp+0x25C]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x25C], eax
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x632d760)
    }
}
