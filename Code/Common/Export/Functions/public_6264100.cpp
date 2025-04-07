#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62684f0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639247c);

PROC_DECLARE(0x6264100, internal_6264100, public_6264100);
extern "C" NAKED register_t __cdecl internal_6264100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639247c @0x6264102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639247c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        push esi
        push edi
        lea esi, ss:[ebp+4]
        lea edi, ds:[ebx+4]
        mov ecx, 0x11
        rep movsd
        mov dword ptr ds : [ebx], offset public_63993e8
        mov eax, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [ebx+0x48], eax
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x4C], ecx
        mov edx, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x50], edx
        mov eax, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [ebx+0x54], eax
        mov ecx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [ebx+0x58], ecx
        mov edx, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [ebx+0x5C], edx
        mov eax, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [ebx+0x60], eax
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ds : [ebx+0x64], ecx
        mov edx, dword ptr ss : [ebp+0x68]
        mov dword ptr ds : [ebx+0x68], edx
        mov eax, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [ebx+0x6C], eax
        mov cl, byte ptr ss : [ebp+0x70]
        mov byte ptr ds : [ebx+0x70], cl
        lea esi, ds:[ebx+0x74]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], ebx
        call public_6333e30
        mov edx, dword ptr ss : [ebp+0x74]
        mov dword ptr ds : [esi], edx
        lea esi, ds:[ebx+0x78]
        mov ecx, esi
        call public_6333e30
        mov eax, dword ptr ss : [ebp+0x78]
        mov dword ptr ds : [esi], eax
        lea esi, ds:[ebx+0x7C]
        mov ecx, esi
        call public_6333e30
        mov ecx, dword ptr ss : [ebp+0x7C]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ss : [ebp+0x80]
        lea esi, ds:[ebx+0x84]
        mov ecx, esi
        mov dword ptr ds : [ebx+0x80], edx
        call public_6333e30
        mov eax, dword ptr ss : [ebp+0x84]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+0x88]
        mov dword ptr ds : [ebx+0x88], ecx
        mov edx, dword ptr ss : [ebp+0x8C]
        mov dword ptr ds : [ebx+0x8C], edx
        mov eax, dword ptr ss : [ebp+0x90]
        mov dword ptr ds : [ebx+0x90], eax
        mov cl, byte ptr ss : [ebp+0x94]
        lea esi, ds:[ebx+0x94]
        push 0x28
        mov byte ptr ds : [esi], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ss : [ebp+0x98]
        mov edx, dword ptr ds : [edi]
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], edx
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x38]
        push edi
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, esi
        call public_62684f0
        mov al, byte ptr ss : [ebp+0xA0]
        lea edi, ss:[ebp+0xA0]
        lea esi, ds:[ebx+0xA0]
        push 0x28
        mov dword ptr ss : [esp+0x34], 0
        mov byte ptr ds : [esi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x38], ecx
        push edx
        mov ecx, edi
        call public_632c410
        mov edi, eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_62684f0
        mov cl, byte ptr ss : [ebp+0xAC]
        lea edi, ss:[ebp+0xAC]
        lea esi, ds:[ebx+0xAC]
        push 0x28
        mov byte ptr ss : [esp+0x34], 1
        mov byte ptr ds : [esi], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x3C], edx
        call public_632c410
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        mov edi, eax
        call public_632c410
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [edi]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, esi
        call public_62684f0
        mov eax, dword ptr ss : [ebp+0xB8]
        mov dword ptr ds : [ebx+0xB8], eax
        mov ecx, dword ptr ss : [ebp+0xBC]
        pop edi
        mov dword ptr ds : [ebx+0xBC], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        mov dword ptr ds : [ebx], offset public_63993f8
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6264100)
    }
}
