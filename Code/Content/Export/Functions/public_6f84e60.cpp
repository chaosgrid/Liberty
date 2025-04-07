#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f84e60);
CLANG_FORWARD_PROC_SYMBOL(public_6f89230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb09f4);

#define public_6f84ea0 _public_6f84ea0
#define public_6f84ed1 _public_6f84ed1

PROC_DECLARE(0x6f84e60, internal_6f84e60, public_6f84e60);
extern "C" NAKED register_t __cdecl internal_6f84e60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb09f4 @0x6f84e62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb09f4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0xC], ebp
        lea ecx, ss:[ebp+0x1C]
        mov dword ptr ss : [esp+0x18], 1
        call public_6f89230
        mov ebx, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov byte ptr ss : [esp+0x18], 0
        je public_6f84ed1
        push esi
        mov edi, edi
        public_6f84ea0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx]
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [ebp+0x18]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [ebp+0x18], ecx
        jne public_6f84ea0
        pop esi
        public_6f84ed1 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x14], eax
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [public_6fb325c]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f84e60)
    }
}

#undef public_6f84ea0
#undef public_6f84ed1
