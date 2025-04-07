#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d06090);
CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6105b);

#define public_6d03de3 _public_6d03de3
#define public_6d03e36 _public_6d03e36
#define public_6d03e38 _public_6d03e38
#define public_6d03e92 _public_6d03e92
#define public_6d03eb4 _public_6d03eb4

PROC_DECLARE(0x6d03db0, internal_6d03db0, public_6d03db0);
extern "C" NAKED register_t __cdecl internal_6d03db0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d6105b @0x6d03db8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6105b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx]
        push edi
        call dword ptr ds : [public_6d64628]
        mov edi, eax
        test edi, edi
        je public_6d03eb4
        push ebp
        push esi
        lea ebp, ds:[ebx+4]
        public_6d03de3 : nop
        mov ecx, edi
        call dword ptr ds : [public_6d64624]
        push 0x20
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov dword ptr ss : [esp+0x24], 0
        je public_6d03e36
        mov al, byte ptr ss : [esp+0x13]
        mov dl, byte ptr ss : [esp+0x13]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], 0
        call public_6d06090
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0x1C], 0
        mov dword ptr ds : [esi+0x18], 0xFA
        jmp public_6d03e38
        public_6d03e36 : nop
        xor esi, esi
        public_6d03e38 : nop
        mov dword ptr ss : [esp+0x14], esi
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_6cfc340
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6d06720
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 8
        inc ecx
        test edi, edi
        mov dword ptr ss : [ebp+8], ecx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], edi
        je public_6d03e92
        mov ecx, edi
        call dword ptr ds : [public_6d64624]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+0x44]
        mov dword ptr ds : [esi+0x18], eax
        public_6d03e92 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0x1C], ecx
        mov ecx, edi
        call dword ptr ds : [public_6d6461c]
        mov ecx, dword ptr ds : [ebx]
        call dword ptr ds : [public_6d64620]
        mov edi, eax
        test edi, edi
        jne public_6d03de3
        pop esi
        pop ebp
        public_6d03eb4 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6d03db0)
    }
}

#undef public_6d03de3
#undef public_6d03e36
#undef public_6d03e38
#undef public_6d03e92
#undef public_6d03eb4
