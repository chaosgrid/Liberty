#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45aa10);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba291);

#define public_45aa42 _public_45aa42
#define public_45aa6c _public_45aa6c
#define public_45aa80 _public_45aa80
#define public_45aa82 _public_45aa82
#define public_45aa8b _public_45aa8b
#define public_45aa8d _public_45aa8d
#define public_45aa9e _public_45aa9e
#define public_45aaaa _public_45aaaa

PROC_DECLARE(0x45aa10, internal_45aa10, public_45aa10);
extern "C" NAKED register_t __cdecl internal_45aa10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5ba291 @0x45aa18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba291
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        cmp esi, eax
        push edi
        je public_45aaaa
        mov edi, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ds : [public_5c62a8]
        public_45aa42 : nop
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ecx
        test eax, eax
        mov dword ptr ss : [esp+0x20], 1
        je public_45aa6c
        add eax, 8
        test eax, eax
        je public_45aa6c
        push eax
        lea ecx, ss:[esp+0x14]
        call ebp
        mov ecx, dword ptr ss : [esp+0x10]
        public_45aa6c : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_45aa80
        lea edx, ds:[eax-8]
        jmp public_45aa82
        public_45aa80 : nop
        xor edx, edx
        public_45aa82 : nop
        test ecx, ecx
        je public_45aa8b
        lea eax, ds:[ecx-8]
        jmp public_45aa8d
        public_45aa8b : nop
        xor eax, eax
        public_45aa8d : nop
        cmp edx, eax
        sete bl
        test ecx, ecx
        je public_45aa9e
        push 0
        lea ecx, ss:[esp+0x14]
        call ebp
        public_45aa9e : nop
        test bl, bl
        jne public_45aaaa
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x30]
        jne public_45aa42
        public_45aaaa : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x45aa10)
    }
}

#undef public_45aa42
#undef public_45aa6c
#undef public_45aa80
#undef public_45aa82
#undef public_45aa8b
#undef public_45aa8d
#undef public_45aa9e
#undef public_45aaaa
