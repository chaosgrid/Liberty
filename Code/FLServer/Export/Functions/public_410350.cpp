#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403e90);
CLANG_FORWARD_PROC_SYMBOL(public_4055b0);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_419194);
CLANG_FORWARD_JUMP_SYMBOL(public_41a5ab);

#define public_4103c5 _public_4103c5
#define public_4103f3 _public_4103f3
#define public_410402 _public_410402
#define public_41040e _public_41040e
#define public_410417 _public_410417
#define public_41041f _public_41041f
#define public_410433 _public_410433
#define public_410441 _public_410441
#define public_41044d _public_41044d

PROC_DECLARE(0x410350, internal_410350, public_410350);
extern "C" NAKED register_t __cdecl internal_410350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a5ab @0x410352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a5ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x804
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0xC]
        call public_418aaa
        mov ecx, dword ptr ss : [esp+0x820]
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        xor ebx, ebx
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [esp+0x820], ebx
        call public_419194
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [public_41b040]
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_41b8f4]
        mov esi, eax
        add esp, 0xC
        cmp esi, 0x7FFFFFFD
        jbe public_4103c5
        call dword ptr ds : [public_41b8a0]
        public_4103c5 : nop
        mov edi, dword ptr ss : [esp+0x824]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_4103f3
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_4103f3
        cmp cl, 0xFF
        je public_4103f3
        cmp esi, ebx
        jne public_410417
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        jmp public_41044d
        public_4103f3 : nop
        cmp esi, ebx
        jne public_410402
        push 1
        mov ecx, edi
        call public_403e90
        jmp public_41044d
        public_410402 : nop
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, 0x1F
        ja public_41040e
        cmp eax, esi
        jae public_41041f
        public_41040e : nop
        push 1
        mov ecx, edi
        call public_403e90
        public_410417 : nop
        mov ecx, edi
        push esi
        call public_4055b0
        public_41041f : nop
        cmp esi, ebx
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x10]
        jbe public_410441
        lea edx, ss:[esp+0x10]
        sub ecx, edx
        mov edx, esi
        push ebp
        public_410433 : nop
        mov bp, word ptr ds : [eax]
        mov word ptr ds : [ecx+eax], bp
        add eax, 2
        dec edx
        jne public_410433
        pop ebp
        public_410441 : nop
        mov eax, dword ptr ds : [edi+4]
        lea eax, ds:[eax+esi*2]
        mov dword ptr ds : [edi+8], esi
        mov word ptr ds : [eax], bx
        public_41044d : nop
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x818], 0xFFFFFFFF
        call public_418aa4
        mov ecx, dword ptr ss : [esp+0x810]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x810
        ret 8
        UNREACHABLE_TRAP(0x410350)
    }
}

#undef public_4103c5
#undef public_4103f3
#undef public_410402
#undef public_41040e
#undef public_410417
#undef public_41041f
#undef public_410433
#undef public_410441
#undef public_41044d
