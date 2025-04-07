#include "Server-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6d63a78);

#define public_6d55cfe _public_6d55cfe

PROC_DECLARE(0x6d55c10, internal_6d55c10, public_6d55c10);
extern "C" NAKED register_t __cdecl internal_6d55c10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d63a78 @0x6d55c18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63a78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [edi]
        xor ebx, ebx
        cmp ecx, ebx
        mov eax, 0xFFFFFFFE
        jbe public_6d55cfe
        mov edx, dword ptr ds : [public_6d90264]
        dec ecx
        cmp ecx, edx
        jae public_6d55cfe
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], ebx
        je public_6d55cfe
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x4C]
        mov dl, byte ptr ss : [esp+0x48]
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0xC], ecx
        push eax
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0x30], dl
        call dword ptr ds : [public_6d64788]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        push edi
        call dword ptr ds : [edx+0x11C]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_6d64694]
        mov eax, ebx
        public_6d55cfe : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x6d55c10)
    }
}

#undef public_6d55cfe
