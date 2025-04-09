#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44eb20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9dbe);

#define public_44eb50 _public_44eb50
#define public_44eb61 _public_44eb61
#define public_44eb6f _public_44eb6f
#define public_44eb90 _public_44eb90
#define public_44ebbd _public_44ebbd

PROC_DECLARE(0x44eb20, internal_44eb20, public_44eb20);
extern "C" NAKED register_t __cdecl internal_44eb20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9dbe @0x44eb22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9dbe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi+0x4C]
        xor ebp, ebp
        xor edi, edi
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        jle public_44eb6f
        nop 
        public_44eb50 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax+edi*4]
        cmp ecx, ebp
        je public_44eb61
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x34]
        public_44eb61 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [eax+edi*4], ebp
        mov eax, dword ptr ds : [esi+0x4C]
        inc edi
        cmp edi, eax
        jl public_44eb50
        public_44eb6f : nop
        mov ecx, dword ptr ds : [esi+0x48]
        push ecx
        call public_5b7e1d
        mov dword ptr ds : [esi+0x48], ebp
        mov ebx, dword ptr ds : [esi+0xAC]
        mov edi, dword ptr ds : [ebx]
        add esp, 4
        cmp edi, ebx
        je public_44ebbd
        lea ebx, ds:[ebx]
        public_44eb90 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0xB0]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0xB0], ecx
        jne public_44eb90
        public_44ebbd : nop
        mov edx, dword ptr ds : [esi+0xAC]
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0xAC], ebp
        mov dword ptr ds : [esi+0xB0], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x44eb20)
    }
}

#undef public_44eb50
#undef public_44eb61
#undef public_44eb6f
#undef public_44eb90
#undef public_44ebbd
