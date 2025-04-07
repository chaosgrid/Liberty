#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63961e8);

#define public_630a3d0 _public_630a3d0
#define public_630a3e8 _public_630a3e8
#define public_630a430 _public_630a430
#define public_630a447 _public_630a447

PROC_DECLARE(0x630a380, internal_630a380, public_630a380);
extern "C" NAKED register_t __cdecl internal_630a380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63961e8 @0x630a382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63961e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov al, byte ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, ecx
        push 0x28
        mov dword ptr ss : [esp+0xC], edi
        mov byte ptr ds : [edi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_630a447
        push ebx
        push ebp
        lea ecx, ds:[ecx]
        public_630a3d0 : nop
        mov ebx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ebx+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_630a3e8
        mov ebp, eax
        public_630a3e8 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_630a430
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [eax], dl
        mov cx, word ptr ds : [esi+2]
        mov word ptr ds : [eax+2], cx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov dl, byte ptr ds : [esi+0xC]
        mov byte ptr ds : [eax+0xC], dl
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov cl, byte ptr ds : [esi+0x18]
        mov byte ptr ds : [eax+0x18], cl
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+0x1C], edx
        public_630a430 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x24]
        inc ebx
        mov dword ptr ds : [edi+8], ebx
        mov ecx, dword ptr ds : [eax+8]
        add esi, 0x20
        cmp esi, ecx
        jne public_630a3d0
        pop ebp
        pop ebx
        public_630a447 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x630a380)
    }
}

#undef public_630a3d0
#undef public_630a3e8
#undef public_630a430
#undef public_630a447
