#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced210);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d639e9);

#define public_6d55146 _public_6d55146
#define public_6d55150 _public_6d55150
#define public_6d551a2 _public_6d551a2
#define public_6d551e0 _public_6d551e0
#define public_6d551fc _public_6d551fc
#define public_6d55207 _public_6d55207

PROC_DECLARE(0x6d550a0, internal_6d550a0, public_6d550a0);
extern "C" NAKED register_t __cdecl internal_6d550a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
/*FIXUP push public_6d639e9 @0x6d550ac*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d639e9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov ecx, dword ptr ds : [ecx]
        sub esp, 0xC
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp ecx, edi
        mov eax, 0xFFFFFFFE
        jbe public_6d55207
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d55207
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        cmp dword ptr ds : [edx+esi+0x348], edi
        je public_6d55207
        mov edx, dword ptr ss : [esp+0x2C]
        imul ecx, 0x418
        push edx
        lea ecx, ds:[ecx+esi-0x418]
        call public_6d4ec10
        mov al, byte ptr ss : [esp+0x28]
        push edi
        push edi
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x14], al
        call dword ptr ds : [public_6d64880]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], edi
        mov ebx, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x20], edi
        je public_6d551a2
        push ebp
        mov ebp, dword ptr ds : [public_6d64710]
        jmp public_6d55150
        public_6d55146 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea ebx, ds:[ebx]
        public_6d55150 : nop
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d64880]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push esi
        push eax
        call public_6ced210
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [public_6d6402c]
        add esp, 8
        inc eax
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edx+4]
        xor edx, edx
        mov dx, word ptr ds : [ecx]
        lea ecx, ds:[eax+8]
        push edx
        call ebp
        mov eax, dword ptr ds : [ebx+8]
        add esi, 0x20
        cmp esi, eax
        jne public_6d55146
        pop ebp
        public_6d551a2 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        imul edx, 0x418
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [public_6d90260]
        lea ecx, ds:[edx+eax-0x418]
        call public_6d4eeb0
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov edi, eax
        je public_6d551fc
        lea ebx, ds:[ebx]
        public_6d551e0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64870]
        cmp esi, edi
        jne public_6d551e0
        mov eax, dword ptr ss : [esp+0x10]
        public_6d551fc : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        mov eax, ebx
        public_6d55207 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6d550a0)
    }
}

#undef public_6d55146
#undef public_6d55150
#undef public_6d551a2
#undef public_6d551e0
#undef public_6d551fc
#undef public_6d55207
