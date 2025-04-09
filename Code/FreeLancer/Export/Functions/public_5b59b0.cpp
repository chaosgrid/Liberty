#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b37e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c59f8);

#define public_5b59c0 _public_5b59c0
#define public_5b5a1a _public_5b5a1a
#define public_5b5a1e _public_5b5a1e
#define public_5b5a61 _public_5b5a61
#define public_5b5a88 _public_5b5a88

PROC_DECLARE(0x5b59b0, internal_5b59b0, public_5b59b0);
extern "C" NAKED register_t __cdecl internal_5b59b0()
{
    __asm
    {
        mov ecx, offset public_67ecea
        jmp public_5b59c0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_5b59c0 : nop
        push 0xFFFFFFFF
/*FIXUP push public_5c59f8 @0x5b59c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c59f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        push 0x1C
        mov dword ptr ss : [esp+0x20], ecx
        call public_5b7e84
        xor ebp, ebp
        add esp, 4
        cmp eax, ebp
        je public_5b5a1a
        mov dword ptr ds : [eax+4], offset public_5d5ffc
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], ebp
        mov dword ptr ds : [eax+0x10], ebp
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], offset _public_5b37e0
        mov dword ptr ds : [eax], offset public_5d6d50
        mov dword ptr ss : [esp+0x18], eax
        jmp public_5b5a1e
        public_5b5a1a : nop
        mov dword ptr ss : [esp+0x18], ebp
        public_5b5a1e : nop
        mov cl, byte ptr ds : [public_67ed0c]
        mov al, 1
        test al, cl
        jne public_5b5a61
        mov bl, cl
        or bl, al
        mov al, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ds : [public_67ed0c], bl
        mov byte ptr ds : [public_67ed00], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_5b3640 @0x5b5a49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        mov dword ptr ds : [public_67ed04], eax
        mov dword ptr ds : [public_67ed08], ebp
        call public_5b7e6c
        add esp, 8
        public_5b5a61 : nop
        mov dword ptr ss : [esp+0x14], ebp
        mov eax, dword ptr ds : [public_67ed04]
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov dword ptr ss : [esp+0x2C], ebp
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        cmp edi, ebp
        mov dword ptr ds : [eax], ebx
        jne public_5b5a88
        mov edi, eax
        public_5b5a88 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov edx, dword ptr ds : [public_67ed08]
        mov eax, dword ptr ss : [esp+0x1C]
        inc edx
        push eax
        mov dword ptr ds : [public_67ed08], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67ed04]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        pop edi
        pop esi
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [eax+8], 0x578
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x5b59b0)
    }
}

#undef public_5b59c0
#undef public_5b5a1a
#undef public_5b5a1e
#undef public_5b5a61
#undef public_5b5a88
