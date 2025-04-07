#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d8970);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6395273);

#define public_62d89ce _public_62d89ce

PROC_DECLARE(0x62d8970, internal_62d8970, public_62d8970);
extern "C" NAKED register_t __cdecl internal_62d8970()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395273 @0x62d8972*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395273
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0x10], bl
        push edi
        mov edi, 0x3F800000
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [esi], offset public_63a04f8
        cmp dword ptr ds : [ecx], ebx
        mov dword ptr ss : [esp+0x18], 1
        je public_62d89ce
        push ebx
        call public_6341610
        public_62d89ce : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0x47C35000
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x94], edi
        mov dword ptr ds : [esi+0x98], edi
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+0x84], eax
        mov dword ptr ds : [esi+0x34], ebx
        mov byte ptr ds : [esi+0x44], bl
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov byte ptr ds : [esi+0x5C], bl
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], ebx
        pop edi
        mov byte ptr ds : [esi+0x30], 1
        mov dword ptr ds : [esi+0x38], 0x43AF0000
        mov byte ptr ds : [esi+0x3C], 1
        mov dword ptr ds : [esi+0x4C], 0x40800000
        mov dword ptr ds : [esi+0x58], 0x40C00000
        mov dword ptr ds : [esi+0x54], 0x42C80000
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62d8970)
    }
}

#undef public_62d89ce
