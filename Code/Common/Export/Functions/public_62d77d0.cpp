#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d77d0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6395253);

#define public_62d7865 _public_62d7865

PROC_DECLARE(0x62d77d0, internal_62d77d0, public_62d77d0);
extern "C" NAKED register_t __cdecl internal_62d77d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395253 @0x62d77d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395253
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0x10], bl
        mov ebp, 0x3F800000
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi+0x18], ebp
        mov dword ptr ds : [esi+0x1C], ebp
        mov dword ptr ds : [esi+0x20], ebp
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x14], ebx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [esi], offset public_63a04c8
        mov dword ptr ds : [esi+0x34], 0x40A00000
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], 0x3F860A92
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], 0x43160000
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], 0x3E4CCCCD
        mov dword ptr ds : [esi+0x8C], ebx
        mov byte ptr ds : [esi+0x64], bl
        cmp dword ptr ds : [ecx], ebx
        mov dword ptr ss : [esp+0x28], 1
        je public_62d7865
        push ebx
        call public_6341610
        public_62d7865 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        mov byte ptr ds : [esi+0x30], bl
        lea edi, ds:[esi+0x68]
        mov ecx, 9
        rep stosd
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[esi+0xB8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        lea edx, ds:[esi+0xCC]
        mov dword ptr ss : [esp+0x14], 0x3DCCCCCD
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [esi+0x90], ebp
        mov dword ptr ds : [esi+0xC8], ebp
        mov byte ptr ds : [esi+0x98], bl
        mov dword ptr ds : [edx+8], eax
        mov byte ptr ds : [esi+0xD8], bl
        mov byte ptr ds : [esi+0xD9], bl
        mov byte ptr ds : [esi+0xDA], bl
        mov dword ptr ds : [esi+0xDC], ebp
        mov dword ptr ds : [esi+0xB4], 1
        mov dword ptr ds : [esi+0xC4], 0x41F00000
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62d77d0)
    }
}

#undef public_62d7865
