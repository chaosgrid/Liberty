#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60c1f);

#define public_6cfae04 _public_6cfae04
#define public_6cfae3e _public_6cfae3e
#define public_6cfae42 _public_6cfae42
#define public_6cfaeb2 _public_6cfaeb2
#define public_6cfaec3 _public_6cfaec3
#define public_6cfaed8 _public_6cfaed8
#define public_6cfaefd _public_6cfaefd
#define public_6cfaf22 _public_6cfaf22
#define public_6cfaf2b _public_6cfaf2b
#define public_6cfaf91 _public_6cfaf91
#define public_6cfafa2 _public_6cfafa2
#define public_6cfafb7 _public_6cfafb7
#define public_6cfafd6 _public_6cfafd6
#define public_6cfaffb _public_6cfaffb
#define public_6cfb004 _public_6cfb004

PROC_DECLARE(0x6cfad60, internal_6cfad60, public_6cfad60);
extern "C" NAKED register_t __cdecl internal_6cfad60()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6d60c1f @0x6cfad68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60c1f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1674
        mov dword ptr fs : [0], esp
        call public_6d60160
        mov eax, dword ptr ss : [esp+0x1684]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        push ecx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFE
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        lea ecx, ss:[esp+0x11C]
        mov esi, eax
        call dword ptr ds : [public_6d644f0]
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x168C], ebx
        je public_6cfae42
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_6d644ec]
        add esp, 8
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x124]
        call dword ptr ds : [public_6d644e8]
        test al, al
        je public_6cfae42
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        mov ebp, eax
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6cfae3e
        mov edi, dword ptr ss : [esp+0x1698]
        public_6cfae04 : nop
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_6d644e4]
        mov ecx, dword ptr ds : [esi+0xC10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x11C]
        push ecx
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi]
        push edx
        mov ecx, edi
        call dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+4]
        jne public_6cfae04
        public_6cfae3e : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_6cfae42 : nop
        lea eax, ss:[esp+0x1544]
        mov dword ptr ss : [esp+0x168C], 1
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [public_6d64b80]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x154C]
        mov byte ptr ss : [esp+0x1694], 2
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x1554], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6d64a68]
        mov esi, dword ptr ds : [public_6d64a70]
        je public_6cfaed8
        cmp dword ptr ss : [esp+0x1558], ebx
        je public_6cfaec3
        mov eax, dword ptr ss : [esp+0x155C]
        cmp eax, ebx
        je public_6cfaeb2
        push eax
        call ebp
        mov dword ptr ss : [esp+0x155C], ebx
        mov dword ptr ss : [esp+0x1560], ebx
        public_6cfaeb2 : nop
        mov eax, dword ptr ss : [esp+0x1558]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1558], ebx
        public_6cfaec3 : nop
        mov ecx, dword ptr ss : [esp+0x1554]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1554], 0xFFFFFFFF
        public_6cfaed8 : nop
        mov eax, dword ptr ss : [esp+0x155C]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_6d64c94]
        je public_6cfaefd
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x155C], ebx
        mov dword ptr ss : [esp+0x1560], ebx
        public_6cfaefd : nop
        mov eax, dword ptr ss : [esp+0x1548]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1564], ebx
        je public_6cfaf2b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6cfaf22
        cmp cl, 0xFF
        je public_6cfaf22
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6cfaf2b
        public_6cfaf22 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6cfaf2b : nop
        mov dword ptr ss : [esp+0x1548], ebx
        mov dword ptr ss : [esp+0x154C], ebx
        mov dword ptr ss : [esp+0x1550], ebx
        mov edx, dword ptr ds : [public_6d64b80]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x124]
        mov dword ptr ss : [esp+0x1694], 3
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x12C], 0xFFFFFFFF
        je public_6cfafb7
        cmp dword ptr ss : [esp+0x130], ebx
        je public_6cfafa2
        mov eax, dword ptr ss : [esp+0x134]
        cmp eax, ebx
        je public_6cfaf91
        push eax
        call ebp
        mov dword ptr ss : [esp+0x134], ebx
        mov dword ptr ss : [esp+0x138], ebx
        public_6cfaf91 : nop
        mov ecx, dword ptr ss : [esp+0x130]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x130], ebx
        public_6cfafa2 : nop
        mov edx, dword ptr ss : [esp+0x12C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x12C], 0xFFFFFFFF
        public_6cfafb7 : nop
        mov eax, dword ptr ss : [esp+0x134]
        cmp eax, ebx
        je public_6cfafd6
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x134], ebx
        mov dword ptr ss : [esp+0x138], ebx
        public_6cfafd6 : nop
        mov eax, dword ptr ss : [esp+0x120]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x13C], ebx
        je public_6cfb004
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6cfaffb
        cmp cl, 0xFF
        je public_6cfaffb
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6cfb004
        public_6cfaffb : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6cfb004 : nop
        mov ecx, dword ptr ss : [esp+0x1684]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1680
        ret 
        UNREACHABLE_TRAP(0x6cfad60)
    }
}

#undef public_6cfae04
#undef public_6cfae3e
#undef public_6cfae42
#undef public_6cfaeb2
#undef public_6cfaec3
#undef public_6cfaed8
#undef public_6cfaefd
#undef public_6cfaf22
#undef public_6cfaf2b
#undef public_6cfaf91
#undef public_6cfafa2
#undef public_6cfafb7
#undef public_6cfafd6
#undef public_6cfaffb
#undef public_6cfb004
