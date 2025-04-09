#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401300);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_42edb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8e26);

#define public_42ede3 _public_42ede3
#define public_42ee07 _public_42ee07
#define public_42ee13 _public_42ee13
#define public_42ee21 _public_42ee21
#define public_42ee38 _public_42ee38

PROC_DECLARE(0x42edb0, internal_42edb0, public_42edb0);
extern "C" NAKED register_t __cdecl internal_42edb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8e26 @0x42edb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8e26
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        lea esi, ds:[ecx+4]
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x20]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 1
        jle public_42ee38
        push edi
        xor edi, edi
        public_42ede3 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        cmp ecx, ebx
        je public_42ee07
        mov eax, dword ptr ds : [esi+0x30]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_42ee07
        mov eax, ecx
        lea ecx, ds:[eax+edi*4]
        push ecx
        call public_41b030
        add esp, 4
        inc edi
        jmp public_42ede3
        public_42ee07 : nop
        mov edx, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, edx
        cmp eax, edx
        je public_42ee21
        public_42ee13 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_42ee13
        public_42ee21 : nop
        mov dword ptr ds : [esi+0x30], ecx
        mov edx, dword ptr ds : [esi+0x24]
        push edx
        call public_401300
        add esp, 4
        mov dword ptr ds : [esi+0x24], 0xFFFFFFFF
        pop edi
        public_42ee38 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 8
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x42edb0)
    }
}

#undef public_42ede3
#undef public_42ee07
#undef public_42ee13
#undef public_42ee21
#undef public_42ee38
