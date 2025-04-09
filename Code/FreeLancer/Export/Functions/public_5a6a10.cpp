#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a6a10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c52a5);

#define public_5a6a46 _public_5a6a46
#define public_5a6a5e _public_5a6a5e
#define public_5a6a66 _public_5a6a66
#define public_5a6a90 _public_5a6a90
#define public_5a6ab3 _public_5a6ab3
#define public_5a6ac1 _public_5a6ac1

PROC_DECLARE(0x5a6a10, internal_5a6a10, public_5a6a10);
extern "C" NAKED register_t __cdecl internal_5a6a10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c52a5 @0x5a6a12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c52a5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [ebx]
        push ebp
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        jne public_5a6a46
        xor edx, edx
        jmp public_5a6a5e
        public_5a6a46 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_5a6a5e : nop
        test edx, edx
        mov eax, edx
        jge public_5a6a66
        xor eax, eax
        public_5a6a66 : nop
        imul eax, 0x1C
        push eax
        call public_5b7e84
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp edi, ecx
        mov esi, eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x10], esi
        je public_5a6ac1
        lea esp, ss:[esp]
        public_5a6a90 : nop
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov dword ptr ss : [esp+0x24], 0
        je public_5a6ab3
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6420]
        mov edx, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x18], edx
        public_5a6ab3 : nop
        add esi, 0x1C
        add edi, 0x1C
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], esi
        jne public_5a6a90
        public_5a6ac1 : nop
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov esi, dword ptr ds : [public_5c6420]
        lea eax, ds:[ebx+0x10]
        push eax
        lea ecx, ss:[ebp+0x10]
        mov dword ptr ss : [esp+0x28], 1
        call esi
        lea ecx, ds:[ebx+0x28]
        push ecx
        lea ecx, ss:[ebp+0x28]
        mov byte ptr ss : [esp+0x28], 2
        call esi
        mov dl, byte ptr ds : [ebx+0x40]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x40], dl
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x5a6a10)
    }
}

#undef public_5a6a46
#undef public_5a6a5e
#undef public_5a6a66
#undef public_5a6a90
#undef public_5a6ab3
#undef public_5a6ac1
