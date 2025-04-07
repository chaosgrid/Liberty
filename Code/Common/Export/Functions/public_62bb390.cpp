#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9560);
CLANG_FORWARD_PROC_SYMBOL(public_62bb390);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63948e5);

#define public_62bb493 _public_62bb493

PROC_DECLARE(0x62bb390, internal_62bb390, public_62bb390);
extern "C" NAKED register_t __cdecl internal_62bb390()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63948e5 @0x62bb392*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63948e5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+8], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_62bb493
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov dl, byte ptr ds : [esi+8]
        add edi, 4
        lea eax, ds:[esi+8]
        lea ecx, ds:[edi+4]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], ebp
        mov dword ptr ds : [ecx+0xC], ebp
        mov edx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [edx]
        push edx
        push ebp
        push eax
        mov dword ptr ss : [esp+0x38], edi
        call dword ptr ds : [public_63991a8]
        mov dl, byte ptr ds : [esi+0x18]
        lea eax, ds:[esi+0x18]
        lea ecx, ds:[edi+0x14]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], ebp
        mov dword ptr ds : [ecx+0xC], ebp
        mov edx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [edx]
        push edx
        push ebp
        push eax
        mov byte ptr ss : [esp+0x2C], 1
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [esi+0x28]
        lea ebx, ds:[edi+0x24]
        push ebp
        mov ecx, ebx
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [ebx], al
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        lea eax, ds:[esi+0x28]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [esi+0x38]
        add edi, 0x34
        push 0x18
        mov byte ptr ss : [esp+0x24], 3
        mov byte ptr ds : [edi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebp
        mov esi, dword ptr ds : [esi+0x3C]
        mov ebx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call public_632c410
        mov edx, dword ptr ds : [eax]
        push esi
        push ebx
        push edx
        mov ecx, edi
        call public_62b9560
        pop esi
        pop ebx
        public_62bb493 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62bb390)
    }
}

#undef public_62bb493
