#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502ba0);
CLANG_FORWARD_PROC_SYMBOL(public_502de0);
CLANG_FORWARD_PROC_SYMBOL(public_502e00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf831);

#define public_502c23 _public_502c23
#define public_502c54 _public_502c54
#define public_502c58 _public_502c58
#define public_502c64 _public_502c64
#define public_502c71 _public_502c71
#define public_502c76 _public_502c76
#define public_502ca5 _public_502ca5
#define public_502cd1 _public_502cd1
#define public_502cd3 _public_502cd3
#define public_502d20 _public_502d20
#define public_502d70 _public_502d70

PROC_DECLARE(0x502ba0, internal_502ba0, public_502ba0);
extern "C" NAKED register_t __cdecl internal_502ba0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf831 @0x502ba2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf831
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
/*FIXUP push offset _public_502e00 @0x502bd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_502e00
/*FIXUP push offset _public_502de0 @0x502bd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_502de0
        push 5
        push 0x24
        lea eax, ds:[esi+0x2C]
        push eax
        mov dword ptr ss : [esp+0x80], ebx
        call public_5b7fba
        mov eax, dword ptr ss : [esp+0x74]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x6C], 1
        mov dword ptr ds : [esi+4], eax
        jne public_502c23
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5da9d0 @0x502c04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da9d0
        push 0xE3
/*FIXUP push offset public_5da80c @0x502c0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x502c18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_502c23 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ebx
        mov eax, dword ptr ds : [edx+0x200]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_5c6040]
        test al, al
        je public_502c54
/*FIXUP push offset public_5da9bc @0x502c40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da9bc
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        jmp public_502c58
        public_502c54 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_502c58 : nop
        mov edx, dword ptr ds : [public_674fd8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_502c76
        public_502c64 : nop
        cmp eax, dword ptr ds : [ecx+8]
        je public_502c71
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_502c64
        jmp public_502c76
        public_502c71 : nop
        add ecx, 8
        mov dword ptr ds : [esi], ecx
        public_502c76 : nop
        cmp dword ptr ds : [esi], ebx
        jne public_502ca5
        lea ecx, ss:[esp+0x10]
        mov edi, 0x100001
        call dword ptr ds : [public_5c6044]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0xF8
/*FIXUP push offset public_5da80c @0x502c95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
/*FIXUP push offset public_5da98c @0x502c9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da98c
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_502ca5 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0x18], bl
        je public_502cd1
        lea eax, ds:[ecx+0xC]
        cmp eax, ebx
        je public_502cd1
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_502cd1
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_502cd3
        public_502cd1 : nop
        xor eax, eax
        public_502cd3 : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [eax+0xA4]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_5c65e8]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [eax+0x40]
        add esp, 0x10
        xor ebp, ebp
        cmp ecx, ebx
        jle public_502d70
        xor edi, edi
        lea ebx, ds:[esi+0x30]
        public_502d20 : nop
        mov eax, dword ptr ds : [edi+eax+8]
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_5c65e8]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        lea ecx, ds:[ebx+4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi+eax+0xC]
        mov dword ptr ds : [ebx], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x40]
        add esp, 0x10
        inc ebp
        add edi, 0xC
        add ebx, 0x24
        cmp ebp, ecx
        jl public_502d20
        public_502d70 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x502ba0)
    }
}

#undef public_502c23
#undef public_502c54
#undef public_502c58
#undef public_502c64
#undef public_502c71
#undef public_502c76
#undef public_502ca5
#undef public_502cd1
#undef public_502cd3
#undef public_502d20
#undef public_502d70
