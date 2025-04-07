#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_629af40);
CLANG_FORWARD_PROC_SYMBOL(public_629e170);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393abe);

#define public_629e1c0 _public_629e1c0
#define public_629e1fe _public_629e1fe

PROC_DECLARE(0x629e170, internal_629e170, public_629e170);
extern "C" NAKED register_t __cdecl internal_629e170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393abe @0x629e172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393abe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [ebp], offset public_639d8c4
        mov dword ptr ss : [esp+0x20], 1
        call public_629af40
        mov eax, dword ptr ss : [ebp+0x58]
        mov esi, dword ptr ss : [ebp+0x54]
        xor ebx, ebx
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0xC], esi
        je public_629e1fe
        push edi
        lea ebx, ds:[ebx]
        public_629e1c0 : nop
        lea edi, ds:[esi+8]
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 2
        call public_6280b40
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x10], ebx
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov byte ptr ss : [esp+0x28], bl
        call public_6280b40
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 0x24
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_629e1c0
        pop edi
        public_629e1fe : nop
        mov eax, dword ptr ss : [ebp+0x54]
        push eax
        call public_6391d5a
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x54], ebx
        mov dword ptr ss : [ebp+0x58], ebx
        mov dword ptr ss : [ebp+0x5C], ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_629f2f0
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x629e170)
    }
}

#undef public_629e1c0
#undef public_629e1fe
