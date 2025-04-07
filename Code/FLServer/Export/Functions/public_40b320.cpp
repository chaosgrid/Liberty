#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401730);
CLANG_FORWARD_PROC_SYMBOL(public_40b320);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418d0e);
CLANG_FORWARD_JUMP_SYMBOL(public_419f76);

#define public_40b367 _public_40b367
#define public_40b381 _public_40b381
#define public_40b3a2 _public_40b3a2
#define public_40b3ab _public_40b3ab
#define public_40b3bd _public_40b3bd
#define public_40b3d5 _public_40b3d5

PROC_DECLARE(0x40b320, internal_40b320, public_40b320);
extern "C" NAKED register_t __cdecl internal_40b320()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419f76 @0x40b322*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419f76
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_41d038
        mov eax, dword ptr ds : [edi+0xB9C]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 1
        je public_40b367
        push eax
        call dword ptr ds : [public_41b170]
        mov dword ptr ds : [edi+0xB9C], ebx
        public_40b367 : nop
        mov dword ptr ds : [public_427828], ebx
        cmp dword ptr ds : [edi+0xB7C], ebx
        mov dword ptr ss : [esp+8], ebx
        jle public_40b3d5
        push ebp
        push esi
        lea ebp, ds:[edi+0xA7C]
        public_40b381 : nop
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebx
        je public_40b3bd
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_40b3ab
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_40b3a2
        cmp cl, 0xFF
        je public_40b3a2
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_40b3ab
        public_40b3a2 : nop
        push eax
        call public_418978
        add esp, 4
        public_40b3ab : nop
        push esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_418978
        add esp, 4
        public_40b3bd : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0xB7C]
        inc eax
        add ebp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_40b381
        pop esi
        pop ebp
        public_40b3d5 : nop
        lea ecx, ds:[edi+0xBAC]
        call public_418a98
        lea ecx, ds:[edi+0xCC]
        mov byte ptr ss : [esp+0x18], bl
        call public_401730
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_418d0e
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x40b320)
    }
}

#undef public_40b367
#undef public_40b381
#undef public_40b3a2
#undef public_40b3ab
#undef public_40b3bd
#undef public_40b3d5
