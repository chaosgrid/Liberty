#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63936a8);

#define public_62948e1 _public_62948e1
#define public_629490a _public_629490a

PROC_DECLARE(0x62948b0, internal_62948b0, public_62948b0);
extern "C" NAKED register_t __cdecl internal_62948b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63936a8 @0x62948b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63936a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], esi
        mov ebx, 0x100
        xor ebp, ebp
        public_62948e1 : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_629490a
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_629490a
        add eax, 8
        cmp eax, ebp
        je public_629490a
        push eax
        mov ecx, esi
        call public_6341610
        mov ecx, dword ptr ss : [esp+0x10]
        public_629490a : nop
        add esi, 8
        add edi, 8
        dec ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], esi
        jne public_62948e1
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax+0x800]
        mov dword ptr ds : [ecx+0x800], edx
        mov eax, dword ptr ds : [eax+0x804]
        pop edi
        mov dword ptr ds : [ecx+0x804], eax
        pop esi
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62948b0)
    }
}

#undef public_62948e1
#undef public_629490a
